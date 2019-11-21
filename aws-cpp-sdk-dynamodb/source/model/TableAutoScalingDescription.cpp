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

#include <aws/dynamodb/model/TableAutoScalingDescription.h>
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

TableAutoScalingDescription::TableAutoScalingDescription() : 
    m_tableNameHasBeenSet(false),
    m_tableStatus(TableStatus::NOT_SET),
    m_tableStatusHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

TableAutoScalingDescription::TableAutoScalingDescription(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_tableStatus(TableStatus::NOT_SET),
    m_tableStatusHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
  *this = jsonValue;
}

TableAutoScalingDescription& TableAutoScalingDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableStatus"))
  {
    m_tableStatus = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("TableStatus"));

    m_tableStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Replicas"))
  {
    Array<JsonView> replicasJsonList = jsonValue.GetArray("Replicas");
    for(unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex)
    {
      m_replicas.push_back(replicasJsonList[replicasIndex].AsObject());
    }
    m_replicasHasBeenSet = true;
  }

  return *this;
}

JsonValue TableAutoScalingDescription::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_tableStatusHasBeenSet)
  {
   payload.WithString("TableStatus", TableStatusMapper::GetNameForTableStatus(m_tableStatus));
  }

  if(m_replicasHasBeenSet)
  {
   Array<JsonValue> replicasJsonList(m_replicas.size());
   for(unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex)
   {
     replicasJsonList[replicasIndex].AsObject(m_replicas[replicasIndex].Jsonize());
   }
   payload.WithArray("Replicas", std::move(replicasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
