/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/OrganizationConfiguration.h>
#include <aws/license-manager/model/ServiceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {
class GetServiceSettingsResult {
 public:
  AWS_LICENSEMANAGER_API GetServiceSettingsResult() = default;
  AWS_LICENSEMANAGER_API GetServiceSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LICENSEMANAGER_API GetServiceSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Regional S3 bucket path for storing reports, license trail event data,
   * discovery data, and so on.</p>
   */
  inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
  template <typename S3BucketArnT = Aws::String>
  void SetS3BucketArn(S3BucketArnT&& value) {
    m_s3BucketArnHasBeenSet = true;
    m_s3BucketArn = std::forward<S3BucketArnT>(value);
  }
  template <typename S3BucketArnT = Aws::String>
  GetServiceSettingsResult& WithS3BucketArn(S3BucketArnT&& value) {
    SetS3BucketArn(std::forward<S3BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SNS topic configured to receive notifications from License Manager.</p>
   */
  inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
  template <typename SnsTopicArnT = Aws::String>
  void SetSnsTopicArn(SnsTopicArnT&& value) {
    m_snsTopicArnHasBeenSet = true;
    m_snsTopicArn = std::forward<SnsTopicArnT>(value);
  }
  template <typename SnsTopicArnT = Aws::String>
  GetServiceSettingsResult& WithSnsTopicArn(SnsTopicArnT&& value) {
    SetSnsTopicArn(std::forward<SnsTopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether Organizations is integrated with License Manager for
   * cross-account discovery.</p>
   */
  inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  void SetOrganizationConfiguration(OrganizationConfigurationT&& value) {
    m_organizationConfigurationHasBeenSet = true;
    m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value);
  }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  GetServiceSettingsResult& WithOrganizationConfiguration(OrganizationConfigurationT&& value) {
    SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether cross-account discovery is enabled.</p>
   */
  inline bool GetEnableCrossAccountsDiscovery() const { return m_enableCrossAccountsDiscovery; }
  inline void SetEnableCrossAccountsDiscovery(bool value) {
    m_enableCrossAccountsDiscoveryHasBeenSet = true;
    m_enableCrossAccountsDiscovery = value;
  }
  inline GetServiceSettingsResult& WithEnableCrossAccountsDiscovery(bool value) {
    SetEnableCrossAccountsDiscovery(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the resource share. The License Manager
   * management account provides member accounts with access to this share.</p>
   */
  inline const Aws::String& GetLicenseManagerResourceShareArn() const { return m_licenseManagerResourceShareArn; }
  template <typename LicenseManagerResourceShareArnT = Aws::String>
  void SetLicenseManagerResourceShareArn(LicenseManagerResourceShareArnT&& value) {
    m_licenseManagerResourceShareArnHasBeenSet = true;
    m_licenseManagerResourceShareArn = std::forward<LicenseManagerResourceShareArnT>(value);
  }
  template <typename LicenseManagerResourceShareArnT = Aws::String>
  GetServiceSettingsResult& WithLicenseManagerResourceShareArn(LicenseManagerResourceShareArnT&& value) {
    SetLicenseManagerResourceShareArn(std::forward<LicenseManagerResourceShareArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Cross region discovery home region.</p>
   */
  inline const Aws::String& GetCrossRegionDiscoveryHomeRegion() const { return m_crossRegionDiscoveryHomeRegion; }
  template <typename CrossRegionDiscoveryHomeRegionT = Aws::String>
  void SetCrossRegionDiscoveryHomeRegion(CrossRegionDiscoveryHomeRegionT&& value) {
    m_crossRegionDiscoveryHomeRegionHasBeenSet = true;
    m_crossRegionDiscoveryHomeRegion = std::forward<CrossRegionDiscoveryHomeRegionT>(value);
  }
  template <typename CrossRegionDiscoveryHomeRegionT = Aws::String>
  GetServiceSettingsResult& WithCrossRegionDiscoveryHomeRegion(CrossRegionDiscoveryHomeRegionT&& value) {
    SetCrossRegionDiscoveryHomeRegion(std::forward<CrossRegionDiscoveryHomeRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Cross region discovery source regions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCrossRegionDiscoverySourceRegions() const { return m_crossRegionDiscoverySourceRegions; }
  template <typename CrossRegionDiscoverySourceRegionsT = Aws::Vector<Aws::String>>
  void SetCrossRegionDiscoverySourceRegions(CrossRegionDiscoverySourceRegionsT&& value) {
    m_crossRegionDiscoverySourceRegionsHasBeenSet = true;
    m_crossRegionDiscoverySourceRegions = std::forward<CrossRegionDiscoverySourceRegionsT>(value);
  }
  template <typename CrossRegionDiscoverySourceRegionsT = Aws::Vector<Aws::String>>
  GetServiceSettingsResult& WithCrossRegionDiscoverySourceRegions(CrossRegionDiscoverySourceRegionsT&& value) {
    SetCrossRegionDiscoverySourceRegions(std::forward<CrossRegionDiscoverySourceRegionsT>(value));
    return *this;
  }
  template <typename CrossRegionDiscoverySourceRegionsT = Aws::String>
  GetServiceSettingsResult& AddCrossRegionDiscoverySourceRegions(CrossRegionDiscoverySourceRegionsT&& value) {
    m_crossRegionDiscoverySourceRegionsHasBeenSet = true;
    m_crossRegionDiscoverySourceRegions.emplace_back(std::forward<CrossRegionDiscoverySourceRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service status.</p>
   */
  inline const ServiceStatus& GetServiceStatus() const { return m_serviceStatus; }
  template <typename ServiceStatusT = ServiceStatus>
  void SetServiceStatus(ServiceStatusT&& value) {
    m_serviceStatusHasBeenSet = true;
    m_serviceStatus = std::forward<ServiceStatusT>(value);
  }
  template <typename ServiceStatusT = ServiceStatus>
  GetServiceSettingsResult& WithServiceStatus(ServiceStatusT&& value) {
    SetServiceStatus(std::forward<ServiceStatusT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetServiceSettingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketArn;

  Aws::String m_snsTopicArn;

  OrganizationConfiguration m_organizationConfiguration;

  bool m_enableCrossAccountsDiscovery{false};

  Aws::String m_licenseManagerResourceShareArn;

  Aws::String m_crossRegionDiscoveryHomeRegion;

  Aws::Vector<Aws::String> m_crossRegionDiscoverySourceRegions;

  ServiceStatus m_serviceStatus;

  Aws::String m_requestId;
  bool m_s3BucketArnHasBeenSet = false;
  bool m_snsTopicArnHasBeenSet = false;
  bool m_organizationConfigurationHasBeenSet = false;
  bool m_enableCrossAccountsDiscoveryHasBeenSet = false;
  bool m_licenseManagerResourceShareArnHasBeenSet = false;
  bool m_crossRegionDiscoveryHomeRegionHasBeenSet = false;
  bool m_crossRegionDiscoverySourceRegionsHasBeenSet = false;
  bool m_serviceStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
