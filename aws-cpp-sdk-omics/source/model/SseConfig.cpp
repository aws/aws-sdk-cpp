/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SseConfig::SseConfig() : 
    m_keyArnHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SseConfig::SseConfig(JsonView jsonValue) : 
    m_keyArnHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SseConfig& SseConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyArn"))
  {
    m_keyArn = jsonValue.GetString("keyArn");

    m_keyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SseConfig::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("keyArn", m_keyArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
