﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StartDetectMitigationActionsTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDetectMitigationActionsTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_violationEventOccurrenceRangeHasBeenSet)
  {
   payload.WithObject("violationEventOccurrenceRange", m_violationEventOccurrenceRange.Jsonize());

  }

  if(m_includeOnlyActiveViolationsHasBeenSet)
  {
   payload.WithBool("includeOnlyActiveViolations", m_includeOnlyActiveViolations);

  }

  if(m_includeSuppressedAlertsHasBeenSet)
  {
   payload.WithBool("includeSuppressedAlerts", m_includeSuppressedAlerts);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




