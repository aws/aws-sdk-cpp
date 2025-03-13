/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/CreateBackendAuthForgotPasswordConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthMFAConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthOAuthConfig.h>
#include <aws/amplifybackend/model/CreateBackendAuthPasswordPolicyConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifybackend/model/SignInMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/CreateBackendAuthVerificationMessageConfig.h>
#include <aws/amplifybackend/model/RequiredSignUpAttributesElement.h>
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
   * <p>Describes the Amazon Cognito user pool configuration for the auth resource to
   * be configured for your Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendAuthUserPoolConfig">AWS
   * API Reference</a></p>
   */
  class CreateBackendAuthUserPoolConfig
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendAuthUserPoolConfig() = default;
    AWS_AMPLIFYBACKEND_API CreateBackendAuthUserPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthUserPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthForgotPasswordConfig& GetForgotPassword() const { return m_forgotPassword; }
    inline bool ForgotPasswordHasBeenSet() const { return m_forgotPasswordHasBeenSet; }
    template<typename ForgotPasswordT = CreateBackendAuthForgotPasswordConfig>
    void SetForgotPassword(ForgotPasswordT&& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = std::forward<ForgotPasswordT>(value); }
    template<typename ForgotPasswordT = CreateBackendAuthForgotPasswordConfig>
    CreateBackendAuthUserPoolConfig& WithForgotPassword(ForgotPasswordT&& value) { SetForgotPassword(std::forward<ForgotPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthMFAConfig& GetMfa() const { return m_mfa; }
    inline bool MfaHasBeenSet() const { return m_mfaHasBeenSet; }
    template<typename MfaT = CreateBackendAuthMFAConfig>
    void SetMfa(MfaT&& value) { m_mfaHasBeenSet = true; m_mfa = std::forward<MfaT>(value); }
    template<typename MfaT = CreateBackendAuthMFAConfig>
    CreateBackendAuthUserPoolConfig& WithMfa(MfaT&& value) { SetMfa(std::forward<MfaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthOAuthConfig& GetOAuth() const { return m_oAuth; }
    inline bool OAuthHasBeenSet() const { return m_oAuthHasBeenSet; }
    template<typename OAuthT = CreateBackendAuthOAuthConfig>
    void SetOAuth(OAuthT&& value) { m_oAuthHasBeenSet = true; m_oAuth = std::forward<OAuthT>(value); }
    template<typename OAuthT = CreateBackendAuthOAuthConfig>
    CreateBackendAuthUserPoolConfig& WithOAuth(OAuthT&& value) { SetOAuth(std::forward<OAuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthPasswordPolicyConfig& GetPasswordPolicy() const { return m_passwordPolicy; }
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }
    template<typename PasswordPolicyT = CreateBackendAuthPasswordPolicyConfig>
    void SetPasswordPolicy(PasswordPolicyT&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::forward<PasswordPolicyT>(value); }
    template<typename PasswordPolicyT = CreateBackendAuthPasswordPolicyConfig>
    CreateBackendAuthUserPoolConfig& WithPasswordPolicy(PasswordPolicyT&& value) { SetPasswordPolicy(std::forward<PasswordPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline const Aws::Vector<RequiredSignUpAttributesElement>& GetRequiredSignUpAttributes() const { return m_requiredSignUpAttributes; }
    inline bool RequiredSignUpAttributesHasBeenSet() const { return m_requiredSignUpAttributesHasBeenSet; }
    template<typename RequiredSignUpAttributesT = Aws::Vector<RequiredSignUpAttributesElement>>
    void SetRequiredSignUpAttributes(RequiredSignUpAttributesT&& value) { m_requiredSignUpAttributesHasBeenSet = true; m_requiredSignUpAttributes = std::forward<RequiredSignUpAttributesT>(value); }
    template<typename RequiredSignUpAttributesT = Aws::Vector<RequiredSignUpAttributesElement>>
    CreateBackendAuthUserPoolConfig& WithRequiredSignUpAttributes(RequiredSignUpAttributesT&& value) { SetRequiredSignUpAttributes(std::forward<RequiredSignUpAttributesT>(value)); return *this;}
    inline CreateBackendAuthUserPoolConfig& AddRequiredSignUpAttributes(RequiredSignUpAttributesElement value) { m_requiredSignUpAttributesHasBeenSet = true; m_requiredSignUpAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline SignInMethod GetSignInMethod() const { return m_signInMethod; }
    inline bool SignInMethodHasBeenSet() const { return m_signInMethodHasBeenSet; }
    inline void SetSignInMethod(SignInMethod value) { m_signInMethodHasBeenSet = true; m_signInMethod = value; }
    inline CreateBackendAuthUserPoolConfig& WithSignInMethod(SignInMethod value) { SetSignInMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline const Aws::String& GetUserPoolName() const { return m_userPoolName; }
    inline bool UserPoolNameHasBeenSet() const { return m_userPoolNameHasBeenSet; }
    template<typename UserPoolNameT = Aws::String>
    void SetUserPoolName(UserPoolNameT&& value) { m_userPoolNameHasBeenSet = true; m_userPoolName = std::forward<UserPoolNameT>(value); }
    template<typename UserPoolNameT = Aws::String>
    CreateBackendAuthUserPoolConfig& WithUserPoolName(UserPoolNameT&& value) { SetUserPoolName(std::forward<UserPoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthVerificationMessageConfig& GetVerificationMessage() const { return m_verificationMessage; }
    inline bool VerificationMessageHasBeenSet() const { return m_verificationMessageHasBeenSet; }
    template<typename VerificationMessageT = CreateBackendAuthVerificationMessageConfig>
    void SetVerificationMessage(VerificationMessageT&& value) { m_verificationMessageHasBeenSet = true; m_verificationMessage = std::forward<VerificationMessageT>(value); }
    template<typename VerificationMessageT = CreateBackendAuthVerificationMessageConfig>
    CreateBackendAuthUserPoolConfig& WithVerificationMessage(VerificationMessageT&& value) { SetVerificationMessage(std::forward<VerificationMessageT>(value)); return *this;}
    ///@}
  private:

    CreateBackendAuthForgotPasswordConfig m_forgotPassword;
    bool m_forgotPasswordHasBeenSet = false;

    CreateBackendAuthMFAConfig m_mfa;
    bool m_mfaHasBeenSet = false;

    CreateBackendAuthOAuthConfig m_oAuth;
    bool m_oAuthHasBeenSet = false;

    CreateBackendAuthPasswordPolicyConfig m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet = false;

    Aws::Vector<RequiredSignUpAttributesElement> m_requiredSignUpAttributes;
    bool m_requiredSignUpAttributesHasBeenSet = false;

    SignInMethod m_signInMethod{SignInMethod::NOT_SET};
    bool m_signInMethodHasBeenSet = false;

    Aws::String m_userPoolName;
    bool m_userPoolNameHasBeenSet = false;

    CreateBackendAuthVerificationMessageConfig m_verificationMessage;
    bool m_verificationMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
