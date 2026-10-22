/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Fallback.h>
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
 * <p>An entry in a target traffic split configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TargetTrafficSplitEntry">AWS
 * API Reference</a></p>
 */
class TargetTrafficSplitEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API TargetTrafficSplitEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API TargetTrafficSplitEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API TargetTrafficSplitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the target to route traffic to.</p>
   */
  inline const Aws::String& GetTargetName() const { return m_targetName; }
  inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
  template <typename TargetNameT = Aws::String>
  void SetTargetName(TargetNameT&& value) {
    m_targetNameHasBeenSet = true;
    m_targetName = std::forward<TargetNameT>(value);
  }
  template <typename TargetNameT = Aws::String>
  TargetTrafficSplitEntry& WithTargetName(TargetNameT&& value) {
    SetTargetName(std::forward<TargetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model ID to send to the target for this variant. Supported only for
   * inference targets. If you don't specify a model, the gateway sends the model
   * from the original request.</p>
   */
  inline const Aws::String& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = Aws::String>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = Aws::String>
  TargetTrafficSplitEntry& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fallback configuration for this variant. Supported only for inference
   * targets.</p>
   */
  inline const Fallback& GetFallback() const { return m_fallback; }
  inline bool FallbackHasBeenSet() const { return m_fallbackHasBeenSet; }
  template <typename FallbackT = Fallback>
  void SetFallback(FallbackT&& value) {
    m_fallbackHasBeenSet = true;
    m_fallback = std::forward<FallbackT>(value);
  }
  template <typename FallbackT = Fallback>
  TargetTrafficSplitEntry& WithFallback(FallbackT&& value) {
    SetFallback(std::forward<FallbackT>(value));
    return *this;
  }
  ///@}

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
  TargetTrafficSplitEntry& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of traffic to route to this variant.</p>
   */
  inline int GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(int value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline TargetTrafficSplitEntry& WithWeight(int value) {
    SetWeight(value);
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
  TargetTrafficSplitEntry& WithDescription(DescriptionT&& value) {
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
  TargetTrafficSplitEntry& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  TargetTrafficSplitEntry& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetName;

  Aws::String m_model;

  Fallback m_fallback;

  Aws::String m_name;

  int m_weight{0};

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_targetNameHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_fallbackHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_weightHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
