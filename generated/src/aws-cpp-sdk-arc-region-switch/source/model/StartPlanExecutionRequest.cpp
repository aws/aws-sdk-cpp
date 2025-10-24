﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/StartPlanExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartPlanExecutionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_planArnHasBeenSet) {
    payload.WithString("planArn", m_planArn);
  }

  if (m_targetRegionHasBeenSet) {
    payload.WithString("targetRegion", m_targetRegion);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", ExecutionActionMapper::GetNameForExecutionAction(m_action));
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", ExecutionModeMapper::GetNameForExecutionMode(m_mode));
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  if (m_latestVersionHasBeenSet) {
    payload.WithString("latestVersion", m_latestVersion);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartPlanExecutionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ArcRegionSwitch.StartPlanExecution"));
  return headers;
}
