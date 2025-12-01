/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VideoConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

VideoConfiguration::VideoConfiguration(JsonView jsonValue) { *this = jsonValue; }

VideoConfiguration& VideoConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("segmentationConfiguration")) {
    m_segmentationConfiguration = jsonValue.GetObject("segmentationConfiguration");
    m_segmentationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_segmentationConfigurationHasBeenSet) {
    payload.WithObject("segmentationConfiguration", m_segmentationConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
