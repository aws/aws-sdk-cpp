/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteZone.h>
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

RouteZone::RouteZone(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteZone& RouteZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = RouteZoneCategoryMapper::GetRouteZoneCategoryForName(jsonValue.GetString("Category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteZone::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", RouteZoneCategoryMapper::GetNameForRouteZoneCategory(m_category));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
