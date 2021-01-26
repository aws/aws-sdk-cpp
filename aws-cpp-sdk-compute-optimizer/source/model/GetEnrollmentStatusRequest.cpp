/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEnrollmentStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEnrollmentStatusRequest::GetEnrollmentStatusRequest()
{
}

Aws::String GetEnrollmentStatusRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetEnrollmentStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComputeOptimizerService.GetEnrollmentStatus"));
  return headers;

}




