/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/RowScope.h>
#include <aws/cloudwatchomni/model/SignalType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>A single resource scope entry within an AccessGrant. Associates a resource
 * type with optional ARN patterns, tag conditions, and row-level
 * filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ResourceScope">AWS
 * API Reference</a></p>
 */
class ResourceScope {
 public:
  AWS_CLOUDWATCHOMNI_API ResourceScope() = default;
  AWS_CLOUDWATCHOMNI_API ResourceScope(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API ResourceScope& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Resource type name (e.g., &quot;DataSet&quot;,
   * &quot;OmniDashboard&quot;).</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ResourceScope& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific resource ARNs or ARN patterns. When set, actions are limited to
   * these resources. When absent, defaults to &quot;*&quot;.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  ResourceScope& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  template <typename ResourceArnsT = Aws::String>
  ResourceScope& AddResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tag-based conditions for dynamic resource scoping. Access applies only to
   * resources carrying all of the specified tag key/value pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ResourceScope& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ResourceScope& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Signal types this scope's row filtering applies to. Required when
   * rowScopeGroups is set.</p>
   */
  inline const Aws::Vector<SignalType>& GetSignalTypes() const { return m_signalTypes; }
  inline bool SignalTypesHasBeenSet() const { return m_signalTypesHasBeenSet; }
  template <typename SignalTypesT = Aws::Vector<SignalType>>
  void SetSignalTypes(SignalTypesT&& value) {
    m_signalTypesHasBeenSet = true;
    m_signalTypes = std::forward<SignalTypesT>(value);
  }
  template <typename SignalTypesT = Aws::Vector<SignalType>>
  ResourceScope& WithSignalTypes(SignalTypesT&& value) {
    SetSignalTypes(std::forward<SignalTypesT>(value));
    return *this;
  }
  inline ResourceScope& AddSignalTypes(SignalType value) {
    m_signalTypesHasBeenSet = true;
    m_signalTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Row-level filters for this scope, as an OR of AND-groups: a row is visible
   * when it matches every filter in any one group. Requires signalTypes.</p> <p>Row
   * filters are additive across a principal's matching grants. A signal type with no
   * matching group is unrestricted, and when rowScopeGroups is omitted all rows are
   * visible for all signal types.</p>
   */
  inline const Aws::Vector<Aws::Vector<RowScope>>& GetRowScopeGroups() const { return m_rowScopeGroups; }
  inline bool RowScopeGroupsHasBeenSet() const { return m_rowScopeGroupsHasBeenSet; }
  template <typename RowScopeGroupsT = Aws::Vector<Aws::Vector<RowScope>>>
  void SetRowScopeGroups(RowScopeGroupsT&& value) {
    m_rowScopeGroupsHasBeenSet = true;
    m_rowScopeGroups = std::forward<RowScopeGroupsT>(value);
  }
  template <typename RowScopeGroupsT = Aws::Vector<Aws::Vector<RowScope>>>
  ResourceScope& WithRowScopeGroups(RowScopeGroupsT&& value) {
    SetRowScopeGroups(std::forward<RowScopeGroupsT>(value));
    return *this;
  }
  template <typename RowScopeGroupsT = Aws::Vector<RowScope>>
  ResourceScope& AddRowScopeGroups(RowScopeGroupsT&& value) {
    m_rowScopeGroupsHasBeenSet = true;
    m_rowScopeGroups.emplace_back(std::forward<RowScopeGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceType;

  Aws::Vector<Aws::String> m_resourceArns;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Vector<SignalType> m_signalTypes;

  Aws::Vector<Aws::Vector<RowScope>> m_rowScopeGroups;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceArnsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_signalTypesHasBeenSet = false;
  bool m_rowScopeGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
