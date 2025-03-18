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
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig() = default;
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API UpdateBackendAuthUserPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p><b>(DEPRECATED)</b> Describes the forgot password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthForgotPasswordConfig& GetForgotPassword() const { return m_forgotPassword; }
    inline bool ForgotPasswordHasBeenSet() const { return m_forgotPasswordHasBeenSet; }
    template<typename ForgotPasswordT = UpdateBackendAuthForgotPasswordConfig>
    void SetForgotPassword(ForgotPasswordT&& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = std::forward<ForgotPasswordT>(value); }
    template<typename ForgotPasswordT = UpdateBackendAuthForgotPasswordConfig>
    UpdateBackendAuthUserPoolConfig& WithForgotPassword(ForgotPasswordT&& value) { SetForgotPassword(std::forward<ForgotPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthMFAConfig& GetMfa() const { return m_mfa; }
    inline bool MfaHasBeenSet() const { return m_mfaHasBeenSet; }
    template<typename MfaT = UpdateBackendAuthMFAConfig>
    void SetMfa(MfaT&& value) { m_mfaHasBeenSet = true; m_mfa = std::forward<MfaT>(value); }
    template<typename MfaT = UpdateBackendAuthMFAConfig>
    UpdateBackendAuthUserPoolConfig& WithMfa(MfaT&& value) { SetMfa(std::forward<MfaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthOAuthConfig& GetOAuth() const { return m_oAuth; }
    inline bool OAuthHasBeenSet() const { return m_oAuthHasBeenSet; }
    template<typename OAuthT = UpdateBackendAuthOAuthConfig>
    void SetOAuth(OAuthT&& value) { m_oAuthHasBeenSet = true; m_oAuth = std::forward<OAuthT>(value); }
    template<typename OAuthT = UpdateBackendAuthOAuthConfig>
    UpdateBackendAuthUserPoolConfig& WithOAuth(OAuthT&& value) { SetOAuth(std::forward<OAuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthPasswordPolicyConfig& GetPasswordPolicy() const { return m_passwordPolicy; }
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }
    template<typename PasswordPolicyT = UpdateBackendAuthPasswordPolicyConfig>
    void SetPasswordPolicy(PasswordPolicyT&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::forward<PasswordPolicyT>(value); }
    template<typename PasswordPolicyT = UpdateBackendAuthPasswordPolicyConfig>
    UpdateBackendAuthUserPoolConfig& WithPasswordPolicy(PasswordPolicyT&& value) { SetPasswordPolicy(std::forward<PasswordPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline const UpdateBackendAuthVerificationMessageConfig& GetVerificationMessage() const { return m_verificationMessage; }
    inline bool VerificationMessageHasBeenSet() const { return m_verificationMessageHasBeenSet; }
    template<typename VerificationMessageT = UpdateBackendAuthVerificationMessageConfig>
    void SetVerificationMessage(VerificationMessageT&& value) { m_verificationMessageHasBeenSet = true; m_verificationMessage = std::forward<VerificationMessageT>(value); }
    template<typename VerificationMessageT = UpdateBackendAuthVerificationMessageConfig>
    UpdateBackendAuthUserPoolConfig& WithVerificationMessage(VerificationMessageT&& value) { SetVerificationMessage(std::forward<VerificationMessageT>(value)); return *this;}
    ///@}
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
