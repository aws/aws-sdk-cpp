/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/EncryptionKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

EncryptionKey::EncryptionKey() : 
    m_type(EncryptionKeyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

EncryptionKey::EncryptionKey(JsonView jsonValue) : 
    m_type(EncryptionKeyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionKey& EncryptionKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EncryptionKeyTypeMapper::GetEncryptionKeyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionKey::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EncryptionKeyTypeMapper::GetNameForEncryptionKeyType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
