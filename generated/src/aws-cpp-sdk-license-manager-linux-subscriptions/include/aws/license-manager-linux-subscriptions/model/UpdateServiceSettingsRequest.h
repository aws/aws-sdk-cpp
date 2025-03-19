/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscovery.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscoverySettings.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   */
  class UpdateServiceSettingsRequest : public LicenseManagerLinuxSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSettings"; }

    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Describes if updates are allowed to the service settings for Linux
     * subscriptions. If you allow updates, you can aggregate Linux subscription data
     * in more than one home Region.</p>
     */
    inline bool GetAllowUpdate() const { return m_allowUpdate; }
    inline bool AllowUpdateHasBeenSet() const { return m_allowUpdateHasBeenSet; }
    inline void SetAllowUpdate(bool value) { m_allowUpdateHasBeenSet = true; m_allowUpdate = value; }
    inline UpdateServiceSettingsRequest& WithAllowUpdate(bool value) { SetAllowUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes if the discovery of Linux subscriptions is enabled.</p>
     */
    inline LinuxSubscriptionsDiscovery GetLinuxSubscriptionsDiscovery() const { return m_linuxSubscriptionsDiscovery; }
    inline bool LinuxSubscriptionsDiscoveryHasBeenSet() const { return m_linuxSubscriptionsDiscoveryHasBeenSet; }
    inline void SetLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery value) { m_linuxSubscriptionsDiscoveryHasBeenSet = true; m_linuxSubscriptionsDiscovery = value; }
    inline UpdateServiceSettingsRequest& WithLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery value) { SetLinuxSubscriptionsDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings defined for Linux subscriptions discovery. The settings include
     * if Organizations integration has been enabled, and which Regions data will be
     * aggregated from.</p>
     */
    inline const LinuxSubscriptionsDiscoverySettings& GetLinuxSubscriptionsDiscoverySettings() const { return m_linuxSubscriptionsDiscoverySettings; }
    inline bool LinuxSubscriptionsDiscoverySettingsHasBeenSet() const { return m_linuxSubscriptionsDiscoverySettingsHasBeenSet; }
    template<typename LinuxSubscriptionsDiscoverySettingsT = LinuxSubscriptionsDiscoverySettings>
    void SetLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettingsT&& value) { m_linuxSubscriptionsDiscoverySettingsHasBeenSet = true; m_linuxSubscriptionsDiscoverySettings = std::forward<LinuxSubscriptionsDiscoverySettingsT>(value); }
    template<typename LinuxSubscriptionsDiscoverySettingsT = LinuxSubscriptionsDiscoverySettings>
    UpdateServiceSettingsRequest& WithLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettingsT&& value) { SetLinuxSubscriptionsDiscoverySettings(std::forward<LinuxSubscriptionsDiscoverySettingsT>(value)); return *this;}
    ///@}
  private:

    bool m_allowUpdate{false};
    bool m_allowUpdateHasBeenSet = false;

    LinuxSubscriptionsDiscovery m_linuxSubscriptionsDiscovery{LinuxSubscriptionsDiscovery::NOT_SET};
    bool m_linuxSubscriptionsDiscoveryHasBeenSet = false;

    LinuxSubscriptionsDiscoverySettings m_linuxSubscriptionsDiscoverySettings;
    bool m_linuxSubscriptionsDiscoverySettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
