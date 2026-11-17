/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/TraceGenerationRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

TraceGenerationRecord::TraceGenerationRecord(JsonView jsonValue) { *this = jsonValue; }

TraceGenerationRecord& TraceGenerationRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceConfig")) {
    m_sourceConfig = jsonValue.GetObject("sourceConfig");
    m_sourceConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("selection")) {
    m_selection = jsonValue.GetObject("selection");
    m_selectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampling")) {
    m_sampling = jsonValue.GetObject("sampling");
    m_samplingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groundTruth")) {
    m_groundTruth = jsonValue.GetObject("groundTruth");
    m_groundTruthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redactionConfiguration")) {
    m_redactionConfiguration = jsonValue.GetObject("redactionConfiguration");
    m_redactionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TraceGenerationRecord::Jsonize() const {
  JsonValue payload;

  if (m_sourceConfigHasBeenSet) {
    payload.WithObject("sourceConfig", m_sourceConfig.Jsonize());
  }

  if (m_selectionHasBeenSet) {
    payload.WithObject("selection", m_selection.Jsonize());
  }

  if (m_samplingHasBeenSet) {
    payload.WithObject("sampling", m_sampling.Jsonize());
  }

  if (m_groundTruthHasBeenSet) {
    payload.WithObject("groundTruth", m_groundTruth.Jsonize());
  }

  if (m_redactionConfigurationHasBeenSet) {
    payload.WithObject("redactionConfiguration", m_redactionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
