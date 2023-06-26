/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DeviceSecretVerifierConfigType::DeviceSecretVerifierConfigType(JsonView jsonValue) : 
    m_passwordVerifierHasBeenSet(false),
    m_saltHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSecretVerifierConfigType& DeviceSecretVerifierConfigType::operator =(JsonView jsonValue)
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
