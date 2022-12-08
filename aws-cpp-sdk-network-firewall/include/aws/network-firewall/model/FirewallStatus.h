/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallStatusValue.h>
#include <aws/network-firewall/model/ConfigurationSyncState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/network-firewall/model/CapacityUsageSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/SyncState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Detailed information about the current status of a <a>Firewall</a>. You can
   * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
   * the firewall name and ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallStatus">AWS
   * API Reference</a></p>
   */
  class FirewallStatus
  {
  public:
    AWS_NETWORKFIREWALL_API FirewallStatus();
    AWS_NETWORKFIREWALL_API FirewallStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you've configured it. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline const FirewallStatusValue& GetStatus() const{ return m_status; }

    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you've configured it. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you've configured it. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline void SetStatus(const FirewallStatusValue& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you've configured it. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline void SetStatus(FirewallStatusValue&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you've configured it. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline FirewallStatus& WithStatus(const FirewallStatusValue& value) { SetStatus(value); return *this;}

    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you've configured it. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline FirewallStatus& WithStatus(FirewallStatusValue&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The configuration sync state for the firewall. This summarizes the sync
     * states reported in the <code>Config</code> settings for all of the Availability
     * Zones where you have configured the firewall. </p> <p>When you create a firewall
     * or update its configuration, for example by adding a rule group to its firewall
     * policy, Network Firewall distributes the configuration changes to all zones
     * where the firewall is in use. This summary indicates whether the configuration
     * changes have been applied everywhere. </p> <p>This status must be
     * <code>IN_SYNC</code> for the firewall to be ready for use, but it doesn't
     * indicate that the firewall is ready. The <code>Status</code> setting indicates
     * firewall readiness.</p>
     */
    inline const ConfigurationSyncState& GetConfigurationSyncStateSummary() const{ return m_configurationSyncStateSummary; }

    /**
     * <p>The configuration sync state for the firewall. This summarizes the sync
     * states reported in the <code>Config</code> settings for all of the Availability
     * Zones where you have configured the firewall. </p> <p>When you create a firewall
     * or update its configuration, for example by adding a rule group to its firewall
     * policy, Network Firewall distributes the configuration changes to all zones
     * where the firewall is in use. This summary indicates whether the configuration
     * changes have been applied everywhere. </p> <p>This status must be
     * <code>IN_SYNC</code> for the firewall to be ready for use, but it doesn't
     * indicate that the firewall is ready. The <code>Status</code> setting indicates
     * firewall readiness.</p>
     */
    inline bool ConfigurationSyncStateSummaryHasBeenSet() const { return m_configurationSyncStateSummaryHasBeenSet; }

    /**
     * <p>The configuration sync state for the firewall. This summarizes the sync
     * states reported in the <code>Config</code> settings for all of the Availability
     * Zones where you have configured the firewall. </p> <p>When you create a firewall
     * or update its configuration, for example by adding a rule group to its firewall
     * policy, Network Firewall distributes the configuration changes to all zones
     * where the firewall is in use. This summary indicates whether the configuration
     * changes have been applied everywhere. </p> <p>This status must be
     * <code>IN_SYNC</code> for the firewall to be ready for use, but it doesn't
     * indicate that the firewall is ready. The <code>Status</code> setting indicates
     * firewall readiness.</p>
     */
    inline void SetConfigurationSyncStateSummary(const ConfigurationSyncState& value) { m_configurationSyncStateSummaryHasBeenSet = true; m_configurationSyncStateSummary = value; }

    /**
     * <p>The configuration sync state for the firewall. This summarizes the sync
     * states reported in the <code>Config</code> settings for all of the Availability
     * Zones where you have configured the firewall. </p> <p>When you create a firewall
     * or update its configuration, for example by adding a rule group to its firewall
     * policy, Network Firewall distributes the configuration changes to all zones
     * where the firewall is in use. This summary indicates whether the configuration
     * changes have been applied everywhere. </p> <p>This status must be
     * <code>IN_SYNC</code> for the firewall to be ready for use, but it doesn't
     * indicate that the firewall is ready. The <code>Status</code> setting indicates
     * firewall readiness.</p>
     */
    inline void SetConfigurationSyncStateSummary(ConfigurationSyncState&& value) { m_configurationSyncStateSummaryHasBeenSet = true; m_configurationSyncStateSummary = std::move(value); }

    /**
     * <p>The configuration sync state for the firewall. This summarizes the sync
     * states reported in the <code>Config</code> settings for all of the Availability
     * Zones where you have configured the firewall. </p> <p>When you create a firewall
     * or update its configuration, for example by adding a rule group to its firewall
     * policy, Network Firewall distributes the configuration changes to all zones
     * where the firewall is in use. This summary indicates whether the configuration
     * changes have been applied everywhere. </p> <p>This status must be
     * <code>IN_SYNC</code> for the firewall to be ready for use, but it doesn't
     * indicate that the firewall is ready. The <code>Status</code> setting indicates
     * firewall readiness.</p>
     */
    inline FirewallStatus& WithConfigurationSyncStateSummary(const ConfigurationSyncState& value) { SetConfigurationSyncStateSummary(value); return *this;}

    /**
     * <p>The configuration sync state for the firewall. This summarizes the sync
     * states reported in the <code>Config</code> settings for all of the Availability
     * Zones where you have configured the firewall. </p> <p>When you create a firewall
     * or update its configuration, for example by adding a rule group to its firewall
     * policy, Network Firewall distributes the configuration changes to all zones
     * where the firewall is in use. This summary indicates whether the configuration
     * changes have been applied everywhere. </p> <p>This status must be
     * <code>IN_SYNC</code> for the firewall to be ready for use, but it doesn't
     * indicate that the firewall is ready. The <code>Status</code> setting indicates
     * firewall readiness.</p>
     */
    inline FirewallStatus& WithConfigurationSyncStateSummary(ConfigurationSyncState&& value) { SetConfigurationSyncStateSummary(std::move(value)); return *this;}


    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline const Aws::Map<Aws::String, SyncState>& GetSyncStates() const{ return m_syncStates; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline bool SyncStatesHasBeenSet() const { return m_syncStatesHasBeenSet; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline void SetSyncStates(const Aws::Map<Aws::String, SyncState>& value) { m_syncStatesHasBeenSet = true; m_syncStates = value; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline void SetSyncStates(Aws::Map<Aws::String, SyncState>&& value) { m_syncStatesHasBeenSet = true; m_syncStates = std::move(value); }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& WithSyncStates(const Aws::Map<Aws::String, SyncState>& value) { SetSyncStates(value); return *this;}

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& WithSyncStates(Aws::Map<Aws::String, SyncState>&& value) { SetSyncStates(std::move(value)); return *this;}

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& AddSyncStates(const Aws::String& key, const SyncState& value) { m_syncStatesHasBeenSet = true; m_syncStates.emplace(key, value); return *this; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& AddSyncStates(Aws::String&& key, const SyncState& value) { m_syncStatesHasBeenSet = true; m_syncStates.emplace(std::move(key), value); return *this; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& AddSyncStates(const Aws::String& key, SyncState&& value) { m_syncStatesHasBeenSet = true; m_syncStates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& AddSyncStates(Aws::String&& key, SyncState&& value) { m_syncStatesHasBeenSet = true; m_syncStates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& AddSyncStates(const char* key, SyncState&& value) { m_syncStatesHasBeenSet = true; m_syncStates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The subnets that you've configured for use by the Network Firewall firewall.
     * This contains one array element per Availability Zone where you've configured a
     * subnet. These objects provide details of the information that is summarized in
     * the <code>ConfigurationSyncStateSummary</code> and <code>Status</code>, broken
     * down by zone and configuration object. </p>
     */
    inline FirewallStatus& AddSyncStates(const char* key, const SyncState& value) { m_syncStatesHasBeenSet = true; m_syncStates.emplace(key, value); return *this; }


    /**
     * <p>Describes the capacity usage of the resources contained in a firewall's
     * reference sets. Network Firewall calclulates the capacity usage by taking an
     * aggregated count of all of the resources used by all of the reference sets in a
     * firewall.</p>
     */
    inline const CapacityUsageSummary& GetCapacityUsageSummary() const{ return m_capacityUsageSummary; }

    /**
     * <p>Describes the capacity usage of the resources contained in a firewall's
     * reference sets. Network Firewall calclulates the capacity usage by taking an
     * aggregated count of all of the resources used by all of the reference sets in a
     * firewall.</p>
     */
    inline bool CapacityUsageSummaryHasBeenSet() const { return m_capacityUsageSummaryHasBeenSet; }

    /**
     * <p>Describes the capacity usage of the resources contained in a firewall's
     * reference sets. Network Firewall calclulates the capacity usage by taking an
     * aggregated count of all of the resources used by all of the reference sets in a
     * firewall.</p>
     */
    inline void SetCapacityUsageSummary(const CapacityUsageSummary& value) { m_capacityUsageSummaryHasBeenSet = true; m_capacityUsageSummary = value; }

    /**
     * <p>Describes the capacity usage of the resources contained in a firewall's
     * reference sets. Network Firewall calclulates the capacity usage by taking an
     * aggregated count of all of the resources used by all of the reference sets in a
     * firewall.</p>
     */
    inline void SetCapacityUsageSummary(CapacityUsageSummary&& value) { m_capacityUsageSummaryHasBeenSet = true; m_capacityUsageSummary = std::move(value); }

    /**
     * <p>Describes the capacity usage of the resources contained in a firewall's
     * reference sets. Network Firewall calclulates the capacity usage by taking an
     * aggregated count of all of the resources used by all of the reference sets in a
     * firewall.</p>
     */
    inline FirewallStatus& WithCapacityUsageSummary(const CapacityUsageSummary& value) { SetCapacityUsageSummary(value); return *this;}

    /**
     * <p>Describes the capacity usage of the resources contained in a firewall's
     * reference sets. Network Firewall calclulates the capacity usage by taking an
     * aggregated count of all of the resources used by all of the reference sets in a
     * firewall.</p>
     */
    inline FirewallStatus& WithCapacityUsageSummary(CapacityUsageSummary&& value) { SetCapacityUsageSummary(std::move(value)); return *this;}

  private:

    FirewallStatusValue m_status;
    bool m_statusHasBeenSet = false;

    ConfigurationSyncState m_configurationSyncStateSummary;
    bool m_configurationSyncStateSummaryHasBeenSet = false;

    Aws::Map<Aws::String, SyncState> m_syncStates;
    bool m_syncStatesHasBeenSet = false;

    CapacityUsageSummary m_capacityUsageSummary;
    bool m_capacityUsageSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
