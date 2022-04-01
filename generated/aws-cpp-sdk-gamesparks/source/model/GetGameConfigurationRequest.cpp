/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GetGameConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetGameConfigurationRequest::GetGameConfigurationRequest() : 
    m_gameNameHasBeenSet(false),
    m_sectionsHasBeenSet(false)
{
}

Aws::String GetGameConfigurationRequest::SerializePayload() const
{
  return {};
}

void GetGameConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sectionsHasBeenSet)
    {
      for(const auto& item : m_sections)
      {
        ss << item;
        uri.AddQueryStringParameter("Sections", ss.str());
        ss.str("");
      }
    }

}



