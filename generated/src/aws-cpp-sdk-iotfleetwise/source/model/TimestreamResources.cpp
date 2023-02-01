/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/TimestreamResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

TimestreamResources::TimestreamResources() : 
    m_timestreamDatabaseNameHasBeenSet(false),
    m_timestreamTableNameHasBeenSet(false)
{
}

TimestreamResources::TimestreamResources(JsonView jsonValue) : 
    m_timestreamDatabaseNameHasBeenSet(false),
    m_timestreamTableNameHasBeenSet(false)
{
  *this = jsonValue;
}

TimestreamResources& TimestreamResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestreamDatabaseName"))
  {
    m_timestreamDatabaseName = jsonValue.GetString("timestreamDatabaseName");

    m_timestreamDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestreamTableName"))
  {
    m_timestreamTableName = jsonValue.GetString("timestreamTableName");

    m_timestreamTableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestreamResources::Jsonize() const
{
  JsonValue payload;

  if(m_timestreamDatabaseNameHasBeenSet)
  {
   payload.WithString("timestreamDatabaseName", m_timestreamDatabaseName);

  }

  if(m_timestreamTableNameHasBeenSet)
  {
   payload.WithString("timestreamTableName", m_timestreamTableName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
