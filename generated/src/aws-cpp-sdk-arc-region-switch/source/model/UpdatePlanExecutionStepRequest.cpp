/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/UpdatePlanExecutionStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePlanExecutionStepRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_planArnHasBeenSet)
  {
   payload.WithString("planArn", m_planArn);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  if(m_actionToTakeHasBeenSet)
  {
   payload.WithString("actionToTake", UpdatePlanExecutionStepActionMapper::GetNameForUpdatePlanExecutionStepAction(m_actionToTake));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePlanExecutionStepRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ArcRegionSwitch.UpdatePlanExecutionStep"));
  return headers;

}




