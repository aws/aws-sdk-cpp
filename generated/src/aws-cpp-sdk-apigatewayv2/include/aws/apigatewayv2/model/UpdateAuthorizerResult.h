/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateAuthorizerResult
  {
  public:
    AWS_APIGATEWAYV2_API UpdateAuthorizerResult() = default;
    AWS_APIGATEWAYV2_API UpdateAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API UpdateAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, don't specify this parameter. Supported only for REQUEST
     * authorizers.</p>
     */
    inline const Aws::String& GetAuthorizerCredentialsArn() const { return m_authorizerCredentialsArn; }
    template<typename AuthorizerCredentialsArnT = Aws::String>
    void SetAuthorizerCredentialsArn(AuthorizerCredentialsArnT&& value) { m_authorizerCredentialsArnHasBeenSet = true; m_authorizerCredentialsArn = std::forward<AuthorizerCredentialsArnT>(value); }
    template<typename AuthorizerCredentialsArnT = Aws::String>
    UpdateAuthorizerResult& WithAuthorizerCredentialsArn(AuthorizerCredentialsArnT&& value) { SetAuthorizerCredentialsArn(std::forward<AuthorizerCredentialsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer identifier.</p>
     */
    inline const Aws::String& GetAuthorizerId() const { return m_authorizerId; }
    template<typename AuthorizerIdT = Aws::String>
    void SetAuthorizerId(AuthorizerIdT&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::forward<AuthorizerIdT>(value); }
    template<typename AuthorizerIdT = Aws::String>
    UpdateAuthorizerResult& WithAuthorizerId(AuthorizerIdT&& value) { SetAuthorizerId(std::forward<AuthorizerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of the payload sent to an HTTP API Lambda authorizer.
     * Required for HTTP API Lambda authorizers. Supported values are 1.0 and 2.0. To
     * learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a>.</p>
     */
    inline const Aws::String& GetAuthorizerPayloadFormatVersion() const { return m_authorizerPayloadFormatVersion; }
    template<typename AuthorizerPayloadFormatVersionT = Aws::String>
    void SetAuthorizerPayloadFormatVersion(AuthorizerPayloadFormatVersionT&& value) { m_authorizerPayloadFormatVersionHasBeenSet = true; m_authorizerPayloadFormatVersion = std::forward<AuthorizerPayloadFormatVersionT>(value); }
    template<typename AuthorizerPayloadFormatVersionT = Aws::String>
    UpdateAuthorizerResult& WithAuthorizerPayloadFormatVersion(AuthorizerPayloadFormatVersionT&& value) { SetAuthorizerPayloadFormatVersion(std::forward<AuthorizerPayloadFormatVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time to live (TTL) for cached authorizer results, in seconds. If it
     * equals 0, authorization caching is disabled. If it is greater than 0, API
     * Gateway caches authorizer responses. The maximum value is 3600, or 1 hour.
     * Supported only for HTTP API Lambda authorizers.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const { return m_authorizerResultTtlInSeconds; }
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }
    inline UpdateAuthorizerResult& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer type. Specify REQUEST for a Lambda function using incoming
     * request parameters. Specify JWT to use JSON Web Tokens (supported only for HTTP
     * APIs).</p>
     */
    inline AuthorizerType GetAuthorizerType() const { return m_authorizerType; }
    inline void SetAuthorizerType(AuthorizerType value) { m_authorizerTypeHasBeenSet = true; m_authorizerType = value; }
    inline UpdateAuthorizerResult& WithAuthorizerType(AuthorizerType value) { SetAuthorizerType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetAuthorizerUri() const { return m_authorizerUri; }
    template<typename AuthorizerUriT = Aws::String>
    void SetAuthorizerUri(AuthorizerUriT&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::forward<AuthorizerUriT>(value); }
    template<typename AuthorizerUriT = Aws::String>
    UpdateAuthorizerResult& WithAuthorizerUri(AuthorizerUriT&& value) { SetAuthorizerUri(std::forward<AuthorizerUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a Lambda authorizer returns a response in a simple format.
     * If enabled, the Lambda authorizer can return a boolean value instead of an IAM
     * policy. Supported only for HTTP APIs. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-lambda-authorizer.html">Working
     * with AWS Lambda authorizers for HTTP APIs</a></p>
     */
    inline bool GetEnableSimpleResponses() const { return m_enableSimpleResponses; }
    inline void SetEnableSimpleResponses(bool value) { m_enableSimpleResponsesHasBeenSet = true; m_enableSimpleResponses = value; }
    inline UpdateAuthorizerResult& WithEnableSimpleResponses(bool value) { SetEnableSimpleResponses(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetIdentitySource() const { return m_identitySource; }
    template<typename IdentitySourceT = Aws::Vector<Aws::String>>
    void SetIdentitySource(IdentitySourceT&& value) { m_identitySourceHasBeenSet = true; m_identitySource = std::forward<IdentitySourceT>(value); }
    template<typename IdentitySourceT = Aws::Vector<Aws::String>>
    UpdateAuthorizerResult& WithIdentitySource(IdentitySourceT&& value) { SetIdentitySource(std::forward<IdentitySourceT>(value)); return *this;}
    template<typename IdentitySourceT = Aws::String>
    UpdateAuthorizerResult& AddIdentitySource(IdentitySourceT&& value) { m_identitySourceHasBeenSet = true; m_identitySource.emplace_back(std::forward<IdentitySourceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation expression does not apply to the REQUEST authorizer.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const { return m_identityValidationExpression; }
    template<typename IdentityValidationExpressionT = Aws::String>
    void SetIdentityValidationExpression(IdentityValidationExpressionT&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::forward<IdentityValidationExpressionT>(value); }
    template<typename IdentityValidationExpressionT = Aws::String>
    UpdateAuthorizerResult& WithIdentityValidationExpression(IdentityValidationExpressionT&& value) { SetIdentityValidationExpression(std::forward<IdentityValidationExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the configuration of a JWT authorizer. Required for the JWT
     * authorizer type. Supported only for HTTP APIs.</p>
     */
    inline const JWTConfiguration& GetJwtConfiguration() const { return m_jwtConfiguration; }
    template<typename JwtConfigurationT = JWTConfiguration>
    void SetJwtConfiguration(JwtConfigurationT&& value) { m_jwtConfigurationHasBeenSet = true; m_jwtConfiguration = std::forward<JwtConfigurationT>(value); }
    template<typename JwtConfigurationT = JWTConfiguration>
    UpdateAuthorizerResult& WithJwtConfiguration(JwtConfigurationT&& value) { SetJwtConfiguration(std::forward<JwtConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the authorizer.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAuthorizerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAuthorizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizerCredentialsArn;
    bool m_authorizerCredentialsArnHasBeenSet = false;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet = false;

    Aws::String m_authorizerPayloadFormatVersion;
    bool m_authorizerPayloadFormatVersionHasBeenSet = false;

    int m_authorizerResultTtlInSeconds{0};
    bool m_authorizerResultTtlInSecondsHasBeenSet = false;

    AuthorizerType m_authorizerType{AuthorizerType::NOT_SET};
    bool m_authorizerTypeHasBeenSet = false;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet = false;

    bool m_enableSimpleResponses{false};
    bool m_enableSimpleResponsesHasBeenSet = false;

    Aws::Vector<Aws::String> m_identitySource;
    bool m_identitySourceHasBeenSet = false;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet = false;

    JWTConfiguration m_jwtConfiguration;
    bool m_jwtConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
