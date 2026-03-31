/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String EvaluateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_evaluationInputHasBeenSet) {
    payload.WithObject("evaluationInput", m_evaluationInput.Jsonize());
  }

  if (m_evaluationTargetHasBeenSet) {
    payload.WithObject("evaluationTarget", m_evaluationTarget.Jsonize());
  }

  if (m_evaluationReferenceInputsHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluationReferenceInputsJsonList(m_evaluationReferenceInputs.size());
    for (unsigned evaluationReferenceInputsIndex = 0; evaluationReferenceInputsIndex < evaluationReferenceInputsJsonList.GetLength();
         ++evaluationReferenceInputsIndex) {
      evaluationReferenceInputsJsonList[evaluationReferenceInputsIndex].AsObject(
          m_evaluationReferenceInputs[evaluationReferenceInputsIndex].Jsonize());
    }
    payload.WithArray("evaluationReferenceInputs", std::move(evaluationReferenceInputsJsonList));
  }

  return payload.View().WriteReadable();
}
