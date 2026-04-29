/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/StaticOverride.h>
#include <aws/bedrock-agentcore-control/model/WeightedOverride.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>An action that applies a configuration bundle override, either as a static
 * override or a weighted split for A/B testing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConfigurationBundleAction">AWS
 * API Reference</a></p>
 */
class ConfigurationBundleAction {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleAction() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A static configuration bundle override that applies a single bundle version
   * to all matching requests.</p>
   */
  inline const StaticOverride& GetStaticOverride() const { return m_staticOverride; }
  inline bool StaticOverrideHasBeenSet() const { return m_staticOverrideHasBeenSet; }
  template <typename StaticOverrideT = StaticOverride>
  void SetStaticOverride(StaticOverrideT&& value) {
    m_staticOverrideHasBeenSet = true;
    m_staticOverride = std::forward<StaticOverrideT>(value);
  }
  template <typename StaticOverrideT = StaticOverride>
  ConfigurationBundleAction& WithStaticOverride(StaticOverrideT&& value) {
    SetStaticOverride(std::forward<StaticOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A weighted configuration bundle override that splits traffic between multiple
   * bundle versions based on configured weights.</p>
   */
  inline const WeightedOverride& GetWeightedOverride() const { return m_weightedOverride; }
  inline bool WeightedOverrideHasBeenSet() const { return m_weightedOverrideHasBeenSet; }
  template <typename WeightedOverrideT = WeightedOverride>
  void SetWeightedOverride(WeightedOverrideT&& value) {
    m_weightedOverrideHasBeenSet = true;
    m_weightedOverride = std::forward<WeightedOverrideT>(value);
  }
  template <typename WeightedOverrideT = WeightedOverride>
  ConfigurationBundleAction& WithWeightedOverride(WeightedOverrideT&& value) {
    SetWeightedOverride(std::forward<WeightedOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  StaticOverride m_staticOverride;

  WeightedOverride m_weightedOverride;
  bool m_staticOverrideHasBeenSet = false;
  bool m_weightedOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
