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
    m_provisionedReadCapacityUnitsHasBeenSet(false)
{
}

ReplicaGlobalSecondaryIndexSettingsUpdate::ReplicaGlobalSecondaryIndexSettingsUpdate(const JsonValue& jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_provisionedReadCapacityUnits(0),
    m_provisionedReadCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaGlobalSecondaryIndexSettingsUpdate& ReplicaGlobalSecondaryIndexSettingsUpdate::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
