/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GetPlaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoPlaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetPlaceRequest::SerializePayload() const
{
  return {};
}

void GetPlaceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_additionalFeaturesHasBeenSet)
    {
      for(const auto& item : m_additionalFeatures)
      {
        ss << GetPlaceAdditionalFeatureMapper::GetNameForGetPlaceAdditionalFeature(item);
        uri.AddQueryStringParameter("additional-features", ss.str());
        ss.str("");
      }
    }

    if(m_languageHasBeenSet)
    {
      ss << m_language;
      uri.AddQueryStringParameter("language", ss.str());
      ss.str("");
    }

    if(m_politicalViewHasBeenSet)
    {
      ss << m_politicalView;
      uri.AddQueryStringParameter("political-view", ss.str());
      ss.str("");
    }

    if(m_intendedUseHasBeenSet)
    {
      ss << GetPlaceIntendedUseMapper::GetNameForGetPlaceIntendedUse(m_intendedUse);
      uri.AddQueryStringParameter("intended-use", ss.str());
      ss.str("");
    }

    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



