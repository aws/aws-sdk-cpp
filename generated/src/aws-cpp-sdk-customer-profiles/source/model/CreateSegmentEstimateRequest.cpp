/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateSegmentEstimateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSegmentEstimateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_segmentQueryHasBeenSet)
  {
   payload.WithObject("SegmentQuery", m_segmentQuery.Jsonize());

  }

  return payload.View().WriteReadable();
}




