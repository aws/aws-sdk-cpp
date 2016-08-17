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

UserPoolPolicyType::UserPoolPolicyType() : 
    m_passwordPolicyHasBeenSet(false)
{
}

UserPoolPolicyType::UserPoolPolicyType(const JsonValue& jsonValue) : 
    m_passwordPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolPolicyType& UserPoolPolicyType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PasswordPolicy"))
  {
    m_passwordPolicy = jsonValue.GetObject("PasswordPolicy");

    m_passwordPolicyHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws