/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ProxyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ProxyConfiguration::ProxyConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProxyConfiguration& ProxyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("proxies")) {
    Aws::Utils::Array<JsonView> proxiesJsonList = jsonValue.GetArray("proxies");
    for (unsigned proxiesIndex = 0; proxiesIndex < proxiesJsonList.GetLength(); ++proxiesIndex) {
      m_proxies.push_back(proxiesJsonList[proxiesIndex].AsObject());
    }
    m_proxiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bypass")) {
    m_bypass = jsonValue.GetObject("bypass");
    m_bypassHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_proxiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> proxiesJsonList(m_proxies.size());
    for (unsigned proxiesIndex = 0; proxiesIndex < proxiesJsonList.GetLength(); ++proxiesIndex) {
      proxiesJsonList[proxiesIndex].AsObject(m_proxies[proxiesIndex].Jsonize());
    }
    payload.WithArray("proxies", std::move(proxiesJsonList));
  }

  if (m_bypassHasBeenSet) {
    payload.WithObject("bypass", m_bypass.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
