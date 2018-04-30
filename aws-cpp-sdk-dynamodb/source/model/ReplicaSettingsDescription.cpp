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

#include <aws/dynamodb/model/ReplicaSettingsDescription.h>
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

ReplicaSettingsDescription::ReplicaSettingsDescription() : 
    m_regionNameHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityUnits(0),
    m_replicaProvisionedWriteCapacityUnitsHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsHasBeenSet(false)
{
}

ReplicaSettingsDescription::ReplicaSettingsDescription(const JsonValue& jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityUnits(0),
    m_replicaProvisionedWriteCapacityUnitsHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaSettingsDescription& ReplicaSettingsDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatus"))
  {
    m_replicaStatus = ReplicaStatusMapper::GetReplicaStatusForName(jsonValue.GetString("ReplicaStatus"));

    m_replicaStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityUnits"))
  {
    m_replicaProvisionedReadCapacityUnits = jsonValue.GetInt64("ReplicaProvisionedReadCapacityUnits");

    m_replicaProvisionedReadCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedWriteCapacityUnits"))
  {
    m_replicaProvisionedWriteCapacityUnits = jsonValue.GetInt64("ReplicaProvisionedWriteCapacityUnits");

    m_replicaProvisionedWriteCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaGlobalSecondaryIndexSettings"))
  {
    Array<JsonValue> replicaGlobalSecondaryIndexSettingsJsonList = jsonValue.GetArray("ReplicaGlobalSecondaryIndexSettings");
    for(unsigned replicaGlobalSecondaryIndexSettingsIndex = 0; replicaGlobalSecondaryIndexSettingsIndex < replicaGlobalSecondaryIndexSettingsJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsIndex)
    {
      m_replicaGlobalSecondaryIndexSettings.push_back(replicaGlobalSecondaryIndexSettingsJsonList[replicaGlobalSecondaryIndexSettingsIndex].AsObject());
    }
    m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaSettingsDescription::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_replicaStatusHasBeenSet)
  {
   payload.WithString("ReplicaStatus", ReplicaStatusMapper::GetNameForReplicaStatus(m_replicaStatus));
  }

  if(m_replicaProvisionedReadCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReplicaProvisionedReadCapacityUnits", m_replicaProvisionedReadCapacityUnits);

  }

  if(m_replicaProvisionedWriteCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReplicaProvisionedWriteCapacityUnits", m_replicaProvisionedWriteCapacityUnits);

  }

  if(m_replicaGlobalSecondaryIndexSettingsHasBeenSet)
  {
   Array<JsonValue> replicaGlobalSecondaryIndexSettingsJsonList(m_replicaGlobalSecondaryIndexSettings.size());
   for(unsigned replicaGlobalSecondaryIndexSettingsIndex = 0; replicaGlobalSecondaryIndexSettingsIndex < replicaGlobalSecondaryIndexSettingsJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsIndex)
   {
     replicaGlobalSecondaryIndexSettingsJsonList[replicaGlobalSecondaryIndexSettingsIndex].AsObject(m_replicaGlobalSecondaryIndexSettings[replicaGlobalSecondaryIndexSettingsIndex].Jsonize());
   }
   payload.WithArray("ReplicaGlobalSecondaryIndexSettings", std::move(replicaGlobalSecondaryIndexSettingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
