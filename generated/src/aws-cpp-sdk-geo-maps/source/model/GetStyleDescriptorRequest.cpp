/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/GetStyleDescriptorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoMaps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetStyleDescriptorRequest::SerializePayload() const
{
  return {};
}

void GetStyleDescriptorRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_colorSchemeHasBeenSet)
    {
      ss << ColorSchemeMapper::GetNameForColorScheme(m_colorScheme);
      uri.AddQueryStringParameter("color-scheme", ss.str());
      ss.str("");
    }

    if(m_politicalViewHasBeenSet)
    {
      ss << m_politicalView;
      uri.AddQueryStringParameter("political-view", ss.str());
      ss.str("");
    }

    if(m_terrainHasBeenSet)
    {
      ss << TerrainMapper::GetNameForTerrain(m_terrain);
      uri.AddQueryStringParameter("terrain", ss.str());
      ss.str("");
    }

    if(m_contourDensityHasBeenSet)
    {
      ss << ContourDensityMapper::GetNameForContourDensity(m_contourDensity);
      uri.AddQueryStringParameter("contour-density", ss.str());
      ss.str("");
    }

    if(m_trafficHasBeenSet)
    {
      ss << TrafficMapper::GetNameForTraffic(m_traffic);
      uri.AddQueryStringParameter("traffic", ss.str());
      ss.str("");
    }

    if(m_travelModesHasBeenSet)
    {
      for(const auto& item : m_travelModes)
      {
        ss << TravelModeMapper::GetNameForTravelMode(item);
        uri.AddQueryStringParameter("travel-modes", ss.str());
        ss.str("");
      }
    }

    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



