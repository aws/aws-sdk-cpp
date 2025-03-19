/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineGranularityOptions.h>
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

IsolineGranularityOptions::IsolineGranularityOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineGranularityOptions& IsolineGranularityOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxPoints"))
  {
    m_maxPoints = jsonValue.GetInteger("MaxPoints");
    m_maxPointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxResolution"))
  {
    m_maxResolution = jsonValue.GetInt64("MaxResolution");
    m_maxResolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineGranularityOptions::Jsonize() const
{
  JsonValue payload;

  if(m_maxPointsHasBeenSet)
  {
   payload.WithInteger("MaxPoints", m_maxPoints);

  }

  if(m_maxResolutionHasBeenSet)
  {
   payload.WithInt64("MaxResolution", m_maxResolution);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
