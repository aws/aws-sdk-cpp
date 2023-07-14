/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetServiceEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetServiceEndpointRequest::GetServiceEndpointRequest() : 
    m_serviceType(WirelessGatewayServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
}

Aws::String GetServiceEndpointRequest::SerializePayload() const
{
  return {};
}

void GetServiceEndpointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_serviceTypeHasBeenSet)
    {
      ss << WirelessGatewayServiceTypeMapper::GetNameForWirelessGatewayServiceType(m_serviceType);
      uri.AddQueryStringParameter("serviceType", ss.str());
      ss.str("");
    }

}



