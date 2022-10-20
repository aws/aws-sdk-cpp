/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/RunPipelineActivityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RunPipelineActivityRequest::RunPipelineActivityRequest() : 
    m_pipelineActivityHasBeenSet(false),
    m_payloadsHasBeenSet(false)
{
}

Aws::String RunPipelineActivityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineActivityHasBeenSet)
  {
   payload.WithObject("pipelineActivity", m_pipelineActivity.Jsonize());

  }

  if(m_payloadsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> payloadsJsonList(m_payloads.size());
   for(unsigned payloadsIndex = 0; payloadsIndex < payloadsJsonList.GetLength(); ++payloadsIndex)
   {
     payloadsJsonList[payloadsIndex].AsString(HashingUtils::Base64Encode(m_payloads[payloadsIndex]));
   }
   payload.WithArray("payloads", std::move(payloadsJsonList));

  }

  return payload.View().WriteReadable();
}




