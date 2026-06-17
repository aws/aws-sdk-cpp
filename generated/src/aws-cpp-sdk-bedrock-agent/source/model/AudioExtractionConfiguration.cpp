/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AudioExtractionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

AudioExtractionConfiguration::AudioExtractionConfiguration(JsonView jsonValue) { *this = jsonValue; }

AudioExtractionConfiguration& AudioExtractionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("audioExtractionStatus")) {
    m_audioExtractionStatus = EnabledOrDisabledStateMapper::GetEnabledOrDisabledStateForName(jsonValue.GetString("audioExtractionStatus"));
    m_audioExtractionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioExtractionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_audioExtractionStatusHasBeenSet) {
    payload.WithString("audioExtractionStatus", EnabledOrDisabledStateMapper::GetNameForEnabledOrDisabledState(m_audioExtractionStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
