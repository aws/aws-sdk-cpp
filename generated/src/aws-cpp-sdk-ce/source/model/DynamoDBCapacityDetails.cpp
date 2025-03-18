/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/DynamoDBCapacityDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

DynamoDBCapacityDetails::DynamoDBCapacityDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DynamoDBCapacityDetails& DynamoDBCapacityDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityUnits"))
  {
    m_capacityUnits = jsonValue.GetString("CapacityUnits");
    m_capacityUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue DynamoDBCapacityDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capacityUnitsHasBeenSet)
  {
   payload.WithString("CapacityUnits", m_capacityUnits);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
