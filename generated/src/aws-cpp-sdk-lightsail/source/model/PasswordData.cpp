/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PasswordData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

PasswordData::PasswordData() : 
    m_ciphertextHasBeenSet(false),
    m_keyPairNameHasBeenSet(false)
{
}

PasswordData::PasswordData(JsonView jsonValue) : 
    m_ciphertextHasBeenSet(false),
    m_keyPairNameHasBeenSet(false)
{
  *this = jsonValue;
}

PasswordData& PasswordData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ciphertext"))
  {
    m_ciphertext = jsonValue.GetString("ciphertext");

    m_ciphertextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyPairName"))
  {
    m_keyPairName = jsonValue.GetString("keyPairName");

    m_keyPairNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PasswordData::Jsonize() const
{
  JsonValue payload;

  if(m_ciphertextHasBeenSet)
  {
   payload.WithString("ciphertext", m_ciphertext);

  }

  if(m_keyPairNameHasBeenSet)
  {
   payload.WithString("keyPairName", m_keyPairName);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
