/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/ReorderRecoveryPlanStepsRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ReorderRecoveryPlanStepsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanArnHasBeenSet) {
    payload.WithString("recoveryPlanArn", m_recoveryPlanArn);
  }

  if (m_orderedStepArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> orderedStepArnsJsonList(m_orderedStepArns.size());
    for (unsigned orderedStepArnsIndex = 0; orderedStepArnsIndex < orderedStepArnsJsonList.GetLength(); ++orderedStepArnsIndex) {
      orderedStepArnsJsonList[orderedStepArnsIndex].AsString(m_orderedStepArns[orderedStepArnsIndex]);
    }
    payload.WithArray("orderedStepArns", std::move(orderedStepArnsJsonList));
  }

  return payload.View().WriteReadable();
}
