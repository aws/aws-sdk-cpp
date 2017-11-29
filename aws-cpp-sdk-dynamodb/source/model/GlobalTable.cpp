/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

GlobalTable::GlobalTable(const JsonValue& jsonValue) : 
    m_globalTableNameHasBeenSet(false),
    m_replicationGroupHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalTable& GlobalTable::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GlobalTableName"))
  {
    m_globalTableName = jsonValue.GetString("GlobalTableName");

    m_globalTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationGroup"))
  {
    Array<JsonValue> replicationGroupJsonList = jsonValue.GetArray("ReplicationGroup");
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
   Array<JsonValue> replicationGroupJsonList(m_replicationGroup.size());
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
