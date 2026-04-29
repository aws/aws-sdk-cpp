/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PerVariantOnlineEvaluationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The evaluation configuration for an A/B test, specifying which online
 * evaluation configurations to use for measuring variant
 * performance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ABTestEvaluationConfig">AWS
 * API Reference</a></p>
 */
class ABTestEvaluationConfig {
 public:
  AWS_BEDROCKAGENTCORE_API ABTestEvaluationConfig() = default;
  AWS_BEDROCKAGENTCORE_API ABTestEvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ABTestEvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a single online evaluation configuration to
   * use for both variants.</p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  inline bool OnlineEvaluationConfigArnHasBeenSet() const { return m_onlineEvaluationConfigArnHasBeenSet; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  ABTestEvaluationConfig& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-variant online evaluation configurations, allowing different evaluation
   * settings for each variant.</p>
   */
  inline const Aws::Vector<PerVariantOnlineEvaluationConfig>& GetPerVariantOnlineEvaluationConfig() const {
    return m_perVariantOnlineEvaluationConfig;
  }
  inline bool PerVariantOnlineEvaluationConfigHasBeenSet() const { return m_perVariantOnlineEvaluationConfigHasBeenSet; }
  template <typename PerVariantOnlineEvaluationConfigT = Aws::Vector<PerVariantOnlineEvaluationConfig>>
  void SetPerVariantOnlineEvaluationConfig(PerVariantOnlineEvaluationConfigT&& value) {
    m_perVariantOnlineEvaluationConfigHasBeenSet = true;
    m_perVariantOnlineEvaluationConfig = std::forward<PerVariantOnlineEvaluationConfigT>(value);
  }
  template <typename PerVariantOnlineEvaluationConfigT = Aws::Vector<PerVariantOnlineEvaluationConfig>>
  ABTestEvaluationConfig& WithPerVariantOnlineEvaluationConfig(PerVariantOnlineEvaluationConfigT&& value) {
    SetPerVariantOnlineEvaluationConfig(std::forward<PerVariantOnlineEvaluationConfigT>(value));
    return *this;
  }
  template <typename PerVariantOnlineEvaluationConfigT = PerVariantOnlineEvaluationConfig>
  ABTestEvaluationConfig& AddPerVariantOnlineEvaluationConfig(PerVariantOnlineEvaluationConfigT&& value) {
    m_perVariantOnlineEvaluationConfigHasBeenSet = true;
    m_perVariantOnlineEvaluationConfig.emplace_back(std::forward<PerVariantOnlineEvaluationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;

  Aws::Vector<PerVariantOnlineEvaluationConfig> m_perVariantOnlineEvaluationConfig;
  bool m_onlineEvaluationConfigArnHasBeenSet = false;
  bool m_perVariantOnlineEvaluationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
