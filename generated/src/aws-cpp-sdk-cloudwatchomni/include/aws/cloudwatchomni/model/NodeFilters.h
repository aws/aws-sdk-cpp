/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/KeyFilter.h>
#include <aws/cloudwatchomni/model/NodeCategory.h>
#include <aws/cloudwatchomni/model/NodeType.h>
#include <aws/cloudwatchomni/model/Source.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Criteria for selecting nodes in a context graph query.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/NodeFilters">AWS
 * API Reference</a></p>
 */
class NodeFilters {
 public:
  AWS_CLOUDWATCHOMNI_API NodeFilters() = default;
  AWS_CLOUDWATCHOMNI_API NodeFilters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API NodeFilters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Match only the node with this identifier.</p>
   */
  inline const Aws::String& GetNodeId() const { return m_nodeId; }
  inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
  template <typename NodeIdT = Aws::String>
  void SetNodeId(NodeIdT&& value) {
    m_nodeIdHasBeenSet = true;
    m_nodeId = std::forward<NodeIdT>(value);
  }
  template <typename NodeIdT = Aws::String>
  NodeFilters& WithNodeId(NodeIdT&& value) {
    SetNodeId(std::forward<NodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match only nodes of this type.</p>
   */
  inline NodeType GetNodeType() const { return m_nodeType; }
  inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
  inline void SetNodeType(NodeType value) {
    m_nodeTypeHasBeenSet = true;
    m_nodeType = value;
  }
  inline NodeFilters& WithNodeType(NodeType value) {
    SetNodeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match only nodes with this name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  NodeFilters& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes by the tags on the underlying resource.</p>
   */
  inline const Aws::Vector<KeyFilter>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<KeyFilter>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<KeyFilter>>
  NodeFilters& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = KeyFilter>
  NodeFilters& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes by their OpenTelemetry (OTel) telemetry attributes.</p>
   */
  inline const Aws::Vector<KeyFilter>& GetTelemetryAttributes() const { return m_telemetryAttributes; }
  inline bool TelemetryAttributesHasBeenSet() const { return m_telemetryAttributesHasBeenSet; }
  template <typename TelemetryAttributesT = Aws::Vector<KeyFilter>>
  void SetTelemetryAttributes(TelemetryAttributesT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes = std::forward<TelemetryAttributesT>(value);
  }
  template <typename TelemetryAttributesT = Aws::Vector<KeyFilter>>
  NodeFilters& WithTelemetryAttributes(TelemetryAttributesT&& value) {
    SetTelemetryAttributes(std::forward<TelemetryAttributesT>(value));
    return *this;
  }
  template <typename TelemetryAttributesT = KeyFilter>
  NodeFilters& AddTelemetryAttributes(TelemetryAttributesT&& value) {
    m_telemetryAttributesHasBeenSet = true;
    m_telemetryAttributes.emplace_back(std::forward<TelemetryAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes in any of these regions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::Vector<Aws::String>>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::Vector<Aws::String>>
  NodeFilters& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  template <typename RegionT = Aws::String>
  NodeFilters& AddRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region.emplace_back(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes on any of these cloud providers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::Vector<Aws::String>>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::Vector<Aws::String>>
  NodeFilters& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  template <typename CloudProviderT = Aws::String>
  NodeFilters& AddCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider.emplace_back(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes discovered from telemetry produced by any of these accounts.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSourceAccountId() const { return m_sourceAccountId; }
  inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
  template <typename SourceAccountIdT = Aws::Vector<Aws::String>>
  void SetSourceAccountId(SourceAccountIdT&& value) {
    m_sourceAccountIdHasBeenSet = true;
    m_sourceAccountId = std::forward<SourceAccountIdT>(value);
  }
  template <typename SourceAccountIdT = Aws::Vector<Aws::String>>
  NodeFilters& WithSourceAccountId(SourceAccountIdT&& value) {
    SetSourceAccountId(std::forward<SourceAccountIdT>(value));
    return *this;
  }
  template <typename SourceAccountIdT = Aws::String>
  NodeFilters& AddSourceAccountId(SourceAccountIdT&& value) {
    m_sourceAccountIdHasBeenSet = true;
    m_sourceAccountId.emplace_back(std::forward<SourceAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes in any of these logical service groupings.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::Vector<Aws::String>>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::Vector<Aws::String>>
  NodeFilters& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  template <typename NamespaceT = Aws::String>
  NodeFilters& AddNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace.emplace_back(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes of any of these categories.</p>
   */
  inline const Aws::Vector<NodeCategory>& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::Vector<NodeCategory>>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::Vector<NodeCategory>>
  NodeFilters& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  inline NodeFilters& AddCategory(NodeCategory value) {
    m_categoryHasBeenSet = true;
    m_category.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes observed in any of these deployment environments.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  template <typename StageT = Aws::Vector<Aws::String>>
  void SetStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage = std::forward<StageT>(value);
  }
  template <typename StageT = Aws::Vector<Aws::String>>
  NodeFilters& WithStage(StageT&& value) {
    SetStage(std::forward<StageT>(value));
    return *this;
  }
  template <typename StageT = Aws::String>
  NodeFilters& AddStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage.emplace_back(std::forward<StageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match nodes contributed by any of these discovery sources.</p>
   */
  inline const Aws::Vector<Source>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Source>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Source>>
  NodeFilters& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  inline NodeFilters& AddSources(Source value) {
    m_sourcesHasBeenSet = true;
    m_sources.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeId;

  NodeType m_nodeType{NodeType::NOT_SET};

  Aws::String m_name;

  Aws::Vector<KeyFilter> m_tags;

  Aws::Vector<KeyFilter> m_telemetryAttributes;

  Aws::Vector<Aws::String> m_region;

  Aws::Vector<Aws::String> m_cloudProvider;

  Aws::Vector<Aws::String> m_sourceAccountId;

  Aws::Vector<Aws::String> m_namespace;

  Aws::Vector<NodeCategory> m_category;

  Aws::Vector<Aws::String> m_stage;

  Aws::Vector<Source> m_sources;
  bool m_nodeIdHasBeenSet = false;
  bool m_nodeTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_telemetryAttributesHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_sourceAccountIdHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_stageHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
