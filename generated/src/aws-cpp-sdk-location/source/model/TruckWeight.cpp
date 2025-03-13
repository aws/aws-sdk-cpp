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

TruckWeight::TruckWeight(JsonView jsonValue)
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
