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

PasswordData::PasswordData(const JsonValue& jsonValue) : 
    m_ciphertextHasBeenSet(false),
    m_keyPairNameHasBeenSet(false)
{
  *this = jsonValue;
}

PasswordData& PasswordData::operator =(const JsonValue& jsonValue)
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
