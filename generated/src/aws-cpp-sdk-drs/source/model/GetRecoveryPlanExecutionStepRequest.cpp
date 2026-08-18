/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/GetRecoveryPlanExecutionStepRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRecoveryPlanExecutionStepRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionStepArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionStepArn", m_recoveryPlanExecutionStepArn);
  }

  return payload.View().WriteReadable();
}
