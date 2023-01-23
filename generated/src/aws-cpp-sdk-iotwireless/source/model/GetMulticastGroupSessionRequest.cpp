/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetMulticastGroupSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMulticastGroupSessionRequest::GetMulticastGroupSessionRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetMulticastGroupSessionRequest::SerializePayload() const
{
  return {};
}




