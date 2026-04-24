/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ContentStartEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ContentStartEvent::ContentStartEvent(JsonView jsonValue) { *this = jsonValue; }

ContentStartEvent& ContentStartEvent::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ContentStartEvent::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
