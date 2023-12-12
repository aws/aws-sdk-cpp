/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/SendWorkflowStepActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendWorkflowStepActionRequest::SendWorkflowStepActionRequest() : 
    m_stepExecutionIdHasBeenSet(false),
    m_imageBuildVersionArnHasBeenSet(false),
    m_action(WorkflowStepActionType::NOT_SET),
    m_actionHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String SendWorkflowStepActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stepExecutionIdHasBeenSet)
  {
   payload.WithString("stepExecutionId", m_stepExecutionId);

  }

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("imageBuildVersionArn", m_imageBuildVersionArn);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", WorkflowStepActionTypeMapper::GetNameForWorkflowStepActionType(m_action));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




