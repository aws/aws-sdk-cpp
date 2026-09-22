/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/NodeCategory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Node identity attributes promoted out of the flat attribute map onto typed
 * members. The first four are part of the node's merge key, so a node that merged
 * across sources reports one resolved value for each.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/NodeProperties">AWS
 * API Reference</a></p>
 */
class NodeProperties {
 public:
  AWS_CLOUDWATCHOMNI_API NodeProperties() = default;
  AWS_CLOUDWATCHOMNI_API NodeProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API NodeProperties& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The region the node runs in. Falls back to the region the telemetry was
   * ingested from when the node does not report one.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  NodeProperties& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider hosting the node, resolved from the reported provider,
   * platform, or vendor namespace, and defaulting to &quot;aws&quot;.</p>
   */
  inline const Aws::String& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::String>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::String>
  NodeProperties& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account that produced the telemetry this node was discovered from.</p>
   */
  inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
  inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
  template <typename SourceAccountIdT = Aws::String>
  void SetSourceAccountId(SourceAccountIdT&& value) {
    m_sourceAccountIdHasBeenSet = true;
    m_sourceAccountId = std::forward<SourceAccountIdT>(value);
  }
  template <typename SourceAccountIdT = Aws::String>
  NodeProperties& WithSourceAccountId(SourceAccountIdT&& value) {
    SetSourceAccountId(std::forward<SourceAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical service grouping the node belongs to. This is not a metric
   * namespace.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  NodeProperties& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What kind of thing the node is, coarser than nodeType.</p>
   */
  inline NodeCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(NodeCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline NodeProperties& WithCategory(NodeCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The node's deployment environment. A node may be observed in several; this is
   * the highest-precedence one. Match any of them with NodeFilters.stage.</p>
   */
  inline const Aws::String& GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  template <typename StageT = Aws::String>
  void SetStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage = std::forward<StageT>(value);
  }
  template <typename StageT = Aws::String>
  NodeProperties& WithStage(StageT&& value) {
    SetStage(std::forward<StageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::String m_cloudProvider;

  Aws::String m_sourceAccountId;

  Aws::String m_namespace;

  NodeCategory m_category{NodeCategory::NOT_SET};

  Aws::String m_stage;
  bool m_regionHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_sourceAccountIdHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_stageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
