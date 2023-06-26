/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DeregisterWirelessDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeregisterWirelessDeviceRequest::DeregisterWirelessDeviceRequest() : 
    m_identifierHasBeenSet(false),
    m_wirelessDeviceType(WirelessDeviceType::NOT_SET),
    m_wirelessDeviceTypeHasBeenSet(false)
{
}

Aws::String DeregisterWirelessDeviceRequest::SerializePayload() const
{
  return {};
}

void DeregisterWirelessDeviceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_wirelessDeviceTypeHasBeenSet)
    {
      ss << WirelessDeviceTypeMapper::GetNameForWirelessDeviceType(m_wirelessDeviceType);
      uri.AddQueryStringParameter("WirelessDeviceType", ss.str());
      ss.str("");
    }

}



