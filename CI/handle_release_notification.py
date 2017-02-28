
from __future__ import print_function

import json
import boto3
from botocore.exceptions import ClientError

print('Loading function')
bucket_name = 'aws-sdk-cpp-pipeline-sdks-team'
key = 'pending-releases'
s3 = boto3.client('s3')


def lambda_handler(event, context):
    message = event['Records'][0]['Sns']['Message']
    print("From SNS: " + message)
    
    releasesDoc = {}
    releasesDoc['releases'] = []
    
    pendingReleases = None
    
    try:
        pendingReleases = s3.get_object(Bucket=bucket_name, Key=key)
        releasesDoc = json.loads(pendingReleases["Body"].read())
    except ClientError as e:
        print("Couldn't pull doc, assuming it is empty. exception " + e.message)
        
    releasesDoc['releases'].append(message)
    releasesDocStr = json.dumps(releasesDoc)
    print("New Release Doc: " + releasesDocStr)
    s3.put_object(Bucket=bucket_name, Key=key, Body=releasesDocStr)
    
    return message

