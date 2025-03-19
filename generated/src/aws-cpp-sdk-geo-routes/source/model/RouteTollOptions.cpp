/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteTollOptions::RouteTollOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollOptions& RouteTollOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllTransponders"))
  {
    m_allTransponders = jsonValue.GetBool("AllTransponders");
    m_allTranspondersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllVignettes"))
  {
    m_allVignettes = jsonValue.GetBool("AllVignettes");
    m_allVignettesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Currency"))
  {
    m_currency = jsonValue.GetString("Currency");
    m_currencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmissionType"))
  {
    m_emissionType = jsonValue.GetObject("EmissionType");
    m_emissionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VehicleCategory"))
  {
    m_vehicleCategory = RouteTollVehicleCategoryMapper::GetRouteTollVehicleCategoryForName(jsonValue.GetString("VehicleCategory"));
    m_vehicleCategoryHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollOptions::Jsonize() const
{
  JsonValue payload;

  if(m_allTranspondersHasBeenSet)
  {
   payload.WithBool("AllTransponders", m_allTransponders);

  }

  if(m_allVignettesHasBeenSet)
  {
   payload.WithBool("AllVignettes", m_allVignettes);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("Currency", m_currency);

  }

  if(m_emissionTypeHasBeenSet)
  {
   payload.WithObject("EmissionType", m_emissionType.Jsonize());

  }

  if(m_vehicleCategoryHasBeenSet)
  {
   payload.WithString("VehicleCategory", RouteTollVehicleCategoryMapper::GetNameForRouteTollVehicleCategory(m_vehicleCategory));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
