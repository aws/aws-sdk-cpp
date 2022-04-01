/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetLaunchProfileInitializationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLaunchProfileInitializationRequest::GetLaunchProfileInitializationRequest() : 
    m_launchProfileIdHasBeenSet(false),
    m_launchProfileProtocolVersionsHasBeenSet(false),
    m_launchPurposeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String GetLaunchProfileInitializationRequest::SerializePayload() const
{
  return {};
}

void GetLaunchProfileInitializationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_launchProfileProtocolVersionsHasBeenSet)
    {
      for(const auto& item : m_launchProfileProtocolVersions)
      {
        ss << item;
        uri.AddQueryStringParameter("launchProfileProtocolVersions", ss.str());
        ss.str("");
      }
    }

    if(m_launchPurposeHasBeenSet)
    {
      ss << m_launchPurpose;
      uri.AddQueryStringParameter("launchPurpose", ss.str());
      ss.str("");
    }

    if(m_platformHasBeenSet)
    {
      ss << m_platform;
      uri.AddQueryStringParameter("platform", ss.str());
      ss.str("");
    }

}



