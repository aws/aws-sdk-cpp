/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailTopic.h>
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
   * <p>A behavior assessment of a topic policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailTopicPolicyAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailTopicPolicyAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailTopicPolicyAssessment() = default;
    AWS_BEDROCKRUNTIME_API GuardrailTopicPolicyAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTopicPolicyAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topics in the assessment.</p>
     */
    inline const Aws::Vector<GuardrailTopic>& GetTopics() const { return m_topics; }
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }
    template<typename TopicsT = Aws::Vector<GuardrailTopic>>
    void SetTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics = std::forward<TopicsT>(value); }
    template<typename TopicsT = Aws::Vector<GuardrailTopic>>
    GuardrailTopicPolicyAssessment& WithTopics(TopicsT&& value) { SetTopics(std::forward<TopicsT>(value)); return *this;}
    template<typename TopicsT = GuardrailTopic>
    GuardrailTopicPolicyAssessment& AddTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics.emplace_back(std::forward<TopicsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailTopic> m_topics;
    bool m_topicsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
