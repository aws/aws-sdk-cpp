/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/CancelPipelineExecutionRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelPipelineExecutionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload.View().WriteReadable();
}
