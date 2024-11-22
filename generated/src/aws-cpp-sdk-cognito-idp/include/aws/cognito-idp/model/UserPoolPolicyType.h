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
   * password-complexity requirements.</p> <p>This data type is a request and
   * response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html">CreateUserPool</a>
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateUserPool.html">UpdateUserPool</a>,
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolPolicyType">AWS
   * API Reference</a></p>
   */
  class UserPoolPolicyType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType();
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The password policy settings for a user pool, including complexity, history,
     * and length requirements.</p>
     */
    inline const PasswordPolicyType& GetPasswordPolicy() const{ return m_passwordPolicy; }
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }
    inline void SetPasswordPolicy(const PasswordPolicyType& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }
    inline void SetPasswordPolicy(PasswordPolicyType&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::move(value); }
    inline UserPoolPolicyType& WithPasswordPolicy(const PasswordPolicyType& value) { SetPasswordPolicy(value); return *this;}
    inline UserPoolPolicyType& WithPasswordPolicy(PasswordPolicyType&& value) { SetPasswordPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy for allowed types of authentication in a user pool.</p>
     */
    inline const SignInPolicyType& GetSignInPolicy() const{ return m_signInPolicy; }
    inline bool SignInPolicyHasBeenSet() const { return m_signInPolicyHasBeenSet; }
    inline void SetSignInPolicy(const SignInPolicyType& value) { m_signInPolicyHasBeenSet = true; m_signInPolicy = value; }
    inline void SetSignInPolicy(SignInPolicyType&& value) { m_signInPolicyHasBeenSet = true; m_signInPolicy = std::move(value); }
    inline UserPoolPolicyType& WithSignInPolicy(const SignInPolicyType& value) { SetSignInPolicy(value); return *this;}
    inline UserPoolPolicyType& WithSignInPolicy(SignInPolicyType&& value) { SetSignInPolicy(std::move(value)); return *this;}
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
