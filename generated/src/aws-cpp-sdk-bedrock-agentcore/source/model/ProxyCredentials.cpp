/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ProxyCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ProxyCredentials::ProxyCredentials(JsonView jsonValue) { *this = jsonValue; }

ProxyCredentials& ProxyCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("basicAuth")) {
    m_basicAuth = jsonValue.GetObject("basicAuth");
    m_basicAuthHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyCredentials::Jsonize() const {
  JsonValue payload;

  if (m_basicAuthHasBeenSet) {
    payload.WithObject("basicAuth", m_basicAuth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
