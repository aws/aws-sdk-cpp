/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/GetInterpolatedAssetPropertyValuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetInterpolatedAssetPropertyValuesRequest::SerializePayload() const
{
  return {};
}

void GetInterpolatedAssetPropertyValuesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_assetIdHasBeenSet)
    {
      ss << m_assetId;
      uri.AddQueryStringParameter("assetId", ss.str());
      ss.str("");
    }

    if(m_propertyIdHasBeenSet)
    {
      ss << m_propertyId;
      uri.AddQueryStringParameter("propertyId", ss.str());
      ss.str("");
    }

    if(m_propertyAliasHasBeenSet)
    {
      ss << m_propertyAlias;
      uri.AddQueryStringParameter("propertyAlias", ss.str());
      ss.str("");
    }

    if(m_startTimeInSecondsHasBeenSet)
    {
      ss << m_startTimeInSeconds;
      uri.AddQueryStringParameter("startTimeInSeconds", ss.str());
      ss.str("");
    }

    if(m_startTimeOffsetInNanosHasBeenSet)
    {
      ss << m_startTimeOffsetInNanos;
      uri.AddQueryStringParameter("startTimeOffsetInNanos", ss.str());
      ss.str("");
    }

    if(m_endTimeInSecondsHasBeenSet)
    {
      ss << m_endTimeInSeconds;
      uri.AddQueryStringParameter("endTimeInSeconds", ss.str());
      ss.str("");
    }

    if(m_endTimeOffsetInNanosHasBeenSet)
    {
      ss << m_endTimeOffsetInNanos;
      uri.AddQueryStringParameter("endTimeOffsetInNanos", ss.str());
      ss.str("");
    }

    if(m_qualityHasBeenSet)
    {
      ss << QualityMapper::GetNameForQuality(m_quality);
      uri.AddQueryStringParameter("quality", ss.str());
      ss.str("");
    }

    if(m_intervalInSecondsHasBeenSet)
    {
      ss << m_intervalInSeconds;
      uri.AddQueryStringParameter("intervalInSeconds", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << m_type;
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_intervalWindowInSecondsHasBeenSet)
    {
      ss << m_intervalWindowInSeconds;
      uri.AddQueryStringParameter("intervalWindowInSeconds", ss.str());
      ss.str("");
    }

}



