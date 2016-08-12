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
#include <aws/cognito-idp/model/DeviceSecretVerifierConfigType.h>
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

DeviceSecretVerifierConfigType::DeviceSecretVerifierConfigType() : 
    m_passwordVerifierHasBeenSet(false),
    m_saltHasBeenSet(false)
{
}

DeviceSecretVerifierConfigType::DeviceSecretVerifierConfigType(const JsonValue& jsonValue) : 
    m_passwordVerifierHasBeenSet(false),
    m_saltHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSecretVerifierConfigType& DeviceSecretVerifierConfigType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PasswordVerifier"))
  {
    m_passwordVerifier = jsonValue.GetString("PasswordVerifier");

    m_passwordVerifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Salt"))
  {
    m_salt = jsonValue.GetString("Salt");

    m_saltHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSecretVerifierConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_passwordVerifierHasBeenSet)
  {
   payload.WithString("PasswordVerifier", m_passwordVerifier);

  }

  if(m_saltHasBeenSet)
  {
   payload.WithString("Salt", m_salt);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws