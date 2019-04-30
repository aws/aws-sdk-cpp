# Whenever you make any change here, you should update it in Amazon S3.
# This lambda function is used to publish binaries and make notifications in binary release pipeline.
# It will copy the binaries generated in each pipeline action from a temporary location (provided by its inputs) to a specific s3 bucket for customer download.
# In the "Publish" stage, each lambda function is responsible for uploading binaries for one platform.
import boto3
import json
import os
import zipfile
from botocore.client import Config

def lambda_handler(event, context):
    print(event)
    job_id = event['CodePipeline.job']['id']
    sns_client = boto3.client('sns')
    codepipeline_client = boto3.client('codepipeline')

    try:
        parameters = json.loads(event['CodePipeline.job']['data']['actionConfiguration']['configuration']['UserParameters'])
        publish_bucket = parameters['bucket']
        publish_key_prefix = parameters['key_prefix']
        
        # Get SDK version
        input_bucket = event['CodePipeline.job']['data']['inputArtifacts'][0]['location']['s3Location']['bucketName']
        input_key = event['CodePipeline.job']['data']['inputArtifacts'][0]['location']['s3Location']['objectKey']
        s3 = boto3.resource('s3', config=Config(signature_version='s3v4'))
        s3.meta.client.download_file(input_bucket, input_key, '/tmp/aws-sdk-cpp-version.zip')
        with zipfile.ZipFile('/tmp/aws-sdk-cpp-version.zip', 'r') as zip:
            zip.extractall('/tmp')
        with open('/tmp/aws-sdk-cpp-version', 'r') as fp:
            sdk_version = fp.read().strip()
        
        # Copy SDK binaries to public bucket
        input_artifacts = event['CodePipeline.job']['data']['inputArtifacts']
        for i in range(1, len(input_artifacts)):
            artifact_name = input_artifacts[i]['name']
            config = artifact_name[artifact_name.find('_')+1:]
            publish_key = 'cpp/builds/{version}/{prefix}/{prefix}-{config}.zip'.format(
                version = sdk_version,
                prefix = publish_key_prefix,
                config = config
            )
            print('Uploading artifacts to https://s3.console.aws.amazon.com/s3/object/{bucket}/{key}'.format(
                bucket = publish_bucket,
                key = publish_key))

            s3.meta.client.copy(
                { 'Bucket': input_artifacts[i]['location']['s3Location']['bucketName'],
                    'Key': input_artifacts[i]['location']['s3Location']['objectKey'] },
                publish_bucket, publish_key)
        
        # Notifications
        sns_response = sns_client.publish(
            TopicArn = os.environ['NOTIFICATIONS_TOPIC'],
            Message = '/md [PUBLISH SUCCESS]({url}) ({prefix})'.format(
                url = 'https://s3.console.aws.amazon.com/s3/buckets/{bucket}/cpp/builds/{version}/{prefix}/'.format(
                    bucket = publish_bucket,
                    version = sdk_version,
                    prefix = publish_key_prefix
                ),
                prefix = publish_key_prefix
            )
        )
        print(sns_response)

        codepipeline_client.put_job_success_result(
            jobId = job_id
        )
    except Exception as e:
        codepipeline_client.put_job_failure_result(
            jobId = job_id,
            failureDetails = {
                'type': 'JobFailed',
                'message': str(e)
            }
        )
        sns_response = sns_client.publish(
            TopicArn = os.environ['NOTIFICATIONS_TOPIC'],
            Message = '/md [PUBLISH FAILURE]({url}) ({prefix})'.format(
                url = 'https://s3.console.aws.amazon.com/s3/buckets/{bucket}/cpp/builds/{version}/{prefix}/'.format(
                    bucket = publish_bucket,
                    version = sdk_version,
                    prefix = publish_key_prefix
                ),
                prefix = publish_key_prefix
            )
        )
        print(sns_response)
        print(e)
        
    return 0
