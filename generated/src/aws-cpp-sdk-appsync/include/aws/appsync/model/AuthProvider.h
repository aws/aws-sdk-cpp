/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/AuthenticationType.h>
#include <aws/appsync/model/CognitoConfig.h>
#include <aws/appsync/model/OpenIDConnectConfig.h>
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
   * <p>Describes an authorization provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AuthProvider">AWS
   * API Reference</a></p>
   */
  class AuthProvider
  {
  public:
    AWS_APPSYNC_API AuthProvider() = default;
    AWS_APPSYNC_API AuthProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AuthProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization type.</p>
     */
    inline AuthenticationType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthenticationType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline AuthProvider& WithAuthType(AuthenticationType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an Amazon Cognito user pool configuration.</p>
     */
    inline const CognitoConfig& GetCognitoConfig() const { return m_cognitoConfig; }
    inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
    template<typename CognitoConfigT = CognitoConfig>
    void SetCognitoConfig(CognitoConfigT&& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = std::forward<CognitoConfigT>(value); }
    template<typename CognitoConfigT = CognitoConfig>
    AuthProvider& WithCognitoConfig(CognitoConfigT&& value) { SetCognitoConfig(std::forward<CognitoConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const { return m_openIDConnectConfig; }
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }
    template<typename OpenIDConnectConfigT = OpenIDConnectConfig>
    void SetOpenIDConnectConfig(OpenIDConnectConfigT&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::forward<OpenIDConnectConfigT>(value); }
    template<typename OpenIDConnectConfigT = OpenIDConnectConfig>
    AuthProvider& WithOpenIDConnectConfig(OpenIDConnectConfigT&& value) { SetOpenIDConnectConfig(std::forward<OpenIDConnectConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const { return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    template<typename LambdaAuthorizerConfigT = LambdaAuthorizerConfig>
    void SetLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::forward<LambdaAuthorizerConfigT>(value); }
    template<typename LambdaAuthorizerConfigT = LambdaAuthorizerConfig>
    AuthProvider& WithLambdaAuthorizerConfig(LambdaAuthorizerConfigT&& value) { SetLambdaAuthorizerConfig(std::forward<LambdaAuthorizerConfigT>(value)); return *this;}
    ///@}
  private:

    AuthenticationType m_authType{AuthenticationType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    CognitoConfig m_cognitoConfig;
    bool m_cognitoConfigHasBeenSet = false;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet = false;

    LambdaAuthorizerConfig m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
