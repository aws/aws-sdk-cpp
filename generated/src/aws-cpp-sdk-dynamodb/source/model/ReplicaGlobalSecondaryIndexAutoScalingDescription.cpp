/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingDescription.h>
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

ReplicaGlobalSecondaryIndexAutoScalingDescription::ReplicaGlobalSecondaryIndexAutoScalingDescription() : 
    m_indexNameHasBeenSet(false),
    m_indexStatus(IndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false),
    m_provisionedReadCapacityAutoScalingSettingsHasBeenSet(false),
    m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet(false)
{
}

ReplicaGlobalSecondaryIndexAutoScalingDescription::ReplicaGlobalSecondaryIndexAutoScalingDescription(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_indexStatus(IndexStatus::NOT_SET),
    m_indexStatusHasBeenSet(false),
    m_provisionedReadCapacityAutoScalingSettingsHasBeenSet(false),
    m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaGlobalSecondaryIndexAutoScalingDescription& ReplicaGlobalSecondaryIndexAutoScalingDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));

    m_indexStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedReadCapacityAutoScalingSettings"))
  {
    m_provisionedReadCapacityAutoScalingSettings = jsonValue.GetObject("ProvisionedReadCapacityAutoScalingSettings");

    m_provisionedReadCapacityAutoScalingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedWriteCapacityAutoScalingSettings"))
  {
    m_provisionedWriteCapacityAutoScalingSettings = jsonValue.GetObject("ProvisionedWriteCapacityAutoScalingSettings");

    m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaGlobalSecondaryIndexAutoScalingDescription::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_indexStatusHasBeenSet)
  {
   payload.WithString("IndexStatus", IndexStatusMapper::GetNameForIndexStatus(m_indexStatus));
  }

  if(m_provisionedReadCapacityAutoScalingSettingsHasBeenSet)
  {
   payload.WithObject("ProvisionedReadCapacityAutoScalingSettings", m_provisionedReadCapacityAutoScalingSettings.Jsonize());

  }

  if(m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet)
  {
   payload.WithObject("ProvisionedWriteCapacityAutoScalingSettings", m_provisionedWriteCapacityAutoScalingSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
