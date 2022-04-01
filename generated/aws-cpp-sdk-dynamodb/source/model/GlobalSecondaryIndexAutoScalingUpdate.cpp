/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GlobalSecondaryIndexAutoScalingUpdate.h>
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

GlobalSecondaryIndexAutoScalingUpdate::GlobalSecondaryIndexAutoScalingUpdate() : 
    m_indexNameHasBeenSet(false),
    m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet(false)
{
}

GlobalSecondaryIndexAutoScalingUpdate::GlobalSecondaryIndexAutoScalingUpdate(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalSecondaryIndexAutoScalingUpdate& GlobalSecondaryIndexAutoScalingUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedWriteCapacityAutoScalingUpdate"))
  {
    m_provisionedWriteCapacityAutoScalingUpdate = jsonValue.GetObject("ProvisionedWriteCapacityAutoScalingUpdate");

    m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalSecondaryIndexAutoScalingUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet)
  {
   payload.WithObject("ProvisionedWriteCapacityAutoScalingUpdate", m_provisionedWriteCapacityAutoScalingUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
