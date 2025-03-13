/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/SnapToRoadsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoRoutes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String SnapToRoadsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_snappedGeometryFormatHasBeenSet)
  {
   payload.WithString("SnappedGeometryFormat", GeometryFormatMapper::GetNameForGeometryFormat(m_snappedGeometryFormat));
  }

  if(m_snapRadiusHasBeenSet)
  {
   payload.WithInt64("SnapRadius", m_snapRadius);

  }

  if(m_tracePointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tracePointsJsonList(m_tracePoints.size());
   for(unsigned tracePointsIndex = 0; tracePointsIndex < tracePointsJsonList.GetLength(); ++tracePointsIndex)
   {
     tracePointsJsonList[tracePointsIndex].AsObject(m_tracePoints[tracePointsIndex].Jsonize());
   }
   payload.WithArray("TracePoints", std::move(tracePointsJsonList));

  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithString("TravelMode", RoadSnapTravelModeMapper::GetNameForRoadSnapTravelMode(m_travelMode));
  }

  if(m_travelModeOptionsHasBeenSet)
  {
   payload.WithObject("TravelModeOptions", m_travelModeOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}

void SnapToRoadsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



