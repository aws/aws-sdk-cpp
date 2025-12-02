/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EpisodicOverrideConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EpisodicOverrideConfigurationInput::EpisodicOverrideConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

EpisodicOverrideConfigurationInput& EpisodicOverrideConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("extraction")) {
    m_extraction = jsonValue.GetObject("extraction");
    m_extractionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consolidation")) {
    m_consolidation = jsonValue.GetObject("consolidation");
    m_consolidationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reflection")) {
    m_reflection = jsonValue.GetObject("reflection");
    m_reflectionHasBeenSet = true;
  }
  return *this;
}

JsonValue EpisodicOverrideConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_extractionHasBeenSet) {
    payload.WithObject("extraction", m_extraction.Jsonize());
  }

  if (m_consolidationHasBeenSet) {
    payload.WithObject("consolidation", m_consolidation.Jsonize());
  }

  if (m_reflectionHasBeenSet) {
    payload.WithObject("reflection", m_reflection.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
