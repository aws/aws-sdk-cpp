/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteNumber.h>
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

RouteNumber::RouteNumber() : 
    m_direction(RouteDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

RouteNumber::RouteNumber(JsonView jsonValue)
  : RouteNumber()
{
  *this = jsonValue;
}

RouteNumber& RouteNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = RouteDirectionMapper::GetRouteDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteNumber::Jsonize() const
{
  JsonValue payload;

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", RouteDirectionMapper::GetNameForRouteDirection(m_direction));
  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
