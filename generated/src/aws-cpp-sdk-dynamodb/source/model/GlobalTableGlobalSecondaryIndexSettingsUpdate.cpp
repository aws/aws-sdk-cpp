/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/GlobalTableGlobalSecondaryIndexSettingsUpdate.h>
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

GlobalTableGlobalSecondaryIndexSettingsUpdate::GlobalTableGlobalSecondaryIndexSettingsUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalTableGlobalSecondaryIndexSettingsUpdate& GlobalTableGlobalSecondaryIndexSettingsUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedWriteCapacityUnits"))
  {
    m_provisionedWriteCapacityUnits = jsonValue.GetInt64("ProvisionedWriteCapacityUnits");
    m_provisionedWriteCapacityUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedWriteCapacityAutoScalingSettingsUpdate"))
  {
    m_provisionedWriteCapacityAutoScalingSettingsUpdate = jsonValue.GetObject("ProvisionedWriteCapacityAutoScalingSettingsUpdate");
    m_provisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalTableGlobalSecondaryIndexSettingsUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_provisionedWriteCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ProvisionedWriteCapacityUnits", m_provisionedWriteCapacityUnits);

  }

  if(m_provisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet)
  {
   payload.WithObject("ProvisionedWriteCapacityAutoScalingSettingsUpdate", m_provisionedWriteCapacityAutoScalingSettingsUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
