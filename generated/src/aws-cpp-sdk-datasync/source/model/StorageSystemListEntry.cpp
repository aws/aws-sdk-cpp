/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/StorageSystemListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

StorageSystemListEntry::StorageSystemListEntry() : 
    m_storageSystemArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

StorageSystemListEntry::StorageSystemListEntry(JsonView jsonValue) : 
    m_storageSystemArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

StorageSystemListEntry& StorageSystemListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageSystemArn"))
  {
    m_storageSystemArn = jsonValue.GetString("StorageSystemArn");

    m_storageSystemArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageSystemListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_storageSystemArnHasBeenSet)
  {
   payload.WithString("StorageSystemArn", m_storageSystemArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
