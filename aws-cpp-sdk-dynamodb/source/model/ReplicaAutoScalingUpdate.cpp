/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaAutoScalingUpdate.h>
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

ReplicaAutoScalingUpdate::ReplicaAutoScalingUpdate() : 
    m_regionNameHasBeenSet(false),
    m_replicaGlobalSecondaryIndexUpdatesHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet(false)
{
}

ReplicaAutoScalingUpdate::ReplicaAutoScalingUpdate(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaGlobalSecondaryIndexUpdatesHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaAutoScalingUpdate& ReplicaAutoScalingUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaGlobalSecondaryIndexUpdates"))
  {
    Aws::Utils::Array<JsonView> replicaGlobalSecondaryIndexUpdatesJsonList = jsonValue.GetArray("ReplicaGlobalSecondaryIndexUpdates");
    for(unsigned replicaGlobalSecondaryIndexUpdatesIndex = 0; replicaGlobalSecondaryIndexUpdatesIndex < replicaGlobalSecondaryIndexUpdatesJsonList.GetLength(); ++replicaGlobalSecondaryIndexUpdatesIndex)
    {
      m_replicaGlobalSecondaryIndexUpdates.push_back(replicaGlobalSecondaryIndexUpdatesJsonList[replicaGlobalSecondaryIndexUpdatesIndex].AsObject());
    }
    m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityAutoScalingUpdate"))
  {
    m_replicaProvisionedReadCapacityAutoScalingUpdate = jsonValue.GetObject("ReplicaProvisionedReadCapacityAutoScalingUpdate");

    m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaAutoScalingUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_replicaGlobalSecondaryIndexUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaGlobalSecondaryIndexUpdatesJsonList(m_replicaGlobalSecondaryIndexUpdates.size());
   for(unsigned replicaGlobalSecondaryIndexUpdatesIndex = 0; replicaGlobalSecondaryIndexUpdatesIndex < replicaGlobalSecondaryIndexUpdatesJsonList.GetLength(); ++replicaGlobalSecondaryIndexUpdatesIndex)
   {
     replicaGlobalSecondaryIndexUpdatesJsonList[replicaGlobalSecondaryIndexUpdatesIndex].AsObject(m_replicaGlobalSecondaryIndexUpdates[replicaGlobalSecondaryIndexUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReplicaGlobalSecondaryIndexUpdates", std::move(replicaGlobalSecondaryIndexUpdatesJsonList));

  }

  if(m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedReadCapacityAutoScalingUpdate", m_replicaProvisionedReadCapacityAutoScalingUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
