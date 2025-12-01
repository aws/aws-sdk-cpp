/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VideoSegmentationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

VideoSegmentationConfiguration::VideoSegmentationConfiguration(JsonView jsonValue) { *this = jsonValue; }

VideoSegmentationConfiguration& VideoSegmentationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixedLengthDuration")) {
    m_fixedLengthDuration = jsonValue.GetInteger("fixedLengthDuration");
    m_fixedLengthDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSegmentationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fixedLengthDurationHasBeenSet) {
    payload.WithInteger("fixedLengthDuration", m_fixedLengthDuration);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
