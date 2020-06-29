/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/EnableProactiveEngagementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableProactiveEngagementRequest::EnableProactiveEngagementRequest()
{
}

Aws::String EnableProactiveEngagementRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection EnableProactiveEngagementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.EnableProactiveEngagement"));
  return headers;

}




