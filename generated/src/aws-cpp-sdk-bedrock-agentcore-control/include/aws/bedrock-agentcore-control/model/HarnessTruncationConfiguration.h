/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessTruncationStrategy.h>
#include <aws/bedrock-agentcore-control/model/HarnessTruncationStrategyConfiguration.h>

#include <utility>

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
 * <p>Configuration for truncating conversation context when it exceeds model
 * limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessTruncationConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessTruncationConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The truncation strategy to use.</p>
   */
  inline HarnessTruncationStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(HarnessTruncationStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline HarnessTruncationConfiguration& WithStrategy(HarnessTruncationStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The strategy-specific configuration.</p>
   */
  inline const HarnessTruncationStrategyConfiguration& GetConfig() const { return m_config; }
  inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
  template <typename ConfigT = HarnessTruncationStrategyConfiguration>
  void SetConfig(ConfigT&& value) {
    m_configHasBeenSet = true;
    m_config = std::forward<ConfigT>(value);
  }
  template <typename ConfigT = HarnessTruncationStrategyConfiguration>
  HarnessTruncationConfiguration& WithConfig(ConfigT&& value) {
    SetConfig(std::forward<ConfigT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessTruncationStrategy m_strategy{HarnessTruncationStrategy::NOT_SET};

  HarnessTruncationStrategyConfiguration m_config;
  bool m_strategyHasBeenSet = false;
  bool m_configHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
