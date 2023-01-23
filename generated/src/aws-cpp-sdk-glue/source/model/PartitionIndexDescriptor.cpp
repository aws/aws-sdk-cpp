/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PartitionIndexDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

PartitionIndexDescriptor::PartitionIndexDescriptor() : 
    m_indexNameHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_indexStatus(PartitionIndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false),
    m_backfillErrorsHasBeenSet(false)
{
}

PartitionIndexDescriptor::PartitionIndexDescriptor(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_indexStatus(PartitionIndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false),
    m_backfillErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

PartitionIndexDescriptor& PartitionIndexDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsObject());
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = PartitionIndexStatusMapper::GetPartitionIndexStatusForName(jsonValue.GetString("IndexStatus"));

    m_indexStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackfillErrors"))
  {
    Aws::Utils::Array<JsonView> backfillErrorsJsonList = jsonValue.GetArray("BackfillErrors");
    for(unsigned backfillErrorsIndex = 0; backfillErrorsIndex < backfillErrorsJsonList.GetLength(); ++backfillErrorsIndex)
    {
      m_backfillErrors.push_back(backfillErrorsJsonList[backfillErrorsIndex].AsObject());
    }
    m_backfillErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue PartitionIndexDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsObject(m_keys[keysIndex].Jsonize());
   }
   payload.WithArray("Keys", std::move(keysJsonList));

  }

  if(m_indexStatusHasBeenSet)
  {
   payload.WithString("IndexStatus", PartitionIndexStatusMapper::GetNameForPartitionIndexStatus(m_indexStatus));
  }

  if(m_backfillErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backfillErrorsJsonList(m_backfillErrors.size());
   for(unsigned backfillErrorsIndex = 0; backfillErrorsIndex < backfillErrorsJsonList.GetLength(); ++backfillErrorsIndex)
   {
     backfillErrorsJsonList[backfillErrorsIndex].AsObject(m_backfillErrors[backfillErrorsIndex].Jsonize());
   }
   payload.WithArray("BackfillErrors", std::move(backfillErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
