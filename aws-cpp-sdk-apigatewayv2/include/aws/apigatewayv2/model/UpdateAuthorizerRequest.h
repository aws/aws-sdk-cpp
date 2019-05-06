/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/AuthorizerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAYV2_API UpdateAuthorizerRequest : public ApiGatewayV2Request
  {
  public:
    UpdateAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAuthorizer"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateAuthorizerRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateAuthorizerRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateAuthorizerRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline const Aws::String& GetAuthorizerCredentialsArn() const{ return m_authorizerCredentialsArn; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline bool AuthorizerCredentialsArnHasBeenSet() const { return m_authorizerCredentialsArnHasBeenSet; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline void SetAuthorizerCredentialsArn(const Aws::String& value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn = value; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline void SetAuthorizerCredentialsArn(Aws::String&& value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn = std::move(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline void SetAuthorizerCredentialsArn(const char* value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn.assign(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerCredentialsArn(const Aws::String& value) { SetAuthorizerCredentialsArn(value); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerCredentialsArn(Aws::String&& value) { SetAuthorizerCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerCredentialsArn(const char* value) { SetAuthorizerCredentialsArn(value); return *this;}


    /**
     * <p>The authorizer identifier.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it is
     * zero,
 authorization caching is disabled. If it is greater than zero, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it is
     * zero,
 authorization caching is disabled. If it is greater than zero, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline bool AuthorizerResultTtlInSecondsHasBeenSet() const { return m_authorizerResultTtlInSecondsHasBeenSet; }

    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it is
     * zero,
 authorization caching is disabled. If it is greater than zero, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it is
     * zero,
 authorization caching is disabled. If it is greater than zero, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}


    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline const AuthorizerType& GetAuthorizerType() const{ return m_authorizerType; }

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline bool AuthorizerTypeHasBeenSet() const { return m_authorizerTypeHasBeenSet; }

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline void SetAuthorizerType(const AuthorizerType& value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = value; }

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline void SetAuthorizerType(AuthorizerType&& value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = std::move(value); }

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerType(const AuthorizerType& value) { SetAuthorizerType(value); return *this;}

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerType(AuthorizerType&& value) { SetAuthorizerType(std::move(value)); return *this;}


    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline const Aws::String& GetAuthorizerUri() const{ return m_authorizerUri; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline bool AuthorizerUriHasBeenSet() const { return m_authorizerUriHasBeenSet; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::move(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline void SetAuthorizerUri(const char* value) { m_authorizerUriHasBeenSet = true; m_authorizerUri.assign(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(std::move(value)); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For
 REQUEST authorizers,
     * this must be a
 well-formed Lambda function URI, for example,

     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations.

     * In general, the URI has this form:

     * arn:aws:apigateway:{region}:lambda:path/{service_api}
 , where {region} is the
     * same as the region hosting the Lambda
 function, path indicates that the
     * remaining substring in the URI should be treated as
 the path to the resource,
     * including the initial /. For Lambda functions,
 this is usually of the form

     * /2015-03-31/functions/[FunctionARN]/invocations.</p>
     */
    inline UpdateAuthorizerRequest& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}


    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline bool IdentitySourceHasBeenSet() const { return m_identitySourceHasBeenSet; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline void SetIdentitySource(const Aws::Vector<Aws::String>& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline void SetIdentitySource(Aws::Vector<Aws::String>&& value) { m_identitySourceHasBeenSet = true; m_identitySource = std::move(value); }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline UpdateAuthorizerRequest& WithIdentitySource(const Aws::Vector<Aws::String>& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline UpdateAuthorizerRequest& WithIdentitySource(Aws::Vector<Aws::String>&& value) { SetIdentitySource(std::move(value)); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline UpdateAuthorizerRequest& AddIdentitySource(const Aws::String& value) { m_identitySourceHasBeenSet = true; m_identitySource.push_back(value); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline UpdateAuthorizerRequest& AddIdentitySource(Aws::String&& value) { m_identitySourceHasBeenSet = true; m_identitySource.push_back(std::move(value)); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth header, a
 Name query
     * string parameter are defined as identity sources, this value is

     * $method.request.header.Auth, $method.request.querystring.Name. These
 parameters
     * will be used to derive the authorization caching key and to perform
 runtime
     * validation of the REQUEST authorizer by verifying all of the
 identity-related
     * request parameters are present, not null and non-empty. Only when
 this is true
     * does the authorizer invoke the authorizer Lambda function, otherwise, it

     * returns a 401 Unauthorized response without calling the Lambda function.
 The
     * valid value is a string of comma-separated mapping expressions of the specified

     * request parameters. When the authorization caching is not enabled, this property
     * is
 optional.</p>
     */
    inline UpdateAuthorizerRequest& AddIdentitySource(const char* value) { m_identitySourceHasBeenSet = true; m_identitySource.push_back(value); return *this; }


    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline bool IdentityValidationExpressionHasBeenSet() const { return m_identityValidationExpressionHasBeenSet; }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::move(value); }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression.assign(value); }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline UpdateAuthorizerRequest& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline UpdateAuthorizerRequest& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(std::move(value)); return *this;}

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline UpdateAuthorizerRequest& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}


    /**
     * <p>The name of the authorizer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline UpdateAuthorizerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline UpdateAuthorizerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline UpdateAuthorizerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProviderArns() const{ return m_providerArns; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline bool ProviderArnsHasBeenSet() const { return m_providerArnsHasBeenSet; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline void SetProviderArns(const Aws::Vector<Aws::String>& value) { m_providerArnsHasBeenSet = true; m_providerArns = value; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline void SetProviderArns(Aws::Vector<Aws::String>&& value) { m_providerArnsHasBeenSet = true; m_providerArns = std::move(value); }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline UpdateAuthorizerRequest& WithProviderArns(const Aws::Vector<Aws::String>& value) { SetProviderArns(value); return *this;}

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline UpdateAuthorizerRequest& WithProviderArns(Aws::Vector<Aws::String>&& value) { SetProviderArns(std::move(value)); return *this;}

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline UpdateAuthorizerRequest& AddProviderArns(const Aws::String& value) { m_providerArnsHasBeenSet = true; m_providerArns.push_back(value); return *this; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline UpdateAuthorizerRequest& AddProviderArns(Aws::String&& value) { m_providerArnsHasBeenSet = true; m_providerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline UpdateAuthorizerRequest& AddProviderArns(const char* value) { m_providerArnsHasBeenSet = true; m_providerArns.push_back(value); return *this; }

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_authorizerCredentialsArn;
    bool m_authorizerCredentialsArnHasBeenSet;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;

    int m_authorizerResultTtlInSeconds;
    bool m_authorizerResultTtlInSecondsHasBeenSet;

    AuthorizerType m_authorizerType;
    bool m_authorizerTypeHasBeenSet;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet;

    Aws::Vector<Aws::String> m_identitySource;
    bool m_identitySourceHasBeenSet;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_providerArns;
    bool m_providerArnsHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
