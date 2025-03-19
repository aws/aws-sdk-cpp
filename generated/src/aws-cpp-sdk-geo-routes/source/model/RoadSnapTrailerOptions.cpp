/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapTrailerOptions.h>
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

RoadSnapTrailerOptions::RoadSnapTrailerOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RoadSnapTrailerOptions& RoadSnapTrailerOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrailerCount"))
  {
    m_trailerCount = jsonValue.GetInteger("TrailerCount");
    m_trailerCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RoadSnapTrailerOptions::Jsonize() const
{
  JsonValue payload;

  if(m_trailerCountHasBeenSet)
  {
   payload.WithInteger("TrailerCount", m_trailerCount);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
