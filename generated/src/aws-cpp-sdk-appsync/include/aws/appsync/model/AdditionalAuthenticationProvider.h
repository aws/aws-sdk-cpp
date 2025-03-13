/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/AuthenticationType.h>
#include <aws/appsync/model/OpenIDConnectConfig.h>
#include <aws/appsync/model/CognitoUserPoolConfig.h>
#include <aws/appsync/model/LambdaAuthorizerConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an additional authentication provider.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AdditionalAuthenticationProvider">AWS
   * API Reference</a></p>
   */
  class AdditionalAuthenticationProvider
  {
  public:
    AWS_APPSYNC_API AdditionalAuthenticationProvider() = default;
    AWS_APPSYNC_API AdditionalAuthenticationProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AdditionalAuthenticationProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication type: API key, Identity and Access Management (IAM),
     * OpenID Connect (OIDC), Amazon Cognito user pools, or Lambda.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline AdditionalAuthenticationProvider& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OIDC configuration.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const { return m_openIDConnectConfig; }
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }
    template<typename OpenIDConnectConfigT = OpenIDConnectConfig>
    void SetOpenIDConnectConfig(OpenIDConnectConfigT&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::forward<OpenIDConnectConfigT>(value); }
    template<typename OpenIDConnectConfigT = OpenIDConnectConfig>
    AdditionalAuthenticationProvider& WithOpenIDConnectConfig(OpenIDConnectConfigT&& value) { SetOpenIDConnectConfig(std::forward<OpenIDConnectConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline const CognitoUserPoolConfig& GetUserPoolConfig() const { return m_userPoolConfig; }
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }
    template<typename UserPoolConfigT = CognitoUserPoolConfig>
    void SetUserPoolConfig(UserPoolConfigT&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::forward<UserPoolConfigT>(value); }
    template<typename UserPoolConfigT = CognitoUserPoolConfig>
    AdditionalAuthenticationProvider& WithUserPoolConfig(UserPoolConfigT&& value) { SetUserPoolConfig(std::forward<UserPoolConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for Lambda function authorization.</p>
     */
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const { return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    template<typename LambdaAuthorizerConfigT = LambdaAuthorizerConfig>
    void SetLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::forward<LambdaAuthorizerConfigT>(value); }
    template<typename LambdaAuthorizerConfigT = LambdaAuthorizerConfig>
    AdditionalAuthenticationProvider& WithLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { SetLambdaAuthorizerConfig(std::forward<LambdaAuthorizerConfigT>(value)); return *this;}
    ///@}
  private:

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet = false;

    CognitoUserPoolConfig m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet = false;

    LambdaAuthorizerConfig m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
