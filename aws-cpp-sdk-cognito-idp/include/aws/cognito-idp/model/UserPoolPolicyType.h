/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/PasswordPolicyType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The type of policy in a user pool.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType
  {
  public:
    UserPoolPolicyType();
    UserPoolPolicyType(const Aws::Utils::Json::JsonValue& jsonValue);
    UserPoolPolicyType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A container with information about the user pool password policy.</p>
     */
    inline const PasswordPolicyType& GetPasswordPolicy() const{ return m_passwordPolicy; }

    /**
     * <p>A container with information about the user pool password policy.</p>
     */
    inline void SetPasswordPolicy(const PasswordPolicyType& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }

    /**
     * <p>A container with information about the user pool password policy.</p>
     */
    inline void SetPasswordPolicy(PasswordPolicyType&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }

    /**
     * <p>A container with information about the user pool password policy.</p>
     */
    inline UserPoolPolicyType& WithPasswordPolicy(const PasswordPolicyType& value) { SetPasswordPolicy(value); return *this;}

    /**
     * <p>A container with information about the user pool password policy.</p>
     */
    inline UserPoolPolicyType& WithPasswordPolicy(PasswordPolicyType&& value) { SetPasswordPolicy(value); return *this;}

  private:
    PasswordPolicyType m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
