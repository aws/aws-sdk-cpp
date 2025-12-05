/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/OrganizationConfiguration.h>

#include <utility>

namespace Aws {
namespace LicenseManager {
namespace Model {

/**
 */
class UpdateServiceSettingsRequest : public LicenseManagerRequest {
 public:
  AWS_LICENSEMANAGER_API UpdateServiceSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSettings"; }

  AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

  AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the Amazon S3 bucket where the License Manager
   * information is stored.</p>
   */
  inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
  inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
  template <typename S3BucketArnT = Aws::String>
  void SetS3BucketArn(S3BucketArnT&& value) {
    m_s3BucketArnHasBeenSet = true;
    m_s3BucketArn = std::forward<S3BucketArnT>(value);
  }
  template <typename S3BucketArnT = Aws::String>
  UpdateServiceSettingsRequest& WithS3BucketArn(S3BucketArnT&& value) {
    SetS3BucketArn(std::forward<S3BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the Amazon SNS topic used for License Manager
   * alerts.</p>
   */
  inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
  inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
  template <typename SnsTopicArnT = Aws::String>
  void SetSnsTopicArn(SnsTopicArnT&& value) {
    m_snsTopicArnHasBeenSet = true;
    m_snsTopicArn = std::forward<SnsTopicArnT>(value);
  }
  template <typename SnsTopicArnT = Aws::String>
  UpdateServiceSettingsRequest& WithSnsTopicArn(SnsTopicArnT&& value) {
    SetSnsTopicArn(std::forward<SnsTopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables integration with Organizations for cross-account discovery.</p>
   */
  inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
  inline bool OrganizationConfigurationHasBeenSet() const { return m_organizationConfigurationHasBeenSet; }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  void SetOrganizationConfiguration(OrganizationConfigurationT&& value) {
    m_organizationConfigurationHasBeenSet = true;
    m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value);
  }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  UpdateServiceSettingsRequest& WithOrganizationConfiguration(OrganizationConfigurationT&& value) {
    SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Activates cross-account discovery.</p>
   */
  inline bool GetEnableCrossAccountsDiscovery() const { return m_enableCrossAccountsDiscovery; }
  inline bool EnableCrossAccountsDiscoveryHasBeenSet() const { return m_enableCrossAccountsDiscoveryHasBeenSet; }
  inline void SetEnableCrossAccountsDiscovery(bool value) {
    m_enableCrossAccountsDiscoveryHasBeenSet = true;
    m_enableCrossAccountsDiscovery = value;
  }
  inline UpdateServiceSettingsRequest& WithEnableCrossAccountsDiscovery(bool value) {
    SetEnableCrossAccountsDiscovery(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Cross region discovery enabled source regions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEnabledDiscoverySourceRegions() const { return m_enabledDiscoverySourceRegions; }
  inline bool EnabledDiscoverySourceRegionsHasBeenSet() const { return m_enabledDiscoverySourceRegionsHasBeenSet; }
  template <typename EnabledDiscoverySourceRegionsT = Aws::Vector<Aws::String>>
  void SetEnabledDiscoverySourceRegions(EnabledDiscoverySourceRegionsT&& value) {
    m_enabledDiscoverySourceRegionsHasBeenSet = true;
    m_enabledDiscoverySourceRegions = std::forward<EnabledDiscoverySourceRegionsT>(value);
  }
  template <typename EnabledDiscoverySourceRegionsT = Aws::Vector<Aws::String>>
  UpdateServiceSettingsRequest& WithEnabledDiscoverySourceRegions(EnabledDiscoverySourceRegionsT&& value) {
    SetEnabledDiscoverySourceRegions(std::forward<EnabledDiscoverySourceRegionsT>(value));
    return *this;
  }
  template <typename EnabledDiscoverySourceRegionsT = Aws::String>
  UpdateServiceSettingsRequest& AddEnabledDiscoverySourceRegions(EnabledDiscoverySourceRegionsT&& value) {
    m_enabledDiscoverySourceRegionsHasBeenSet = true;
    m_enabledDiscoverySourceRegions.emplace_back(std::forward<EnabledDiscoverySourceRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketArn;

  Aws::String m_snsTopicArn;

  OrganizationConfiguration m_organizationConfiguration;

  bool m_enableCrossAccountsDiscovery{false};

  Aws::Vector<Aws::String> m_enabledDiscoverySourceRegions;
  bool m_s3BucketArnHasBeenSet = false;
  bool m_snsTopicArnHasBeenSet = false;
  bool m_organizationConfigurationHasBeenSet = false;
  bool m_enableCrossAccountsDiscoveryHasBeenSet = false;
  bool m_enabledDiscoverySourceRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
