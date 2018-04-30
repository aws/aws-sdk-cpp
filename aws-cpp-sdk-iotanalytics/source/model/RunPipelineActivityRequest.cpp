/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> payloadsJsonList(m_payloads.size());
   for(unsigned payloadsIndex = 0; payloadsIndex < payloadsJsonList.GetLength(); ++payloadsIndex)
   {
     payloadsJsonList[payloadsIndex].AsString(HashingUtils::Base64Encode(m_payloads[payloadsIndex]));
   }
   payload.WithArray("payloads", std::move(payloadsJsonList));

  }

  return payload.WriteReadable();
}




