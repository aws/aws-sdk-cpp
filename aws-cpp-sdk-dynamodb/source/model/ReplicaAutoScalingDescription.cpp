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

#include <aws/dynamodb/model/ReplicaAutoScalingDescription.h>
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

ReplicaAutoScalingDescription::ReplicaAutoScalingDescription() : 
    m_regionNameHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false)
{
}

ReplicaAutoScalingDescription::ReplicaAutoScalingDescription(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaAutoScalingDescription& ReplicaAutoScalingDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Array<JsonView> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityAutoScalingSettings"))
  {
    m_replicaProvisionedReadCapacityAutoScalingSettings = jsonValue.GetObject("ReplicaProvisionedReadCapacityAutoScalingSettings");

    m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedWriteCapacityAutoScalingSettings"))
  {
    m_replicaProvisionedWriteCapacityAutoScalingSettings = jsonValue.GetObject("ReplicaProvisionedWriteCapacityAutoScalingSettings");

    m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatus"))
  {
    m_replicaStatus = ReplicaStatusMapper::GetReplicaStatusForName(jsonValue.GetString("ReplicaStatus"));

    m_replicaStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaAutoScalingDescription::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  if(m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedReadCapacityAutoScalingSettings", m_replicaProvisionedReadCapacityAutoScalingSettings.Jsonize());

  }

  if(m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedWriteCapacityAutoScalingSettings", m_replicaProvisionedWriteCapacityAutoScalingSettings.Jsonize());

  }

  if(m_replicaStatusHasBeenSet)
  {
   payload.WithString("ReplicaStatus", ReplicaStatusMapper::GetNameForReplicaStatus(m_replicaStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
