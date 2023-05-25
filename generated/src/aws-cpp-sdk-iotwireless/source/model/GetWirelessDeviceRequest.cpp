/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWirelessDeviceRequest::GetWirelessDeviceRequest() : 
    m_identifierHasBeenSet(false),
    m_identifierType(WirelessDeviceIdType::NOT_SET),
    m_identifierTypeHasBeenSet(false)
{
}

Aws::String GetWirelessDeviceRequest::SerializePayload() const
{
  return {};
}

void GetWirelessDeviceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identifierTypeHasBeenSet)
    {
      ss << WirelessDeviceIdTypeMapper::GetNameForWirelessDeviceIdType(m_identifierType);
      uri.AddQueryStringParameter("identifierType", ss.str());
      ss.str("");
    }

}



