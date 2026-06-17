/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStreamInitialResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveStreamInitialResponse::AgenticRetrieveStreamInitialResponse(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveStreamInitialResponse& AgenticRetrieveStreamInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

AgenticRetrieveStreamInitialResponse::AgenticRetrieveStreamInitialResponse(const Http::HeaderValueCollection& headers)
    : AgenticRetrieveStreamInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue AgenticRetrieveStreamInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
