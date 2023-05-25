/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/StopInferenceSchedulerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopInferenceSchedulerRequest::StopInferenceSchedulerRequest() : 
    m_inferenceSchedulerNameHasBeenSet(false)
{
}

Aws::String StopInferenceSchedulerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inferenceSchedulerNameHasBeenSet)
  {
   payload.WithString("InferenceSchedulerName", m_inferenceSchedulerName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopInferenceSchedulerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.StopInferenceScheduler"));
  return headers;

}




