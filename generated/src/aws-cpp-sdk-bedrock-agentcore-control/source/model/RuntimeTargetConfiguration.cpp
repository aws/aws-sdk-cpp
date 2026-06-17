/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RuntimeTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RuntimeTargetConfiguration::RuntimeTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

RuntimeTargetConfiguration& RuntimeTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("qualifier")) {
    m_qualifier = jsonValue.GetString("qualifier");
    m_qualifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_qualifierHasBeenSet) {
    payload.WithString("qualifier", m_qualifier);
  }

  if (m_schemaHasBeenSet) {
    payload.WithObject("schema", m_schema.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
