/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/RemoveStreamGroupLocationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RemoveStreamGroupLocationsRequest::SerializePayload() const
{
  return {};
}

void RemoveStreamGroupLocationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_locationsHasBeenSet)
    {
      for(const auto& item : m_locations)
      {
        ss << item;
        uri.AddQueryStringParameter("locations", ss.str());
        ss.str("");
      }
    }

}



