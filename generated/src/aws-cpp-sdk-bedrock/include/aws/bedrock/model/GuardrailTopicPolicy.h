/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailTopicsTier.h>
#include <aws/bedrock/model/GuardrailTopic.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains details about topics that the guardrail should identify and
   * deny.</p> <p>This data type is used in the following API operations:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetGuardrail.html#API_GetGuardrail_ResponseSyntax">GetGuardrail
   * response body</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailTopicPolicy">AWS
   * API Reference</a></p>
   */
  class GuardrailTopicPolicy
  {
  public:
    AWS_BEDROCK_API GuardrailTopicPolicy() = default;
    AWS_BEDROCK_API GuardrailTopicPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopicPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline const Aws::Vector<GuardrailTopic>& GetTopics() const { return m_topics; }
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }
    template<typename TopicsT = Aws::Vector<GuardrailTopic>>
    void SetTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics = std::forward<TopicsT>(value); }
    template<typename TopicsT = Aws::Vector<GuardrailTopic>>
    GuardrailTopicPolicy& WithTopics(TopicsT&& value) { SetTopics(std::forward<TopicsT>(value)); return *this;}
    template<typename TopicsT = GuardrailTopic>
    GuardrailTopicPolicy& AddTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics.emplace_back(std::forward<TopicsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tier that your guardrail uses for denied topic filters.</p>
     */
    inline const GuardrailTopicsTier& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = GuardrailTopicsTier>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = GuardrailTopicsTier>
    GuardrailTopicPolicy& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GuardrailTopic> m_topics;
    bool m_topicsHasBeenSet = false;

    GuardrailTopicsTier m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
