/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/GetMessagingSessionEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetMessagingSessionEndpointRequest::SerializePayload() const
{
  return {};
}

void GetMessagingSessionEndpointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_networkTypeHasBeenSet)
    {
      ss << NetworkTypeMapper::GetNameForNetworkType(m_networkType);
      uri.AddQueryStringParameter("network-type", ss.str());
      ss.str("");
    }

}



