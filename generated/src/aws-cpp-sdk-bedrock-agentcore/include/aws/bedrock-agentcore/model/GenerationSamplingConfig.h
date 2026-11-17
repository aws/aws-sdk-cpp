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

/**
 * <p>How many scenarios a dataset generation produces.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationSamplingConfig">AWS
 * API Reference</a></p>
 */
class GenerationSamplingConfig {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationSamplingConfig() = default;
  AWS_BEDROCKAGENTCORE_API GenerationSamplingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationSamplingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of scenarios to generate, from 1 to 1,000. The default is
   * 100. The generation produces at most one scenario for each selected session. The
   * dataset's draft examples plus this value can't be more than 1,000.</p>
   */
  inline int GetMaxScenarios() const { return m_maxScenarios; }
  inline bool MaxScenariosHasBeenSet() const { return m_maxScenariosHasBeenSet; }
  inline void SetMaxScenarios(int value) {
    m_maxScenariosHasBeenSet = true;
    m_maxScenarios = value;
  }
  inline GenerationSamplingConfig& WithMaxScenarios(int value) {
    SetMaxScenarios(value);
    return *this;
  }
  ///@}
 private:
  int m_maxScenarios{0};
  bool m_maxScenariosHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
