/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/DeletionProtectionSettings.h>
#include <aws/appconfig/model/VendedMetricsSettings.h>

#include <utility>

namespace Aws {
namespace AppConfig {
namespace Model {

/**
 */
class UpdateAccountSettingsRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API UpdateAccountSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

  AWS_APPCONFIG_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A parameter to configure deletion protection. Deletion protection prevents a
   * user from deleting a configuration profile or an environment if AppConfig has
   * called either <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
   * or for the configuration profile or from the environment during the specified
   * interval. The default interval for <code>ProtectionPeriodInMinutes</code> is
   * 60.</p>
   */
  inline const DeletionProtectionSettings& GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  template <typename DeletionProtectionT = DeletionProtectionSettings>
  void SetDeletionProtection(DeletionProtectionT&& value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = std::forward<DeletionProtectionT>(value);
  }
  template <typename DeletionProtectionT = DeletionProtectionSettings>
  UpdateAccountSettingsRequest& WithDeletionProtection(DeletionProtectionT&& value) {
    SetDeletionProtection(std::forward<DeletionProtectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for vended metrics in the account.</p>
   */
  inline const VendedMetricsSettings& GetVendedMetrics() const { return m_vendedMetrics; }
  inline bool VendedMetricsHasBeenSet() const { return m_vendedMetricsHasBeenSet; }
  template <typename VendedMetricsT = VendedMetricsSettings>
  void SetVendedMetrics(VendedMetricsT&& value) {
    m_vendedMetricsHasBeenSet = true;
    m_vendedMetrics = std::forward<VendedMetricsT>(value);
  }
  template <typename VendedMetricsT = VendedMetricsSettings>
  UpdateAccountSettingsRequest& WithVendedMetrics(VendedMetricsT&& value) {
    SetVendedMetrics(std::forward<VendedMetricsT>(value));
    return *this;
  }
  ///@}
 private:
  DeletionProtectionSettings m_deletionProtection;

  VendedMetricsSettings m_vendedMetrics;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_vendedMetricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
