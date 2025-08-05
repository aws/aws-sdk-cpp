/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailTopicPolicyAssessment.h>
#include <aws/bedrock-runtime/model/GuardrailContentPolicyAssessment.h>
#include <aws/bedrock-runtime/model/GuardrailWordPolicyAssessment.h>
#include <aws/bedrock-runtime/model/GuardrailSensitiveInformationPolicyAssessment.h>
#include <aws/bedrock-runtime/model/GuardrailContextualGroundingPolicyAssessment.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningPolicyAssessment.h>
#include <aws/bedrock-runtime/model/GuardrailInvocationMetrics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A behavior assessment of the guardrail policies used in a call to the
   * Converse API. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAssessment() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic policy.</p>
     */
    inline const GuardrailTopicPolicyAssessment& GetTopicPolicy() const { return m_topicPolicy; }
    inline bool TopicPolicyHasBeenSet() const { return m_topicPolicyHasBeenSet; }
    template<typename TopicPolicyT = GuardrailTopicPolicyAssessment>
    void SetTopicPolicy(TopicPolicyT&& value) { m_topicPolicyHasBeenSet = true; m_topicPolicy = std::forward<TopicPolicyT>(value); }
    template<typename TopicPolicyT = GuardrailTopicPolicyAssessment>
    GuardrailAssessment& WithTopicPolicy(TopicPolicyT&& value) { SetTopicPolicy(std::forward<TopicPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content policy.</p>
     */
    inline const GuardrailContentPolicyAssessment& GetContentPolicy() const { return m_contentPolicy; }
    inline bool ContentPolicyHasBeenSet() const { return m_contentPolicyHasBeenSet; }
    template<typename ContentPolicyT = GuardrailContentPolicyAssessment>
    void SetContentPolicy(ContentPolicyT&& value) { m_contentPolicyHasBeenSet = true; m_contentPolicy = std::forward<ContentPolicyT>(value); }
    template<typename ContentPolicyT = GuardrailContentPolicyAssessment>
    GuardrailAssessment& WithContentPolicy(ContentPolicyT&& value) { SetContentPolicy(std::forward<ContentPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy.</p>
     */
    inline const GuardrailWordPolicyAssessment& GetWordPolicy() const { return m_wordPolicy; }
    inline bool WordPolicyHasBeenSet() const { return m_wordPolicyHasBeenSet; }
    template<typename WordPolicyT = GuardrailWordPolicyAssessment>
    void SetWordPolicy(WordPolicyT&& value) { m_wordPolicyHasBeenSet = true; m_wordPolicy = std::forward<WordPolicyT>(value); }
    template<typename WordPolicyT = GuardrailWordPolicyAssessment>
    GuardrailAssessment& WithWordPolicy(WordPolicyT&& value) { SetWordPolicy(std::forward<WordPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy.</p>
     */
    inline const GuardrailSensitiveInformationPolicyAssessment& GetSensitiveInformationPolicy() const { return m_sensitiveInformationPolicy; }
    inline bool SensitiveInformationPolicyHasBeenSet() const { return m_sensitiveInformationPolicyHasBeenSet; }
    template<typename SensitiveInformationPolicyT = GuardrailSensitiveInformationPolicyAssessment>
    void SetSensitiveInformationPolicy(SensitiveInformationPolicyT&& value) { m_sensitiveInformationPolicyHasBeenSet = true; m_sensitiveInformationPolicy = std::forward<SensitiveInformationPolicyT>(value); }
    template<typename SensitiveInformationPolicyT = GuardrailSensitiveInformationPolicyAssessment>
    GuardrailAssessment& WithSensitiveInformationPolicy(SensitiveInformationPolicyT&& value) { SetSensitiveInformationPolicy(std::forward<SensitiveInformationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy used for the guardrail assessment.</p>
     */
    inline const GuardrailContextualGroundingPolicyAssessment& GetContextualGroundingPolicy() const { return m_contextualGroundingPolicy; }
    inline bool ContextualGroundingPolicyHasBeenSet() const { return m_contextualGroundingPolicyHasBeenSet; }
    template<typename ContextualGroundingPolicyT = GuardrailContextualGroundingPolicyAssessment>
    void SetContextualGroundingPolicy(ContextualGroundingPolicyT&& value) { m_contextualGroundingPolicyHasBeenSet = true; m_contextualGroundingPolicy = std::forward<ContextualGroundingPolicyT>(value); }
    template<typename ContextualGroundingPolicyT = GuardrailContextualGroundingPolicyAssessment>
    GuardrailAssessment& WithContextualGroundingPolicy(ContextualGroundingPolicyT&& value) { SetContextualGroundingPolicy(std::forward<ContextualGroundingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automated reasoning policy assessment results, including logical
     * validation findings for the input content.</p>
     */
    inline const GuardrailAutomatedReasoningPolicyAssessment& GetAutomatedReasoningPolicy() const { return m_automatedReasoningPolicy; }
    inline bool AutomatedReasoningPolicyHasBeenSet() const { return m_automatedReasoningPolicyHasBeenSet; }
    template<typename AutomatedReasoningPolicyT = GuardrailAutomatedReasoningPolicyAssessment>
    void SetAutomatedReasoningPolicy(AutomatedReasoningPolicyT&& value) { m_automatedReasoningPolicyHasBeenSet = true; m_automatedReasoningPolicy = std::forward<AutomatedReasoningPolicyT>(value); }
    template<typename AutomatedReasoningPolicyT = GuardrailAutomatedReasoningPolicyAssessment>
    GuardrailAssessment& WithAutomatedReasoningPolicy(AutomatedReasoningPolicyT&& value) { SetAutomatedReasoningPolicy(std::forward<AutomatedReasoningPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation metrics for the guardrail assessment.</p>
     */
    inline const GuardrailInvocationMetrics& GetInvocationMetrics() const { return m_invocationMetrics; }
    inline bool InvocationMetricsHasBeenSet() const { return m_invocationMetricsHasBeenSet; }
    template<typename InvocationMetricsT = GuardrailInvocationMetrics>
    void SetInvocationMetrics(InvocationMetricsT&& value) { m_invocationMetricsHasBeenSet = true; m_invocationMetrics = std::forward<InvocationMetricsT>(value); }
    template<typename InvocationMetricsT = GuardrailInvocationMetrics>
    GuardrailAssessment& WithInvocationMetrics(InvocationMetricsT&& value) { SetInvocationMetrics(std::forward<InvocationMetricsT>(value)); return *this;}
    ///@}
  private:

    GuardrailTopicPolicyAssessment m_topicPolicy;
    bool m_topicPolicyHasBeenSet = false;

    GuardrailContentPolicyAssessment m_contentPolicy;
    bool m_contentPolicyHasBeenSet = false;

    GuardrailWordPolicyAssessment m_wordPolicy;
    bool m_wordPolicyHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAssessment m_sensitiveInformationPolicy;
    bool m_sensitiveInformationPolicyHasBeenSet = false;

    GuardrailContextualGroundingPolicyAssessment m_contextualGroundingPolicy;
    bool m_contextualGroundingPolicyHasBeenSet = false;

    GuardrailAutomatedReasoningPolicyAssessment m_automatedReasoningPolicy;
    bool m_automatedReasoningPolicyHasBeenSet = false;

    GuardrailInvocationMetrics m_invocationMetrics;
    bool m_invocationMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
