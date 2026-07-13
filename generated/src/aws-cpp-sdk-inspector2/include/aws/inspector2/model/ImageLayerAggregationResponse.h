/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
 * <p>A response that contains the results of a finding aggregation by image
 * layer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ImageLayerAggregationResponse">AWS
 * API Reference</a></p>
 */
class ImageLayerAggregationResponse {
 public:
  AWS_INSPECTOR2_API ImageLayerAggregationResponse() = default;
  AWS_INSPECTOR2_API ImageLayerAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ImageLayerAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The repository the layer resides in.</p>
   */
  inline const Aws::String& GetRepository() const { return m_repository; }
  inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
  template <typename RepositoryT = Aws::String>
  void SetRepository(RepositoryT&& value) {
    m_repositoryHasBeenSet = true;
    m_repository = std::forward<RepositoryT>(value);
  }
  template <typename RepositoryT = Aws::String>
  ImageLayerAggregationResponse& WithRepository(RepositoryT&& value) {
    SetRepository(std::forward<RepositoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ID of the container image layer.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ImageLayerAggregationResponse& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The layer hash.</p>
   */
  inline const Aws::String& GetLayerHash() const { return m_layerHash; }
  inline bool LayerHashHasBeenSet() const { return m_layerHashHasBeenSet; }
  template <typename LayerHashT = Aws::String>
  void SetLayerHash(LayerHashT&& value) {
    m_layerHashHasBeenSet = true;
    m_layerHash = std::forward<LayerHashT>(value);
  }
  template <typename LayerHashT = Aws::String>
  ImageLayerAggregationResponse& WithLayerHash(LayerHashT&& value) {
    SetLayerHash(std::forward<LayerHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the container image
   * hosting the layer image.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ImageLayerAggregationResponse& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud service provider associated with this image layer aggregation.
   * Valid values:</p> <ul> <li> <p> <code>AWS</code> – Findings from Amazon Web
   * Services resources.</p> </li> <li> <p> <code>AZURE</code> – Findings from
   * Microsoft Azure resources.</p> </li> </ul>
   */
  inline const Aws::String& GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  template <typename CloudProviderT = Aws::String>
  void SetCloudProvider(CloudProviderT&& value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = std::forward<CloudProviderT>(value);
  }
  template <typename CloudProviderT = Aws::String>
  ImageLayerAggregationResponse& WithCloudProvider(CloudProviderT&& value) {
    SetCloudProvider(std::forward<CloudProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud account ID for the image layer aggregation.</p>
   */
  inline const Aws::String& GetCloudAccountId() const { return m_cloudAccountId; }
  inline bool CloudAccountIdHasBeenSet() const { return m_cloudAccountIdHasBeenSet; }
  template <typename CloudAccountIdT = Aws::String>
  void SetCloudAccountId(CloudAccountIdT&& value) {
    m_cloudAccountIdHasBeenSet = true;
    m_cloudAccountId = std::forward<CloudAccountIdT>(value);
  }
  template <typename CloudAccountIdT = Aws::String>
  ImageLayerAggregationResponse& WithCloudAccountId(CloudAccountIdT&& value) {
    SetCloudAccountId(std::forward<CloudAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud organization ID for the image layer aggregation.</p>
   */
  inline const Aws::String& GetCloudOrgId() const { return m_cloudOrgId; }
  inline bool CloudOrgIdHasBeenSet() const { return m_cloudOrgIdHasBeenSet; }
  template <typename CloudOrgIdT = Aws::String>
  void SetCloudOrgId(CloudOrgIdT&& value) {
    m_cloudOrgIdHasBeenSet = true;
    m_cloudOrgId = std::forward<CloudOrgIdT>(value);
  }
  template <typename CloudOrgIdT = Aws::String>
  ImageLayerAggregationResponse& WithCloudOrgId(CloudOrgIdT&& value) {
    SetCloudOrgId(std::forward<CloudOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud Region associated with this image layer aggregation. The value
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
  ImageLayerAggregationResponse& WithCloudRegion(CloudRegionT&& value) {
    SetCloudRegion(std::forward<CloudRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud infrastructure partition associated with this image layer
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
  ImageLayerAggregationResponse& WithCloudPartition(CloudPartitionT&& value) {
    SetCloudPartition(std::forward<CloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that represents the count of matched findings per severity.</p>
   */
  inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
  inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
  template <typename SeverityCountsT = SeverityCounts>
  void SetSeverityCounts(SeverityCountsT&& value) {
    m_severityCountsHasBeenSet = true;
    m_severityCounts = std::forward<SeverityCountsT>(value);
  }
  template <typename SeverityCountsT = SeverityCounts>
  ImageLayerAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) {
    SetSeverityCounts(std::forward<SeverityCountsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repository;

  Aws::String m_resourceId;

  Aws::String m_layerHash;

  Aws::String m_accountId;

  Aws::String m_cloudProvider;

  Aws::String m_cloudAccountId;

  Aws::String m_cloudOrgId;

  Aws::String m_cloudRegion;

  Aws::String m_cloudPartition;

  SeverityCounts m_severityCounts;
  bool m_repositoryHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_layerHashHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
  bool m_cloudAccountIdHasBeenSet = false;
  bool m_cloudOrgIdHasBeenSet = false;
  bool m_cloudRegionHasBeenSet = false;
  bool m_cloudPartitionHasBeenSet = false;
  bool m_severityCountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
