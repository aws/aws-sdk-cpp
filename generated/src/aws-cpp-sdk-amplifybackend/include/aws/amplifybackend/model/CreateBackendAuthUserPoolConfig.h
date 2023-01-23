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
    AWS_AMPLIFYBACKEND_API CreateBackendAuthUserPoolConfig();
    AWS_AMPLIFYBACKEND_API CreateBackendAuthUserPoolConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API CreateBackendAuthUserPoolConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthForgotPasswordConfig& GetForgotPassword() const{ return m_forgotPassword; }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline bool ForgotPasswordHasBeenSet() const { return m_forgotPasswordHasBeenSet; }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline void SetForgotPassword(const CreateBackendAuthForgotPasswordConfig& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = value; }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline void SetForgotPassword(CreateBackendAuthForgotPasswordConfig&& value) { m_forgotPasswordHasBeenSet = true; m_forgotPassword = std::move(value); }

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithForgotPassword(const CreateBackendAuthForgotPasswordConfig& value) { SetForgotPassword(value); return *this;}

    /**
     * <p><b>(DEPRECATED)</b> Describes the forgotten password policy for your Amazon
     * Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithForgotPassword(CreateBackendAuthForgotPasswordConfig&& value) { SetForgotPassword(std::move(value)); return *this;}


    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthMFAConfig& GetMfa() const{ return m_mfa; }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline bool MfaHasBeenSet() const { return m_mfaHasBeenSet; }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline void SetMfa(const CreateBackendAuthMFAConfig& value) { m_mfaHasBeenSet = true; m_mfa = value; }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline void SetMfa(CreateBackendAuthMFAConfig&& value) { m_mfaHasBeenSet = true; m_mfa = std::move(value); }

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithMfa(const CreateBackendAuthMFAConfig& value) { SetMfa(value); return *this;}

    /**
     * <p>Describes whether to apply multi-factor authentication policies for your
     * Amazon Cognito user pool configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithMfa(CreateBackendAuthMFAConfig&& value) { SetMfa(std::move(value)); return *this;}


    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthOAuthConfig& GetOAuth() const{ return m_oAuth; }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline bool OAuthHasBeenSet() const { return m_oAuthHasBeenSet; }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline void SetOAuth(const CreateBackendAuthOAuthConfig& value) { m_oAuthHasBeenSet = true; m_oAuth = value; }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline void SetOAuth(CreateBackendAuthOAuthConfig&& value) { m_oAuthHasBeenSet = true; m_oAuth = std::move(value); }

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithOAuth(const CreateBackendAuthOAuthConfig& value) { SetOAuth(value); return *this;}

    /**
     * <p>Describes the OAuth policy and rules for your Amazon Cognito user pool,
     * configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithOAuth(CreateBackendAuthOAuthConfig&& value) { SetOAuth(std::move(value)); return *this;}


    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthPasswordPolicyConfig& GetPasswordPolicy() const{ return m_passwordPolicy; }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline void SetPasswordPolicy(const CreateBackendAuthPasswordPolicyConfig& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline void SetPasswordPolicy(CreateBackendAuthPasswordPolicyConfig&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::move(value); }

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithPasswordPolicy(const CreateBackendAuthPasswordPolicyConfig& value) { SetPasswordPolicy(value); return *this;}

    /**
     * <p>Describes the password policy for your Amazon Cognito user pool, configured
     * as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithPasswordPolicy(CreateBackendAuthPasswordPolicyConfig&& value) { SetPasswordPolicy(std::move(value)); return *this;}


    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline const Aws::Vector<RequiredSignUpAttributesElement>& GetRequiredSignUpAttributes() const{ return m_requiredSignUpAttributes; }

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline bool RequiredSignUpAttributesHasBeenSet() const { return m_requiredSignUpAttributesHasBeenSet; }

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline void SetRequiredSignUpAttributes(const Aws::Vector<RequiredSignUpAttributesElement>& value) { m_requiredSignUpAttributesHasBeenSet = true; m_requiredSignUpAttributes = value; }

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline void SetRequiredSignUpAttributes(Aws::Vector<RequiredSignUpAttributesElement>&& value) { m_requiredSignUpAttributesHasBeenSet = true; m_requiredSignUpAttributes = std::move(value); }

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithRequiredSignUpAttributes(const Aws::Vector<RequiredSignUpAttributesElement>& value) { SetRequiredSignUpAttributes(value); return *this;}

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithRequiredSignUpAttributes(Aws::Vector<RequiredSignUpAttributesElement>&& value) { SetRequiredSignUpAttributes(std::move(value)); return *this;}

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline CreateBackendAuthUserPoolConfig& AddRequiredSignUpAttributes(const RequiredSignUpAttributesElement& value) { m_requiredSignUpAttributesHasBeenSet = true; m_requiredSignUpAttributes.push_back(value); return *this; }

    /**
     * <p>The required attributes to sign up new users in the user pool.</p>
     */
    inline CreateBackendAuthUserPoolConfig& AddRequiredSignUpAttributes(RequiredSignUpAttributesElement&& value) { m_requiredSignUpAttributesHasBeenSet = true; m_requiredSignUpAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline const SignInMethod& GetSignInMethod() const{ return m_signInMethod; }

    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline bool SignInMethodHasBeenSet() const { return m_signInMethodHasBeenSet; }

    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline void SetSignInMethod(const SignInMethod& value) { m_signInMethodHasBeenSet = true; m_signInMethod = value; }

    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline void SetSignInMethod(SignInMethod&& value) { m_signInMethodHasBeenSet = true; m_signInMethod = std::move(value); }

    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithSignInMethod(const SignInMethod& value) { SetSignInMethod(value); return *this;}

    /**
     * <p>Describes the sign-in methods that your Amplify app users use to log in using
     * the Amazon Cognito user pool, configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithSignInMethod(SignInMethod&& value) { SetSignInMethod(std::move(value)); return *this;}


    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline const Aws::String& GetUserPoolName() const{ return m_userPoolName; }

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline bool UserPoolNameHasBeenSet() const { return m_userPoolNameHasBeenSet; }

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline void SetUserPoolName(const Aws::String& value) { m_userPoolNameHasBeenSet = true; m_userPoolName = value; }

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline void SetUserPoolName(Aws::String&& value) { m_userPoolNameHasBeenSet = true; m_userPoolName = std::move(value); }

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline void SetUserPoolName(const char* value) { m_userPoolNameHasBeenSet = true; m_userPoolName.assign(value); }

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithUserPoolName(const Aws::String& value) { SetUserPoolName(value); return *this;}

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithUserPoolName(Aws::String&& value) { SetUserPoolName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito user pool name.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithUserPoolName(const char* value) { SetUserPoolName(value); return *this;}


    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline const CreateBackendAuthVerificationMessageConfig& GetVerificationMessage() const{ return m_verificationMessage; }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline bool VerificationMessageHasBeenSet() const { return m_verificationMessageHasBeenSet; }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline void SetVerificationMessage(const CreateBackendAuthVerificationMessageConfig& value) { m_verificationMessageHasBeenSet = true; m_verificationMessage = value; }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline void SetVerificationMessage(CreateBackendAuthVerificationMessageConfig&& value) { m_verificationMessageHasBeenSet = true; m_verificationMessage = std::move(value); }

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithVerificationMessage(const CreateBackendAuthVerificationMessageConfig& value) { SetVerificationMessage(value); return *this;}

    /**
     * <p>Describes the email or SMS verification message for your Amazon Cognito user
     * pool, configured as a part of your Amplify project.</p>
     */
    inline CreateBackendAuthUserPoolConfig& WithVerificationMessage(CreateBackendAuthVerificationMessageConfig&& value) { SetVerificationMessage(std::move(value)); return *this;}

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

    SignInMethod m_signInMethod;
    bool m_signInMethodHasBeenSet = false;

    Aws::String m_userPoolName;
    bool m_userPoolNameHasBeenSet = false;

    CreateBackendAuthVerificationMessageConfig m_verificationMessage;
    bool m_verificationMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
