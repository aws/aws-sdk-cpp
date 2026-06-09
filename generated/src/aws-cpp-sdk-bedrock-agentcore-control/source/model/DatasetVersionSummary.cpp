/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DatasetVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

DatasetVersionSummary::DatasetVersionSummary(JsonView jsonValue) { *this = jsonValue; }

DatasetVersionSummary& DatasetVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetVersion")) {
    m_datasetVersion = jsonValue.GetString("datasetVersion");
    m_datasetVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exampleCount")) {
    m_exampleCount = jsonValue.GetInt64("exampleCount");
    m_exampleCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_datasetVersionHasBeenSet) {
    payload.WithString("datasetVersion", m_datasetVersion);
  }

  if (m_exampleCountHasBeenSet) {
    payload.WithInt64("exampleCount", m_exampleCount);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
