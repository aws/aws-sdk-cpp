/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLimitsRequest::DescribeLimitsRequest()
{
}

Aws::String DescribeLimitsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeLimitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeLimits"));
  return headers;

}




