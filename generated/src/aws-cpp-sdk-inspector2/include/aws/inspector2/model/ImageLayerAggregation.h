/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ImageLayerSortBy.h>
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
 * <p>The details that define an aggregation based on container image
 * layers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ImageLayerAggregation">AWS
 * API Reference</a></p>
 */
class ImageLayerAggregation {
 public:
  AWS_INSPECTOR2_API ImageLayerAggregation() = default;
  AWS_INSPECTOR2_API ImageLayerAggregation(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ImageLayerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The repository associated with the container image hosting the layers.</p>
   */
  inline const Aws::Vector<StringFilter>& GetRepositories() const { return m_repositories; }
  inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
  template <typename RepositoriesT = Aws::Vector<StringFilter>>
  void SetRepositories(RepositoriesT&& value) {
    m_repositoriesHasBeenSet = true;
    m_repositories = std::forward<RepositoriesT>(value);
  }
  template <typename RepositoriesT = Aws::Vector<StringFilter>>
  ImageLayerAggregation& WithRepositories(RepositoriesT&& value) {
    SetRepositories(std::forward<RepositoriesT>(value));
    return *this;
  }
  template <typename RepositoriesT = StringFilter>
  ImageLayerAggregation& AddRepositories(RepositoriesT&& value) {
    m_repositoriesHasBeenSet = true;
    m_repositories.emplace_back(std::forward<RepositoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the container image layer.</p>
   */
  inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
  inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
  template <typename ResourceIdsT = Aws::Vector<StringFilter>>
  void SetResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds = std::forward<ResourceIdsT>(value);
  }
  template <typename ResourceIdsT = Aws::Vector<StringFilter>>
  ImageLayerAggregation& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  template <typename ResourceIdsT = StringFilter>
  ImageLayerAggregation& AddResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hashes associated with the layers.</p>
   */
  inline const Aws::Vector<StringFilter>& GetLayerHashes() const { return m_layerHashes; }
  inline bool LayerHashesHasBeenSet() const { return m_layerHashesHasBeenSet; }
  template <typename LayerHashesT = Aws::Vector<StringFilter>>
  void SetLayerHashes(LayerHashesT&& value) {
    m_layerHashesHasBeenSet = true;
    m_layerHashes = std::forward<LayerHashesT>(value);
  }
  template <typename LayerHashesT = Aws::Vector<StringFilter>>
  ImageLayerAggregation& WithLayerHashes(LayerHashesT&& value) {
    SetLayerHashes(std::forward<LayerHashesT>(value));
    return *this;
  }
  template <typename LayerHashesT = StringFilter>
  ImageLayerAggregation& AddLayerHashes(LayerHashesT&& value) {
    m_layerHashesHasBeenSet = true;
    m_layerHashes.emplace_back(std::forward<LayerHashesT>(value));
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
  ImageLayerAggregation& WithCloudProviders(CloudProvidersT&& value) {
    SetCloudProviders(std::forward<CloudProvidersT>(value));
    return *this;
  }
  template <typename CloudProvidersT = StringFilter>
  ImageLayerAggregation& AddCloudProviders(CloudProvidersT&& value) {
    m_cloudProvidersHasBeenSet = true;
    m_cloudProviders.emplace_back(std::forward<CloudProvidersT>(value));
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
  ImageLayerAggregation& WithCloudAccountIds(CloudAccountIdsT&& value) {
    SetCloudAccountIds(std::forward<CloudAccountIdsT>(value));
    return *this;
  }
  template <typename CloudAccountIdsT = StringFilter>
  ImageLayerAggregation& AddCloudAccountIds(CloudAccountIdsT&& value) {
    m_cloudAccountIdsHasBeenSet = true;
    m_cloudAccountIds.emplace_back(std::forward<CloudAccountIdsT>(value));
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
  ImageLayerAggregation& WithCloudOrgIds(CloudOrgIdsT&& value) {
    SetCloudOrgIds(std::forward<CloudOrgIdsT>(value));
    return *this;
  }
  template <typename CloudOrgIdsT = StringFilter>
  ImageLayerAggregation& AddCloudOrgIds(CloudOrgIdsT&& value) {
    m_cloudOrgIdsHasBeenSet = true;
    m_cloudOrgIds.emplace_back(std::forward<CloudOrgIdsT>(value));
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
  ImageLayerAggregation& WithCloudRegions(CloudRegionsT&& value) {
    SetCloudRegions(std::forward<CloudRegionsT>(value));
    return *this;
  }
  template <typename CloudRegionsT = StringFilter>
  ImageLayerAggregation& AddCloudRegions(CloudRegionsT&& value) {
    m_cloudRegionsHasBeenSet = true;
    m_cloudRegions.emplace_back(std::forward<CloudRegionsT>(value));
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
  ImageLayerAggregation& WithCloudPartitions(CloudPartitionsT&& value) {
    SetCloudPartitions(std::forward<CloudPartitionsT>(value));
    return *this;
  }
  template <typename CloudPartitionsT = StringFilter>
  ImageLayerAggregation& AddCloudPartitions(CloudPartitionsT&& value) {
    m_cloudPartitionsHasBeenSet = true;
    m_cloudPartitions.emplace_back(std::forward<CloudPartitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order to sort results by.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ImageLayerAggregation& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to sort results by.</p>
   */
  inline ImageLayerSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ImageLayerSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ImageLayerAggregation& WithSortBy(ImageLayerSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<StringFilter> m_repositories;

  Aws::Vector<StringFilter> m_resourceIds;

  Aws::Vector<StringFilter> m_layerHashes;

  Aws::Vector<StringFilter> m_cloudProviders;

  Aws::Vector<StringFilter> m_cloudAccountIds;

  Aws::Vector<StringFilter> m_cloudOrgIds;

  Aws::Vector<StringFilter> m_cloudRegions;

  Aws::Vector<StringFilter> m_cloudPartitions;

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  ImageLayerSortBy m_sortBy{ImageLayerSortBy::NOT_SET};
  bool m_repositoriesHasBeenSet = false;
  bool m_resourceIdsHasBeenSet = false;
  bool m_layerHashesHasBeenSet = false;
  bool m_cloudProvidersHasBeenSet = false;
  bool m_cloudAccountIdsHasBeenSet = false;
  bool m_cloudOrgIdsHasBeenSet = false;
  bool m_cloudRegionsHasBeenSet = false;
  bool m_cloudPartitionsHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
