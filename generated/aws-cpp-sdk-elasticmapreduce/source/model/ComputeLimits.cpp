/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ComputeLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ComputeLimits::ComputeLimits() : 
    m_unitType(ComputeLimitsUnitType::NOT_SET),
    m_unitTypeHasBeenSet(false),
    m_minimumCapacityUnits(0),
    m_minimumCapacityUnitsHasBeenSet(false),
    m_maximumCapacityUnits(0),
    m_maximumCapacityUnitsHasBeenSet(false),
    m_maximumOnDemandCapacityUnits(0),
    m_maximumOnDemandCapacityUnitsHasBeenSet(false),
    m_maximumCoreCapacityUnits(0),
    m_maximumCoreCapacityUnitsHasBeenSet(false)
{
}

ComputeLimits::ComputeLimits(JsonView jsonValue) : 
    m_unitType(ComputeLimitsUnitType::NOT_SET),
    m_unitTypeHasBeenSet(false),
    m_minimumCapacityUnits(0),
    m_minimumCapacityUnitsHasBeenSet(false),
    m_maximumCapacityUnits(0),
    m_maximumCapacityUnitsHasBeenSet(false),
    m_maximumOnDemandCapacityUnits(0),
    m_maximumOnDemandCapacityUnitsHasBeenSet(false),
    m_maximumCoreCapacityUnits(0),
    m_maximumCoreCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeLimits& ComputeLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UnitType"))
  {
    m_unitType = ComputeLimitsUnitTypeMapper::GetComputeLimitsUnitTypeForName(jsonValue.GetString("UnitType"));

    m_unitTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumCapacityUnits"))
  {
    m_minimumCapacityUnits = jsonValue.GetInteger("MinimumCapacityUnits");

    m_minimumCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumCapacityUnits"))
  {
    m_maximumCapacityUnits = jsonValue.GetInteger("MaximumCapacityUnits");

    m_maximumCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumOnDemandCapacityUnits"))
  {
    m_maximumOnDemandCapacityUnits = jsonValue.GetInteger("MaximumOnDemandCapacityUnits");

    m_maximumOnDemandCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumCoreCapacityUnits"))
  {
    m_maximumCoreCapacityUnits = jsonValue.GetInteger("MaximumCoreCapacityUnits");

    m_maximumCoreCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeLimits::Jsonize() const
{
  JsonValue payload;

  if(m_unitTypeHasBeenSet)
  {
   payload.WithString("UnitType", ComputeLimitsUnitTypeMapper::GetNameForComputeLimitsUnitType(m_unitType));
  }

  if(m_minimumCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("MinimumCapacityUnits", m_minimumCapacityUnits);

  }

  if(m_maximumCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("MaximumCapacityUnits", m_maximumCapacityUnits);

  }

  if(m_maximumOnDemandCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("MaximumOnDemandCapacityUnits", m_maximumOnDemandCapacityUnits);

  }

  if(m_maximumCoreCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("MaximumCoreCapacityUnits", m_maximumCoreCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
