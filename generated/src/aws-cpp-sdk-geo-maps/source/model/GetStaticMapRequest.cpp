/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/GetStaticMapRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoMaps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetStaticMapRequest::GetStaticMapRequest() : 
    m_boundingBoxHasBeenSet(false),
    m_boundedPositionsHasBeenSet(false),
    m_centerHasBeenSet(false),
    m_compactOverlayHasBeenSet(false),
    m_geoJsonOverlayHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_padding(0),
    m_paddingHasBeenSet(false),
    m_radius(0),
    m_radiusHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_scaleBarUnit(ScaleBarUnit::NOT_SET),
    m_scaleBarUnitHasBeenSet(false),
    m_style(StaticMapStyle::NOT_SET),
    m_styleHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_zoom(0.0),
    m_zoomHasBeenSet(false)
{
}

Aws::String GetStaticMapRequest::SerializePayload() const
{
  return {};
}

void GetStaticMapRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_boundingBoxHasBeenSet)
    {
      ss << m_boundingBox;
      uri.AddQueryStringParameter("bounding-box", ss.str());
      ss.str("");
    }

    if(m_boundedPositionsHasBeenSet)
    {
      ss << m_boundedPositions;
      uri.AddQueryStringParameter("bounded-positions", ss.str());
      ss.str("");
    }

    if(m_centerHasBeenSet)
    {
      ss << m_center;
      uri.AddQueryStringParameter("center", ss.str());
      ss.str("");
    }

    if(m_compactOverlayHasBeenSet)
    {
      ss << m_compactOverlay;
      uri.AddQueryStringParameter("compact-overlay", ss.str());
      ss.str("");
    }

    if(m_geoJsonOverlayHasBeenSet)
    {
      ss << m_geoJsonOverlay;
      uri.AddQueryStringParameter("geojson-overlay", ss.str());
      ss.str("");
    }

    if(m_heightHasBeenSet)
    {
      ss << m_height;
      uri.AddQueryStringParameter("height", ss.str());
      ss.str("");
    }

    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

    if(m_paddingHasBeenSet)
    {
      ss << m_padding;
      uri.AddQueryStringParameter("padding", ss.str());
      ss.str("");
    }

    if(m_radiusHasBeenSet)
    {
      ss << m_radius;
      uri.AddQueryStringParameter("radius", ss.str());
      ss.str("");
    }

    if(m_scaleBarUnitHasBeenSet)
    {
      ss << ScaleBarUnitMapper::GetNameForScaleBarUnit(m_scaleBarUnit);
      uri.AddQueryStringParameter("scale-unit", ss.str());
      ss.str("");
    }

    if(m_styleHasBeenSet)
    {
      ss << StaticMapStyleMapper::GetNameForStaticMapStyle(m_style);
      uri.AddQueryStringParameter("style", ss.str());
      ss.str("");
    }

    if(m_widthHasBeenSet)
    {
      ss << m_width;
      uri.AddQueryStringParameter("width", ss.str());
      ss.str("");
    }

    if(m_zoomHasBeenSet)
    {
      ss << m_zoom;
      uri.AddQueryStringParameter("zoom", ss.str());
      ss.str("");
    }

}



