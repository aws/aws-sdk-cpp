/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetDeviceFleetReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceFleetReportRequest::GetDeviceFleetReportRequest() : 
    m_deviceFleetNameHasBeenSet(false)
{
}

Aws::String GetDeviceFleetReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDeviceFleetReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.GetDeviceFleetReport"));
  return headers;

}




