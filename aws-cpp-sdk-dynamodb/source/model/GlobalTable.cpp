/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GlobalTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

GlobalTable::GlobalTable() : 
    m_globalTableNameHasBeenSet(false),
    m_replicationGroupHasBeenSet(false)
{
}

GlobalTable::GlobalTable(JsonView jsonValue) : 
    m_globalTableNameHasBeenSet(false),
    m_replicationGroupHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalTable& GlobalTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalTableName"))
  {
    m_globalTableName = jsonValue.GetString("GlobalTableName");

    m_globalTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationGroup"))
  {
    Aws::Utils::Array<JsonView> replicationGroupJsonList = jsonValue.GetArray("ReplicationGroup");
    for(unsigned replicationGroupIndex = 0; replicationGroupIndex < replicationGroupJsonList.GetLength(); ++replicationGroupIndex)
    {
      m_replicationGroup.push_back(replicationGroupJsonList[replicationGroupIndex].AsObject());
    }
    m_replicationGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalTable::Jsonize() const
{
  JsonValue payload;

  if(m_globalTableNameHasBeenSet)
  {
   payload.WithString("GlobalTableName", m_globalTableName);

  }

  if(m_replicationGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationGroupJsonList(m_replicationGroup.size());
   for(unsigned replicationGroupIndex = 0; replicationGroupIndex < replicationGroupJsonList.GetLength(); ++replicationGroupIndex)
   {
     replicationGroupJsonList[replicationGroupIndex].AsObject(m_replicationGroup[replicationGroupIndex].Jsonize());
   }
   payload.WithArray("ReplicationGroup", std::move(replicationGroupJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
