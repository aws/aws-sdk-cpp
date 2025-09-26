/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTopicPolicyAssessment.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentPolicyAssessment.h>
#include <aws/bedrock-agent-runtime/model/GuardrailWordPolicyAssessment.h>
#include <aws/bedrock-agent-runtime/model/GuardrailSensitiveInformationPolicyAssessment.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Assessment details of the content analyzed by Guardrails.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailAssessment
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailAssessment() = default;
    AWS_BEDROCKAGENTRUNTIME_API GuardrailAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Topic policy details of the Guardrail.</p>
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
     * <p>Content policy details of the Guardrail.</p>
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
     * <p>Word policy details of the Guardrail.</p>
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
     * <p>Sensitive Information policy details of Guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicyAssessment& GetSensitiveInformationPolicy() const { return m_sensitiveInformationPolicy; }
    inline bool SensitiveInformationPolicyHasBeenSet() const { return m_sensitiveInformationPolicyHasBeenSet; }
    template<typename SensitiveInformationPolicyT = GuardrailSensitiveInformationPolicyAssessment>
    void SetSensitiveInformationPolicy(SensitiveInformationPolicyT&& value) { m_sensitiveInformationPolicyHasBeenSet = true; m_sensitiveInformationPolicy = std::forward<SensitiveInformationPolicyT>(value); }
    template<typename SensitiveInformationPolicyT = GuardrailSensitiveInformationPolicyAssessment>
    GuardrailAssessment& WithSensitiveInformationPolicy(SensitiveInformationPolicyT&& value) { SetSensitiveInformationPolicy(std::forward<SensitiveInformationPolicyT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
