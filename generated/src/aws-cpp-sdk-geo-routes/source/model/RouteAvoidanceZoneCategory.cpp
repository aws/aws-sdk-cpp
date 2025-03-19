/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteAvoidanceZoneCategory.h>
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

RouteAvoidanceZoneCategory::RouteAvoidanceZoneCategory(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteAvoidanceZoneCategory& RouteAvoidanceZoneCategory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = RouteZoneCategoryMapper::GetRouteZoneCategoryForName(jsonValue.GetString("Category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteAvoidanceZoneCategory::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", RouteZoneCategoryMapper::GetNameForRouteZoneCategory(m_category));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
