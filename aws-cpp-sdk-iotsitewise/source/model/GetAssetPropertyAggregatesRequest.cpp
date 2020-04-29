/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotsitewise/model/GetAssetPropertyAggregatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetAssetPropertyAggregatesRequest::GetAssetPropertyAggregatesRequest() : 
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_propertyAliasHasBeenSet(false),
    m_aggregateTypesHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_qualitiesHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_timeOrdering(TimeOrdering::NOT_SET),
    m_timeOrderingHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetAssetPropertyAggregatesRequest::SerializePayload() const
{
  return {};
}

void GetAssetPropertyAggregatesRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_aggregateTypesHasBeenSet)
    {
      for(const auto& item : m_aggregateTypes)
      {
        ss << AggregateTypeMapper::GetNameForAggregateType(item);
        uri.AddQueryStringParameter("aggregateTypes", ss.str());
        ss.str("");
      }
    }

    if(m_resolutionHasBeenSet)
    {
      ss << m_resolution;
      uri.AddQueryStringParameter("resolution", ss.str());
      ss.str("");
    }

    if(m_qualitiesHasBeenSet)
    {
      for(const auto& item : m_qualities)
      {
        ss << QualityMapper::GetNameForQuality(item);
        uri.AddQueryStringParameter("qualities", ss.str());
        ss.str("");
      }
    }

    if(m_startDateHasBeenSet)
    {
      ss << m_startDate.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("startDate", ss.str());
      ss.str("");
    }

    if(m_endDateHasBeenSet)
    {
      ss << m_endDate.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("endDate", ss.str());
      ss.str("");
    }

    if(m_timeOrderingHasBeenSet)
    {
      ss << TimeOrderingMapper::GetNameForTimeOrdering(m_timeOrdering);
      uri.AddQueryStringParameter("timeOrdering", ss.str());
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

}



