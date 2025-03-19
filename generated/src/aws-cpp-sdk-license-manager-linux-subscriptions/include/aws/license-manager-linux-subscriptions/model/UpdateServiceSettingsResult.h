/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscovery.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscoverySettings.h>
#include <aws/license-manager-linux-subscriptions/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{
  class UpdateServiceSettingsResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsResult() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHomeRegions() const { return m_homeRegions; }
    template<typename HomeRegionsT = Aws::Vector<Aws::String>>
    void SetHomeRegions(HomeRegionsT&& value) { m_homeRegionsHasBeenSet = true; m_homeRegions = std::forward<HomeRegionsT>(value); }
    template<typename HomeRegionsT = Aws::Vector<Aws::String>>
    UpdateServiceSettingsResult& WithHomeRegions(HomeRegionsT&& value) { SetHomeRegions(std::forward<HomeRegionsT>(value)); return *this;}
    template<typename HomeRegionsT = Aws::String>
    UpdateServiceSettingsResult& AddHomeRegions(HomeRegionsT&& value) { m_homeRegionsHasBeenSet = true; m_homeRegions.emplace_back(std::forward<HomeRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline LinuxSubscriptionsDiscovery GetLinuxSubscriptionsDiscovery() const { return m_linuxSubscriptionsDiscovery; }
    inline void SetLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery value) { m_linuxSubscriptionsDiscoveryHasBeenSet = true; m_linuxSubscriptionsDiscovery = value; }
    inline UpdateServiceSettingsResult& WithLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery value) { SetLinuxSubscriptionsDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings defined for Linux subscriptions discovery. The settings include
     * if Organizations integration has been enabled, and which Regions data will be
     * aggregated from.</p>
     */
    inline const LinuxSubscriptionsDiscoverySettings& GetLinuxSubscriptionsDiscoverySettings() const { return m_linuxSubscriptionsDiscoverySettings; }
    template<typename LinuxSubscriptionsDiscoverySettingsT = LinuxSubscriptionsDiscoverySettings>
    void SetLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettingsT&& value) { m_linuxSubscriptionsDiscoverySettingsHasBeenSet = true; m_linuxSubscriptionsDiscoverySettings = std::forward<LinuxSubscriptionsDiscoverySettingsT>(value); }
    template<typename LinuxSubscriptionsDiscoverySettingsT = LinuxSubscriptionsDiscoverySettings>
    UpdateServiceSettingsResult& WithLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettingsT&& value) { SetLinuxSubscriptionsDiscoverySettings(std::forward<LinuxSubscriptionsDiscoverySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateServiceSettingsResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::Map<Aws::String, Aws::String>>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::Map<Aws::String, Aws::String>>
    UpdateServiceSettingsResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    template<typename StatusMessageKeyT = Aws::String, typename StatusMessageValueT = Aws::String>
    UpdateServiceSettingsResult& AddStatusMessage(StatusMessageKeyT&& key, StatusMessageValueT&& value) {
      m_statusMessageHasBeenSet = true; m_statusMessage.emplace(std::forward<StatusMessageKeyT>(key), std::forward<StatusMessageValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateServiceSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_homeRegions;
    bool m_homeRegionsHasBeenSet = false;

    LinuxSubscriptionsDiscovery m_linuxSubscriptionsDiscovery{LinuxSubscriptionsDiscovery::NOT_SET};
    bool m_linuxSubscriptionsDiscoveryHasBeenSet = false;

    LinuxSubscriptionsDiscoverySettings m_linuxSubscriptionsDiscoverySettings;
    bool m_linuxSubscriptionsDiscoverySettingsHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
