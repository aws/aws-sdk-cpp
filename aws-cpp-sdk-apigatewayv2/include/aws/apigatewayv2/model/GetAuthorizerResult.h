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
#include <aws/apigatewayv2/model/JWTConfiguration.h>
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
  class AWS_APIGATEWAYV2_API GetAuthorizerResult
  {
  public:
    GetAuthorizerResult();
    GetAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline const Aws::String& GetAuthorizerCredentialsArn() const{ return m_authorizerCredentialsArn; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline void SetAuthorizerCredentialsArn(const Aws::String& value) { m_authorizerCredentialsArn = value; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline void SetAuthorizerCredentialsArn(Aws::String&& value) { m_authorizerCredentialsArn = std::move(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline void SetAuthorizerCredentialsArn(const char* value) { m_authorizerCredentialsArn.assign(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerCredentialsArn(const Aws::String& value) { SetAuthorizerCredentialsArn(value); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerCredentialsArn(Aws::String&& value) { SetAuthorizerCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null. Supported only for REQUEST authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerCredentialsArn(const char* value) { SetAuthorizerCredentialsArn(value); return *this;}


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
    inline GetAuthorizerResult& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The authorizer identifier.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>Authorizer caching is not currently supported. Don't specify this value for
     * authorizers.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>Authorizer caching is not currently supported. Don't specify this value for
     * authorizers.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>Authorizer caching is not currently supported. Don't specify this value for
     * authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}


    /**
     * <p>The authorizer type. For WebSocket APIs, specify REQUEST for a Lambda
     * function using incoming request parameters. For HTTP APIs, specify JWT to use
     * JSON Web Tokens.</p>
     */
    inline const AuthorizerType& GetAuthorizerType() const{ return m_authorizerType; }

    /**
     * <p>The authorizer type. For WebSocket APIs, specify REQUEST for a Lambda
     * function using incoming request parameters. For HTTP APIs, specify JWT to use
     * JSON Web Tokens.</p>
     */
    inline void SetAuthorizerType(const AuthorizerType& value) { m_authorizerType = value; }

    /**
     * <p>The authorizer type. For WebSocket APIs, specify REQUEST for a Lambda
     * function using incoming request parameters. For HTTP APIs, specify JWT to use
     * JSON Web Tokens.</p>
     */
    inline void SetAuthorizerType(AuthorizerType&& value) { m_authorizerType = std::move(value); }

    /**
     * <p>The authorizer type. For WebSocket APIs, specify REQUEST for a Lambda
     * function using incoming request parameters. For HTTP APIs, specify JWT to use
     * JSON Web Tokens.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerType(const AuthorizerType& value) { SetAuthorizerType(value); return *this;}

    /**
     * <p>The authorizer type. For WebSocket APIs, specify REQUEST for a Lambda
     * function using incoming request parameters. For HTTP APIs, specify JWT to use
     * JSON Web Tokens.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerType(AuthorizerType&& value) { SetAuthorizerType(std::move(value)); return *this;}


    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline const Aws::String& GetAuthorizerUri() const{ return m_authorizerUri; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUri = value; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUri = std::move(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline void SetAuthorizerUri(const char* value) { m_authorizerUri.assign(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(std::move(value)); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). ForREQUEST authorizers,
     * this must be a well-formed Lambda function URI, for example,
     * arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:<replaceable>{account_id}</replaceable>:function:<replaceable>{lambda_function_name}</replaceable>/invocations.
     * In general, the URI has this form:
     * arn:aws:apigateway:<replaceable>{region}</replaceable>:lambda:path/<replaceable>{service_api}</replaceable>

     * , where <replaceable></replaceable>{region} is the same as the region hosting
     * the Lambda function, path indicates that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial /. For
     * Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations. Supported only for REQUEST
     * authorizers.</p>
     */
    inline GetAuthorizerResult& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}


    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline void SetIdentitySource(const Aws::Vector<Aws::String>& value) { m_identitySource = value; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline void SetIdentitySource(Aws::Vector<Aws::String>&& value) { m_identitySource = std::move(value); }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline GetAuthorizerResult& WithIdentitySource(const Aws::Vector<Aws::String>& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline GetAuthorizerResult& WithIdentitySource(Aws::Vector<Aws::String>&& value) { SetIdentitySource(std::move(value)); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline GetAuthorizerResult& AddIdentitySource(const Aws::String& value) { m_identitySource.push_back(value); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline GetAuthorizerResult& AddIdentitySource(Aws::String&& value) { m_identitySource.push_back(std::move(value)); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. Currently, the identity source
     * can be headers, query string parameters, stage variables, and context
     * parameters. For example, if an Auth header and a Name query string parameter are
     * defined as identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name. These parameters will be used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function.</p> <p>For JWT, a single entry that specifies where to extract the
     * JSON Web Token (JWT) from inbound requests. Currently only header-based and
     * query parameter-based selections are supported, for example
     * "$request.header.Authorization".</p>
     */
    inline GetAuthorizerResult& AddIdentitySource(const char* value) { m_identitySource.push_back(value); return *this; }


    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpression = value; }

    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpression = std::move(value); }

    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpression.assign(value); }

    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline GetAuthorizerResult& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline GetAuthorizerResult& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(std::move(value)); return *this;}

    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline GetAuthorizerResult& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}


    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline const JWTConfiguration& GetJwtConfiguration() const{ return m_jwtConfiguration; }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetJwtConfiguration(const JWTConfiguration& value) { m_jwtConfiguration = value; }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetJwtConfiguration(JWTConfiguration&& value) { m_jwtConfiguration = std::move(value); }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline GetAuthorizerResult& WithJwtConfiguration(const JWTConfiguration& value) { SetJwtConfiguration(value); return *this;}

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline GetAuthorizerResult& WithJwtConfiguration(JWTConfiguration&& value) { SetJwtConfiguration(std::move(value)); return *this;}


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
    inline GetAuthorizerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline GetAuthorizerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline GetAuthorizerResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_authorizerCredentialsArn;

    Aws::String m_authorizerId;

    int m_authorizerResultTtlInSeconds;

    AuthorizerType m_authorizerType;

    Aws::String m_authorizerUri;

    Aws::Vector<Aws::String> m_identitySource;

    Aws::String m_identityValidationExpression;

    JWTConfiguration m_jwtConfiguration;

    Aws::String m_name;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
