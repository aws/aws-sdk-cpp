/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCK_API GuardrailTopicPolicy();
    AWS_BEDROCK_API GuardrailTopicPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopicPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline const Aws::Vector<GuardrailTopic>& GetTopics() const{ return m_topics; }

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline void SetTopics(const Aws::Vector<GuardrailTopic>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline void SetTopics(Aws::Vector<GuardrailTopic>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline GuardrailTopicPolicy& WithTopics(const Aws::Vector<GuardrailTopic>& value) { SetTopics(value); return *this;}

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline GuardrailTopicPolicy& WithTopics(Aws::Vector<GuardrailTopic>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline GuardrailTopicPolicy& AddTopics(const GuardrailTopic& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline GuardrailTopicPolicy& AddTopics(GuardrailTopic&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GuardrailTopic> m_topics;
    bool m_topicsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
