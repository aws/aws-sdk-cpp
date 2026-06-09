/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PutAccountDataRetentionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountDataRetentionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", DataRetentionModeMapper::GetNameForDataRetentionMode(m_mode));
  }

  return payload.View().WriteReadable();
}
