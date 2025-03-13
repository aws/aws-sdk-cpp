/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/Route.h>
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

Route::Route(JsonView jsonValue)
{
  *this = jsonValue;
}

Route& Route::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Legs"))
  {
    Aws::Utils::Array<JsonView> legsJsonList = jsonValue.GetArray("Legs");
    for(unsigned legsIndex = 0; legsIndex < legsJsonList.GetLength(); ++legsIndex)
    {
      m_legs.push_back(legsJsonList[legsIndex].AsObject());
    }
    m_legsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MajorRoadLabels"))
  {
    Aws::Utils::Array<JsonView> majorRoadLabelsJsonList = jsonValue.GetArray("MajorRoadLabels");
    for(unsigned majorRoadLabelsIndex = 0; majorRoadLabelsIndex < majorRoadLabelsJsonList.GetLength(); ++majorRoadLabelsIndex)
    {
      m_majorRoadLabels.push_back(majorRoadLabelsJsonList[majorRoadLabelsIndex].AsObject());
    }
    m_majorRoadLabelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");
    m_summaryHasBeenSet = true;
  }
  return *this;
}

JsonValue Route::Jsonize() const
{
  JsonValue payload;

  if(m_legsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> legsJsonList(m_legs.size());
   for(unsigned legsIndex = 0; legsIndex < legsJsonList.GetLength(); ++legsIndex)
   {
     legsJsonList[legsIndex].AsObject(m_legs[legsIndex].Jsonize());
   }
   payload.WithArray("Legs", std::move(legsJsonList));

  }

  if(m_majorRoadLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> majorRoadLabelsJsonList(m_majorRoadLabels.size());
   for(unsigned majorRoadLabelsIndex = 0; majorRoadLabelsIndex < majorRoadLabelsJsonList.GetLength(); ++majorRoadLabelsIndex)
   {
     majorRoadLabelsJsonList[majorRoadLabelsIndex].AsObject(m_majorRoadLabels[majorRoadLabelsIndex].Jsonize());
   }
   payload.WithArray("MajorRoadLabels", std::move(majorRoadLabelsJsonList));

  }

  if(m_summaryHasBeenSet)
  {
   payload.WithObject("Summary", m_summary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
