/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HttpApiSchemaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HttpApiSchemaConfiguration::HttpApiSchemaConfiguration(JsonView jsonValue) { *this = jsonValue; }

HttpApiSchemaConfiguration& HttpApiSchemaConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpApiSchemaConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
