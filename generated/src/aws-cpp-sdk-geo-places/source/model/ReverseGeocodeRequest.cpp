/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ReverseGeocodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoPlaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ReverseGeocodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queryPositionJsonList(m_queryPosition.size());
   for(unsigned queryPositionIndex = 0; queryPositionIndex < queryPositionJsonList.GetLength(); ++queryPositionIndex)
   {
     queryPositionJsonList[queryPositionIndex].AsDouble(m_queryPosition[queryPositionIndex]);
   }
   payload.WithArray("QueryPosition", std::move(queryPositionJsonList));

  }

  if(m_queryRadiusHasBeenSet)
  {
   payload.WithInt64("QueryRadius", m_queryRadius);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

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
     additionalFeaturesJsonList[additionalFeaturesIndex].AsString(ReverseGeocodeAdditionalFeatureMapper::GetNameForReverseGeocodeAdditionalFeature(m_additionalFeatures[additionalFeaturesIndex]));
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
   payload.WithString("IntendedUse", ReverseGeocodeIntendedUseMapper::GetNameForReverseGeocodeIntendedUse(m_intendedUse));
  }

  return payload.View().WriteReadable();
}

void ReverseGeocodeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



