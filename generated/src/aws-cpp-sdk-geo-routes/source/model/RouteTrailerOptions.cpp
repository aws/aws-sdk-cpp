﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTrailerOptions.h>
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

RouteTrailerOptions::RouteTrailerOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTrailerOptions& RouteTrailerOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AxleCount"))
  {
    m_axleCount = jsonValue.GetInteger("AxleCount");
    m_axleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrailerCount"))
  {
    m_trailerCount = jsonValue.GetInteger("TrailerCount");
    m_trailerCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTrailerOptions::Jsonize() const
{
  JsonValue payload;

  if(m_axleCountHasBeenSet)
  {
   payload.WithInteger("AxleCount", m_axleCount);

  }

  if(m_trailerCountHasBeenSet)
  {
   payload.WithInteger("TrailerCount", m_trailerCount);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
