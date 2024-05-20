/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/GuardrailTopic.h>
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
   * <p>The details of the policy assessment used in the Guardrail.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GuardrailTopicPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailTopicPolicyAssessment
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTopicPolicyAssessment();
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTopicPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GuardrailTopicPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline const Aws::Vector<GuardrailTopic>& GetTopics() const{ return m_topics; }

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline void SetTopics(const Aws::Vector<GuardrailTopic>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline void SetTopics(Aws::Vector<GuardrailTopic>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline GuardrailTopicPolicyAssessment& WithTopics(const Aws::Vector<GuardrailTopic>& value) { SetTopics(value); return *this;}

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline GuardrailTopicPolicyAssessment& WithTopics(Aws::Vector<GuardrailTopic>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline GuardrailTopicPolicyAssessment& AddTopics(const GuardrailTopic& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>The topic details of the policy assessment used in the Guardrail.</p>
     */
    inline GuardrailTopicPolicyAssessment& AddTopics(GuardrailTopic&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailTopic> m_topics;
    bool m_topicsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
