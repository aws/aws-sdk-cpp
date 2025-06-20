/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/GuardrailTopicsTierConfig.h>
#include <aws/bedrock/model/GuardrailTopicConfig.h>
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
   * deny.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GuardrailTopicPolicyConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailTopicPolicyConfig
  {
  public:
    AWS_BEDROCK_API GuardrailTopicPolicyConfig() = default;
    AWS_BEDROCK_API GuardrailTopicPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopicPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline const Aws::Vector<GuardrailTopicConfig>& GetTopicsConfig() const { return m_topicsConfig; }
    inline bool TopicsConfigHasBeenSet() const { return m_topicsConfigHasBeenSet; }
    template<typename TopicsConfigT = Aws::Vector<GuardrailTopicConfig>>
    void SetTopicsConfig(TopicsConfigT&& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig = std::forward<TopicsConfigT>(value); }
    template<typename TopicsConfigT = Aws::Vector<GuardrailTopicConfig>>
    GuardrailTopicPolicyConfig& WithTopicsConfig(TopicsConfigT&& value) { SetTopicsConfig(std::forward<TopicsConfigT>(value)); return *this;}
    template<typename TopicsConfigT = GuardrailTopicConfig>
    GuardrailTopicPolicyConfig& AddTopicsConfig(TopicsConfigT&& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig.emplace_back(std::forward<TopicsConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tier that your guardrail uses for denied topic filters.</p>
     */
    inline const GuardrailTopicsTierConfig& GetTierConfig() const { return m_tierConfig; }
    inline bool TierConfigHasBeenSet() const { return m_tierConfigHasBeenSet; }
    template<typename TierConfigT = GuardrailTopicsTierConfig>
    void SetTierConfig(TierConfigT&& value) { m_tierConfigHasBeenSet = true; m_tierConfig = std::forward<TierConfigT>(value); }
    template<typename TierConfigT = GuardrailTopicsTierConfig>
    GuardrailTopicPolicyConfig& WithTierConfig(TierConfigT&& value) { SetTierConfig(std::forward<TierConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GuardrailTopicConfig> m_topicsConfig;
    bool m_topicsConfigHasBeenSet = false;

    GuardrailTopicsTierConfig m_tierConfig;
    bool m_tierConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
