/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Explicitly opt out of memory.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessDisabledMemoryConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessDisabledMemoryConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessDisabledMemoryConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessDisabledMemoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessDisabledMemoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
