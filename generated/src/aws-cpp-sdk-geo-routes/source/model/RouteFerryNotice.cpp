/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryNotice.h>
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

RouteFerryNotice::RouteFerryNotice(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteFerryNotice& RouteFerryNotice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = RouteFerryNoticeCodeMapper::GetRouteFerryNoticeCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Impact"))
  {
    m_impact = RouteNoticeImpactMapper::GetRouteNoticeImpactForName(jsonValue.GetString("Impact"));
    m_impactHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteFerryNotice::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", RouteFerryNoticeCodeMapper::GetNameForRouteFerryNoticeCode(m_code));
  }

  if(m_impactHasBeenSet)
  {
   payload.WithString("Impact", RouteNoticeImpactMapper::GetNameForRouteNoticeImpact(m_impact));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
