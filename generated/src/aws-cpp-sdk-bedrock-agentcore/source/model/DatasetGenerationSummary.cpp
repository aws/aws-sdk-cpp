/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DatasetGenerationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

DatasetGenerationSummary::DatasetGenerationSummary(JsonView jsonValue) { *this = jsonValue; }

DatasetGenerationSummary& DatasetGenerationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("generationId")) {
    m_generationId = jsonValue.GetString("generationId");
    m_generationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scenarioType")) {
    m_scenarioType = ScenarioTypeMapper::GetScenarioTypeForName(jsonValue.GetString("scenarioType"));
    m_scenarioTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetGenerationStatusMapper::GetDatasetGenerationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetGenerationSummary::Jsonize() const {
  JsonValue payload;

  if (m_generationIdHasBeenSet) {
    payload.WithString("generationId", m_generationId);
  }

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_scenarioTypeHasBeenSet) {
    payload.WithString("scenarioType", ScenarioTypeMapper::GetNameForScenarioType(m_scenarioType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DatasetGenerationStatusMapper::GetNameForDatasetGenerationStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_completedAtHasBeenSet) {
    payload.WithString("completedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
