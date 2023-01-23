/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CreateWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkflowRequest::CreateWorkflowRequest() : 
    m_descriptionHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_onExceptionStepsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorkflowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_onExceptionStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> onExceptionStepsJsonList(m_onExceptionSteps.size());
   for(unsigned onExceptionStepsIndex = 0; onExceptionStepsIndex < onExceptionStepsJsonList.GetLength(); ++onExceptionStepsIndex)
   {
     onExceptionStepsJsonList[onExceptionStepsIndex].AsObject(m_onExceptionSteps[onExceptionStepsIndex].Jsonize());
   }
   payload.WithArray("OnExceptionSteps", std::move(onExceptionStepsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateWorkflowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.CreateWorkflow"));
  return headers;

}




