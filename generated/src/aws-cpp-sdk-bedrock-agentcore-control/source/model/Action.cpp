/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Action::Action(JsonView jsonValue) { *this = jsonValue; }

Action& Action::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configurationBundle")) {
    m_configurationBundle = jsonValue.GetObject("configurationBundle");
    m_configurationBundleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routeToTarget")) {
    m_routeToTarget = jsonValue.GetObject("routeToTarget");
    m_routeToTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue Action::Jsonize() const {
  JsonValue payload;

  if (m_configurationBundleHasBeenSet) {
    payload.WithObject("configurationBundle", m_configurationBundle.Jsonize());
  }

  if (m_routeToTargetHasBeenSet) {
    payload.WithObject("routeToTarget", m_routeToTarget.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
