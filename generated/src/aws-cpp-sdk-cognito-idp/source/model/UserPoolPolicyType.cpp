/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

UserPoolPolicyType::UserPoolPolicyType(JsonView jsonValue)
{
  *this = jsonValue;
}

UserPoolPolicyType& UserPoolPolicyType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PasswordPolicy"))
  {
    m_passwordPolicy = jsonValue.GetObject("PasswordPolicy");
    m_passwordPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SignInPolicy"))
  {
    m_signInPolicy = jsonValue.GetObject("SignInPolicy");
    m_signInPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue UserPoolPolicyType::Jsonize() const
{
  JsonValue payload;

  if(m_passwordPolicyHasBeenSet)
  {
   payload.WithObject("PasswordPolicy", m_passwordPolicy.Jsonize());

  }

  if(m_signInPolicyHasBeenSet)
  {
   payload.WithObject("SignInPolicy", m_signInPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
