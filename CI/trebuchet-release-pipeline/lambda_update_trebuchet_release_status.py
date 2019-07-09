# Whenever you make any change here, you should update it in Amazon S3.
# This Lambda function will make notifications to:
# 1. SQS queue to update status with Trebuchet
# 2. ChimeBot to notify engineers in the Chime room
# 3. CloudWatch metrics to trigger alarms and cut tickets
# Expected inputs of this Lambda function:
# {
#     "stageName": "HandleTrebuchetReleaseNotification|RegenerateCode|Build|IntegrationTests|PublishToGithub",
#     "internalMessage": "",
#     "internalOnly": True|False
#     "messageToTrebuchet": {
#         "releaseId" : "",
#         "language" : "CPP",
#         "releaseState" : "InProgress|Success|Blocked|Failed",
#         "statusMessage" : "",
#         "additionalDetails" : {
#             "generatedCodePresignedUrl":"",
#             "logPresignedUrl":""
#         }
#     }
# }

import os
import json
import boto3
import traceback
from botocore.vendored import requests

CHIME_BOT_URL = os.environ['CHIME_BOT_URL']
TREBUCHET_QUEUE_URL = os.environ['TREBUCHET_QUEUE_URL']

sqsClient = boto3.client('sqs')
cloudwatchClient = boto3.client('cloudwatch')

def lambda_handler(event, context):
    print('Received Event: ' + json.dumps(event))

    if 'stageName' not in event or event['stageName'] == "":
        event['stageName'] = 'Unknown'
    if 'internalMessage' not in event:
        event['internalMessage'] = ''
    if 'internalOnly' not in event:
        event['internalOnly'] = False

    try:
        failure = 0.0
        sendMessageToChimeBot = False
        mentionAll = False
        if 'messageToTrebuchet' not in event or 'releaseId' not in event['messageToTrebuchet'] or event['messageToTrebuchet']['releaseId'] == "":
            raise Exception('Missing releaseId in the received release message.')
        messageToTrebuchet = event['messageToTrebuchet']
        if messageToTrebuchet['releaseState'] == 'InProgress' or messageToTrebuchet['releaseState'] == 'Success':
            pass
        elif messageToTrebuchet['releaseState'] == 'Blocked' or messageToTrebuchet['releaseState'] == 'Failed':
            failure = 1.0
            sendMessageToChimeBot = True
            mentionAll = True
        else:
            failure = 1.0
            sendMessageToChimeBot = True
            mentionAll = True
            event['internalMessage'] = ('{originalInternalMessage} releaseState ({releaseState}) should be one of these: InProgress|Success|Blocked|Failed, this build will be marked as Blocked.'.format(
                originalInternalMessage = event['internalMessage'],
                releaseState = messageToTrebuchet['releaseState']
            )).strip()

        if not event['internalOnly']:
            notifyTrebuchetSQS(messageToTrebuchet)
            notifyCloudWatch(failure)
        if sendMessageToChimeBot:
            notifyChimeBot(event['stageName'], event['internalMessage'], mentionAll)

    except Exception:
        traceback.print_exc()
        notifyChimeBot(
            stageName = event['stageName'],
            message = '\n'.join([event['internalMessage'], traceback.format_exc()]).strip(),
            mentionAll = True)
        if 'messageToTrebuchet' in event and 'releaseId' in event['messageToTrebuchet'] and not event['messageToTrebuchet']['releaseId'] == "":
            notifyTrebuchetSQS({
                "releaseId" : event['messageToTrebuchet']['releaseId'],
                "language" : "CPP",
                "releaseState" : "Blocked",
                "statusMessage" : "Encountered internal errors."
            })

def notifyChimeBot(stageName, message, mentionAll = False):
    headers = {'Content-Type': 'application/json'}
    data = {}
    data['Content'] = '/md {mentionAll}\nStage: {stageName}\nMessage: {message}'.format(
        mentionAll = '@All' if mentionAll else '',
        stageName = stageName,
        message = message)
    print('[Chime] Sending message to Chime Bot: ' + json.dumps(data['Content']))
    respone = requests.post(CHIME_BOT_URL, headers = headers, data = json.dumps(data))
    print('Response:', end=' ')
    print(respone)

def notifyCloudWatch(value):
    print('[CloudWatch] Puting data to Metric: BuildFailure with value: ' + str(value))
    response = cloudwatchClient.put_metric_data(
        Namespace='BuildPipeline',
        MetricData=[{
            'MetricName' : "BuildFailure",
            'Value' : value,
            'Unit' : 'Count',
            'StorageResolution' : 60
        }]
    )
    print('Response:', end=' ')
    print(response)

def notifyTrebuchetSQS(message):
    print('[SQS] Sending message to Trebuchet queue:', end=' ')
    print(message)
    response = sqsClient.send_message(
        QueueUrl = TREBUCHET_QUEUE_URL,
        MessageBody = json.dumps(message),
        MessageGroupId = 'CppSdkRelease'
    )
    print('Response:', end=' ')
    print(response)