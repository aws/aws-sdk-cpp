/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConfigurationBundleReference.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>An entry in a traffic split configuration, defining a named variant with a
 * weight and configuration bundle reference.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TrafficSplitEntry">AWS
 * API Reference</a></p>
 */
class TrafficSplitEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API TrafficSplitEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API TrafficSplitEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API TrafficSplitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of this traffic split variant.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TrafficSplitEntry& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of traffic to route to this variant. Weights across all
   * entries must sum to 100.</p>
   */
  inline int GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(int value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline TrafficSplitEntry& WithWeight(int value) {
    SetWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration bundle reference for this variant.</p>
   */
  inline const ConfigurationBundleReference& GetConfigurationBundle() const { return m_configurationBundle; }
  inline bool ConfigurationBundleHasBeenSet() const { return m_configurationBundleHasBeenSet; }
  template <typename ConfigurationBundleT = ConfigurationBundleReference>
  void SetConfigurationBundle(ConfigurationBundleT&& value) {
    m_configurationBundleHasBeenSet = true;
    m_configurationBundle = std::forward<ConfigurationBundleT>(value);
  }
  template <typename ConfigurationBundleT = ConfigurationBundleReference>
  TrafficSplitEntry& WithConfigurationBundle(ConfigurationBundleT&& value) {
    SetConfigurationBundle(std::forward<ConfigurationBundleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of this traffic split variant.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TrafficSplitEntry& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value metadata associated with this traffic split variant.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  TrafficSplitEntry& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  TrafficSplitEntry& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_weight{0};

  ConfigurationBundleReference m_configurationBundle;

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_nameHasBeenSet = false;
  bool m_weightHasBeenSet = false;
  bool m_configurationBundleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
