/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_replicaBillingModeSummaryHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityUnits(0),
    m_replicaProvisionedWriteCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsHasBeenSet(false),
    m_replicaTableClassSummaryHasBeenSet(false)
{
}

ReplicaSettingsDescription::ReplicaSettingsDescription(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaStatus(ReplicaStatus::NOT_SET),
    m_replicaStatusHasBeenSet(false),
    m_replicaBillingModeSummaryHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityUnits(0),
    m_replicaProvisionedWriteCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsHasBeenSet(false),
    m_replicaTableClassSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaSettingsDescription& ReplicaSettingsDescription::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ReplicaBillingModeSummary"))
  {
    m_replicaBillingModeSummary = jsonValue.GetObject("ReplicaBillingModeSummary");

    m_replicaBillingModeSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityUnits"))
  {
    m_replicaProvisionedReadCapacityUnits = jsonValue.GetInt64("ReplicaProvisionedReadCapacityUnits");

    m_replicaProvisionedReadCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityAutoScalingSettings"))
  {
    m_replicaProvisionedReadCapacityAutoScalingSettings = jsonValue.GetObject("ReplicaProvisionedReadCapacityAutoScalingSettings");

    m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedWriteCapacityUnits"))
  {
    m_replicaProvisionedWriteCapacityUnits = jsonValue.GetInt64("ReplicaProvisionedWriteCapacityUnits");

    m_replicaProvisionedWriteCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaProvisionedWriteCapacityAutoScalingSettings"))
  {
    m_replicaProvisionedWriteCapacityAutoScalingSettings = jsonValue.GetObject("ReplicaProvisionedWriteCapacityAutoScalingSettings");

    m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaGlobalSecondaryIndexSettings"))
  {
    Aws::Utils::Array<JsonView> replicaGlobalSecondaryIndexSettingsJsonList = jsonValue.GetArray("ReplicaGlobalSecondaryIndexSettings");
    for(unsigned replicaGlobalSecondaryIndexSettingsIndex = 0; replicaGlobalSecondaryIndexSettingsIndex < replicaGlobalSecondaryIndexSettingsJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsIndex)
    {
      m_replicaGlobalSecondaryIndexSettings.push_back(replicaGlobalSecondaryIndexSettingsJsonList[replicaGlobalSecondaryIndexSettingsIndex].AsObject());
    }
    m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaTableClassSummary"))
  {
    m_replicaTableClassSummary = jsonValue.GetObject("ReplicaTableClassSummary");

    m_replicaTableClassSummaryHasBeenSet = true;
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

  if(m_replicaBillingModeSummaryHasBeenSet)
  {
   payload.WithObject("ReplicaBillingModeSummary", m_replicaBillingModeSummary.Jsonize());

  }

  if(m_replicaProvisionedReadCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReplicaProvisionedReadCapacityUnits", m_replicaProvisionedReadCapacityUnits);

  }

  if(m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedReadCapacityAutoScalingSettings", m_replicaProvisionedReadCapacityAutoScalingSettings.Jsonize());

  }

  if(m_replicaProvisionedWriteCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReplicaProvisionedWriteCapacityUnits", m_replicaProvisionedWriteCapacityUnits);

  }

  if(m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedWriteCapacityAutoScalingSettings", m_replicaProvisionedWriteCapacityAutoScalingSettings.Jsonize());

  }

  if(m_replicaGlobalSecondaryIndexSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaGlobalSecondaryIndexSettingsJsonList(m_replicaGlobalSecondaryIndexSettings.size());
   for(unsigned replicaGlobalSecondaryIndexSettingsIndex = 0; replicaGlobalSecondaryIndexSettingsIndex < replicaGlobalSecondaryIndexSettingsJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsIndex)
   {
     replicaGlobalSecondaryIndexSettingsJsonList[replicaGlobalSecondaryIndexSettingsIndex].AsObject(m_replicaGlobalSecondaryIndexSettings[replicaGlobalSecondaryIndexSettingsIndex].Jsonize());
   }
   payload.WithArray("ReplicaGlobalSecondaryIndexSettings", std::move(replicaGlobalSecondaryIndexSettingsJsonList));

  }

  if(m_replicaTableClassSummaryHasBeenSet)
  {
   payload.WithObject("ReplicaTableClassSummary", m_replicaTableClassSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
