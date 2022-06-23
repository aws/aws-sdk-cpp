/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DeleteQueuedMessagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteQueuedMessagesRequest::DeleteQueuedMessagesRequest() : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_wirelessDeviceType(WirelessDeviceType::NOT_SET),
    m_wirelessDeviceTypeHasBeenSet(false)
{
}

Aws::String DeleteQueuedMessagesRequest::SerializePayload() const
{
  return {};
}

void DeleteQueuedMessagesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_messageIdHasBeenSet)
    {
      ss << m_messageId;
      uri.AddQueryStringParameter("messageId", ss.str());
      ss.str("");
    }

    if(m_wirelessDeviceTypeHasBeenSet)
    {
      ss << WirelessDeviceTypeMapper::GetNameForWirelessDeviceType(m_wirelessDeviceType);
      uri.AddQueryStringParameter("WirelessDeviceType", ss.str());
      ss.str("");
    }

}



