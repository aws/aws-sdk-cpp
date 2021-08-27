/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/GetDirectoryLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDirectoryLimitsRequest::GetDirectoryLimitsRequest()
{
}

Aws::String GetDirectoryLimitsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetDirectoryLimitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.GetDirectoryLimits"));
  return headers;

}




