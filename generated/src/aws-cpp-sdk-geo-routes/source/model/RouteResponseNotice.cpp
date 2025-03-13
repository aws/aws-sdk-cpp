/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteResponseNotice.h>
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

RouteResponseNotice::RouteResponseNotice(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteResponseNotice& RouteResponseNotice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = RouteResponseNoticeCodeMapper::GetRouteResponseNoticeCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Impact"))
  {
    m_impact = RouteNoticeImpactMapper::GetRouteNoticeImpactForName(jsonValue.GetString("Impact"));
    m_impactHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteResponseNotice::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", RouteResponseNoticeCodeMapper::GetNameForRouteResponseNoticeCode(m_code));
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
