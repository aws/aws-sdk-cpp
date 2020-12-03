/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/UpdateBackendAuthForgotPasswordConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthMFAConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthOAuthConfig.h>
#include <aws/amplifybackend/model/UpdateBackendAuthPasswordPolicyConfig.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes the Amazon Cognito user pool configuration to configure the
   * authorization resource for your Amplify project on an update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthUserPoolConfig">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig
  {
  public:
    UpdateBackendAuthUserPoolConfig();
    UpdateBackendAuthUserPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    UpdateBackendAuthUserPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the forgot password policy for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthForgotPasswordConfig& GetForgotPassword() const{ return m_forgotPassword; }

    /**
     * <p>Describes the forgot password policy for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline bool ForgotPasswordHasBeenSet() const { return m_forgotPasswordHasBeenSet; }

    /**
     * <p>Describes the forgot password policy for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline void SetForgotPassword(const UpdateBackendAuthForgotPasswordConfig& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = value; }

    /**
     * <p>Describes the forgot password policy for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline void SetForgotPassword(UpdateBackendAuthForgotPasswordConfig&& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = std::move(value); }

    /**
     * <p>Describes the forgot password policy for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithForgotPassword(const UpdateBackendAuthForgotPasswordConfig& value) { SetForgotPassword(value); return *this;}

    /**
     * <p>Describes the forgot password policy for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithForgotPassword(UpdateBackendAuthForgotPasswordConfig&& value) { SetForgotPassword(std::move(value)); return *this;}


    /**
     * <p>Describes whether to apply multi-factor authentication (MFA) policies for
     * your Amazon Cognito user pool that's configured as a part of your Amplify
     * project.</p>
     */
    inline const UpdateBackendAuthMFAConfig& GetMfa() const{ return m_mfa; }

    /**
     * <p>Describes whether to apply multi-factor authentication (MFA) policies for
     * your Amazon Cognito user pool that's configured as a part of your Amplify
     * project.</p>
     */
    inline bool MfaHasBeenSet() const { return m_mfaHasBeenSet; }

    /**
     * <p>Describes whether to apply multi-factor authentication (MFA) policies for
     * your Amazon Cognito user pool that's configured as a part of your Amplify
     * project.</p>
     */
    inline void SetMfa(const UpdateBackendAuthMFAConfig& value) { m_mfaHasBeenSet = true; m_mfa = value; }

    /**
     * <p>Describes whether to apply multi-factor authentication (MFA) policies for
     * your Amazon Cognito user pool that's configured as a part of your Amplify
     * project.</p>
     */
    inline void SetMfa(UpdateBackendAuthMFAConfig&& value) { m_mfaHasBeenSet = true; m_mfa = std::move(value); }

    /**
     * <p>Describes whether to apply multi-factor authentication (MFA) policies for
     * your Amazon Cognito user pool that's configured as a part of your Amplify
     * project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithMfa(const UpdateBackendAuthMFAConfig& value) { SetMfa(value); return *this;}

    /**
     * <p>Describes whether to apply multi-factor authentication (MFA) policies for
     * your Amazon Cognito user pool that's configured as a part of your Amplify
     * project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithMfa(UpdateBackendAuthMFAConfig&& value) { SetMfa(std::move(value)); return *this;}


    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthOAuthConfig& GetOAuth() const{ return m_oAuth; }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline bool OAuthHasBeenSet() const { return m_oAuthHasBeenSet; }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline void SetOAuth(const UpdateBackendAuthOAuthConfig& value) { m_oAuthHasBeenSet = true; m_oAuth = value; }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline void SetOAuth(UpdateBackendAuthOAuthConfig&& value) { m_oAuthHasBeenSet = true; m_oAuth = std::move(value); }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithOAuth(const UpdateBackendAuthOAuthConfig& value) { SetOAuth(value); return *this;}

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithOAuth(UpdateBackendAuthOAuthConfig&& value) { SetOAuth(std::move(value)); return *this;}


    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthPasswordPolicyConfig& GetPasswordPolicy() const{ return m_passwordPolicy; }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline void SetPasswordPolicy(const UpdateBackendAuthPasswordPolicyConfig& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline void SetPasswordPolicy(UpdateBackendAuthPasswordPolicyConfig&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::move(value); }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithPasswordPolicy(const UpdateBackendAuthPasswordPolicyConfig& value) { SetPasswordPolicy(value); return *this;}

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithPasswordPolicy(UpdateBackendAuthPasswordPolicyConfig&& value) { SetPasswordPolicy(std::move(value)); return *this;}

  private:

    UpdateBackendAuthForgotPasswordConfig m_forgotPassword;
    bool m_forgotPasswordHasBeenSet;

    UpdateBackendAuthMFAConfig m_mfa;
    bool m_mfaHasBeenSet;

    UpdateBackendAuthOAuthConfig m_oAuth;
    bool m_oAuthHasBeenSet;

    UpdateBackendAuthPasswordPolicyConfig m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
