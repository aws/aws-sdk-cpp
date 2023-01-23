/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/GetDiscoverySummaryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDiscoverySummaryRequest::GetDiscoverySummaryRequest()
{
}

Aws::String GetDiscoverySummaryRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetDiscoverySummaryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.GetDiscoverySummary"));
  return headers;

}




