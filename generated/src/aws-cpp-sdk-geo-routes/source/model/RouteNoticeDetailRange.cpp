/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteNoticeDetailRange.h>
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

RouteNoticeDetailRange::RouteNoticeDetailRange(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteNoticeDetailRange& RouteNoticeDetailRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetInteger("Min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInteger("Max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteNoticeDetailRange::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithInteger("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithInteger("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
