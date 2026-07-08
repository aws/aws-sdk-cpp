/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CoverageResourceType.h>
#include <aws/inspector2/model/Provider.h>
#include <aws/inspector2/model/ResourceScanMetadata.h>
#include <aws/inspector2/model/ScanMode.h>
#include <aws/inspector2/model/ScanStatus.h>
#include <aws/inspector2/model/ScanType.h>

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
 * <p>An object that contains details about a resource covered by Amazon
 * Inspector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoveredResource">AWS
 * API Reference</a></p>
 */
class CoveredResource {
 public:
  AWS_INSPECTOR2_API CoveredResource() = default;
  AWS_INSPECTOR2_API CoveredResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API CoveredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the covered resource.</p>
   */
  inline CoverageResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(CoverageResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline CoveredResource& WithResourceType(CoverageResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the covered resource.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  CoveredResource& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the covered resource.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  CoveredResource& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Inspector scan type covering the resource.</p>
   */
  inline ScanType GetScanType() const { return m_scanType; }
  inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
  inline void SetScanType(ScanType value) {
    m_scanTypeHasBeenSet = true;
    m_scanType = value;
  }
  inline CoveredResource& WithScanType(ScanType value) {
    SetScanType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the scan covering the resource.</p>
   */
  inline const ScanStatus& GetScanStatus() const { return m_scanStatus; }
  inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
  template <typename ScanStatusT = ScanStatus>
  void SetScanStatus(ScanStatusT&& value) {
    m_scanStatusHasBeenSet = true;
    m_scanStatus = std::forward<ScanStatusT>(value);
  }
  template <typename ScanStatusT = ScanStatus>
  CoveredResource& WithScanStatus(ScanStatusT&& value) {
    SetScanStatus(std::forward<ScanStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains details about the metadata.</p>
   */
  inline const ResourceScanMetadata& GetResourceMetadata() const { return m_resourceMetadata; }
  inline bool ResourceMetadataHasBeenSet() const { return m_resourceMetadataHasBeenSet; }
  template <typename ResourceMetadataT = ResourceScanMetadata>
  void SetResourceMetadata(ResourceMetadataT&& value) {
    m_resourceMetadataHasBeenSet = true;
    m_resourceMetadata = std::forward<ResourceMetadataT>(value);
  }
  template <typename ResourceMetadataT = ResourceScanMetadata>
  CoveredResource& WithResourceMetadata(ResourceMetadataT&& value) {
    SetResourceMetadata(std::forward<ResourceMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was last checked for vulnerabilities.</p>
   */
  inline const Aws::Utils::DateTime& GetLastScannedAt() const { return m_lastScannedAt; }
  inline bool LastScannedAtHasBeenSet() const { return m_lastScannedAtHasBeenSet; }
  template <typename LastScannedAtT = Aws::Utils::DateTime>
  void SetLastScannedAt(LastScannedAtT&& value) {
    m_lastScannedAtHasBeenSet = true;
    m_lastScannedAt = std::forward<LastScannedAtT>(value);
  }
  template <typename LastScannedAtT = Aws::Utils::DateTime>
  CoveredResource& WithLastScannedAt(LastScannedAtT&& value) {
    SetLastScannedAt(std::forward<LastScannedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan method that is applied to the instance.</p>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline CoveredResource& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider of the covered resource.</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline CoveredResource& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider account ID of the covered resource.</p>
   */
  inline const Aws::String& GetProviderAccountId() const { return m_providerAccountId; }
  inline bool ProviderAccountIdHasBeenSet() const { return m_providerAccountIdHasBeenSet; }
  template <typename ProviderAccountIdT = Aws::String>
  void SetProviderAccountId(ProviderAccountIdT&& value) {
    m_providerAccountIdHasBeenSet = true;
    m_providerAccountId = std::forward<ProviderAccountIdT>(value);
  }
  template <typename ProviderAccountIdT = Aws::String>
  CoveredResource& WithProviderAccountId(ProviderAccountIdT&& value) {
    SetProviderAccountId(std::forward<ProviderAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider organization ID of the covered resource.</p>
   */
  inline const Aws::String& GetProviderOrgId() const { return m_providerOrgId; }
  inline bool ProviderOrgIdHasBeenSet() const { return m_providerOrgIdHasBeenSet; }
  template <typename ProviderOrgIdT = Aws::String>
  void SetProviderOrgId(ProviderOrgIdT&& value) {
    m_providerOrgIdHasBeenSet = true;
    m_providerOrgId = std::forward<ProviderOrgIdT>(value);
  }
  template <typename ProviderOrgIdT = Aws::String>
  CoveredResource& WithProviderOrgId(ProviderOrgIdT&& value) {
    SetProviderOrgId(std::forward<ProviderOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider region of the covered resource.</p>
   */
  inline const Aws::String& GetProviderRegion() const { return m_providerRegion; }
  inline bool ProviderRegionHasBeenSet() const { return m_providerRegionHasBeenSet; }
  template <typename ProviderRegionT = Aws::String>
  void SetProviderRegion(ProviderRegionT&& value) {
    m_providerRegionHasBeenSet = true;
    m_providerRegion = std::forward<ProviderRegionT>(value);
  }
  template <typename ProviderRegionT = Aws::String>
  CoveredResource& WithProviderRegion(ProviderRegionT&& value) {
    SetProviderRegion(std::forward<ProviderRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider partition of the covered resource.</p>
   */
  inline const Aws::String& GetProviderPartition() const { return m_providerPartition; }
  inline bool ProviderPartitionHasBeenSet() const { return m_providerPartitionHasBeenSet; }
  template <typename ProviderPartitionT = Aws::String>
  void SetProviderPartition(ProviderPartitionT&& value) {
    m_providerPartitionHasBeenSet = true;
    m_providerPartition = std::forward<ProviderPartitionT>(value);
  }
  template <typename ProviderPartitionT = Aws::String>
  CoveredResource& WithProviderPartition(ProviderPartitionT&& value) {
    SetProviderPartition(std::forward<ProviderPartitionT>(value));
    return *this;
  }
  ///@}
 private:
  CoverageResourceType m_resourceType{CoverageResourceType::NOT_SET};

  Aws::String m_resourceId;

  Aws::String m_accountId;

  ScanType m_scanType{ScanType::NOT_SET};

  ScanStatus m_scanStatus;

  ResourceScanMetadata m_resourceMetadata;

  Aws::Utils::DateTime m_lastScannedAt{};

  ScanMode m_scanMode{ScanMode::NOT_SET};

  Provider m_provider{Provider::NOT_SET};

  Aws::String m_providerAccountId;

  Aws::String m_providerOrgId;

  Aws::String m_providerRegion;

  Aws::String m_providerPartition;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_scanTypeHasBeenSet = false;
  bool m_scanStatusHasBeenSet = false;
  bool m_resourceMetadataHasBeenSet = false;
  bool m_lastScannedAtHasBeenSet = false;
  bool m_scanModeHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_providerAccountIdHasBeenSet = false;
  bool m_providerOrgIdHasBeenSet = false;
  bool m_providerRegionHasBeenSet = false;
  bool m_providerPartitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
