/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserExtension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BrowserExtension::BrowserExtension(JsonView jsonValue) { *this = jsonValue; }

BrowserExtension& BrowserExtension::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetObject("location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserExtension::Jsonize() const {
  JsonValue payload;

  if (m_locationHasBeenSet) {
    payload.WithObject("location", m_location.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
