﻿/**
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
  class AWS_APPSYNC_API AdditionalAuthenticationProvider
  {
  public:
    AdditionalAuthenticationProvider();
    AdditionalAuthenticationProvider(Aws::Utils::Json::JsonView jsonValue);
    AdditionalAuthenticationProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authentication type: API key, Identity and Access Management, OIDC, or
     * Amazon Cognito user pools.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>The authentication type: API key, Identity and Access Management, OIDC, or
     * Amazon Cognito user pools.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>The authentication type: API key, Identity and Access Management, OIDC, or
     * Amazon Cognito user pools.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>The authentication type: API key, Identity and Access Management, OIDC, or
     * Amazon Cognito user pools.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>The authentication type: API key, Identity and Access Management, OIDC, or
     * Amazon Cognito user pools.</p>
     */
    inline AdditionalAuthenticationProvider& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type: API key, Identity and Access Management, OIDC, or
     * Amazon Cognito user pools.</p>
     */
    inline AdditionalAuthenticationProvider& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline const OpenIDConnectConfig& GetOpenIDConnectConfig() const{ return m_openIDConnectConfig; }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline bool OpenIDConnectConfigHasBeenSet() const { return m_openIDConnectConfigHasBeenSet; }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline void SetOpenIDConnectConfig(const OpenIDConnectConfig& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = value; }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline void SetOpenIDConnectConfig(OpenIDConnectConfig&& value) { m_openIDConnectConfigHasBeenSet = true; m_openIDConnectConfig = std::move(value); }

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline AdditionalAuthenticationProvider& WithOpenIDConnectConfig(const OpenIDConnectConfig& value) { SetOpenIDConnectConfig(value); return *this;}

    /**
     * <p>The OpenID Connect configuration.</p>
     */
    inline AdditionalAuthenticationProvider& WithOpenIDConnectConfig(OpenIDConnectConfig&& value) { SetOpenIDConnectConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline const CognitoUserPoolConfig& GetUserPoolConfig() const{ return m_userPoolConfig; }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline bool UserPoolConfigHasBeenSet() const { return m_userPoolConfigHasBeenSet; }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline void SetUserPoolConfig(const CognitoUserPoolConfig& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = value; }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline void SetUserPoolConfig(CognitoUserPoolConfig&& value) { m_userPoolConfigHasBeenSet = true; m_userPoolConfig = std::move(value); }

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline AdditionalAuthenticationProvider& WithUserPoolConfig(const CognitoUserPoolConfig& value) { SetUserPoolConfig(value); return *this;}

    /**
     * <p>The Amazon Cognito user pool configuration.</p>
     */
    inline AdditionalAuthenticationProvider& WithUserPoolConfig(CognitoUserPoolConfig&& value) { SetUserPoolConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration for AWS Lambda function authorization.</p>
     */
    inline const LambdaAuthorizerConfig& GetLambdaAuthorizerConfig() const{ return m_lambdaAuthorizerConfig; }

    /**
     * <p>Configuration for AWS Lambda function authorization.</p>
     */
    inline bool LambdaAuthorizerConfigHasBeenSet() const { return m_lambdaAuthorizerConfigHasBeenSet; }

    /**
     * <p>Configuration for AWS Lambda function authorization.</p>
     */
    inline void SetLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = value; }

    /**
     * <p>Configuration for AWS Lambda function authorization.</p>
     */
    inline void SetLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { m_lambdaAuthorizerConfigHasBeenSet = true; m_lambdaAuthorizerConfig = std::move(value); }

    /**
     * <p>Configuration for AWS Lambda function authorization.</p>
     */
    inline AdditionalAuthenticationProvider& WithLambdaAuthorizerConfig(const LambdaAuthorizerConfig& value) { SetLambdaAuthorizerConfig(value); return *this;}

    /**
     * <p>Configuration for AWS Lambda function authorization.</p>
     */
    inline AdditionalAuthenticationProvider& WithLambdaAuthorizerConfig(LambdaAuthorizerConfig&& value) { SetLambdaAuthorizerConfig(std::move(value)); return *this;}

  private:

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet;

    OpenIDConnectConfig m_openIDConnectConfig;
    bool m_openIDConnectConfigHasBeenSet;

    CognitoUserPoolConfig m_userPoolConfig;
    bool m_userPoolConfigHasBeenSet;

    LambdaAuthorizerConfig m_lambdaAuthorizerConfig;
    bool m_lambdaAuthorizerConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
