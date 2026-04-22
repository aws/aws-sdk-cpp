/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeHarnessInitialResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

InvokeHarnessInitialResponse::InvokeHarnessInitialResponse(JsonView jsonValue) { *this = jsonValue; }

InvokeHarnessInitialResponse& InvokeHarnessInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeHarnessInitialResponse::InvokeHarnessInitialResponse(const Http::HeaderValueCollection& headers) : InvokeHarnessInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue InvokeHarnessInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
