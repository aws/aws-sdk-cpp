/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/AuthorizerType.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents an authorization layer for methods. If enabled on a method, API
   * Gateway will activate the authorizer when a client calls the
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Authorizer">AWS
   * API Reference</a></p>
   */
  class CreateAuthorizerResult
  {
  public:
    AWS_APIGATEWAY_API CreateAuthorizerResult() = default;
    AWS_APIGATEWAY_API CreateAuthorizerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API CreateAuthorizerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateAuthorizerResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the authorizer.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAuthorizerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorizer type. Valid values are <code>TOKEN</code> for a Lambda
     * function using a single authorization token submitted in a custom header,
     * <code>REQUEST</code> for a Lambda function using incoming request parameters,
     * and <code>COGNITO_USER_POOLS</code> for using an Amazon Cognito user pool.</p>
     */
    inline AuthorizerType GetType() const { return m_type; }
    inline void SetType(AuthorizerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateAuthorizerResult& WithType(AuthorizerType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProviderARNs() const { return m_providerARNs; }
    template<typename ProviderARNsT = Aws::Vector<Aws::String>>
    void SetProviderARNs(ProviderARNsT&& value) { m_providerARNsHasBeenSet = true; m_providerARNs = std::forward<ProviderARNsT>(value); }
    template<typename ProviderARNsT = Aws::Vector<Aws::String>>
    CreateAuthorizerResult& WithProviderARNs(ProviderARNsT&& value) { SetProviderARNs(std::forward<ProviderARNsT>(value)); return *this;}
    template<typename ProviderARNsT = Aws::String>
    CreateAuthorizerResult& AddProviderARNs(ProviderARNsT&& value) { m_providerARNsHasBeenSet = true; m_providerARNs.emplace_back(std::forward<ProviderARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional customer-defined field, used in OpenAPI imports and exports without
     * functional impact.</p>
     */
    inline const Aws::String& GetAuthType() const { return m_authType; }
    template<typename AuthTypeT = Aws::String>
    void SetAuthType(AuthTypeT&& value) { m_authTypeHasBeenSet = true; m_authType = std::forward<AuthTypeT>(value); }
    template<typename AuthTypeT = Aws::String>
    CreateAuthorizerResult& WithAuthType(AuthTypeT&& value) { SetAuthType(std::forward<AuthTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline const Aws::String& GetAuthorizerUri() const { return m_authorizerUri; }
    template<typename AuthorizerUriT = Aws::String>
    void SetAuthorizerUri(AuthorizerUriT&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::forward<AuthorizerUriT>(value); }
    template<typename AuthorizerUriT = Aws::String>
    CreateAuthorizerResult& WithAuthorizerUri(AuthorizerUriT&& value) { SetAuthorizerUri(std::forward<AuthorizerUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline const Aws::String& GetAuthorizerCredentials() const { return m_authorizerCredentials; }
    template<typename AuthorizerCredentialsT = Aws::String>
    void SetAuthorizerCredentials(AuthorizerCredentialsT&& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = std::forward<AuthorizerCredentialsT>(value); }
    template<typename AuthorizerCredentialsT = Aws::String>
    CreateAuthorizerResult& WithAuthorizerCredentials(AuthorizerCredentialsT&& value) { SetAuthorizerCredentials(std::forward<AuthorizerCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity source for which authorization is requested. For a
     * <code>TOKEN</code> or <code>COGNITO_USER_POOLS</code> authorizer, this is
     * required and specifies the request header mapping expression for the custom
     * header holding the authorization token submitted by the client. For example, if
     * the token header name is <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>. For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth</code>,
     * <code>method.request.querystring.Name</code>. These parameters will be used to
     * derive the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional. </p>
     */
    inline const Aws::String& GetIdentitySource() const { return m_identitySource; }
    template<typename IdentitySourceT = Aws::String>
    void SetIdentitySource(IdentitySourceT&& value) { m_identitySourceHasBeenSet = true; m_identitySource = std::forward<IdentitySourceT>(value); }
    template<typename IdentitySourceT = Aws::String>
    CreateAuthorizerResult& WithIdentitySource(IdentitySourceT&& value) { SetIdentitySource(std::forward<IdentitySourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. For
     * <code>COGNITO_USER_POOLS</code> authorizers, API Gateway will match the
     * <code>aud</code> field of the incoming token from the client against the
     * specified regular expression. It will invoke the authorizer's Lambda function
     * when there is a match. Otherwise, it will return a 401 Unauthorized response
     * without calling the Lambda function. The validation expression does not apply to
     * the <code>REQUEST</code> authorizer.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const { return m_identityValidationExpression; }
    template<typename IdentityValidationExpressionT = Aws::String>
    void SetIdentityValidationExpression(IdentityValidationExpressionT&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::forward<IdentityValidationExpressionT>(value); }
    template<typename IdentityValidationExpressionT = Aws::String>
    CreateAuthorizerResult& WithIdentityValidationExpression(IdentityValidationExpressionT&& value) { SetIdentityValidationExpression(std::forward<IdentityValidationExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TTL in seconds of cached authorizer results. If it equals 0,
     * authorization caching is disabled. If it is greater than 0, API Gateway will
     * cache authorizer responses. If this field is not set, the default value is 300.
     * The maximum value is 3600, or 1 hour.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const { return m_authorizerResultTtlInSeconds; }
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }
    inline CreateAuthorizerResult& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAuthorizerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AuthorizerType m_type{AuthorizerType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_providerARNs;
    bool m_providerARNsHasBeenSet = false;

    Aws::String m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet = false;

    Aws::String m_authorizerCredentials;
    bool m_authorizerCredentialsHasBeenSet = false;

    Aws::String m_identitySource;
    bool m_identitySourceHasBeenSet = false;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet = false;

    int m_authorizerResultTtlInSeconds{0};
    bool m_authorizerResultTtlInSecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
