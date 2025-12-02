/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateEvaluatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEvaluatorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_evaluatorNameHasBeenSet) {
    payload.WithString("evaluatorName", m_evaluatorName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_evaluatorConfigHasBeenSet) {
    payload.WithObject("evaluatorConfig", m_evaluatorConfig.Jsonize());
  }

  if (m_levelHasBeenSet) {
    payload.WithString("level", EvaluatorLevelMapper::GetNameForEvaluatorLevel(m_level));
  }

  return payload.View().WriteReadable();
}
