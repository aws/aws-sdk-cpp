/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/StopDurableExecutionRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopDurableExecutionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload = m_error.Jsonize();
  }

  return payload.View().WriteReadable();
}
