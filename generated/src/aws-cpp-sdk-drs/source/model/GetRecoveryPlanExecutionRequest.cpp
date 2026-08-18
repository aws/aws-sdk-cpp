/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/GetRecoveryPlanExecutionRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRecoveryPlanExecutionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionArn", m_recoveryPlanExecutionArn);
  }

  return payload.View().WriteReadable();
}
