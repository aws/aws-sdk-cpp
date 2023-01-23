/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListWirelessDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWirelessDevicesRequest::ListWirelessDevicesRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_destinationNameHasBeenSet(false),
    m_deviceProfileIdHasBeenSet(false),
    m_serviceProfileIdHasBeenSet(false),
    m_wirelessDeviceType(WirelessDeviceType::NOT_SET),
    m_wirelessDeviceTypeHasBeenSet(false),
    m_fuotaTaskIdHasBeenSet(false),
    m_multicastGroupIdHasBeenSet(false)
{
}

Aws::String ListWirelessDevicesRequest::SerializePayload() const
{
  return {};
}

void ListWirelessDevicesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_destinationNameHasBeenSet)
    {
      ss << m_destinationName;
      uri.AddQueryStringParameter("destinationName", ss.str());
      ss.str("");
    }

    if(m_deviceProfileIdHasBeenSet)
    {
      ss << m_deviceProfileId;
      uri.AddQueryStringParameter("deviceProfileId", ss.str());
      ss.str("");
    }

    if(m_serviceProfileIdHasBeenSet)
    {
      ss << m_serviceProfileId;
      uri.AddQueryStringParameter("serviceProfileId", ss.str());
      ss.str("");
    }

    if(m_wirelessDeviceTypeHasBeenSet)
    {
      ss << WirelessDeviceTypeMapper::GetNameForWirelessDeviceType(m_wirelessDeviceType);
      uri.AddQueryStringParameter("wirelessDeviceType", ss.str());
      ss.str("");
    }

    if(m_fuotaTaskIdHasBeenSet)
    {
      ss << m_fuotaTaskId;
      uri.AddQueryStringParameter("fuotaTaskId", ss.str());
      ss.str("");
    }

    if(m_multicastGroupIdHasBeenSet)
    {
      ss << m_multicastGroupId;
      uri.AddQueryStringParameter("multicastGroupId", ss.str());
      ss.str("");
    }

}



