/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/TruckWeight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

TruckWeight::TruckWeight() : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_unit(VehicleWeightUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

TruckWeight::TruckWeight(JsonView jsonValue) : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_unit(VehicleWeightUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

TruckWeight& TruckWeight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetDouble("Total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = VehicleWeightUnitMapper::GetVehicleWeightUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue TruckWeight::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("Total", m_total);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", VehicleWeightUnitMapper::GetNameForVehicleWeightUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
