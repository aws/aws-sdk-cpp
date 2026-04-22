/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessMetadataEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessMetadataEvent::HarnessMetadataEvent(JsonView jsonValue) { *this = jsonValue; }

HarnessMetadataEvent& HarnessMetadataEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("usage")) {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metrics")) {
    m_metrics = jsonValue.GetObject("metrics");
    m_metricsHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessMetadataEvent::Jsonize() const {
  JsonValue payload;

  if (m_usageHasBeenSet) {
    payload.WithObject("usage", m_usage.Jsonize());
  }

  if (m_metricsHasBeenSet) {
    payload.WithObject("metrics", m_metrics.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
