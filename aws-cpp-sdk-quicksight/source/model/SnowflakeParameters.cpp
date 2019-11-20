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

#include <aws/quicksight/model/SnowflakeParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SnowflakeParameters::SnowflakeParameters() : 
    m_hostHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_warehouseHasBeenSet(false)
{
}

SnowflakeParameters::SnowflakeParameters(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_warehouseHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeParameters& SnowflakeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Warehouse"))
  {
    m_warehouse = jsonValue.GetString("Warehouse");

    m_warehouseHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_warehouseHasBeenSet)
  {
   payload.WithString("Warehouse", m_warehouse);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
