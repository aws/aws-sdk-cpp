/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Provider.h>
#include <aws/inspector2/model/SeverityCounts.h>

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
 * <p>A response that contains the results of a VM instance
 * aggregation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/VmInstanceAggregationResponse">AWS
 * API Reference</a></p>
 */
class VmInstanceAggregationResponse {
 public:
  AWS_INSPECTOR2_API VmInstanceAggregationResponse() = default;
  AWS_INSPECTOR2_API VmInstanceAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API VmInstanceAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource ID for the VM instance.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  VmInstanceAggregationResponse& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud service provider associated with this VM instance aggregation.
   * Valid values:</p> <ul> <li> <p> <code>AWS</code> – Findings from Amazon Web
   * Services resources.</p> </li> <li> <p> <code>AZURE</code> – Findings from
   * Microsoft Azure resources.</p> </li> </ul>
   */
  inline Provider GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  inline void SetCloudProvider(Provider value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = value;
  }
  inline VmInstanceAggregationResponse& WithCloudProvider(Provider value) {
    SetCloudProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account ID for the VM instance aggregation.</p>
   */
  inline const Aws::String& GetCloudAccountId() const { return m_cloudAccountId; }
  inline bool CloudAccountIdHasBeenSet() const { return m_cloudAccountIdHasBeenSet; }
  template <typename CloudAccountIdT = Aws::String>
  void SetCloudAccountId(CloudAccountIdT&& value) {
    m_cloudAccountIdHasBeenSet = true;
    m_cloudAccountId = std::forward<CloudAccountIdT>(value);
  }
  template <typename CloudAccountIdT = Aws::String>
  VmInstanceAggregationResponse& WithCloudAccountId(CloudAccountIdT&& value) {
    SetCloudAccountId(std::forward<CloudAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud infrastructure partition associated with this VM instance
   * aggregation. Valid values:</p> <ul> <li> <p> <code>aws</code> – Amazon Web
   * Services commercial Regions.</p> </li> <li> <p> <code>aws-cn</code> – Amazon Web
   * Services China Regions.</p> </li> <li> <p> <code>aws-us-gov</code> – Amazon Web
   * Services GovCloud (US) Regions.</p> </li> <li> <p> <code>AzureCloud</code> –
   * Azure commercial Regions.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudPartition() const { return m_cloudPartition; }
  inline bool CloudPartitionHasBeenSet() const { return m_cloudPartitionHasBeenSet; }
  template <typename CloudPartitionT = Aws::String>
  void SetCloudPartition(CloudPartitionT&& value) {
    m_cloudPartitionHasBeenSet = true;
    m_cloudPartition = std::forward<CloudPartitionT>(value);
  }
  template <typename CloudPartitionT = Aws::String>
  VmInstanceAggregationResponse& WithCloudPartition(CloudPartitionT&& value) {
    SetCloudPartition(std::forward<CloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud Region associated with this VM instance aggregation. The value
   * format depends on the cloud provider:</p> <ul> <li> <p>An Amazon Web Services
   * Region, such as <code>us-east-1</code>.</p> </li> <li> <p>An Azure region, such
   * as <code>eastus</code>.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudRegion() const { return m_cloudRegion; }
  inline bool CloudRegionHasBeenSet() const { return m_cloudRegionHasBeenSet; }
  template <typename CloudRegionT = Aws::String>
  void SetCloudRegion(CloudRegionT&& value) {
    m_cloudRegionHasBeenSet = true;
    m_cloudRegion = std::forward<CloudRegionT>(value);
  }
  template <typename CloudRegionT = Aws::String>
  VmInstanceAggregationResponse& WithCloudRegion(CloudRegionT&& value) {
    SetCloudRegion(std::forward<CloudRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization ID for the VM instance aggregation.</p>
   */
  inline const Aws::String& GetCloudOrgId() const { return m_cloudOrgId; }
  inline bool CloudOrgIdHasBeenSet() const { return m_cloudOrgIdHasBeenSet; }
  template <typename CloudOrgIdT = Aws::String>
  void SetCloudOrgId(CloudOrgIdT&& value) {
    m_cloudOrgIdHasBeenSet = true;
    m_cloudOrgId = std::forward<CloudOrgIdT>(value);
  }
  template <typename CloudOrgIdT = Aws::String>
  VmInstanceAggregationResponse& WithCloudOrgId(CloudOrgIdT&& value) {
    SetCloudOrgId(std::forward<CloudOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VM image reference for the VM instance.</p>
   */
  inline const Aws::String& GetVmImageReference() const { return m_vmImageReference; }
  inline bool VmImageReferenceHasBeenSet() const { return m_vmImageReferenceHasBeenSet; }
  template <typename VmImageReferenceT = Aws::String>
  void SetVmImageReference(VmImageReferenceT&& value) {
    m_vmImageReferenceHasBeenSet = true;
    m_vmImageReference = std::forward<VmImageReferenceT>(value);
  }
  template <typename VmImageReferenceT = Aws::String>
  VmInstanceAggregationResponse& WithVmImageReference(VmImageReferenceT&& value) {
    SetVmImageReference(std::forward<VmImageReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system of the VM instance.</p>
   */
  inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
  inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
  template <typename OperatingSystemT = Aws::String>
  void SetOperatingSystem(OperatingSystemT&& value) {
    m_operatingSystemHasBeenSet = true;
    m_operatingSystem = std::forward<OperatingSystemT>(value);
  }
  template <typename OperatingSystemT = Aws::String>
  VmInstanceAggregationResponse& WithOperatingSystem(OperatingSystemT&& value) {
    SetOperatingSystem(std::forward<OperatingSystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags attached to the VM instance.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  VmInstanceAggregationResponse& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  VmInstanceAggregationResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID associated with the VM instance.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  VmInstanceAggregationResponse& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
  inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
  template <typename SeverityCountsT = SeverityCounts>
  void SetSeverityCounts(SeverityCountsT&& value) {
    m_severityCountsHasBeenSet = true;
    m_severityCounts = std::forward<SeverityCountsT>(value);
  }
  template <typename SeverityCountsT = SeverityCounts>
  VmInstanceAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) {
    SetSeverityCounts(std::forward<SeverityCountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of network findings for the VM instance. This field applies only
   * to Amazon Web Services resources.</p>
   */
  inline long long GetNetworkFindings() const { return m_networkFindings; }
  inline bool NetworkFindingsHasBeenSet() const { return m_networkFindingsHasBeenSet; }
  inline void SetNetworkFindings(long long value) {
    m_networkFindingsHasBeenSet = true;
    m_networkFindings = value;
  }
  inline VmInstanceAggregationResponse& WithNetworkFindings(long long value) {
    SetNetworkFindings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active findings with an exploit available for the VM
   * instance.</p>
   */
  inline long long GetExploitAvailableActiveFindingsCount() const { return m_exploitAvailableActiveFindingsCount; }
  inline bool ExploitAvailableActiveFindingsCountHasBeenSet() const { return m_exploitAvailableActiveFindingsCountHasBeenSet; }
  inline void SetExploitAvailableActiveFindingsCount(long long value) {
    m_exploitAvailableActiveFindingsCountHasBeenSet = true;
    m_exploitAvailableActiveFindingsCount = value;
  }
  inline VmInstanceAggregationResponse& WithExploitAvailableActiveFindingsCount(long long value) {
    SetExploitAvailableActiveFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active findings with a fix available for the VM instance.</p>
   */
  inline long long GetFixAvailableActiveFindingsCount() const { return m_fixAvailableActiveFindingsCount; }
  inline bool FixAvailableActiveFindingsCountHasBeenSet() const { return m_fixAvailableActiveFindingsCountHasBeenSet; }
  inline void SetFixAvailableActiveFindingsCount(long long value) {
    m_fixAvailableActiveFindingsCountHasBeenSet = true;
    m_fixAvailableActiveFindingsCount = value;
  }
  inline VmInstanceAggregationResponse& WithFixAvailableActiveFindingsCount(long long value) {
    SetFixAvailableActiveFindingsCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  Provider m_cloudProvider{Provider::NOT_SET};

  Aws::String m_cloudAccountId;

  Aws::String m_cloudPartition;

  Aws::String m_cloudRegion;

  Aws::String m_cloudOrgId;

  Aws::String m_vmImageReference;

  Aws::String m_operatingSystem;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_accountId;

  SeverityCounts m_severityCounts;

  long long m_networkFindings{0};

  long long m_exploitAvailableActiveFindingsCount{0};

  long long m_fixAvailableActiveFindingsCount{0};
  bool m_resourceIdHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudAccountIdHasBeenSet = false;
  bool m_cloudPartitionHasBeenSet = false;
  bool m_cloudRegionHasBeenSet = false;
  bool m_cloudOrgIdHasBeenSet = false;
  bool m_vmImageReferenceHasBeenSet = false;
  bool m_operatingSystemHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_severityCountsHasBeenSet = false;
  bool m_networkFindingsHasBeenSet = false;
  bool m_exploitAvailableActiveFindingsCountHasBeenSet = false;
  bool m_fixAvailableActiveFindingsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
