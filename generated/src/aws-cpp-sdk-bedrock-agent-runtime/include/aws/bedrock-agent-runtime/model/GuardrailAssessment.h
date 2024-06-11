/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/GuardrailContentPolicyAssessment.h>
#include <aws/bedrock-agent-runtime/model/GuardrailSensitiveInformationPolicyAssessment.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTopicPolicyAssessment.h>
#include <aws/bedrock-agent-runtime/model/GuardrailWordPolicyAssessment.h>
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
    AWS_BEDROCKAGENTRUNTIME_API GuardrailAssessment();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Content policy details of the Guardrail.</p>
     */
    inline const GuardrailContentPolicyAssessment& GetContentPolicy() const{ return m_contentPolicy; }
    inline bool ContentPolicyHasBeenSet() const { return m_contentPolicyHasBeenSet; }
    inline void SetContentPolicy(const GuardrailContentPolicyAssessment& value) { m_contentPolicyHasBeenSet = true; m_contentPolicy = value; }
    inline void SetContentPolicy(GuardrailContentPolicyAssessment&& value) { m_contentPolicyHasBeenSet = true; m_contentPolicy = std::move(value); }
    inline GuardrailAssessment& WithContentPolicy(const GuardrailContentPolicyAssessment& value) { SetContentPolicy(value); return *this;}
    inline GuardrailAssessment& WithContentPolicy(GuardrailContentPolicyAssessment&& value) { SetContentPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sensitive Information policy details of Guardrail.</p>
     */
    inline const GuardrailSensitiveInformationPolicyAssessment& GetSensitiveInformationPolicy() const{ return m_sensitiveInformationPolicy; }
    inline bool SensitiveInformationPolicyHasBeenSet() const { return m_sensitiveInformationPolicyHasBeenSet; }
    inline void SetSensitiveInformationPolicy(const GuardrailSensitiveInformationPolicyAssessment& value) { m_sensitiveInformationPolicyHasBeenSet = true; m_sensitiveInformationPolicy = value; }
    inline void SetSensitiveInformationPolicy(GuardrailSensitiveInformationPolicyAssessment&& value) { m_sensitiveInformationPolicyHasBeenSet = true; m_sensitiveInformationPolicy = std::move(value); }
    inline GuardrailAssessment& WithSensitiveInformationPolicy(const GuardrailSensitiveInformationPolicyAssessment& value) { SetSensitiveInformationPolicy(value); return *this;}
    inline GuardrailAssessment& WithSensitiveInformationPolicy(GuardrailSensitiveInformationPolicyAssessment&& value) { SetSensitiveInformationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Topic policy details of the Guardrail.</p>
     */
    inline const GuardrailTopicPolicyAssessment& GetTopicPolicy() const{ return m_topicPolicy; }
    inline bool TopicPolicyHasBeenSet() const { return m_topicPolicyHasBeenSet; }
    inline void SetTopicPolicy(const GuardrailTopicPolicyAssessment& value) { m_topicPolicyHasBeenSet = true; m_topicPolicy = value; }
    inline void SetTopicPolicy(GuardrailTopicPolicyAssessment&& value) { m_topicPolicyHasBeenSet = true; m_topicPolicy = std::move(value); }
    inline GuardrailAssessment& WithTopicPolicy(const GuardrailTopicPolicyAssessment& value) { SetTopicPolicy(value); return *this;}
    inline GuardrailAssessment& WithTopicPolicy(GuardrailTopicPolicyAssessment&& value) { SetTopicPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Word policy details of the Guardrail.</p>
     */
    inline const GuardrailWordPolicyAssessment& GetWordPolicy() const{ return m_wordPolicy; }
    inline bool WordPolicyHasBeenSet() const { return m_wordPolicyHasBeenSet; }
    inline void SetWordPolicy(const GuardrailWordPolicyAssessment& value) { m_wordPolicyHasBeenSet = true; m_wordPolicy = value; }
    inline void SetWordPolicy(GuardrailWordPolicyAssessment&& value) { m_wordPolicyHasBeenSet = true; m_wordPolicy = std::move(value); }
    inline GuardrailAssessment& WithWordPolicy(const GuardrailWordPolicyAssessment& value) { SetWordPolicy(value); return *this;}
    inline GuardrailAssessment& WithWordPolicy(GuardrailWordPolicyAssessment&& value) { SetWordPolicy(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailContentPolicyAssessment m_contentPolicy;
    bool m_contentPolicyHasBeenSet = false;

    GuardrailSensitiveInformationPolicyAssessment m_sensitiveInformationPolicy;
    bool m_sensitiveInformationPolicyHasBeenSet = false;

    GuardrailTopicPolicyAssessment m_topicPolicy;
    bool m_topicPolicyHasBeenSet = false;

    GuardrailWordPolicyAssessment m_wordPolicy;
    bool m_wordPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
