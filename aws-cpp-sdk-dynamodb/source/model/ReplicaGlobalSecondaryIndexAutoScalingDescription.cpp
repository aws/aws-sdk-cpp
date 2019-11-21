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
