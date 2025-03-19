/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleNoticeDetail.h>
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

RouteVehicleNoticeDetail::RouteVehicleNoticeDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleNoticeDetail& RouteVehicleNoticeDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ViolatedConstraints"))
  {
    m_violatedConstraints = jsonValue.GetObject("ViolatedConstraints");
    m_violatedConstraintsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleNoticeDetail::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_violatedConstraintsHasBeenSet)
  {
   payload.WithObject("ViolatedConstraints", m_violatedConstraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
