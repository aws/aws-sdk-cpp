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

#include <aws/xray/model/EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

EncryptionConfig::EncryptionConfig() : 
    m_keyIdHasBeenSet(false),
    m_status(EncryptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EncryptionConfig::EncryptionConfig(const JsonValue& jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_status(EncryptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfig& EncryptionConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EncryptionStatusMapper::GetEncryptionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EncryptionStatusMapper::GetNameForEncryptionStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
