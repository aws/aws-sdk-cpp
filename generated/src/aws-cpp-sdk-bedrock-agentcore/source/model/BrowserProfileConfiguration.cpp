/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserProfileConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BrowserProfileConfiguration::BrowserProfileConfiguration(JsonView jsonValue) { *this = jsonValue; }

BrowserProfileConfiguration& BrowserProfileConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("profileIdentifier")) {
    m_profileIdentifier = jsonValue.GetString("profileIdentifier");
    m_profileIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserProfileConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_profileIdentifierHasBeenSet) {
    payload.WithString("profileIdentifier", m_profileIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
