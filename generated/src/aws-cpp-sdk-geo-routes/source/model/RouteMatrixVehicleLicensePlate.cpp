/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixVehicleLicensePlate.h>
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

RouteMatrixVehicleLicensePlate::RouteMatrixVehicleLicensePlate(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixVehicleLicensePlate& RouteMatrixVehicleLicensePlate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastCharacter"))
  {
    m_lastCharacter = jsonValue.GetString("LastCharacter");
    m_lastCharacterHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixVehicleLicensePlate::Jsonize() const
{
  JsonValue payload;

  if(m_lastCharacterHasBeenSet)
  {
   payload.WithString("LastCharacter", m_lastCharacter);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
