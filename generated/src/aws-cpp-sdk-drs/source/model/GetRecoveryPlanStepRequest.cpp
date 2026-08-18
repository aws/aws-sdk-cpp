/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/GetRecoveryPlanStepRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRecoveryPlanStepRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanStepArnHasBeenSet) {
    payload.WithString("recoveryPlanStepArn", m_recoveryPlanStepArn);
  }

  return payload.View().WriteReadable();
}
