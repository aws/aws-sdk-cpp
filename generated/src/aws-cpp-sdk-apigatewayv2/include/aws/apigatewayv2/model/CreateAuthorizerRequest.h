/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/AuthorizerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/JWTConfiguration.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Creates a new Authorizer resource to represent an authorizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateAuthorizerRequest">AWS
   * API Reference</a></p>
   */
  class CreateAuthorizerRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API CreateAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAuthorizer"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


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
    inline CreateAuthorizerRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateAuthorizerRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateAuthorizerRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline const Aws::String& GetAuthorizerCredentialsArn() const{ return m_authorizerCredentialsArn; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline bool AuthorizerCredentialsArnHasBeenSet() const { return m_authorizerCredentialsArnHasBeenSet; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline void SetAuthorizerCredentialsArn(const Aws::String& value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn = value; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline void SetAuthorizerCredentialsArn(Aws::String&& value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn = std::move(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline void SetAuthorizerCredentialsArn(const char* value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn.assign(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerCredentialsArn(const Aws::String& value) { SetAuthorizerCredentialsArn(value); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerCredentialsArn(Aws::String&& value) { SetAuthorizerCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerCredentialsArn(const char* value) { SetAuthorizerCredentialsArn(value); return *this;}


    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline const Aws::String& GetAuthorizerPayloadFormatVersion() const{ return m_authorizerPayloadFormatVersion; }

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline bool AuthorizerPayloadFormatVersionHasBeenSet() const { return m_authorizerPayloadFormatVersionHasBeenSet; }

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline void SetAuthorizerPayloadFormatVersion(const Aws::String& value) { m_authorizerPayloadFormatVersionHasBeenSet = true; m_authorizerPayloadFormatVersion = value; }

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline void SetAuthorizerPayloadFormatVersion(Aws::String&& value) { m_authorizerPayloadFormatVersionHasBeenSet = true; m_authorizerPayloadFormatVersion = std::move(value); }

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline void SetAuthorizerPayloadFormatVersion(const char* value) { m_authorizerPayloadFormatVersionHasBeenSet = true; m_authorizerPayloadFormatVersion.assign(value); }

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerPayloadFormatVersion(const Aws::String& value) { SetAuthorizerPayloadFormatVersion(value); return *this;}

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerPayloadFormatVersion(Aws::String&& value) { SetAuthorizerPayloadFormatVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerPayloadFormatVersion(const char* value) { SetAuthorizerPayloadFormatVersion(value); return *this;}


    /**
     * <p>The time to live (TTL) for cached authorizer results, in seconds. If it
     * equals 0, authorization caching is disabled. If it is greater than 0, API
     * Gateway caches authorizer responses. The maximum value is 3600, or 1 hour.
     * Supported only for HTTP API Lambda authorizers.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The time to live (TTL) for cached authorizer results, in seconds. If it
     * equals 0, authorization caching is disabled. If it is greater than 0, API
     * Gateway caches authorizer responses. The maximum value is 3600, or 1 hour.
     * Supported only for HTTP API Lambda authorizers.</p>
     */
    inline bool AuthorizerResultTtlInSecondsHasBeenSet() const { return m_authorizerResultTtlInSecondsHasBeenSet; }

    /**
     * <p>The time to live (TTL) for cached authorizer results, in seconds. If it
     * equals 0, authorization caching is disabled. If it is greater than 0, API
     * Gateway caches authorizer responses. The maximum value is 3600, or 1 hour.
     * Supported only for HTTP API Lambda authorizers.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The time to live (TTL) for cached authorizer results, in seconds. If it
     * equals 0, authorization caching is disabled. If it is greater than 0, API
     * Gateway caches authorizer responses. The maximum value is 3600, or 1 hour.
     * Supported only for HTTP API Lambda authorizers.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}


    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline const AuthorizerType& GetAuthorizerType() const{ return m_authorizerType; }

    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline bool AuthorizerTypeHasBeenSet() const { return m_authorizerTypeHasBeenSet; }

    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline void SetAuthorizerType(const AuthorizerType& value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = value; }

    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline void SetAuthorizerType(AuthorizerType&& value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = std::move(value); }

    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerType(const AuthorizerType& value) { SetAuthorizerType(value); return *this;}

    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerType(AuthorizerType&& value) { SetAuthorizerType(std::move(value)); return *this;}


    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline bool AuthorizerUriHasBeenSet() const { return m_authorizerUriHasBeenSet; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::move(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline void SetAuthorizerUri(const char* value) { m_authorizerUriHasBeenSet = true; m_authorizerUri.assign(value); }

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline CreateAuthorizerRequest& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline CreateAuthorizerRequest& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(std::move(value)); return *this;}

    /**
     * <p>The authorizer's Uniform Resource Identifier (URI). For REQUEST authorizers,
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
    inline CreateAuthorizerRequest& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}


    /**
     * <p>Specifies whether a Lambda authorizer returns a response in a simple format.
     * By default, a Lambda authorizer must return an IAM policy. If enabled, the
     * Lambda authorizer can return a boolean value instead of an IAM policy. Supported
     * only for HTTP APIs. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a></p>
     */
    inline bool GetEnableSimpleResponses() const{ return m_enableSimpleResponses; }

    /**
     * <p>Specifies whether a Lambda authorizer returns a response in a simple format.
     * By default, a Lambda authorizer must return an IAM policy. If enabled, the
     * Lambda authorizer can return a boolean value instead of an IAM policy. Supported
     * only for HTTP APIs. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a></p>
     */
    inline bool EnableSimpleResponsesHasBeenSet() const { return m_enableSimpleResponsesHasBeenSet; }

    /**
     * <p>Specifies whether a Lambda authorizer returns a response in a simple format.
     * By default, a Lambda authorizer must return an IAM policy. If enabled, the
     * Lambda authorizer can return a boolean value instead of an IAM policy. Supported
     * only for HTTP APIs. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a></p>
     */
    inline void SetEnableSimpleResponses(bool value) { m_enableSimpleResponsesHasBeenSet = true; m_enableSimpleResponses = value; }

    /**
     * <p>Specifies whether a Lambda authorizer returns a response in a simple format.
     * By default, a Lambda authorizer must return an IAM policy. If enabled, the
     * Lambda authorizer can return a boolean value instead of an IAM policy. Supported
     * only for HTTP APIs. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a></p>
     */
    inline CreateAuthorizerRequest& WithEnableSimpleResponses(bool value) { SetEnableSimpleResponses(value); return *this;}


    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline bool IdentitySourceHasBeenSet() const { return m_identitySourceHasBeenSet; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline void SetIdentitySource(const Aws::Vector<Aws::String>& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline void SetIdentitySource(Aws::Vector<Aws::String>&& value) { m_identitySourceHasBeenSet = true; m_identitySource = std::move(value); }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline CreateAuthorizerRequest& WithIdentitySource(const Aws::Vector<Aws::String>& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline CreateAuthorizerRequest& WithIdentitySource(Aws::Vector<Aws::String>&& value) { SetIdentitySource(std::move(value)); return *this;}

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline CreateAuthorizerRequest& AddIdentitySource(const Aws::String& value) { m_identitySourceHasBeenSet = true; m_identitySource.push_back(value); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline CreateAuthorizerRequest& AddIdentitySource(Aws::String&& value) { m_identitySourceHasBeenSet = true; m_identitySource.push_back(std::move(value)); return *this; }

    /**
     * <p>The identity source for which authorization is requested.</p> <p>For a
     * REQUEST authorizer, this is optional. The value is a set of one or more mapping
     * expressions of the specified request parameters. The identity source can be
     * headers, query string parameters, stage variables, and context parameters. For
     * example, if an Auth header and a Name query string parameter are defined as
     * identity sources, this value is route.request.header.Auth,
     * route.request.querystring.Name for WebSocket APIs. For HTTP APIs, use selection
     * expressions prefixed with $, for example, $request.header.Auth,
     * $request.querystring.Name. These parameters are used to perform runtime
     * validation for Lambda-based authorizers by verifying all of the identity-related
     * request parameters are present in the request, not null, and non-empty. Only
     * when this is true does the authorizer invoke the authorizer Lambda function.
     * Otherwise, it returns a 401 Unauthorized response without calling the Lambda
     * function. For HTTP APIs, identity sources are also used as the cache key when
     * caching is enabled. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p> <p>For JWT, a single entry
     * that specifies where to extract the JSON Web Token (JWT) from inbound requests.
     * Currently only header-based and query parameter-based selections are supported,
     * for example $request.header.Authorization.</p>
     */
    inline CreateAuthorizerRequest& AddIdentitySource(const char* value) { m_identitySourceHasBeenSet = true; m_identitySource.push_back(value); return *this; }


    /**
     * <p>This parameter is not used.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>This parameter is not used.</p>
     */
    inline bool IdentityValidationExpressionHasBeenSet() const { return m_identityValidationExpressionHasBeenSet; }

    /**
     * <p>This parameter is not used.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>This parameter is not used.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::move(value); }

    /**
     * <p>This parameter is not used.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression.assign(value); }

    /**
     * <p>This parameter is not used.</p>
     */
    inline CreateAuthorizerRequest& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>This parameter is not used.</p>
     */
    inline CreateAuthorizerRequest& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(std::move(value)); return *this;}

    /**
     * <p>This parameter is not used.</p>
     */
    inline CreateAuthorizerRequest& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}


    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline const JWTConfiguration& GetJwtConfiguration() const{ return m_jwtConfiguration; }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline bool JwtConfigurationHasBeenSet() const { return m_jwtConfigurationHasBeenSet; }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetJwtConfiguration(const JWTConfiguration& value) { m_jwtConfigurationHasBeenSet = true; m_jwtConfiguration = value; }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline void SetJwtConfiguration(JWTConfiguration&& value) { m_jwtConfigurationHasBeenSet = true; m_jwtConfiguration = std::move(value); }

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline CreateAuthorizerRequest& WithJwtConfiguration(const JWTConfiguration& value) { SetJwtConfiguration(value); return *this;}

    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline CreateAuthorizerRequest& WithJwtConfiguration(JWTConfiguration&& value) { SetJwtConfiguration(std::move(value)); return *this;}


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
    inline CreateAuthorizerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_authorizerCredentialsArn;
    bool m_authorizerCredentialsArnHasBeenSet = false;

    Aws::String m_authorizerPayloadFormatVersion;
    bool m_authorizerPayloadFormatVersionHasBeenSet = false;

    int m_authorizerResultTtlInSeconds;
    bool m_authorizerResultTtlInSecondsHasBeenSet = false;

    AuthorizerType m_authorizerType;
    bool m_authorizerTypeHasBeenSet = false;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet = false;

    bool m_enableSimpleResponses;
    bool m_enableSimpleResponsesHasBeenSet = false;

    Aws::Vector<Aws::String> m_identitySource;
    bool m_identitySourceHasBeenSet = false;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet = false;

    JWTConfiguration m_jwtConfiguration;
    bool m_jwtConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
