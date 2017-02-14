#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import boto3
import sys
import os
import time


api_name = 'VitalServices'
AWS_REGION = 'us-east-1'
gateway_id_file = os.path.expanduser('~/.my-gateway-id')

if len(sys.argv) > 1:
	stage_name = sys.argv[1]
else:
	print("No stage provided")
	sys.exit(1)

aws_lambda = boto3.client('lambda')
iam = boto3.resource('iam')
current_user = iam.CurrentUser()
user_name = current_user.user_name
aws_acct_id = current_user.arn.split(':')[4]

apiclient = boto3.client('apigateway')

new_api_name = "{}-{}".format(api_name, user_name)

avialible_apis = {x['name']:x['id'] for x in apiclient.get_rest_apis()['items']}
if new_api_name in avialible_apis:
	new_api_id = avialible_apis[new_api_name]
else:
	result = apiclient.create_rest_api(
		name=new_api_name,
		description="{} API Gateway for {}".format(api_name, user_name),
	)	
	new_api_id = result['id']

# Writing gateway id file
with open(gateway_id_file, 'w') as f:
	f.write('{}'.format(new_api_id))

response = apiclient.get_resources(restApiId=new_api_id)
root_resource_id = response['items'][0]['id']

resources = [
			{'path': '/get-appointments-with-user'},
            {'path': '/get-stripe-customer'},
            {'path': '/set-default-payment-source'}, 
            {'path': '/get-appointment-payment-method'}, 
            {'path': '/url-for-file'}, 
            {'path': '/get-logged-in-user'}, 
            {'path': '/register-user'}, 
            {'path': '/vital-services'}, 
            {'path': '/register-doctor'}, 
            {'path': '/add-credit-card'}, 
            {'path': '/get-doctor-specialties'}, 
            {'path': '/search-for-doctors-by-name'}, 
            {'path': '/get-appointment-bill'}, 
            {'path': '/update-doctor'}, 
            {'path': '/get-doctors'}, 
            {'path': '/cancel-appointment'}, 
            {'path': '/search-for-doctors'}, 
            {'path': '/query-doctor-schedule'}, 
            {'path': '/update-user'}, 
            {'path': '/get-all-doctor-services'}, 
            {'path': '/schedule-appointment'},
]
 
cur_resources = apiclient.get_resources(restApiId=new_api_id)
cur_resources_paths = {x['path']:x['id'] for x in cur_resources['items']}

lambda_func_name = 'vitalservices2-{}'.format(user_name)

def run_with_exceptions(func, *args, **kwargs):
	"""
		Running function with some exception catching and 3 times try on AWS command invoke
	"""
	tries = 4
	sleep_time = 2
	while tries > 0:
		try:
			return func(*args, **kwargs)
		except Exception as e:
			error_code = e.response['Error']['Code']
			if error_code == 'ConflictException':
				print("Already exists")
				return None
			elif error_code == 'TooManyRequestsException':
				print("Too many requests, sleeping for {} sec.".format(sleep_time))
				tries = tries - 1
				time.sleep(sleep_time)
				sleep_time = sleep_time * 2
			else:
				raise e
	return None

for r in resources:
	if r['path'] not in cur_resources_paths:
	# Creating resource only if not exists
		print("Creating resource: %s" % r['path'])
		resource_resp = run_with_exceptions(apiclient.create_resource,
	    	restApiId=new_api_id,
	    	parentId=root_resource_id, # resource id for the Base API path
	    	pathPart=r['path'].split('/')[-1]
		)

		lambda_version = aws_lambda.meta.service_model.api_version

		# Create POST method
		put_method_resp = run_with_exceptions(apiclient.put_method,
		    restApiId=new_api_id,
		    resourceId=resource_resp['id'],
		    httpMethod="POST",
		    authorizationType="AWS_IAM",
		    apiKeyRequired=False,
		)

		uri_data = {
		    "aws-region": AWS_REGION,
		    "api-version": lambda_version,
		    "aws-acct-id": aws_acct_id,
		    "lambda-function-name": lambda_func_name,
		}

		uri = "arn:aws:apigateway:{aws-region}:lambda:path/{api-version}/functions/arn:aws:lambda:{aws-region}:{aws-acct-id}:function:{lambda-function-name}/invocations".format(**uri_data)

		## create integration
		integration_resp = run_with_exceptions(apiclient.put_integration,
		    restApiId=new_api_id,
		    resourceId=resource_resp['id'],
		    httpMethod="POST",
		    type="AWS",
		    integrationHttpMethod="POST",
		    uri=uri,
		)

		# Create integration response
		run_with_exceptions(apiclient.put_integration_response,
		    restApiId=new_api_id,
		    resourceId=resource_resp['id'],
		    httpMethod="POST",
		    statusCode="200",
		    selectionPattern=".*"
		)

		# Create POST method response
		run_with_exceptions(apiclient.put_method_response,
		    restApiId=new_api_id,
		    resourceId=resource_resp['id'],
		    httpMethod="POST",
		    statusCode="200",
		)

		uri_data['aws-api-id'] = new_api_id
		source_arn = "arn:aws:execute-api:{aws-region}:{aws-acct-id}:{aws-api-id}/*/POST/{lambda-function-name}".format(**uri_data)

		# Adding to the stage
		run_with_exceptions(apiclient.create_deployment,
		    restApiId=new_api_id,
		    stageName=stage_name,
		)

sys.exit(0)
