/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

HomeDirectoryMapEntry::HomeDirectoryMapEntry() : 
    m_entryHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_type(MapType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

HomeDirectoryMapEntry::HomeDirectoryMapEntry(JsonView jsonValue) : 
    m_entryHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_type(MapType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

HomeDirectoryMapEntry& HomeDirectoryMapEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Entry"))
  {
    m_entry = jsonValue.GetString("Entry");

    m_entryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = MapTypeMapper::GetMapTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue HomeDirectoryMapEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryHasBeenSet)
  {
   payload.WithString("Entry", m_entry);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MapTypeMapper::GetNameForMapType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
