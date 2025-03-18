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

    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



