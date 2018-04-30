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

#include <aws/dynamodb/model/ReplicaSettingsUpdate.h>
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

ReplicaSettingsUpdate::ReplicaSettingsUpdate() : 
    m_regionNameHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet(false)
{
}

ReplicaSettingsUpdate::ReplicaSettingsUpdate(const JsonValue& jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaSettingsUpdate& ReplicaSettingsUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityUnits"))
  {
    m_replicaProvisionedReadCapacityUnits = jsonValue.GetInt64("ReplicaProvisionedReadCapacityUnits");

    m_replicaProvisionedReadCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaGlobalSecondaryIndexSettingsUpdate"))
  {
    Array<JsonValue> replicaGlobalSecondaryIndexSettingsUpdateJsonList = jsonValue.GetArray("ReplicaGlobalSecondaryIndexSettingsUpdate");
    for(unsigned replicaGlobalSecondaryIndexSettingsUpdateIndex = 0; replicaGlobalSecondaryIndexSettingsUpdateIndex < replicaGlobalSecondaryIndexSettingsUpdateJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsUpdateIndex)
    {
      m_replicaGlobalSecondaryIndexSettingsUpdate.push_back(replicaGlobalSecondaryIndexSettingsUpdateJsonList[replicaGlobalSecondaryIndexSettingsUpdateIndex].AsObject());
    }
    m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaSettingsUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_replicaProvisionedReadCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReplicaProvisionedReadCapacityUnits", m_replicaProvisionedReadCapacityUnits);

  }

  if(m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet)
  {
   Array<JsonValue> replicaGlobalSecondaryIndexSettingsUpdateJsonList(m_replicaGlobalSecondaryIndexSettingsUpdate.size());
   for(unsigned replicaGlobalSecondaryIndexSettingsUpdateIndex = 0; replicaGlobalSecondaryIndexSettingsUpdateIndex < replicaGlobalSecondaryIndexSettingsUpdateJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsUpdateIndex)
   {
     replicaGlobalSecondaryIndexSettingsUpdateJsonList[replicaGlobalSecondaryIndexSettingsUpdateIndex].AsObject(m_replicaGlobalSecondaryIndexSettingsUpdate[replicaGlobalSecondaryIndexSettingsUpdateIndex].Jsonize());
   }
   payload.WithArray("ReplicaGlobalSecondaryIndexSettingsUpdate", std::move(replicaGlobalSecondaryIndexSettingsUpdateJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
