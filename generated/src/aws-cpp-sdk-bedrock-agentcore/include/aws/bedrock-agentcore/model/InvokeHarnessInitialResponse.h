/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/http/HttpTypes.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

class InvokeHarnessInitialResponse {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeHarnessInitialResponse() = default;
  AWS_BEDROCKAGENTCORE_API InvokeHarnessInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeHarnessInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeHarnessInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
