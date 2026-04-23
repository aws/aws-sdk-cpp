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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/AuthorizerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class AWS_APIGATEWAYV2_API CreateAuthorizerResult
  {
  public:
    CreateAuthorizerResult();
    CreateAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetAuthorizerCredentialsArn(const Aws::String& value) { m_authorizerCredentialsArn = value; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline void SetAuthorizerCredentialsArn(Aws::String&& value) { m_authorizerCredentialsArn = std::move(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline void SetAuthorizerCredentialsArn(const char* value) { m_authorizerCredentialsArn.assign(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerCredentialsArn(const Aws::String& value) { SetAuthorizerCredentialsArn(value); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerCredentialsArn(Aws::String&& value) { SetAuthorizerCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the
 authorizer. To specify an IAM role for API Gateway to assume, use the
     * role's Amazon
 Resource Name (ARN). To use resource-based permissions on the
     * Lambda function,
 specify null.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerCredentialsArn(const char* value) { SetAuthorizerCredentialsArn(value); return *this;}


    /**
     * <p>The authorizer identifier.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerId = value; }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerId = std::move(value); }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerId.assign(value); }

    /**
     * <p>The authorizer identifier.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it
     * equals 0,
 authorization caching is disabled. If it is greater than 0, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it
     * equals 0,
 authorization caching is disabled. If it is greater than 0, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The time to live (TTL), in seconds, of cached authorizer results. If it
     * equals 0,
 authorization caching is disabled. If it is greater than 0, API
     * Gateway will cache
 authorizer responses. If this field is not set, the default
     * value is 300. The maximum
 value is 3600, or 1 hour.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}


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
    inline void SetAuthorizerType(const AuthorizerType& value) { m_authorizerType = value; }

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline void SetAuthorizerType(AuthorizerType&& value) { m_authorizerType = std::move(value); }

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerType(const AuthorizerType& value) { SetAuthorizerType(value); return *this;}

    /**
     * <p>The authorizer type. Currently the only valid value is REQUEST, for a
 Lambda
     * function using incoming request parameters.</p>
     */
    inline CreateAuthorizerResult& WithAuthorizerType(AuthorizerType&& value) { SetAuthorizerType(std::move(value)); return *this;}


    /**
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUri = value; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUri = std::move(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
    inline void SetAuthorizerUri(const char* value) { m_authorizerUri.assign(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
    inline CreateAuthorizerResult& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
    inline CreateAuthorizerResult& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(std::move(value)); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI).
 ForREQUEST authorizers,
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
    inline CreateAuthorizerResult& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}


    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline void SetIdentitySource(const Aws::Vector<Aws::String>& value) { m_identitySource = value; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline void SetIdentitySource(Aws::Vector<Aws::String>&& value) { m_identitySource = std::move(value); }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline CreateAuthorizerResult& WithIdentitySource(const Aws::Vector<Aws::String>& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline CreateAuthorizerResult& WithIdentitySource(Aws::Vector<Aws::String>&& value) { SetIdentitySource(std::move(value)); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline CreateAuthorizerResult& AddIdentitySource(const Aws::String& value) { m_identitySource.push_back(value); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline CreateAuthorizerResult& AddIdentitySource(Aws::String&& value) { m_identitySource.push_back(std::move(value)); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p><p>For the
     * REQUEST authorizer, this is required when authorization
 caching is enabled. The
     * value is a comma-separated string of one or more mapping
 expressions of the
     * specified request parameters. For example, if an Auth
 header and a Name query
     * string parameters are defined as identity
 sources, this value is
     * method.request.header.Auth,
 method.request.querystring.Name. These parameters
     * will be used to
 derive the authorization caching key and to perform runtime
     * validation of the
 REQUEST authorizer by verifying all of the identity-related
     * request
 parameters are present, not null, and non-empty. Only when this is true
     * does the
 authorizer invoke the authorizer Lambda function, otherwise, it
     * returns a 401
 Unauthorized response without calling the Lambda function. The
     * valid value
 is a string of comma-separated mapping expressions of the specified
     * request
 parameters. When the authorization caching is not enabled, this
     * property is
 optional.</p>
     */
    inline CreateAuthorizerResult& AddIdentitySource(const char* value) { m_identitySource.push_back(value); return *this; }


    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpression = value; }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpression = std::move(value); }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpression.assign(value); }

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline CreateAuthorizerResult& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline CreateAuthorizerResult& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(std::move(value)); return *this;}

    /**
     * <p>The
 validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline CreateAuthorizerResult& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}


    /**
     * <p>The name of the authorizer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the authorizer.</p>
     */
    inline CreateAuthorizerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline CreateAuthorizerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline CreateAuthorizerResult& WithName(const char* value) { SetName(value); return *this;}


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
    inline void SetProviderArns(const Aws::Vector<Aws::String>& value) { m_providerArns = value; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline void SetProviderArns(Aws::Vector<Aws::String>&& value) { m_providerArns = std::move(value); }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline CreateAuthorizerResult& WithProviderArns(const Aws::Vector<Aws::String>& value) { SetProviderArns(value); return *this;}

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline CreateAuthorizerResult& WithProviderArns(Aws::Vector<Aws::String>&& value) { SetProviderArns(std::move(value)); return *this;}

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline CreateAuthorizerResult& AddProviderArns(const Aws::String& value) { m_providerArns.push_back(value); return *this; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline CreateAuthorizerResult& AddProviderArns(Aws::String&& value) { m_providerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>For
 REQUEST authorizer, this is not
 defined.</p>
     */
    inline CreateAuthorizerResult& AddProviderArns(const char* value) { m_providerArns.push_back(value); return *this; }

  private:

    Aws::String m_authorizerCredentialsArn;

    Aws::String m_authorizerId;

    int m_authorizerResultTtlInSeconds;

    AuthorizerType m_authorizerType;

    Aws::String m_authorizerUri;

    Aws::Vector<Aws::String> m_identitySource;

    Aws::String m_identityValidationExpression;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_providerArns;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
