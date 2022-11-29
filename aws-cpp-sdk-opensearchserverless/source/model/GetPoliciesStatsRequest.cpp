/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/GetPoliciesStatsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPoliciesStatsRequest::GetPoliciesStatsRequest()
{
}

Aws::String GetPoliciesStatsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetPoliciesStatsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.GetPoliciesStats"));
  return headers;

}




