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
    AWS_BEDROCKRUNTIME_API GuardrailAssessment();
    AWS_BEDROCKRUNTIME_API GuardrailAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic policy.</p>
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
     * <p>The content policy.</p>
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
     * <p>The word policy.</p>
     */
    inline const GuardrailWordPolicyAssessment& GetWordPolicy() const{ return m_wordPolicy; }
    inline bool WordPolicyHasBeenSet() const { return m_wordPolicyHasBeenSet; }
    inline void SetWordPolicy(const GuardrailWordPolicyAssessment& value) { m_wordPolicyHasBeenSet = true; m_wordPolicy = value; }
    inline void SetWordPolicy(GuardrailWordPolicyAssessment&& value) { m_wordPolicyHasBeenSet = true; m_wordPolicy = std::move(value); }
    inline GuardrailAssessment& WithWordPolicy(const GuardrailWordPolicyAssessment& value) { SetWordPolicy(value); return *this;}
    inline GuardrailAssessment& WithWordPolicy(GuardrailWordPolicyAssessment&& value) { SetWordPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy.</p>
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
     * <p>The contextual grounding policy used for the guardrail assessment.</p>
     */
    inline const GuardrailContextualGroundingPolicyAssessment& GetContextualGroundingPolicy() const{ return m_contextualGroundingPolicy; }
    inline bool ContextualGroundingPolicyHasBeenSet() const { return m_contextualGroundingPolicyHasBeenSet; }
    inline void SetContextualGroundingPolicy(const GuardrailContextualGroundingPolicyAssessment& value) { m_contextualGroundingPolicyHasBeenSet = true; m_contextualGroundingPolicy = value; }
    inline void SetContextualGroundingPolicy(GuardrailContextualGroundingPolicyAssessment&& value) { m_contextualGroundingPolicyHasBeenSet = true; m_contextualGroundingPolicy = std::move(value); }
    inline GuardrailAssessment& WithContextualGroundingPolicy(const GuardrailContextualGroundingPolicyAssessment& value) { SetContextualGroundingPolicy(value); return *this;}
    inline GuardrailAssessment& WithContextualGroundingPolicy(GuardrailContextualGroundingPolicyAssessment&& value) { SetContextualGroundingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation metrics for the guardrail assessment.</p>
     */
    inline const GuardrailInvocationMetrics& GetInvocationMetrics() const{ return m_invocationMetrics; }
    inline bool InvocationMetricsHasBeenSet() const { return m_invocationMetricsHasBeenSet; }
    inline void SetInvocationMetrics(const GuardrailInvocationMetrics& value) { m_invocationMetricsHasBeenSet = true; m_invocationMetrics = value; }
    inline void SetInvocationMetrics(GuardrailInvocationMetrics&& value) { m_invocationMetricsHasBeenSet = true; m_invocationMetrics = std::move(value); }
    inline GuardrailAssessment& WithInvocationMetrics(const GuardrailInvocationMetrics& value) { SetInvocationMetrics(value); return *this;}
    inline GuardrailAssessment& WithInvocationMetrics(GuardrailInvocationMetrics&& value) { SetInvocationMetrics(std::move(value)); return *this;}
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

    GuardrailInvocationMetrics m_invocationMetrics;
    bool m_invocationMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
