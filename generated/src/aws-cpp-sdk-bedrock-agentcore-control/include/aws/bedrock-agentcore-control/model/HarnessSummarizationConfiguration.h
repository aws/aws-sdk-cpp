/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for summarization-based truncation strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessSummarizationConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessSummarizationConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSummarizationConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSummarizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSummarizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ratio of content to summarize.</p>
   */
  inline double GetSummaryRatio() const { return m_summaryRatio; }
  inline bool SummaryRatioHasBeenSet() const { return m_summaryRatioHasBeenSet; }
  inline void SetSummaryRatio(double value) {
    m_summaryRatioHasBeenSet = true;
    m_summaryRatio = value;
  }
  inline HarnessSummarizationConfiguration& WithSummaryRatio(double value) {
    SetSummaryRatio(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of recent messages to preserve without summarization.</p>
   */
  inline int GetPreserveRecentMessages() const { return m_preserveRecentMessages; }
  inline bool PreserveRecentMessagesHasBeenSet() const { return m_preserveRecentMessagesHasBeenSet; }
  inline void SetPreserveRecentMessages(int value) {
    m_preserveRecentMessagesHasBeenSet = true;
    m_preserveRecentMessages = value;
  }
  inline HarnessSummarizationConfiguration& WithPreserveRecentMessages(int value) {
    SetPreserveRecentMessages(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system prompt used for generating summaries.</p>
   */
  inline const Aws::String& GetSummarizationSystemPrompt() const { return m_summarizationSystemPrompt; }
  inline bool SummarizationSystemPromptHasBeenSet() const { return m_summarizationSystemPromptHasBeenSet; }
  template <typename SummarizationSystemPromptT = Aws::String>
  void SetSummarizationSystemPrompt(SummarizationSystemPromptT&& value) {
    m_summarizationSystemPromptHasBeenSet = true;
    m_summarizationSystemPrompt = std::forward<SummarizationSystemPromptT>(value);
  }
  template <typename SummarizationSystemPromptT = Aws::String>
  HarnessSummarizationConfiguration& WithSummarizationSystemPrompt(SummarizationSystemPromptT&& value) {
    SetSummarizationSystemPrompt(std::forward<SummarizationSystemPromptT>(value));
    return *this;
  }
  ///@}
 private:
  double m_summaryRatio{0.0};

  int m_preserveRecentMessages{0};

  Aws::String m_summarizationSystemPrompt;
  bool m_summaryRatioHasBeenSet = false;
  bool m_preserveRecentMessagesHasBeenSet = false;
  bool m_summarizationSystemPromptHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
