/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RenderUiTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RenderUiTemplateRequest::RenderUiTemplateRequest() : 
    m_uiTemplateHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_humanTaskUiArnHasBeenSet(false)
{
}

Aws::String RenderUiTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_uiTemplateHasBeenSet)
  {
   payload.WithObject("UiTemplate", m_uiTemplate.Jsonize());

  }

  if(m_taskHasBeenSet)
  {
   payload.WithObject("Task", m_task.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_humanTaskUiArnHasBeenSet)
  {
   payload.WithString("HumanTaskUiArn", m_humanTaskUiArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RenderUiTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.RenderUiTemplate"));
  return headers;

}




