/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/SendProjectSessionActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendProjectSessionActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_previewHasBeenSet)
  {
   payload.WithBool("Preview", m_preview);

  }

  if(m_recipeStepHasBeenSet)
  {
   payload.WithObject("RecipeStep", m_recipeStep.Jsonize());

  }

  if(m_stepIndexHasBeenSet)
  {
   payload.WithInteger("StepIndex", m_stepIndex);

  }

  if(m_clientSessionIdHasBeenSet)
  {
   payload.WithString("ClientSessionId", m_clientSessionId);

  }

  if(m_viewFrameHasBeenSet)
  {
   payload.WithObject("ViewFrame", m_viewFrame.Jsonize());

  }

  return payload.View().WriteReadable();
}




