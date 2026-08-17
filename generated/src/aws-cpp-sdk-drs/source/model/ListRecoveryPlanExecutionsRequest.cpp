/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/ListRecoveryPlanExecutionsRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRecoveryPlanExecutionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanArnHasBeenSet) {
    payload.WithString("recoveryPlanArn", m_recoveryPlanArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecoveryPlanExecutionStatusMapper::GetNameForRecoveryPlanExecutionStatus(m_status));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
