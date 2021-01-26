/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/EncryptionKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

EncryptionKey::EncryptionKey() : 
    m_idHasBeenSet(false),
    m_type(EncryptionKeyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EncryptionKey::EncryptionKey(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(EncryptionKeyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionKey& EncryptionKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = EncryptionKeyTypeMapper::GetEncryptionKeyTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionKey::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EncryptionKeyTypeMapper::GetNameForEncryptionKeyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
