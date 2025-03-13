/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleNotice.h>
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

RouteVehicleNotice::RouteVehicleNotice(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleNotice& RouteVehicleNotice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = RouteVehicleNoticeCodeMapper::GetRouteVehicleNoticeCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Details"))
  {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("Details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Impact"))
  {
    m_impact = RouteNoticeImpactMapper::GetRouteNoticeImpactForName(jsonValue.GetString("Impact"));
    m_impactHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleNotice::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", RouteVehicleNoticeCodeMapper::GetNameForRouteVehicleNoticeCode(m_code));
  }

  if(m_detailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("Details", std::move(detailsJsonList));

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
