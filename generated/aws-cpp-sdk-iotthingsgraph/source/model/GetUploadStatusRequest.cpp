﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/GetUploadStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUploadStatusRequest::GetUploadStatusRequest() : 
    m_uploadIdHasBeenSet(false)
{
}

Aws::String GetUploadStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_uploadIdHasBeenSet)
  {
   payload.WithString("uploadId", m_uploadId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUploadStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.GetUploadStatus"));
  return headers;

}




