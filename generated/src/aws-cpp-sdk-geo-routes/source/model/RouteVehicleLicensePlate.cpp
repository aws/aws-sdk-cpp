/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleLicensePlate.h>
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

RouteVehicleLicensePlate::RouteVehicleLicensePlate(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleLicensePlate& RouteVehicleLicensePlate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastCharacter"))
  {
    m_lastCharacter = jsonValue.GetString("LastCharacter");
    m_lastCharacterHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleLicensePlate::Jsonize() const
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
