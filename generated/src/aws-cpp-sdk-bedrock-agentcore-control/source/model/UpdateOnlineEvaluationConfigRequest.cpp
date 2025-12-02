/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateOnlineEvaluationConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOnlineEvaluationConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_ruleHasBeenSet) {
    payload.WithObject("rule", m_rule.Jsonize());
  }

  if (m_dataSourceConfigHasBeenSet) {
    payload.WithObject("dataSourceConfig", m_dataSourceConfig.Jsonize());
  }

  if (m_evaluatorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorsJsonList(m_evaluators.size());
    for (unsigned evaluatorsIndex = 0; evaluatorsIndex < evaluatorsJsonList.GetLength(); ++evaluatorsIndex) {
      evaluatorsJsonList[evaluatorsIndex].AsObject(m_evaluators[evaluatorsIndex].Jsonize());
    }
    payload.WithArray("evaluators", std::move(evaluatorsJsonList));
  }

  if (m_evaluationExecutionRoleArnHasBeenSet) {
    payload.WithString("evaluationExecutionRoleArn", m_evaluationExecutionRoleArn);
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus",
                       OnlineEvaluationExecutionStatusMapper::GetNameForOnlineEvaluationExecutionStatus(m_executionStatus));
  }

  return payload.View().WriteReadable();
}
