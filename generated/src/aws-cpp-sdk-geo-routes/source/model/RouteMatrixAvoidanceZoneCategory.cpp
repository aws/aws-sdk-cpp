/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixAvoidanceZoneCategory.h>
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

RouteMatrixAvoidanceZoneCategory::RouteMatrixAvoidanceZoneCategory(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixAvoidanceZoneCategory& RouteMatrixAvoidanceZoneCategory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = RouteMatrixZoneCategoryMapper::GetRouteMatrixZoneCategoryForName(jsonValue.GetString("Category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixAvoidanceZoneCategory::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", RouteMatrixZoneCategoryMapper::GetNameForRouteMatrixZoneCategory(m_category));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
