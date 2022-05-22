/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration() : 
    m_keyIdHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
