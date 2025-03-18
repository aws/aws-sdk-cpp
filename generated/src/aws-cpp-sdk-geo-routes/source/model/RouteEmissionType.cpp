/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteEmissionType.h>
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

RouteEmissionType::RouteEmissionType(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteEmissionType& RouteEmissionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Co2EmissionClass"))
  {
    m_co2EmissionClass = jsonValue.GetString("Co2EmissionClass");
    m_co2EmissionClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteEmissionType::Jsonize() const
{
  JsonValue payload;

  if(m_co2EmissionClassHasBeenSet)
  {
   payload.WithString("Co2EmissionClass", m_co2EmissionClass);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
