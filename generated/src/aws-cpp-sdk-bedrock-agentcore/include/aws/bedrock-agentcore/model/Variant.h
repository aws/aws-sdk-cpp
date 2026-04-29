/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/VariantConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A variant in an A/B test, representing either the control (C) or treatment
 * (T1) configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Variant">AWS
 * API Reference</a></p>
 */
class Variant {
 public:
  AWS_BEDROCKAGENTCORE_API Variant() = default;
  AWS_BEDROCKAGENTCORE_API Variant(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Variant& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the variant. Must be <code>C</code> for control or
   * <code>T1</code> for treatment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Variant& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of traffic to route to this variant. Weights across all
   * variants must sum to 100.</p>
   */
  inline int GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(int value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline Variant& WithWeight(int value) {
    SetWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for this variant, including the configuration bundle or
   * target reference.</p>
   */
  inline const VariantConfiguration& GetVariantConfiguration() const { return m_variantConfiguration; }
  inline bool VariantConfigurationHasBeenSet() const { return m_variantConfigurationHasBeenSet; }
  template <typename VariantConfigurationT = VariantConfiguration>
  void SetVariantConfiguration(VariantConfigurationT&& value) {
    m_variantConfigurationHasBeenSet = true;
    m_variantConfiguration = std::forward<VariantConfigurationT>(value);
  }
  template <typename VariantConfigurationT = VariantConfiguration>
  Variant& WithVariantConfiguration(VariantConfigurationT&& value) {
    SetVariantConfiguration(std::forward<VariantConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_weight{0};

  VariantConfiguration m_variantConfiguration;
  bool m_nameHasBeenSet = false;
  bool m_weightHasBeenSet = false;
  bool m_variantConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
