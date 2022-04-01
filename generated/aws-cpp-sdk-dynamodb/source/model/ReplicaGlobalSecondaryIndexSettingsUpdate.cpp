/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexSettingsUpdate.h>
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

ReplicaGlobalSecondaryIndexSettingsUpdate::ReplicaGlobalSecondaryIndexSettingsUpdate() : 
    m_indexNameHasBeenSet(false),
    m_provisionedReadCapacityUnits(0),
    m_provisionedReadCapacityUnitsHasBeenSet(false),
    m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet(false)
{
}

ReplicaGlobalSecondaryIndexSettingsUpdate::ReplicaGlobalSecondaryIndexSettingsUpdate(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_provisionedReadCapacityUnits(0),
    m_provisionedReadCapacityUnitsHasBeenSet(false),
    m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaGlobalSecondaryIndexSettingsUpdate& ReplicaGlobalSecondaryIndexSettingsUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedReadCapacityUnits"))
  {
    m_provisionedReadCapacityUnits = jsonValue.GetInt64("ProvisionedReadCapacityUnits");

    m_provisionedReadCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedReadCapacityAutoScalingSettingsUpdate"))
  {
    m_provisionedReadCapacityAutoScalingSettingsUpdate = jsonValue.GetObject("ProvisionedReadCapacityAutoScalingSettingsUpdate");

    m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaGlobalSecondaryIndexSettingsUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_provisionedReadCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ProvisionedReadCapacityUnits", m_provisionedReadCapacityUnits);

  }

  if(m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet)
  {
   payload.WithObject("ProvisionedReadCapacityAutoScalingSettingsUpdate", m_provisionedReadCapacityAutoScalingSettingsUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
