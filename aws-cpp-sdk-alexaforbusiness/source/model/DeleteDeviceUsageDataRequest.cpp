/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeleteDeviceUsageDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDeviceUsageDataRequest::DeleteDeviceUsageDataRequest() : 
    m_deviceArnHasBeenSet(false),
    m_deviceUsageType(DeviceUsageType::NOT_SET),
    m_deviceUsageTypeHasBeenSet(false)
{
}

Aws::String DeleteDeviceUsageDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_deviceUsageTypeHasBeenSet)
  {
   payload.WithString("DeviceUsageType", DeviceUsageTypeMapper::GetNameForDeviceUsageType(m_deviceUsageType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDeviceUsageDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DeleteDeviceUsageData"));
  return headers;

}




