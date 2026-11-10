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
 * <p>The resource configuration for an AgentCore Runtime.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ResourceConfiguration">AWS
 * API Reference</a></p>
 */
class ResourceConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ResourceConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ResourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ResourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum amount of memory, in mebibytes, to allocate to the AgentCore
   * Runtime.</p>
   */
  inline int GetMinimumMemoryInMiB() const { return m_minimumMemoryInMiB; }
  inline bool MinimumMemoryInMiBHasBeenSet() const { return m_minimumMemoryInMiBHasBeenSet; }
  inline void SetMinimumMemoryInMiB(int value) {
    m_minimumMemoryInMiBHasBeenSet = true;
    m_minimumMemoryInMiB = value;
  }
  inline ResourceConfiguration& WithMinimumMemoryInMiB(int value) {
    SetMinimumMemoryInMiB(value);
    return *this;
  }
  ///@}
 private:
  int m_minimumMemoryInMiB{0};
  bool m_minimumMemoryInMiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
