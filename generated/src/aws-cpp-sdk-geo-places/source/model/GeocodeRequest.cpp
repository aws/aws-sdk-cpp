/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoPlaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GeocodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_queryComponentsHasBeenSet)
  {
   payload.WithObject("QueryComponents", m_queryComponents.Jsonize());

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
     additionalFeaturesJsonList[additionalFeaturesIndex].AsString(GeocodeAdditionalFeatureMapper::GetNameForGeocodeAdditionalFeature(m_additionalFeatures[additionalFeaturesIndex]));
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
   payload.WithString("IntendedUse", GeocodeIntendedUseMapper::GetNameForGeocodeIntendedUse(m_intendedUse));
  }

  return payload.View().WriteReadable();
}

void GeocodeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



