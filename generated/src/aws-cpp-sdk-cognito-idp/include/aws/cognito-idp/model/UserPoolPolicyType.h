/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/PasswordPolicyType.h>
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
   * <p>The policy associated with a user pool.</p><p><h3>See Also:</h3>   <a
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
     * <p>The password policy.</p>
     */
    inline const PasswordPolicyType& GetPasswordPolicy() const{ return m_passwordPolicy; }
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }
    inline void SetPasswordPolicy(const PasswordPolicyType& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }
    inline void SetPasswordPolicy(PasswordPolicyType&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::move(value); }
    inline UserPoolPolicyType& WithPasswordPolicy(const PasswordPolicyType& value) { SetPasswordPolicy(value); return *this;}
    inline UserPoolPolicyType& WithPasswordPolicy(PasswordPolicyType&& value) { SetPasswordPolicy(std::move(value)); return *this;}
    ///@}
  private:

    PasswordPolicyType m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
