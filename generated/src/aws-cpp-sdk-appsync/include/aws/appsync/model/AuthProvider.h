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
    AWS_APPSYNC_API AuthProvider();
    AWS_APPSYNC_API AuthProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AuthProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization type.</p>
     */
    inline const AuthenticationType& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const AuthenticationType& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(AuthenticationType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline AuthProvider& WithAuthType(const AuthenticationType& value) { SetAuthType(value); return *this;}
    inline AuthProvider& WithAuthType(AuthenticationType&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an Amazon Cognito user pool configuration.</p>
     */
    inline const CognitoConfig& GetCognitoConfig() const{ return m_cognitoConfig; }
    inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
    inline void SetCognitoConfig(const CognitoConfig& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = value; }
    inline void SetCognitoConfig(CognitoConfig&& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = std::move(value); }
    inline AuthProvider& WithCognitoConfig(const CognitoConfig& value) { SetCognitoConfig(value); return *this;}
    inline AuthProvider& WithCognitoConfig(CognitoConfig&& value) { SetCognitoConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const{ return m_openIDConnectConfig; }
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }
    inline void SetOpenIDConnectConfig(const OpenIDConnectConfig& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = value; }
    inline void SetOpenIDConnectConfig(OpenIDConnectConfig&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::move(value); }
    inline AuthProvider& WithOpenIDConnectConfig(const OpenIDConnectConfig& value) { SetOpenIDConnectConfig(value); return *this;}
    inline AuthProvider& WithOpenIDConnectConfig(OpenIDConnectConfig&& value) { SetOpenIDConnectConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }
    inline void SetLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }
    inline void SetLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }
    inline AuthProvider& WithLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { SetLambdaAuthorizerConfig(value); return *this;}
    inline AuthProvider& WithLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}
    ///@}
  private:

    AuthenticationType m_authType;
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
