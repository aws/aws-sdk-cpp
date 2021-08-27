/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DisassociateLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociateLinkRequest::DisassociateLinkRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_linkIdHasBeenSet(false)
{
}

Aws::String DisassociateLinkRequest::SerializePayload() const
{
  return {};
}

void DisassociateLinkRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deviceIdHasBeenSet)
    {
      ss << m_deviceId;
      uri.AddQueryStringParameter("deviceId", ss.str());
      ss.str("");
    }

    if(m_linkIdHasBeenSet)
    {
      ss << m_linkId;
      uri.AddQueryStringParameter("linkId", ss.str());
      ss.str("");
    }

}



