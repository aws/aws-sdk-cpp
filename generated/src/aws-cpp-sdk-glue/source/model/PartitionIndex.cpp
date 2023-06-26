/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PartitionIndex.h>
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

PartitionIndex::PartitionIndex() : 
    m_keysHasBeenSet(false),
    m_indexNameHasBeenSet(false)
{
}

PartitionIndex::PartitionIndex(JsonView jsonValue) : 
    m_keysHasBeenSet(false),
    m_indexNameHasBeenSet(false)
{
  *this = jsonValue;
}

PartitionIndex& PartitionIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsString());
    }
    m_keysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PartitionIndex::Jsonize() const
{
  JsonValue payload;

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
   }
   payload.WithArray("Keys", std::move(keysJsonList));

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
