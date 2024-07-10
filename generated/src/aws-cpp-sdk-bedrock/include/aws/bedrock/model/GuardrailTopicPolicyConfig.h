/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCK_API GuardrailTopicPolicyConfig();
    AWS_BEDROCK_API GuardrailTopicPolicyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API GuardrailTopicPolicyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of policies related to topics that the guardrail should deny.</p>
     */
    inline const Aws::Vector<GuardrailTopicConfig>& GetTopicsConfig() const{ return m_topicsConfig; }
    inline bool TopicsConfigHasBeenSet() const { return m_topicsConfigHasBeenSet; }
    inline void SetTopicsConfig(const Aws::Vector<GuardrailTopicConfig>& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig = value; }
    inline void SetTopicsConfig(Aws::Vector<GuardrailTopicConfig>&& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig = std::move(value); }
    inline GuardrailTopicPolicyConfig& WithTopicsConfig(const Aws::Vector<GuardrailTopicConfig>& value) { SetTopicsConfig(value); return *this;}
    inline GuardrailTopicPolicyConfig& WithTopicsConfig(Aws::Vector<GuardrailTopicConfig>&& value) { SetTopicsConfig(std::move(value)); return *this;}
    inline GuardrailTopicPolicyConfig& AddTopicsConfig(const GuardrailTopicConfig& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig.push_back(value); return *this; }
    inline GuardrailTopicPolicyConfig& AddTopicsConfig(GuardrailTopicConfig&& value) { m_topicsConfigHasBeenSet = true; m_topicsConfig.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailTopicConfig> m_topicsConfig;
    bool m_topicsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
