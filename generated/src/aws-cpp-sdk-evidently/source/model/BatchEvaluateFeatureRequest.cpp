/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/BatchEvaluateFeatureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchEvaluateFeatureRequest::BatchEvaluateFeatureRequest() : 
    m_projectHasBeenSet(false),
    m_requestsHasBeenSet(false)
{
}

Aws::String BatchEvaluateFeatureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestsJsonList(m_requests.size());
   for(unsigned requestsIndex = 0; requestsIndex < requestsJsonList.GetLength(); ++requestsIndex)
   {
     requestsJsonList[requestsIndex].AsObject(m_requests[requestsIndex].Jsonize());
   }
   payload.WithArray("requests", std::move(requestsJsonList));

  }

  return payload.View().WriteReadable();
}




