/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/MapFilter.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/VmInstanceSortBy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>An aggregation of information about VM instances.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/VmInstanceAggregation">AWS
 * API Reference</a></p>
 */
class VmInstanceAggregation {
 public:
  AWS_INSPECTOR2_API VmInstanceAggregation() = default;
  AWS_INSPECTOR2_API VmInstanceAggregation(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API VmInstanceAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource IDs to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
  inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
  template <typename ResourceIdsT = Aws::Vector<StringFilter>>
  void SetResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds = std::forward<ResourceIdsT>(value);
  }
  template <typename ResourceIdsT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  template <typename ResourceIdsT = StringFilter>
  VmInstanceAggregation& AddResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating systems to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetOperatingSystems() const { return m_operatingSystems; }
  inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
  template <typename OperatingSystemsT = Aws::Vector<StringFilter>>
  void SetOperatingSystems(OperatingSystemsT&& value) {
    m_operatingSystemsHasBeenSet = true;
    m_operatingSystems = std::forward<OperatingSystemsT>(value);
  }
  template <typename OperatingSystemsT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithOperatingSystems(OperatingSystemsT&& value) {
    SetOperatingSystems(std::forward<OperatingSystemsT>(value));
    return *this;
  }
  template <typename OperatingSystemsT = StringFilter>
  VmInstanceAggregation& AddOperatingSystems(OperatingSystemsT&& value) {
    m_operatingSystemsHasBeenSet = true;
    m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance tags to aggregate findings for.</p>
   */
  inline const Aws::Vector<MapFilter>& GetInstanceTags() const { return m_instanceTags; }
  inline bool InstanceTagsHasBeenSet() const { return m_instanceTagsHasBeenSet; }
  template <typename InstanceTagsT = Aws::Vector<MapFilter>>
  void SetInstanceTags(InstanceTagsT&& value) {
    m_instanceTagsHasBeenSet = true;
    m_instanceTags = std::forward<InstanceTagsT>(value);
  }
  template <typename InstanceTagsT = Aws::Vector<MapFilter>>
  VmInstanceAggregation& WithInstanceTags(InstanceTagsT&& value) {
    SetInstanceTags(std::forward<InstanceTagsT>(value));
    return *this;
  }
  template <typename InstanceTagsT = MapFilter>
  VmInstanceAggregation& AddInstanceTags(InstanceTagsT&& value) {
    m_instanceTagsHasBeenSet = true;
    m_instanceTags.emplace_back(std::forward<InstanceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VM image references to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetVmImageReferences() const { return m_vmImageReferences; }
  inline bool VmImageReferencesHasBeenSet() const { return m_vmImageReferencesHasBeenSet; }
  template <typename VmImageReferencesT = Aws::Vector<StringFilter>>
  void SetVmImageReferences(VmImageReferencesT&& value) {
    m_vmImageReferencesHasBeenSet = true;
    m_vmImageReferences = std::forward<VmImageReferencesT>(value);
  }
  template <typename VmImageReferencesT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithVmImageReferences(VmImageReferencesT&& value) {
    SetVmImageReferences(std::forward<VmImageReferencesT>(value));
    return *this;
  }
  template <typename VmImageReferencesT = StringFilter>
  VmInstanceAggregation& AddVmImageReferences(VmImageReferencesT&& value) {
    m_vmImageReferencesHasBeenSet = true;
    m_vmImageReferences.emplace_back(std::forward<VmImageReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud providers to aggregate findings for. Valid values:</p> <ul> <li>
   * <p> <code>AWS</code> – Findings from Amazon Web Services resources.</p> </li>
   * <li> <p> <code>AZURE</code> – Findings from Microsoft Azure resources.</p> </li>
   * </ul>
   */
  inline const Aws::Vector<StringFilter>& GetCloudProviders() const { return m_cloudProviders; }
  inline bool CloudProvidersHasBeenSet() const { return m_cloudProvidersHasBeenSet; }
  template <typename CloudProvidersT = Aws::Vector<StringFilter>>
  void SetCloudProviders(CloudProvidersT&& value) {
    m_cloudProvidersHasBeenSet = true;
    m_cloudProviders = std::forward<CloudProvidersT>(value);
  }
  template <typename CloudProvidersT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithCloudProviders(CloudProvidersT&& value) {
    SetCloudProviders(std::forward<CloudProvidersT>(value));
    return *this;
  }
  template <typename CloudProvidersT = StringFilter>
  VmInstanceAggregation& AddCloudProviders(CloudProvidersT&& value) {
    m_cloudProvidersHasBeenSet = true;
    m_cloudProviders.emplace_back(std::forward<CloudProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud partitions to aggregate findings for. Valid values:</p> <ul> <li>
   * <p> <code>aws</code> – Amazon Web Services commercial Regions.</p> </li> <li>
   * <p> <code>aws-cn</code> – Amazon Web Services China Regions.</p> </li> <li> <p>
   * <code>aws-us-gov</code> – Amazon Web Services GovCloud (US) Regions.</p> </li>
   * <li> <p> <code>AzureCloud</code> – Azure commercial Regions.</p> </li> </ul>
   */
  inline const Aws::Vector<StringFilter>& GetCloudPartitions() const { return m_cloudPartitions; }
  inline bool CloudPartitionsHasBeenSet() const { return m_cloudPartitionsHasBeenSet; }
  template <typename CloudPartitionsT = Aws::Vector<StringFilter>>
  void SetCloudPartitions(CloudPartitionsT&& value) {
    m_cloudPartitionsHasBeenSet = true;
    m_cloudPartitions = std::forward<CloudPartitionsT>(value);
  }
  template <typename CloudPartitionsT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithCloudPartitions(CloudPartitionsT&& value) {
    SetCloudPartitions(std::forward<CloudPartitionsT>(value));
    return *this;
  }
  template <typename CloudPartitionsT = StringFilter>
  VmInstanceAggregation& AddCloudPartitions(CloudPartitionsT&& value) {
    m_cloudPartitionsHasBeenSet = true;
    m_cloudPartitions.emplace_back(std::forward<CloudPartitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud regions to aggregate findings for. The value format depends on the
   * cloud provider:</p> <ul> <li> <p>An Amazon Web Services Region, such as
   * <code>us-east-1</code>.</p> </li> <li> <p>An Azure region, such as
   * <code>eastus</code>.</p> </li> </ul>
   */
  inline const Aws::Vector<StringFilter>& GetCloudRegions() const { return m_cloudRegions; }
  inline bool CloudRegionsHasBeenSet() const { return m_cloudRegionsHasBeenSet; }
  template <typename CloudRegionsT = Aws::Vector<StringFilter>>
  void SetCloudRegions(CloudRegionsT&& value) {
    m_cloudRegionsHasBeenSet = true;
    m_cloudRegions = std::forward<CloudRegionsT>(value);
  }
  template <typename CloudRegionsT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithCloudRegions(CloudRegionsT&& value) {
    SetCloudRegions(std::forward<CloudRegionsT>(value));
    return *this;
  }
  template <typename CloudRegionsT = StringFilter>
  VmInstanceAggregation& AddCloudRegions(CloudRegionsT&& value) {
    m_cloudRegionsHasBeenSet = true;
    m_cloudRegions.emplace_back(std::forward<CloudRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization IDs to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudOrgIds() const { return m_cloudOrgIds; }
  inline bool CloudOrgIdsHasBeenSet() const { return m_cloudOrgIdsHasBeenSet; }
  template <typename CloudOrgIdsT = Aws::Vector<StringFilter>>
  void SetCloudOrgIds(CloudOrgIdsT&& value) {
    m_cloudOrgIdsHasBeenSet = true;
    m_cloudOrgIds = std::forward<CloudOrgIdsT>(value);
  }
  template <typename CloudOrgIdsT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithCloudOrgIds(CloudOrgIdsT&& value) {
    SetCloudOrgIds(std::forward<CloudOrgIdsT>(value));
    return *this;
  }
  template <typename CloudOrgIdsT = StringFilter>
  VmInstanceAggregation& AddCloudOrgIds(CloudOrgIdsT&& value) {
    m_cloudOrgIdsHasBeenSet = true;
    m_cloudOrgIds.emplace_back(std::forward<CloudOrgIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account IDs to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetCloudAccountIds() const { return m_cloudAccountIds; }
  inline bool CloudAccountIdsHasBeenSet() const { return m_cloudAccountIdsHasBeenSet; }
  template <typename CloudAccountIdsT = Aws::Vector<StringFilter>>
  void SetCloudAccountIds(CloudAccountIdsT&& value) {
    m_cloudAccountIdsHasBeenSet = true;
    m_cloudAccountIds = std::forward<CloudAccountIdsT>(value);
  }
  template <typename CloudAccountIdsT = Aws::Vector<StringFilter>>
  VmInstanceAggregation& WithCloudAccountIds(CloudAccountIdsT&& value) {
    SetCloudAccountIds(std::forward<CloudAccountIdsT>(value));
    return *this;
  }
  template <typename CloudAccountIdsT = StringFilter>
  VmInstanceAggregation& AddCloudAccountIds(CloudAccountIdsT&& value) {
    m_cloudAccountIdsHasBeenSet = true;
    m_cloudAccountIds.emplace_back(std::forward<CloudAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order to sort results by. Valid values are <code>ASC</code> and
   * <code>DESC</code>.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline VmInstanceAggregation& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to sort results by. Specify a field name from the aggregation
   * response, such as <code>CRITICAL</code>, <code>HIGH</code>, <code>ALL</code>, or
   * <code>NETWORK_FINDINGS</code>.</p>
   */
  inline VmInstanceSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(VmInstanceSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline VmInstanceAggregation& WithSortBy(VmInstanceSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StringFilter> m_resourceIds;

  Aws::Vector<StringFilter> m_operatingSystems;

  Aws::Vector<MapFilter> m_instanceTags;

  Aws::Vector<StringFilter> m_vmImageReferences;

  Aws::Vector<StringFilter> m_cloudProviders;

  Aws::Vector<StringFilter> m_cloudPartitions;

  Aws::Vector<StringFilter> m_cloudRegions;

  Aws::Vector<StringFilter> m_cloudOrgIds;

  Aws::Vector<StringFilter> m_cloudAccountIds;

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  VmInstanceSortBy m_sortBy{VmInstanceSortBy::NOT_SET};
  bool m_resourceIdsHasBeenSet = false;
  bool m_operatingSystemsHasBeenSet = false;
  bool m_instanceTagsHasBeenSet = false;
  bool m_vmImageReferencesHasBeenSet = false;
  bool m_cloudProvidersHasBeenSet = false;
  bool m_cloudPartitionsHasBeenSet = false;
  bool m_cloudRegionsHasBeenSet = false;
  bool m_cloudOrgIdsHasBeenSet = false;
  bool m_cloudAccountIdsHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
