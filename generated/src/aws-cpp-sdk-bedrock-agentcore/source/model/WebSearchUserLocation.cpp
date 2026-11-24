/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/WebSearchUserLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

WebSearchUserLocation::WebSearchUserLocation(JsonView jsonValue) { *this = jsonValue; }

WebSearchUserLocation& WebSearchUserLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("country")) {
    m_country = jsonValue.GetString("country");
    m_countryHasBeenSet = true;
  }
  return *this;
}

JsonValue WebSearchUserLocation::Jsonize() const {
  JsonValue payload;

  if (m_countryHasBeenSet) {
    payload.WithString("country", m_country);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
