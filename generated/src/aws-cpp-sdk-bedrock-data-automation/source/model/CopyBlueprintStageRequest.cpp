/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/CopyBlueprintStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CopyBlueprintStageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceStageHasBeenSet) {
    payload.WithString("sourceStage", BlueprintStageMapper::GetNameForBlueprintStage(m_sourceStage));
  }

  if (m_targetStageHasBeenSet) {
    payload.WithString("targetStage", BlueprintStageMapper::GetNameForBlueprintStage(m_targetStage));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
