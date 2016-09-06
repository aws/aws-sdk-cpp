/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/AuthorizerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to add a new <a>Authorizer</a> to an existing <a>RestApi</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API CreateAuthorizerRequest : public APIGatewayRequest
  {
  public:
    CreateAuthorizerRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline CreateAuthorizerRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline CreateAuthorizerRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier under which the <a>Authorizer</a> will be
     * created.</p>
     */
    inline CreateAuthorizerRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>[Required] The type of the authorizer.</p>
     */
    inline const AuthorizerType& GetType() const{ return m_type; }

    /**
     * <p>[Required] The type of the authorizer.</p>
     */
    inline void SetType(const AuthorizerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>[Required] The type of the authorizer.</p>
     */
    inline void SetType(AuthorizerType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>[Required] The type of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithType(const AuthorizerType& value) { SetType(value); return *this;}

    /**
     * <p>[Required] The type of the authorizer.</p>
     */
    inline CreateAuthorizerRequest& WithType(AuthorizerType&& value) { SetType(value); return *this;}

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProviderARNs() const{ return m_providerARNs; }

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline void SetProviderARNs(const Aws::Vector<Aws::String>& value) { m_providerARNsHasBeenSet = true; m_providerARNs = value; }

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline void SetProviderARNs(Aws::Vector<Aws::String>&& value) { m_providerARNsHasBeenSet = true; m_providerARNs = value; }

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline CreateAuthorizerRequest& WithProviderARNs(const Aws::Vector<Aws::String>& value) { SetProviderARNs(value); return *this;}

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline CreateAuthorizerRequest& WithProviderARNs(Aws::Vector<Aws::String>&& value) { SetProviderARNs(value); return *this;}

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline CreateAuthorizerRequest& AddProviderARNs(const Aws::String& value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline CreateAuthorizerRequest& AddProviderARNs(Aws::String&& value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>A list of the Cognito Your User Pool authorizer's provider ARNs.</p>
     */
    inline CreateAuthorizerRequest& AddProviderARNs(const char* value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline const Aws::String& GetAuthType() const{ return m_authType; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline void SetAuthType(const Aws::String& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline void SetAuthType(Aws::String&& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline void SetAuthType(const char* value) { m_authTypeHasBeenSet = true; m_authType.assign(value); }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline CreateAuthorizerRequest& WithAuthType(const Aws::String& value) { SetAuthType(value); return *this;}

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline CreateAuthorizerRequest& WithAuthType(Aws::String&& value) { SetAuthType(value); return *this;}

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline CreateAuthorizerRequest& WithAuthType(const char* value) { SetAuthType(value); return *this;}

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline const Aws::String& GetAuthorizerUri() const{ return m_authorizerUri; }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline void SetAuthorizerUri(const char* value) { m_authorizerUriHasBeenSet = true; m_authorizerUri.assign(value); }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI).</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline const Aws::String& GetAuthorizerCredentials() const{ return m_authorizerCredentials; }

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline void SetAuthorizerCredentials(const Aws::String& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = value; }

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline void SetAuthorizerCredentials(Aws::String&& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = value; }

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline void SetAuthorizerCredentials(const char* value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials.assign(value); }

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerCredentials(const Aws::String& value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerCredentials(Aws::String&& value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the authorizer, if any.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerCredentials(const char* value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline const Aws::String& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline void SetIdentitySource(const Aws::String& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline void SetIdentitySource(Aws::String&& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline void SetIdentitySource(const char* value) { m_identitySourceHasBeenSet = true; m_identitySource.assign(value); }

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline CreateAuthorizerRequest& WithIdentitySource(const Aws::String& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline CreateAuthorizerRequest& WithIdentitySource(Aws::String&& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>[Required] The source of the identity in an incoming request.</p>
     */
    inline CreateAuthorizerRequest& WithIdentitySource(const char* value) { SetIdentitySource(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression.assign(value); }

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline CreateAuthorizerRequest& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline CreateAuthorizerRequest& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity.</p>
     */
    inline CreateAuthorizerRequest& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>The TTL of cached authorizer results.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The TTL of cached authorizer results.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The TTL of cached authorizer results.</p>
     */
    inline CreateAuthorizerRequest& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    AuthorizerType m_type;
    bool m_typeHasBeenSet;
    Aws::Vector<Aws::String> m_providerARNs;
    bool m_providerARNsHasBeenSet;
    Aws::String m_authType;
    bool m_authTypeHasBeenSet;
    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet;
    Aws::String m_authorizerCredentials;
    bool m_authorizerCredentialsHasBeenSet;
    Aws::String m_identitySource;
    bool m_identitySourceHasBeenSet;
    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet;
    int m_authorizerResultTtlInSeconds;
    bool m_authorizerResultTtlInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
