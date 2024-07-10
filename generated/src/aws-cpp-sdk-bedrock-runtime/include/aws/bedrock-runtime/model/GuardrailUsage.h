/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
   * <p>The details on the use of the guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailUsage">AWS
   * API Reference</a></p>
   */
  class GuardrailUsage
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailUsage();
    AWS_BEDROCKRUNTIME_API GuardrailUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic policy units processed by the guardrail.</p>
     */
    inline int GetTopicPolicyUnits() const{ return m_topicPolicyUnits; }
    inline bool TopicPolicyUnitsHasBeenSet() const { return m_topicPolicyUnitsHasBeenSet; }
    inline void SetTopicPolicyUnits(int value) { m_topicPolicyUnitsHasBeenSet = true; m_topicPolicyUnits = value; }
    inline GuardrailUsage& WithTopicPolicyUnits(int value) { SetTopicPolicyUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content policy units processed by the guardrail.</p>
     */
    inline int GetContentPolicyUnits() const{ return m_contentPolicyUnits; }
    inline bool ContentPolicyUnitsHasBeenSet() const { return m_contentPolicyUnitsHasBeenSet; }
    inline void SetContentPolicyUnits(int value) { m_contentPolicyUnitsHasBeenSet = true; m_contentPolicyUnits = value; }
    inline GuardrailUsage& WithContentPolicyUnits(int value) { SetContentPolicyUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy units processed by the guardrail.</p>
     */
    inline int GetWordPolicyUnits() const{ return m_wordPolicyUnits; }
    inline bool WordPolicyUnitsHasBeenSet() const { return m_wordPolicyUnitsHasBeenSet; }
    inline void SetWordPolicyUnits(int value) { m_wordPolicyUnitsHasBeenSet = true; m_wordPolicyUnits = value; }
    inline GuardrailUsage& WithWordPolicyUnits(int value) { SetWordPolicyUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy units processed by the guardrail.</p>
     */
    inline int GetSensitiveInformationPolicyUnits() const{ return m_sensitiveInformationPolicyUnits; }
    inline bool SensitiveInformationPolicyUnitsHasBeenSet() const { return m_sensitiveInformationPolicyUnitsHasBeenSet; }
    inline void SetSensitiveInformationPolicyUnits(int value) { m_sensitiveInformationPolicyUnitsHasBeenSet = true; m_sensitiveInformationPolicyUnits = value; }
    inline GuardrailUsage& WithSensitiveInformationPolicyUnits(int value) { SetSensitiveInformationPolicyUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy free units processed by the guardrail.</p>
     */
    inline int GetSensitiveInformationPolicyFreeUnits() const{ return m_sensitiveInformationPolicyFreeUnits; }
    inline bool SensitiveInformationPolicyFreeUnitsHasBeenSet() const { return m_sensitiveInformationPolicyFreeUnitsHasBeenSet; }
    inline void SetSensitiveInformationPolicyFreeUnits(int value) { m_sensitiveInformationPolicyFreeUnitsHasBeenSet = true; m_sensitiveInformationPolicyFreeUnits = value; }
    inline GuardrailUsage& WithSensitiveInformationPolicyFreeUnits(int value) { SetSensitiveInformationPolicyFreeUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy units processed by the guardrail.</p>
     */
    inline int GetContextualGroundingPolicyUnits() const{ return m_contextualGroundingPolicyUnits; }
    inline bool ContextualGroundingPolicyUnitsHasBeenSet() const { return m_contextualGroundingPolicyUnitsHasBeenSet; }
    inline void SetContextualGroundingPolicyUnits(int value) { m_contextualGroundingPolicyUnitsHasBeenSet = true; m_contextualGroundingPolicyUnits = value; }
    inline GuardrailUsage& WithContextualGroundingPolicyUnits(int value) { SetContextualGroundingPolicyUnits(value); return *this;}
    ///@}
  private:

    int m_topicPolicyUnits;
    bool m_topicPolicyUnitsHasBeenSet = false;

    int m_contentPolicyUnits;
    bool m_contentPolicyUnitsHasBeenSet = false;

    int m_wordPolicyUnits;
    bool m_wordPolicyUnitsHasBeenSet = false;

    int m_sensitiveInformationPolicyUnits;
    bool m_sensitiveInformationPolicyUnitsHasBeenSet = false;

    int m_sensitiveInformationPolicyFreeUnits;
    bool m_sensitiveInformationPolicyFreeUnitsHasBeenSet = false;

    int m_contextualGroundingPolicyUnits;
    bool m_contextualGroundingPolicyUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
