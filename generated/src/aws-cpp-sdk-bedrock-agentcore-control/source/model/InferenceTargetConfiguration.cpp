/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InferenceTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InferenceTargetConfiguration::InferenceTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

InferenceTargetConfiguration& InferenceTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connector")) {
    m_connector = jsonValue.GetObject("connector");
    m_connectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = jsonValue.GetObject("provider");
    m_providerHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_connectorHasBeenSet) {
    payload.WithObject("connector", m_connector.Jsonize());
  }

  if (m_providerHasBeenSet) {
    payload.WithObject("provider", m_provider.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
