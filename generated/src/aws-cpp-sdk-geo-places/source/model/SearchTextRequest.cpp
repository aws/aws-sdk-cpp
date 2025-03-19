/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchTextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoPlaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String SearchTextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_biasPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> biasPositionJsonList(m_biasPosition.size());
   for(unsigned biasPositionIndex = 0; biasPositionIndex < biasPositionJsonList.GetLength(); ++biasPositionIndex)
   {
     biasPositionJsonList[biasPositionIndex].AsDouble(m_biasPosition[biasPositionIndex]);
   }
   payload.WithArray("BiasPosition", std::move(biasPositionJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_additionalFeaturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalFeaturesJsonList(m_additionalFeatures.size());
   for(unsigned additionalFeaturesIndex = 0; additionalFeaturesIndex < additionalFeaturesJsonList.GetLength(); ++additionalFeaturesIndex)
   {
     additionalFeaturesJsonList[additionalFeaturesIndex].AsString(SearchTextAdditionalFeatureMapper::GetNameForSearchTextAdditionalFeature(m_additionalFeatures[additionalFeaturesIndex]));
   }
   payload.WithArray("AdditionalFeatures", std::move(additionalFeaturesJsonList));

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_politicalViewHasBeenSet)
  {
   payload.WithString("PoliticalView", m_politicalView);

  }

  if(m_intendedUseHasBeenSet)
  {
   payload.WithString("IntendedUse", SearchTextIntendedUseMapper::GetNameForSearchTextIntendedUse(m_intendedUse));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

void SearchTextRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



