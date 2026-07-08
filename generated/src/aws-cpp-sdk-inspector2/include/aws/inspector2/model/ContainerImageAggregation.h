/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ContainerImageSortBy.h>
#include <aws/inspector2/model/DateFilter.h>
#include <aws/inspector2/model/NumberFilter.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/StringFilter.h>

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
 * <p>An aggregation of information about container images.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ContainerImageAggregation">AWS
 * API Reference</a></p>
 */
class ContainerImageAggregation {
 public:
  AWS_INSPECTOR2_API ContainerImageAggregation() = default;
  AWS_INSPECTOR2_API ContainerImageAggregation(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ContainerImageAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ContainerImageAggregation& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  template <typename ResourceIdsT = StringFilter>
  ContainerImageAggregation& AddResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image digests to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetImageDigests() const { return m_imageDigests; }
  inline bool ImageDigestsHasBeenSet() const { return m_imageDigestsHasBeenSet; }
  template <typename ImageDigestsT = Aws::Vector<StringFilter>>
  void SetImageDigests(ImageDigestsT&& value) {
    m_imageDigestsHasBeenSet = true;
    m_imageDigests = std::forward<ImageDigestsT>(value);
  }
  template <typename ImageDigestsT = Aws::Vector<StringFilter>>
  ContainerImageAggregation& WithImageDigests(ImageDigestsT&& value) {
    SetImageDigests(std::forward<ImageDigestsT>(value));
    return *this;
  }
  template <typename ImageDigestsT = StringFilter>
  ContainerImageAggregation& AddImageDigests(ImageDigestsT&& value) {
    m_imageDigestsHasBeenSet = true;
    m_imageDigests.emplace_back(std::forward<ImageDigestsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image repositories to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetRepositories() const { return m_repositories; }
  inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
  template <typename RepositoriesT = Aws::Vector<StringFilter>>
  void SetRepositories(RepositoriesT&& value) {
    m_repositoriesHasBeenSet = true;
    m_repositories = std::forward<RepositoriesT>(value);
  }
  template <typename RepositoriesT = Aws::Vector<StringFilter>>
  ContainerImageAggregation& WithRepositories(RepositoriesT&& value) {
    SetRepositories(std::forward<RepositoriesT>(value));
    return *this;
  }
  template <typename RepositoriesT = StringFilter>
  ContainerImageAggregation& AddRepositories(RepositoriesT&& value) {
    m_repositoriesHasBeenSet = true;
    m_repositories.emplace_back(std::forward<RepositoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image registries to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetRegistries() const { return m_registries; }
  inline bool RegistriesHasBeenSet() const { return m_registriesHasBeenSet; }
  template <typename RegistriesT = Aws::Vector<StringFilter>>
  void SetRegistries(RegistriesT&& value) {
    m_registriesHasBeenSet = true;
    m_registries = std::forward<RegistriesT>(value);
  }
  template <typename RegistriesT = Aws::Vector<StringFilter>>
  ContainerImageAggregation& WithRegistries(RegistriesT&& value) {
    SetRegistries(std::forward<RegistriesT>(value));
    return *this;
  }
  template <typename RegistriesT = StringFilter>
  ContainerImageAggregation& AddRegistries(RegistriesT&& value) {
    m_registriesHasBeenSet = true;
    m_registries.emplace_back(std::forward<RegistriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image architectures to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetArchitectures() const { return m_architectures; }
  inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
  template <typename ArchitecturesT = Aws::Vector<StringFilter>>
  void SetArchitectures(ArchitecturesT&& value) {
    m_architecturesHasBeenSet = true;
    m_architectures = std::forward<ArchitecturesT>(value);
  }
  template <typename ArchitecturesT = Aws::Vector<StringFilter>>
  ContainerImageAggregation& WithArchitectures(ArchitecturesT&& value) {
    SetArchitectures(std::forward<ArchitecturesT>(value));
    return *this;
  }
  template <typename ArchitecturesT = StringFilter>
  ContainerImageAggregation& AddArchitectures(ArchitecturesT&& value) {
    m_architecturesHasBeenSet = true;
    m_architectures.emplace_back(std::forward<ArchitecturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image tags to aggregate findings for.</p>
   */
  inline const Aws::Vector<StringFilter>& GetImageTags() const { return m_imageTags; }
  inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
  template <typename ImageTagsT = Aws::Vector<StringFilter>>
  void SetImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags = std::forward<ImageTagsT>(value);
  }
  template <typename ImageTagsT = Aws::Vector<StringFilter>>
  ContainerImageAggregation& WithImageTags(ImageTagsT&& value) {
    SetImageTags(std::forward<ImageTagsT>(value));
    return *this;
  }
  template <typename ImageTagsT = StringFilter>
  ContainerImageAggregation& AddImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags.emplace_back(std::forward<ImageTagsT>(value));
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
  ContainerImageAggregation& WithCloudProviders(CloudProvidersT&& value) {
    SetCloudProviders(std::forward<CloudProvidersT>(value));
    return *this;
  }
  template <typename CloudProvidersT = StringFilter>
  ContainerImageAggregation& AddCloudProviders(CloudProvidersT&& value) {
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
  ContainerImageAggregation& WithCloudPartitions(CloudPartitionsT&& value) {
    SetCloudPartitions(std::forward<CloudPartitionsT>(value));
    return *this;
  }
  template <typename CloudPartitionsT = StringFilter>
  ContainerImageAggregation& AddCloudPartitions(CloudPartitionsT&& value) {
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
  ContainerImageAggregation& WithCloudRegions(CloudRegionsT&& value) {
    SetCloudRegions(std::forward<CloudRegionsT>(value));
    return *this;
  }
  template <typename CloudRegionsT = StringFilter>
  ContainerImageAggregation& AddCloudRegions(CloudRegionsT&& value) {
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
  ContainerImageAggregation& WithCloudOrgIds(CloudOrgIdsT&& value) {
    SetCloudOrgIds(std::forward<CloudOrgIdsT>(value));
    return *this;
  }
  template <typename CloudOrgIdsT = StringFilter>
  ContainerImageAggregation& AddCloudOrgIds(CloudOrgIdsT&& value) {
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
  ContainerImageAggregation& WithCloudAccountIds(CloudAccountIdsT&& value) {
    SetCloudAccountIds(std::forward<CloudAccountIdsT>(value));
    return *this;
  }
  template <typename CloudAccountIdsT = StringFilter>
  ContainerImageAggregation& AddCloudAccountIds(CloudAccountIdsT&& value) {
    m_cloudAccountIdsHasBeenSet = true;
    m_cloudAccountIds.emplace_back(std::forward<CloudAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last in-use timestamps to aggregate findings for.</p>
   */
  inline const Aws::Vector<DateFilter>& GetLastInUseAt() const { return m_lastInUseAt; }
  inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
  template <typename LastInUseAtT = Aws::Vector<DateFilter>>
  void SetLastInUseAt(LastInUseAtT&& value) {
    m_lastInUseAtHasBeenSet = true;
    m_lastInUseAt = std::forward<LastInUseAtT>(value);
  }
  template <typename LastInUseAtT = Aws::Vector<DateFilter>>
  ContainerImageAggregation& WithLastInUseAt(LastInUseAtT&& value) {
    SetLastInUseAt(std::forward<LastInUseAtT>(value));
    return *this;
  }
  template <typename LastInUseAtT = DateFilter>
  ContainerImageAggregation& AddLastInUseAt(LastInUseAtT&& value) {
    m_lastInUseAtHasBeenSet = true;
    m_lastInUseAt.emplace_back(std::forward<LastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The in-use counts to aggregate findings for.</p>
   */
  inline const Aws::Vector<NumberFilter>& GetInUseCount() const { return m_inUseCount; }
  inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
  template <typename InUseCountT = Aws::Vector<NumberFilter>>
  void SetInUseCount(InUseCountT&& value) {
    m_inUseCountHasBeenSet = true;
    m_inUseCount = std::forward<InUseCountT>(value);
  }
  template <typename InUseCountT = Aws::Vector<NumberFilter>>
  ContainerImageAggregation& WithInUseCount(InUseCountT&& value) {
    SetInUseCount(std::forward<InUseCountT>(value));
    return *this;
  }
  template <typename InUseCountT = NumberFilter>
  ContainerImageAggregation& AddInUseCount(InUseCountT&& value) {
    m_inUseCountHasBeenSet = true;
    m_inUseCount.emplace_back(std::forward<InUseCountT>(value));
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
  inline ContainerImageAggregation& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to sort results by. Specify a field name from the aggregation
   * response, such as <code>CRITICAL</code>, <code>HIGH</code>, or
   * <code>ALL</code>.</p>
   */
  inline ContainerImageSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ContainerImageSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ContainerImageAggregation& WithSortBy(ContainerImageSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StringFilter> m_resourceIds;

  Aws::Vector<StringFilter> m_imageDigests;

  Aws::Vector<StringFilter> m_repositories;

  Aws::Vector<StringFilter> m_registries;

  Aws::Vector<StringFilter> m_architectures;

  Aws::Vector<StringFilter> m_imageTags;

  Aws::Vector<StringFilter> m_cloudProviders;

  Aws::Vector<StringFilter> m_cloudPartitions;

  Aws::Vector<StringFilter> m_cloudRegions;

  Aws::Vector<StringFilter> m_cloudOrgIds;

  Aws::Vector<StringFilter> m_cloudAccountIds;

  Aws::Vector<DateFilter> m_lastInUseAt;

  Aws::Vector<NumberFilter> m_inUseCount;

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  ContainerImageSortBy m_sortBy{ContainerImageSortBy::NOT_SET};
  bool m_resourceIdsHasBeenSet = false;
  bool m_imageDigestsHasBeenSet = false;
  bool m_repositoriesHasBeenSet = false;
  bool m_registriesHasBeenSet = false;
  bool m_architecturesHasBeenSet = false;
  bool m_imageTagsHasBeenSet = false;
  bool m_cloudProvidersHasBeenSet = false;
  bool m_cloudPartitionsHasBeenSet = false;
  bool m_cloudRegionsHasBeenSet = false;
  bool m_cloudOrgIdsHasBeenSet = false;
  bool m_cloudAccountIdsHasBeenSet = false;
  bool m_lastInUseAtHasBeenSet = false;
  bool m_inUseCountHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
