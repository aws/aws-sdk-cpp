/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AudioSegmentationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

AudioSegmentationConfiguration::AudioSegmentationConfiguration(JsonView jsonValue) { *this = jsonValue; }

AudioSegmentationConfiguration& AudioSegmentationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixedLengthDuration")) {
    m_fixedLengthDuration = jsonValue.GetInteger("fixedLengthDuration");
    m_fixedLengthDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioSegmentationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fixedLengthDurationHasBeenSet) {
    payload.WithInteger("fixedLengthDuration", m_fixedLengthDuration);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
