/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

class Unit {
 public:
  AWS_BEDROCKAGENTCORE_API Unit() = default;
  AWS_BEDROCKAGENTCORE_API Unit(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Unit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
