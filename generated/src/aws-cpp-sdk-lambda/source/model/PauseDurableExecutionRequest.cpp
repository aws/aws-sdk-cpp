/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/PauseDurableExecutionRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PauseDurableExecutionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", m_reason);
  }

  if (m_executionTimeoutPausedHasBeenSet) {
    payload.WithBool("ExecutionTimeoutPaused", m_executionTimeoutPaused);
  }

  return payload.View().WriteReadable();
}
