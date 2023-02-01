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
  class GetServiceSettingsResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetServiceSettingsResult();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetServiceSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetServiceSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHomeRegions() const{ return m_homeRegions; }

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline void SetHomeRegions(const Aws::Vector<Aws::String>& value) { m_homeRegions = value; }

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline void SetHomeRegions(Aws::Vector<Aws::String>&& value) { m_homeRegions = std::move(value); }

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline GetServiceSettingsResult& WithHomeRegions(const Aws::Vector<Aws::String>& value) { SetHomeRegions(value); return *this;}

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline GetServiceSettingsResult& WithHomeRegions(Aws::Vector<Aws::String>&& value) { SetHomeRegions(std::move(value)); return *this;}

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline GetServiceSettingsResult& AddHomeRegions(const Aws::String& value) { m_homeRegions.push_back(value); return *this; }

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline GetServiceSettingsResult& AddHomeRegions(Aws::String&& value) { m_homeRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline GetServiceSettingsResult& AddHomeRegions(const char* value) { m_homeRegions.push_back(value); return *this; }


    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline const LinuxSubscriptionsDiscovery& GetLinuxSubscriptionsDiscovery() const{ return m_linuxSubscriptionsDiscovery; }

    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline void SetLinuxSubscriptionsDiscovery(const LinuxSubscriptionsDiscovery& value) { m_linuxSubscriptionsDiscovery = value; }

    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline void SetLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery&& value) { m_linuxSubscriptionsDiscovery = std::move(value); }

    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline GetServiceSettingsResult& WithLinuxSubscriptionsDiscovery(const LinuxSubscriptionsDiscovery& value) { SetLinuxSubscriptionsDiscovery(value); return *this;}

    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline GetServiceSettingsResult& WithLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery&& value) { SetLinuxSubscriptionsDiscovery(std::move(value)); return *this;}


    /**
     * <p>Lists the settings defined for Linux subscriptions discovery. The settings
     * include if Organizations integration has been enabled, and which Regions data
     * will be aggregated from.</p>
     */
    inline const LinuxSubscriptionsDiscoverySettings& GetLinuxSubscriptionsDiscoverySettings() const{ return m_linuxSubscriptionsDiscoverySettings; }

    /**
     * <p>Lists the settings defined for Linux subscriptions discovery. The settings
     * include if Organizations integration has been enabled, and which Regions data
     * will be aggregated from.</p>
     */
    inline void SetLinuxSubscriptionsDiscoverySettings(const LinuxSubscriptionsDiscoverySettings& value) { m_linuxSubscriptionsDiscoverySettings = value; }

    /**
     * <p>Lists the settings defined for Linux subscriptions discovery. The settings
     * include if Organizations integration has been enabled, and which Regions data
     * will be aggregated from.</p>
     */
    inline void SetLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettings&& value) { m_linuxSubscriptionsDiscoverySettings = std::move(value); }

    /**
     * <p>Lists the settings defined for Linux subscriptions discovery. The settings
     * include if Organizations integration has been enabled, and which Regions data
     * will be aggregated from.</p>
     */
    inline GetServiceSettingsResult& WithLinuxSubscriptionsDiscoverySettings(const LinuxSubscriptionsDiscoverySettings& value) { SetLinuxSubscriptionsDiscoverySettings(value); return *this;}

    /**
     * <p>Lists the settings defined for Linux subscriptions discovery. The settings
     * include if Organizations integration has been enabled, and which Regions data
     * will be aggregated from.</p>
     */
    inline GetServiceSettingsResult& WithLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettings&& value) { SetLinuxSubscriptionsDiscoverySettings(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline GetServiceSettingsResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline GetServiceSettingsResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline void SetStatusMessage(const Aws::Map<Aws::String, Aws::String>& value) { m_statusMessage = value; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline void SetStatusMessage(Aws::Map<Aws::String, Aws::String>&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& WithStatusMessage(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& WithStatusMessage(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(const Aws::String& key, const Aws::String& value) { m_statusMessage.emplace(key, value); return *this; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(Aws::String&& key, const Aws::String& value) { m_statusMessage.emplace(std::move(key), value); return *this; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(const Aws::String& key, Aws::String&& value) { m_statusMessage.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(Aws::String&& key, Aws::String&& value) { m_statusMessage.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(const char* key, Aws::String&& value) { m_statusMessage.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(Aws::String&& key, const char* value) { m_statusMessage.emplace(std::move(key), value); return *this; }

    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline GetServiceSettingsResult& AddStatusMessage(const char* key, const char* value) { m_statusMessage.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_homeRegions;

    LinuxSubscriptionsDiscovery m_linuxSubscriptionsDiscovery;

    LinuxSubscriptionsDiscoverySettings m_linuxSubscriptionsDiscoverySettings;

    Status m_status;

    Aws::Map<Aws::String, Aws::String> m_statusMessage;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
