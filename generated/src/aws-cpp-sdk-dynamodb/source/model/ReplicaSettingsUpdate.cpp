/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet(false),
    m_replicaTableClass(TableClass::NOT_SET),
    m_replicaTableClassHasBeenSet(false)
{
}

ReplicaSettingsUpdate::ReplicaSettingsUpdate(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_replicaProvisionedReadCapacityUnits(0),
    m_replicaProvisionedReadCapacityUnitsHasBeenSet(false),
    m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet(false),
    m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet(false),
    m_replicaTableClass(TableClass::NOT_SET),
    m_replicaTableClassHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaSettingsUpdate& ReplicaSettingsUpdate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate"))
  {
    m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate = jsonValue.GetObject("ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate");

    m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaGlobalSecondaryIndexSettingsUpdate"))
  {
    Aws::Utils::Array<JsonView> replicaGlobalSecondaryIndexSettingsUpdateJsonList = jsonValue.GetArray("ReplicaGlobalSecondaryIndexSettingsUpdate");
    for(unsigned replicaGlobalSecondaryIndexSettingsUpdateIndex = 0; replicaGlobalSecondaryIndexSettingsUpdateIndex < replicaGlobalSecondaryIndexSettingsUpdateJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsUpdateIndex)
    {
      m_replicaGlobalSecondaryIndexSettingsUpdate.push_back(replicaGlobalSecondaryIndexSettingsUpdateJsonList[replicaGlobalSecondaryIndexSettingsUpdateIndex].AsObject());
    }
    m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaTableClass"))
  {
    m_replicaTableClass = TableClassMapper::GetTableClassForName(jsonValue.GetString("ReplicaTableClass"));

    m_replicaTableClassHasBeenSet = true;
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

  if(m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet)
  {
   payload.WithObject("ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate.Jsonize());

  }

  if(m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaGlobalSecondaryIndexSettingsUpdateJsonList(m_replicaGlobalSecondaryIndexSettingsUpdate.size());
   for(unsigned replicaGlobalSecondaryIndexSettingsUpdateIndex = 0; replicaGlobalSecondaryIndexSettingsUpdateIndex < replicaGlobalSecondaryIndexSettingsUpdateJsonList.GetLength(); ++replicaGlobalSecondaryIndexSettingsUpdateIndex)
   {
     replicaGlobalSecondaryIndexSettingsUpdateJsonList[replicaGlobalSecondaryIndexSettingsUpdateIndex].AsObject(m_replicaGlobalSecondaryIndexSettingsUpdate[replicaGlobalSecondaryIndexSettingsUpdateIndex].Jsonize());
   }
   payload.WithArray("ReplicaGlobalSecondaryIndexSettingsUpdate", std::move(replicaGlobalSecondaryIndexSettingsUpdateJsonList));

  }

  if(m_replicaTableClassHasBeenSet)
  {
   payload.WithString("ReplicaTableClass", TableClassMapper::GetNameForTableClass(m_replicaTableClass));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
