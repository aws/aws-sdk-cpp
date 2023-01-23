/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingUpdate.h>
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

ReplicaGlobalSecondaryIndexAutoScalingUpdate::ReplicaGlobalSecondaryIndexAutoScalingUpdate() : 
    m_indexNameHasBeenSet(false),
    m_provisionedReadCapacityAutoScalingUpdateHasBeenSet(false)
{
}

ReplicaGlobalSecondaryIndexAutoScalingUpdate::ReplicaGlobalSecondaryIndexAutoScalingUpdate(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_provisionedReadCapacityAutoScalingUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaGlobalSecondaryIndexAutoScalingUpdate& ReplicaGlobalSecondaryIndexAutoScalingUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedReadCapacityAutoScalingUpdate"))
  {
    m_provisionedReadCapacityAutoScalingUpdate = jsonValue.GetObject("ProvisionedReadCapacityAutoScalingUpdate");

    m_provisionedReadCapacityAutoScalingUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaGlobalSecondaryIndexAutoScalingUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_provisionedReadCapacityAutoScalingUpdateHasBeenSet)
  {
   payload.WithObject("ProvisionedReadCapacityAutoScalingUpdate", m_provisionedReadCapacityAutoScalingUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
