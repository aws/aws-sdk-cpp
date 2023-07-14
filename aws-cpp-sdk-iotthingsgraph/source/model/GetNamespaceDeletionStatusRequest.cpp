/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/GetNamespaceDeletionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNamespaceDeletionStatusRequest::GetNamespaceDeletionStatusRequest()
{
}

Aws::String GetNamespaceDeletionStatusRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetNamespaceDeletionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.GetNamespaceDeletionStatus"));
  return headers;

}




