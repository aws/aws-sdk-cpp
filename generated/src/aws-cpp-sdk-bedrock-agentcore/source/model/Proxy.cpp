/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Proxy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

Proxy::Proxy(JsonView jsonValue) { *this = jsonValue; }

Proxy& Proxy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("externalProxy")) {
    m_externalProxy = jsonValue.GetObject("externalProxy");
    m_externalProxyHasBeenSet = true;
  }
  return *this;
}

JsonValue Proxy::Jsonize() const {
  JsonValue payload;

  if (m_externalProxyHasBeenSet) {
    payload.WithObject("externalProxy", m_externalProxy.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
