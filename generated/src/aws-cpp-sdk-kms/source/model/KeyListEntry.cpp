/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

KeyListEntry::KeyListEntry() : 
    m_keyIdHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
}

KeyListEntry::KeyListEntry(JsonView jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
  *this = jsonValue;
}

KeyListEntry& KeyListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");

    m_keyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
