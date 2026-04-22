/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessSlidingWindowConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessSummarizationConfiguration.h>

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
 * <p>Strategy-specific truncation configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessTruncationStrategyConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessTruncationStrategyConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationStrategyConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationStrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTruncationStrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for sliding window truncation.</p>
   */
  inline const HarnessSlidingWindowConfiguration& GetSlidingWindow() const { return m_slidingWindow; }
  inline bool SlidingWindowHasBeenSet() const { return m_slidingWindowHasBeenSet; }
  template <typename SlidingWindowT = HarnessSlidingWindowConfiguration>
  void SetSlidingWindow(SlidingWindowT&& value) {
    m_slidingWindowHasBeenSet = true;
    m_slidingWindow = std::forward<SlidingWindowT>(value);
  }
  template <typename SlidingWindowT = HarnessSlidingWindowConfiguration>
  HarnessTruncationStrategyConfiguration& WithSlidingWindow(SlidingWindowT&& value) {
    SetSlidingWindow(std::forward<SlidingWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for summarization-based truncation.</p>
   */
  inline const HarnessSummarizationConfiguration& GetSummarization() const { return m_summarization; }
  inline bool SummarizationHasBeenSet() const { return m_summarizationHasBeenSet; }
  template <typename SummarizationT = HarnessSummarizationConfiguration>
  void SetSummarization(SummarizationT&& value) {
    m_summarizationHasBeenSet = true;
    m_summarization = std::forward<SummarizationT>(value);
  }
  template <typename SummarizationT = HarnessSummarizationConfiguration>
  HarnessTruncationStrategyConfiguration& WithSummarization(SummarizationT&& value) {
    SetSummarization(std::forward<SummarizationT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessSlidingWindowConfiguration m_slidingWindow;

  HarnessSummarizationConfiguration m_summarization;
  bool m_slidingWindowHasBeenSet = false;
  bool m_summarizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
