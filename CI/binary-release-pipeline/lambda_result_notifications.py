# Whenever you make any change here, you should update it in Amazon S3.
# In binary release pipeline, build jobs will send the results to a SNS topic.
# And this lambda function, triggered by this SNS notifications, will send messages about the build results to a Chime room.
# Other functionality could be added in the future, like put metrics to CloudWatch or trigger another alarm.

import boto3
import json
import os
from botocore.vendored import requests

chime_bot_url = os.environ['CHIME_BOT_URL']

def lambda_handler(event, context):
    print(event)

    message = event["Records"][0]["Sns"]["Message"]

    headers = {'Content-Type': 'application/json'}
    data = {}

    if "FAILURE" in message:
        # @All Members if build failed.
        # Will convert '/md [message]' to '/md @All[message]'
        firstSpaceIndex = message.find(' ')
        message = message[:firstSpaceIndex+1] + '@All' + message[firstSpaceIndex+1:]
        make_request = True

    elif 'SUCCESS' in message:
        make_request = True
    
    if make_request == True:
        data["Content"] = message
        r = requests.post(chime_bot_url, headers = headers, data = json.dumps(data))
        return r.reason
    else:
        return 0
