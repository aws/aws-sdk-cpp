/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>A response that contains the results of a container image
 * aggregation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ContainerImageAggregationResponse">AWS
 * API Reference</a></p>
 */
class ContainerImageAggregationResponse {
 public:
  AWS_INSPECTOR2_API ContainerImageAggregationResponse() = default;
  AWS_INSPECTOR2_API ContainerImageAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ContainerImageAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource ID for the container image.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ContainerImageAggregationResponse& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud service provider associated with this container image aggregation.
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
  inline ContainerImageAggregationResponse& WithCloudProvider(Provider value) {
    SetCloudProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account ID for the container image aggregation.</p>
   */
  inline const Aws::String& GetCloudAccountId() const { return m_cloudAccountId; }
  inline bool CloudAccountIdHasBeenSet() const { return m_cloudAccountIdHasBeenSet; }
  template <typename CloudAccountIdT = Aws::String>
  void SetCloudAccountId(CloudAccountIdT&& value) {
    m_cloudAccountIdHasBeenSet = true;
    m_cloudAccountId = std::forward<CloudAccountIdT>(value);
  }
  template <typename CloudAccountIdT = Aws::String>
  ContainerImageAggregationResponse& WithCloudAccountId(CloudAccountIdT&& value) {
    SetCloudAccountId(std::forward<CloudAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud infrastructure partition associated with this container image
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
  ContainerImageAggregationResponse& WithCloudPartition(CloudPartitionT&& value) {
    SetCloudPartition(std::forward<CloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud Region associated with this container image aggregation. The value
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
  ContainerImageAggregationResponse& WithCloudRegion(CloudRegionT&& value) {
    SetCloudRegion(std::forward<CloudRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization ID for the container image aggregation.</p>
   */
  inline const Aws::String& GetCloudOrgId() const { return m_cloudOrgId; }
  inline bool CloudOrgIdHasBeenSet() const { return m_cloudOrgIdHasBeenSet; }
  template <typename CloudOrgIdT = Aws::String>
  void SetCloudOrgId(CloudOrgIdT&& value) {
    m_cloudOrgIdHasBeenSet = true;
    m_cloudOrgId = std::forward<CloudOrgIdT>(value);
  }
  template <typename CloudOrgIdT = Aws::String>
  ContainerImageAggregationResponse& WithCloudOrgId(CloudOrgIdT&& value) {
    SetCloudOrgId(std::forward<CloudOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image digest for the container image.</p>
   */
  inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
  inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
  template <typename ImageDigestT = Aws::String>
  void SetImageDigest(ImageDigestT&& value) {
    m_imageDigestHasBeenSet = true;
    m_imageDigest = std::forward<ImageDigestT>(value);
  }
  template <typename ImageDigestT = Aws::String>
  ContainerImageAggregationResponse& WithImageDigest(ImageDigestT&& value) {
    SetImageDigest(std::forward<ImageDigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The repository for the container image.</p>
   */
  inline const Aws::String& GetRepository() const { return m_repository; }
  inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
  template <typename RepositoryT = Aws::String>
  void SetRepository(RepositoryT&& value) {
    m_repositoryHasBeenSet = true;
    m_repository = std::forward<RepositoryT>(value);
  }
  template <typename RepositoryT = Aws::String>
  ContainerImageAggregationResponse& WithRepository(RepositoryT&& value) {
    SetRepository(std::forward<RepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registry for the container image.</p>
   */
  inline const Aws::String& GetRegistry() const { return m_registry; }
  inline bool RegistryHasBeenSet() const { return m_registryHasBeenSet; }
  template <typename RegistryT = Aws::String>
  void SetRegistry(RegistryT&& value) {
    m_registryHasBeenSet = true;
    m_registry = std::forward<RegistryT>(value);
  }
  template <typename RegistryT = Aws::String>
  ContainerImageAggregationResponse& WithRegistry(RegistryT&& value) {
    SetRegistry(std::forward<RegistryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The architecture of the container image.</p>
   */
  inline const Aws::String& GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  template <typename ArchitectureT = Aws::String>
  void SetArchitecture(ArchitectureT&& value) {
    m_architectureHasBeenSet = true;
    m_architecture = std::forward<ArchitectureT>(value);
  }
  template <typename ArchitectureT = Aws::String>
  ContainerImageAggregationResponse& WithArchitecture(ArchitectureT&& value) {
    SetArchitecture(std::forward<ArchitectureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image tags attached to the container image.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
  inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
  template <typename ImageTagsT = Aws::Vector<Aws::String>>
  void SetImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags = std::forward<ImageTagsT>(value);
  }
  template <typename ImageTagsT = Aws::Vector<Aws::String>>
  ContainerImageAggregationResponse& WithImageTags(ImageTagsT&& value) {
    SetImageTags(std::forward<ImageTagsT>(value));
    return *this;
  }
  template <typename ImageTagsT = Aws::String>
  ContainerImageAggregationResponse& AddImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags.emplace_back(std::forward<ImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID associated with the container image.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ContainerImageAggregationResponse& WithAccountId(AccountIdT&& value) {
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
  ContainerImageAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) {
    SetSeverityCounts(std::forward<SeverityCountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time the container image was in use.</p>
   */
  inline const Aws::Utils::DateTime& GetLastInUseAt() const { return m_lastInUseAt; }
  inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
  template <typename LastInUseAtT = Aws::Utils::DateTime>
  void SetLastInUseAt(LastInUseAtT&& value) {
    m_lastInUseAtHasBeenSet = true;
    m_lastInUseAt = std::forward<LastInUseAtT>(value);
  }
  template <typename LastInUseAtT = Aws::Utils::DateTime>
  ContainerImageAggregationResponse& WithLastInUseAt(LastInUseAtT&& value) {
    SetLastInUseAt(std::forward<LastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times the container image is in use.</p>
   */
  inline long long GetInUseCount() const { return m_inUseCount; }
  inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
  inline void SetInUseCount(long long value) {
    m_inUseCountHasBeenSet = true;
    m_inUseCount = value;
  }
  inline ContainerImageAggregationResponse& WithInUseCount(long long value) {
    SetInUseCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active findings with an exploit available for the container
   * image.</p>
   */
  inline long long GetExploitAvailableActiveFindingsCount() const { return m_exploitAvailableActiveFindingsCount; }
  inline bool ExploitAvailableActiveFindingsCountHasBeenSet() const { return m_exploitAvailableActiveFindingsCountHasBeenSet; }
  inline void SetExploitAvailableActiveFindingsCount(long long value) {
    m_exploitAvailableActiveFindingsCountHasBeenSet = true;
    m_exploitAvailableActiveFindingsCount = value;
  }
  inline ContainerImageAggregationResponse& WithExploitAvailableActiveFindingsCount(long long value) {
    SetExploitAvailableActiveFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active findings with a fix available for the container
   * image.</p>
   */
  inline long long GetFixAvailableActiveFindingsCount() const { return m_fixAvailableActiveFindingsCount; }
  inline bool FixAvailableActiveFindingsCountHasBeenSet() const { return m_fixAvailableActiveFindingsCountHasBeenSet; }
  inline void SetFixAvailableActiveFindingsCount(long long value) {
    m_fixAvailableActiveFindingsCountHasBeenSet = true;
    m_fixAvailableActiveFindingsCount = value;
  }
  inline ContainerImageAggregationResponse& WithFixAvailableActiveFindingsCount(long long value) {
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

  Aws::String m_imageDigest;

  Aws::String m_repository;

  Aws::String m_registry;

  Aws::String m_architecture;

  Aws::Vector<Aws::String> m_imageTags;

  Aws::String m_accountId;

  SeverityCounts m_severityCounts;

  Aws::Utils::DateTime m_lastInUseAt{};

  long long m_inUseCount{0};

  long long m_exploitAvailableActiveFindingsCount{0};

  long long m_fixAvailableActiveFindingsCount{0};
  bool m_resourceIdHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudAccountIdHasBeenSet = false;
  bool m_cloudPartitionHasBeenSet = false;
  bool m_cloudRegionHasBeenSet = false;
  bool m_cloudOrgIdHasBeenSet = false;
  bool m_imageDigestHasBeenSet = false;
  bool m_repositoryHasBeenSet = false;
  bool m_registryHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_imageTagsHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_severityCountsHasBeenSet = false;
  bool m_lastInUseAtHasBeenSet = false;
  bool m_inUseCountHasBeenSet = false;
  bool m_exploitAvailableActiveFindingsCountHasBeenSet = false;
  bool m_fixAvailableActiveFindingsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
