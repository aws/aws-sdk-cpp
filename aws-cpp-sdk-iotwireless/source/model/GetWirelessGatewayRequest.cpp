/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWirelessGatewayRequest::GetWirelessGatewayRequest() : 
    m_identifierHasBeenSet(false),
    m_identifierType(WirelessGatewayIdType::NOT_SET),
    m_identifierTypeHasBeenSet(false)
{
}

Aws::String GetWirelessGatewayRequest::SerializePayload() const
{
  return {};
}

void GetWirelessGatewayRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identifierTypeHasBeenSet)
    {
      ss << WirelessGatewayIdTypeMapper::GetNameForWirelessGatewayIdType(m_identifierType);
      uri.AddQueryStringParameter("identifierType", ss.str());
      ss.str("");
    }

}



