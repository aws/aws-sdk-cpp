/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListReservationsRequest::ListReservationsRequest() : 
    m_channelClassHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_maximumBitrateHasBeenSet(false),
    m_maximumFramerateHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_specialFeatureHasBeenSet(false),
    m_videoQualityHasBeenSet(false)
{
}

Aws::String ListReservationsRequest::SerializePayload() const
{
  return {};
}

void ListReservationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_channelClassHasBeenSet)
    {
      ss << m_channelClass;
      uri.AddQueryStringParameter("channelClass", ss.str());
      ss.str("");
    }

    if(m_codecHasBeenSet)
    {
      ss << m_codec;
      uri.AddQueryStringParameter("codec", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_maximumBitrateHasBeenSet)
    {
      ss << m_maximumBitrate;
      uri.AddQueryStringParameter("maximumBitrate", ss.str());
      ss.str("");
    }

    if(m_maximumFramerateHasBeenSet)
    {
      ss << m_maximumFramerate;
      uri.AddQueryStringParameter("maximumFramerate", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_resolutionHasBeenSet)
    {
      ss << m_resolution;
      uri.AddQueryStringParameter("resolution", ss.str());
      ss.str("");
    }

    if(m_resourceTypeHasBeenSet)
    {
      ss << m_resourceType;
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_specialFeatureHasBeenSet)
    {
      ss << m_specialFeature;
      uri.AddQueryStringParameter("specialFeature", ss.str());
      ss.str("");
    }

    if(m_videoQualityHasBeenSet)
    {
      ss << m_videoQuality;
      uri.AddQueryStringParameter("videoQuality", ss.str());
      ss.str("");
    }

}



