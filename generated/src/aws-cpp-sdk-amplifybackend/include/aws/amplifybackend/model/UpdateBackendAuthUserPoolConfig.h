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
#include <aws/amplifybackend/model/UpdateBackendAuthVerificationMessageConfig.h>
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
   * <p>Describes the Amazon Cognito user pool configuration for the authorization
   * resource to be configured for your Amplify project on an update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/UpdateBackendAuthUserPoolConfig">AWS
   * API Reference</a></p>
   */
  class UpdateBackendAuthUserPoolConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig();
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthForgotPasswordConfig& GetForgotPassword() const{ return m_forgotPassword; }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline bool ForgotPasswordHasBeenSet() const { return m_forgotPasswordHasBeenSet; }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline void SetForgotPassword(const UpdateBackendAuthForgotPasswordConfig& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = value; }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline void SetForgotPassword(UpdateBackendAuthForgotPasswordConfig&& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = std::move(value); }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithForgotPassword(const UpdateBackendAuthForgotPasswordConfig& value) { SetForgotPassword(value); return *this;}

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithForgotPassword(UpdateBackendAuthForgotPasswordConfig&& value) { SetForgotPassword(std::move(value)); return *this;}


    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthMFAConfig& GetMfa() const{ return m_mfa; }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline bool MfaHasBeenSet() const { return m_mfaHasBeenSet; }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline void SetMfa(const UpdateBackendAuthMFAConfig& value) { m_mfaHasBeenSet = true; m_mfa = value; }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline void SetMfa(UpdateBackendAuthMFAConfig&& value) { m_mfaHasBeenSet = true; m_mfa = std::move(value); }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithMfa(const UpdateBackendAuthMFAConfig& value) { SetMfa(value); return *this;}

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
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


    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthVerificationMessageConfig& GetVerificationMessage() const{ return m_verificationMessage; }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline bool VerificationMessageHasBeenSet() const { return m_verificationMessageHasBeenSet; }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline void SetVerificationMessage(const UpdateBackendAuthVerificationMessageConfig& value) { m_verificationMessageHasBeenSet = true; m_verificationMessage = value; }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline void SetVerificationMessage(UpdateBackendAuthVerificationMessageConfig&& value) { m_verificationMessageHasBeenSet = true; m_verificationMessage = std::move(value); }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithVerificationMessage(const UpdateBackendAuthVerificationMessageConfig& value) { SetVerificationMessage(value); return *this;}

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline UpdateBackendAuthUserPoolConfig& WithVerificationMessage(UpdateBackendAuthVerificationMessageConfig&& value) { SetVerificationMessage(std::move(value)); return *this;}

  private:

    UpdateBackendAuthForgotPasswordConfig m_forgotPassword;
    bool m_forgotPasswordHasBeenSet = false;

    UpdateBackendAuthMFAConfig m_mfa;
    bool m_mfaHasBeenSet = false;

    UpdateBackendAuthOAuthConfig m_oAuth;
    bool m_oAuthHasBeenSet = false;

    UpdateBackendAuthPasswordPolicyConfig m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet = false;

    UpdateBackendAuthVerificationMessageConfig m_verificationMessage;
    bool m_verificationMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
