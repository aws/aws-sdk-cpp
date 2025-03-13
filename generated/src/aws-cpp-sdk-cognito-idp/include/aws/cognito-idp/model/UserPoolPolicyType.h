/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/PasswordPolicyType.h>
#include <aws/cognito-idp/model/SignInPolicyType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A list of user pool policies. Contains the policy that sets
   * password-complexity requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolPolicyType">AWS
   * API Reference</a></p>
   */
  class UserPoolPolicyType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The password policy settings for a user pool, including complexity, history,
     * and length requirements.</p>
     */
    inline const PasswordPolicyType& GetPasswordPolicy() const { return m_passwordPolicy; }
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }
    template<typename PasswordPolicyT = PasswordPolicyType>
    void SetPasswordPolicy(PasswordPolicyT&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::forward<PasswordPolicyT>(value); }
    template<typename PasswordPolicyT = PasswordPolicyType>
    UserPoolPolicyType& WithPasswordPolicy(PasswordPolicyT&& value) { SetPasswordPolicy(std::forward<PasswordPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy for allowed types of authentication in a user pool.</p>
     */
    inline const SignInPolicyType& GetSignInPolicy() const { return m_signInPolicy; }
    inline bool SignInPolicyHasBeenSet() const { return m_signInPolicyHasBeenSet; }
    template<typename SignInPolicyT = SignInPolicyType>
    void SetSignInPolicy(SignInPolicyT&& value) { m_signInPolicyHasBeenSet = true; m_signInPolicy = std::forward<SignInPolicyT>(value); }
    template<typename SignInPolicyT = SignInPolicyType>
    UserPoolPolicyType& WithSignInPolicy(SignInPolicyT&& value) { SetSignInPolicy(std::forward<SignInPolicyT>(value)); return *this;}
    ///@}
  private:

    PasswordPolicyType m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet = false;

    SignInPolicyType m_signInPolicy;
    bool m_signInPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
