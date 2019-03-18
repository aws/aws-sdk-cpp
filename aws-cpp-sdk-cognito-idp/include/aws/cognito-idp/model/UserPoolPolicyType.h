/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_COGNITOIDENTITYPROVIDER_API UserPoolPolicyType
  {
  public:
    UserPoolPolicyType();
    UserPoolPolicyType(Aws::Utils::Json::JsonView jsonValue);
    UserPoolPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The password policy.</p>
     */
    inline const PasswordPolicyType& GetPasswordPolicy() const{ return m_passwordPolicy; }

    /**
     * <p>The password policy.</p>
     */
    inline bool PasswordPolicyHasBeenSet() const { return m_passwordPolicyHasBeenSet; }

    /**
     * <p>The password policy.</p>
     */
    inline void SetPasswordPolicy(const PasswordPolicyType& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = value; }

    /**
     * <p>The password policy.</p>
     */
    inline void SetPasswordPolicy(PasswordPolicyType&& value) { m_passwordPolicyHasBeenSet = true; m_passwordPolicy = std::move(value); }

    /**
     * <p>The password policy.</p>
     */
    inline UserPoolPolicyType& WithPasswordPolicy(const PasswordPolicyType& value) { SetPasswordPolicy(value); return *this;}

    /**
     * <p>The password policy.</p>
     */
    inline UserPoolPolicyType& WithPasswordPolicy(PasswordPolicyType&& value) { SetPasswordPolicy(std::move(value)); return *this;}

  private:

    PasswordPolicyType m_passwordPolicy;
    bool m_passwordPolicyHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
