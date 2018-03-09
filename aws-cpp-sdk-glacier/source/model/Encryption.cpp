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

#include <aws/glacier/model/Encryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

Encryption::Encryption() : 
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_kMSContextHasBeenSet(false)
{
}

Encryption::Encryption(const JsonValue& jsonValue) : 
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_kMSContextHasBeenSet(false)
{
  *this = jsonValue;
}

Encryption& Encryption::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EncryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("EncryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKeyId"))
  {
    m_kMSKeyId = jsonValue.GetString("KMSKeyId");

    m_kMSKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSContext"))
  {
    m_kMSContext = jsonValue.GetString("KMSContext");

    m_kMSContextHasBeenSet = true;
  }

  return *this;
}

JsonValue Encryption::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("EncryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kMSKeyIdHasBeenSet)
  {
   payload.WithString("KMSKeyId", m_kMSKeyId);

  }

  if(m_kMSContextHasBeenSet)
  {
   payload.WithString("KMSContext", m_kMSContext);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
