/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessToolConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

HarnessToolConfiguration::HarnessToolConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessToolConfiguration& HarnessToolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteMcp")) {
    m_remoteMcp = jsonValue.GetObject("remoteMcp");
    m_remoteMcpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentCoreBrowser")) {
    m_agentCoreBrowser = jsonValue.GetObject("agentCoreBrowser");
    m_agentCoreBrowserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentCoreGateway")) {
    m_agentCoreGateway = jsonValue.GetObject("agentCoreGateway");
    m_agentCoreGatewayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inlineFunction")) {
    m_inlineFunction = jsonValue.GetObject("inlineFunction");
    m_inlineFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentCoreCodeInterpreter")) {
    m_agentCoreCodeInterpreter = jsonValue.GetObject("agentCoreCodeInterpreter");
    m_agentCoreCodeInterpreterHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessToolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_remoteMcpHasBeenSet) {
    payload.WithObject("remoteMcp", m_remoteMcp.Jsonize());
  }

  if (m_agentCoreBrowserHasBeenSet) {
    payload.WithObject("agentCoreBrowser", m_agentCoreBrowser.Jsonize());
  }

  if (m_agentCoreGatewayHasBeenSet) {
    payload.WithObject("agentCoreGateway", m_agentCoreGateway.Jsonize());
  }

  if (m_inlineFunctionHasBeenSet) {
    payload.WithObject("inlineFunction", m_inlineFunction.Jsonize());
  }

  if (m_agentCoreCodeInterpreterHasBeenSet) {
    payload.WithObject("agentCoreCodeInterpreter", m_agentCoreCodeInterpreter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
