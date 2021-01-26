/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/StartTaskExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTaskExecutionRequest::StartTaskExecutionRequest() : 
    m_taskArnHasBeenSet(false),
    m_overrideOptionsHasBeenSet(false),
    m_includesHasBeenSet(false)
{
}

Aws::String StartTaskExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_overrideOptionsHasBeenSet)
  {
   payload.WithObject("OverrideOptions", m_overrideOptions.Jsonize());

  }

  if(m_includesHasBeenSet)
  {
   Array<JsonValue> includesJsonList(m_includes.size());
   for(unsigned includesIndex = 0; includesIndex < includesJsonList.GetLength(); ++includesIndex)
   {
     includesJsonList[includesIndex].AsObject(m_includes[includesIndex].Jsonize());
   }
   payload.WithArray("Includes", std::move(includesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartTaskExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.StartTaskExecution"));
  return headers;

}




