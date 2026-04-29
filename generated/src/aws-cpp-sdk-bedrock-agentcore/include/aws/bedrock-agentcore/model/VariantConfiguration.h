/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ConfigurationBundleRef.h>
#include <aws/bedrock-agentcore/model/TargetRef.h>

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
 * <p>The configuration for an A/B test variant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/VariantConfiguration">AWS
 * API Reference</a></p>
 */
class VariantConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API VariantConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API VariantConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API VariantConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A reference to a configuration bundle version to use for this variant.</p>
   */
  inline const ConfigurationBundleRef& GetConfigurationBundle() const { return m_configurationBundle; }
  inline bool ConfigurationBundleHasBeenSet() const { return m_configurationBundleHasBeenSet; }
  template <typename ConfigurationBundleT = ConfigurationBundleRef>
  void SetConfigurationBundle(ConfigurationBundleT&& value) {
    m_configurationBundleHasBeenSet = true;
    m_configurationBundle = std::forward<ConfigurationBundleT>(value);
  }
  template <typename ConfigurationBundleT = ConfigurationBundleRef>
  VariantConfiguration& WithConfigurationBundle(ConfigurationBundleT&& value) {
    SetConfigurationBundle(std::forward<ConfigurationBundleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to a gateway target to route traffic to for this variant.</p>
   */
  inline const TargetRef& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = TargetRef>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = TargetRef>
  VariantConfiguration& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}
 private:
  ConfigurationBundleRef m_configurationBundle;

  TargetRef m_target;
  bool m_configurationBundleHasBeenSet = false;
  bool m_targetHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
