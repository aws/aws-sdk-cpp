/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartHumanLoopRequest::StartHumanLoopRequest() : 
    m_humanLoopNameHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_humanLoopInputHasBeenSet(false),
    m_dataAttributesHasBeenSet(false)
{
}

Aws::String StartHumanLoopRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_humanLoopNameHasBeenSet)
  {
   payload.WithString("HumanLoopName", m_humanLoopName);

  }

  if(m_flowDefinitionArnHasBeenSet)
  {
   payload.WithString("FlowDefinitionArn", m_flowDefinitionArn);

  }

  if(m_humanLoopInputHasBeenSet)
  {
   payload.WithObject("HumanLoopInput", m_humanLoopInput.Jsonize());

  }

  if(m_dataAttributesHasBeenSet)
  {
   payload.WithObject("DataAttributes", m_dataAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




