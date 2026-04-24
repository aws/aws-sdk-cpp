/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PrivateEndpointOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PrivateEndpointOverride::PrivateEndpointOverride(JsonView jsonValue) { *this = jsonValue; }

PrivateEndpointOverride& PrivateEndpointOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpoint")) {
    m_privateEndpoint = jsonValue.GetObject("privateEndpoint");
    m_privateEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateEndpointOverride::Jsonize() const {
  JsonValue payload;

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_privateEndpointHasBeenSet) {
    payload.WithObject("privateEndpoint", m_privateEndpoint.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
