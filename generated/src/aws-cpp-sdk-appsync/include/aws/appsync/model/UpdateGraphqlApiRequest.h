/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/LogConfig.h>
#include <aws/appsync/model/AuthenticationType.h>
#include <aws/appsync/model/UserPoolConfig.h>
#include <aws/appsync/model/OpenIDConnectConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/LambdaAuthorizerConfig.h>
#include <aws/appsync/model/AdditionalAuthenticationProvider.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class UpdateGraphqlApiRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API UpdateGraphqlApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGraphqlApi"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline UpdateGraphqlApiRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateGraphqlApiRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateGraphqlApiRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon CloudWatch Logs configuration for the <code>GraphqlApi</code>
     * object.</p>
     */
    inline const LogConfig& GetLogConfig() const{ return m_logConfig; }

    /**
     * <p>The Amazon CloudWatch Logs configuration for the <code>GraphqlApi</code>
     * object.</p>
     */
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch Logs configuration for the <code>GraphqlApi</code>
     * object.</p>
     */
    inline void SetLogConfig(const LogConfig& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }

    /**
     * <p>The Amazon CloudWatch Logs configuration for the <code>GraphqlApi</code>
     * object.</p>
     */
    inline void SetLogConfig(LogConfig&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs configuration for the <code>GraphqlApi</code>
     * object.</p>
     */
    inline UpdateGraphqlApiRequest& WithLogConfig(const LogConfig& value) { SetLogConfig(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs configuration for the <code>GraphqlApi</code>
     * object.</p>
     */
    inline UpdateGraphqlApiRequest& WithLogConfig(LogConfig&& value) { SetLogConfig(std::move(value)); return *this;}


    /**
     * <p>The new authentication type for the <code>GraphqlApi</code> object.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The new authentication type for the <code>GraphqlApi</code> object.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The new authentication type for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The new authentication type for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The new authentication type for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The new authentication type for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The new Amazon Cognito user pool configuration for the
     * <code>~GraphqlApi</code> object.</p>
     */
    inline const UserPoolConfig& GetUserPoolConfig() const{ return m_userPoolConfig; }

    /**
     * <p>The new Amazon Cognito user pool configuration for the
     * <code>~GraphqlApi</code> object.</p>
     */
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }

    /**
     * <p>The new Amazon Cognito user pool configuration for the
     * <code>~GraphqlApi</code> object.</p>
     */
    inline void SetUserPoolConfig(const UserPoolConfig& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = value; }

    /**
     * <p>The new Amazon Cognito user pool configuration for the
     * <code>~GraphqlApi</code> object.</p>
     */
    inline void SetUserPoolConfig(UserPoolConfig&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::move(value); }

    /**
     * <p>The new Amazon Cognito user pool configuration for the
     * <code>~GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithUserPoolConfig(const UserPoolConfig& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p>The new Amazon Cognito user pool configuration for the
     * <code>~GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithUserPoolConfig(UserPoolConfig&& value) { SetUserPoolConfig(std::move(value)); return *this;}


    /**
     * <p>The OpenID Connect configuration for the <code>GraphqlApi</code> object.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const{ return m_openIDConnectConfig; }

    /**
     * <p>The OpenID Connect configuration for the <code>GraphqlApi</code> object.</p>
     */
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }

    /**
     * <p>The OpenID Connect configuration for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetOpenIDConnectConfig(const OpenIDConnectConfig& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = value; }

    /**
     * <p>The OpenID Connect configuration for the <code>GraphqlApi</code> object.</p>
     */
    inline void SetOpenIDConnectConfig(OpenIDConnectConfig&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::move(value); }

    /**
     * <p>The OpenID Connect configuration for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithOpenIDConnectConfig(const OpenIDConnectConfig& value) { SetOpenIDConnectConfig(value); return *this;}

    /**
     * <p>The OpenID Connect configuration for the <code>GraphqlApi</code> object.</p>
     */
    inline UpdateGraphqlApiRequest& WithOpenIDConnectConfig(OpenIDConnectConfig&& value) { SetOpenIDConnectConfig(std::move(value)); return *this;}


    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline const Aws::Vector<AdditionalAuthenticationProvider>& GetAdditionalAuthenticationProviders() const{ return m_additionalAuthenticationProviders; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline bool AdditionalAuthenticationProvidersHasBeenSet() const { return m_additionalAuthenticationProvidersHasBeenSet; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline void SetAdditionalAuthenticationProviders(const Aws::Vector<AdditionalAuthenticationProvider>& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = value; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline void SetAdditionalAuthenticationProviders(Aws::Vector<AdditionalAuthenticationProvider>&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders = std::move(value); }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline UpdateGraphqlApiRequest& WithAdditionalAuthenticationProviders(const Aws::Vector<AdditionalAuthenticationProvider>& value) { SetAdditionalAuthenticationProviders(value); return *this;}

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline UpdateGraphqlApiRequest& WithAdditionalAuthenticationProviders(Aws::Vector<AdditionalAuthenticationProvider>&& value) { SetAdditionalAuthenticationProviders(std::move(value)); return *this;}

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline UpdateGraphqlApiRequest& AddAdditionalAuthenticationProviders(const AdditionalAuthenticationProvider& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(value); return *this; }

    /**
     * <p>A list of additional authentication providers for the <code>GraphqlApi</code>
     * API.</p>
     */
    inline UpdateGraphqlApiRequest& AddAdditionalAuthenticationProviders(AdditionalAuthenticationProvider&& value) { m_additionalAuthenticationProvidersHasBeenSet = true; m_additionalAuthenticationProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag indicating whether to use X-Ray tracing for the
     * <code>GraphqlApi</code>.</p>
     */
    inline bool GetXrayEnabled() const{ return m_xrayEnabled; }

    /**
     * <p>A flag indicating whether to use X-Ray tracing for the
     * <code>GraphqlApi</code>.</p>
     */
    inline bool XrayEnabledHasBeenSet() const { return m_xrayEnabledHasBeenSet; }

    /**
     * <p>A flag indicating whether to use X-Ray tracing for the
     * <code>GraphqlApi</code>.</p>
     */
    inline void SetXrayEnabled(bool value) { m_xrayEnabledHasBeenSet = true; m_xrayEnabled = value; }

    /**
     * <p>A flag indicating whether to use X-Ray tracing for the
     * <code>GraphqlApi</code>.</p>
     */
    inline UpdateGraphqlApiRequest& WithXrayEnabled(bool value) { SetXrayEnabled(value); return *this;}


    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline void SetLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline void SetLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline UpdateGraphqlApiRequest& WithLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { SetLambdaAuthorizerConfig(value); return *this;}

    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline UpdateGraphqlApiRequest& WithLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LogConfig m_logConfig;
    bool m_logConfigHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    UserPoolConfig m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet = false;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet = false;

    Aws::Vector<AdditionalAuthenticationProvider> m_additionalAuthenticationProviders;
    bool m_additionalAuthenticationProvidersHasBeenSet = false;

    bool m_xrayEnabled;
    bool m_xrayEnabledHasBeenSet = false;

    LambdaAuthorizerConfig m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
