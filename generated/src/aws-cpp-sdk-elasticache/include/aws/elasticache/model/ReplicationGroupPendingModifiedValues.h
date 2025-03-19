/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/PendingAutomaticFailoverStatus.h>
#include <aws/elasticache/model/ReshardingStatus.h>
#include <aws/elasticache/model/AuthTokenUpdateStatus.h>
#include <aws/elasticache/model/UserGroupsUpdateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/elasticache/model/ClusterMode.h>
#include <aws/elasticache/model/PendingLogDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The settings to be applied to the Valkey or Redis OSS replication group,
   * either immediately or during the next maintenance window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReplicationGroupPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class ReplicationGroupPendingModifiedValues
  {
  public:
    AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues() = default;
    AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const { return m_primaryClusterId; }
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }
    template<typename PrimaryClusterIdT = Aws::String>
    void SetPrimaryClusterId(PrimaryClusterIdT&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::forward<PrimaryClusterIdT>(value); }
    template<typename PrimaryClusterIdT = Aws::String>
    ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(PrimaryClusterIdT&& value) { SetPrimaryClusterId(std::forward<PrimaryClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of automatic failover for this Valkey or Redis OSS
     * replication group.</p>
     */
    inline PendingAutomaticFailoverStatus GetAutomaticFailoverStatus() const { return m_automaticFailoverStatus; }
    inline bool AutomaticFailoverStatusHasBeenSet() const { return m_automaticFailoverStatusHasBeenSet; }
    inline void SetAutomaticFailoverStatus(PendingAutomaticFailoverStatus value) { m_automaticFailoverStatusHasBeenSet = true; m_automaticFailoverStatus = value; }
    inline ReplicationGroupPendingModifiedValues& WithAutomaticFailoverStatus(PendingAutomaticFailoverStatus value) { SetAutomaticFailoverStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline const ReshardingStatus& GetResharding() const { return m_resharding; }
    inline bool ReshardingHasBeenSet() const { return m_reshardingHasBeenSet; }
    template<typename ReshardingT = ReshardingStatus>
    void SetResharding(ReshardingT&& value) { m_reshardingHasBeenSet = true; m_resharding = std::forward<ReshardingT>(value); }
    template<typename ReshardingT = ReshardingStatus>
    ReplicationGroupPendingModifiedValues& WithResharding(ReshardingT&& value) { SetResharding(std::forward<ReshardingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auth token status</p>
     */
    inline AuthTokenUpdateStatus GetAuthTokenStatus() const { return m_authTokenStatus; }
    inline bool AuthTokenStatusHasBeenSet() const { return m_authTokenStatusHasBeenSet; }
    inline void SetAuthTokenStatus(AuthTokenUpdateStatus value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = value; }
    inline ReplicationGroupPendingModifiedValues& WithAuthTokenStatus(AuthTokenUpdateStatus value) { SetAuthTokenStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user group being modified.</p>
     */
    inline const UserGroupsUpdateStatus& GetUserGroups() const { return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    template<typename UserGroupsT = UserGroupsUpdateStatus>
    void SetUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::forward<UserGroupsT>(value); }
    template<typename UserGroupsT = UserGroupsUpdateStatus>
    ReplicationGroupPendingModifiedValues& WithUserGroups(UserGroupsT&& value) { SetUserGroups(std::forward<UserGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline const Aws::Vector<PendingLogDeliveryConfiguration>& GetLogDeliveryConfigurations() const { return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<PendingLogDeliveryConfiguration>>
    void SetLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::forward<LogDeliveryConfigurationsT>(value); }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<PendingLogDeliveryConfiguration>>
    ReplicationGroupPendingModifiedValues& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = PendingLogDeliveryConfiguration>
    ReplicationGroupPendingModifiedValues& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true.</p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline ReplicationGroupPendingModifiedValues& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline TransitEncryptionMode GetTransitEncryptionMode() const { return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline ReplicationGroupPendingModifiedValues& WithTransitEncryptionMode(TransitEncryptionMode value) { SetTransitEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enabled or Disabled. To modify cluster mode from Disabled to Enabled, you
     * must first set the cluster mode to Compatible. Compatible mode allows your
     * Valkey or Redis OSS clients to connect using both cluster mode enabled and
     * cluster mode disabled. After you migrate all Valkey or Redis OSS clients to use
     * cluster mode enabled, you can then complete cluster mode configuration and set
     * the cluster mode to Enabled.</p>
     */
    inline ClusterMode GetClusterMode() const { return m_clusterMode; }
    inline bool ClusterModeHasBeenSet() const { return m_clusterModeHasBeenSet; }
    inline void SetClusterMode(ClusterMode value) { m_clusterModeHasBeenSet = true; m_clusterMode = value; }
    inline ReplicationGroupPendingModifiedValues& WithClusterMode(ClusterMode value) { SetClusterMode(value); return *this;}
    ///@}
  private:

    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet = false;

    PendingAutomaticFailoverStatus m_automaticFailoverStatus{PendingAutomaticFailoverStatus::NOT_SET};
    bool m_automaticFailoverStatusHasBeenSet = false;

    ReshardingStatus m_resharding;
    bool m_reshardingHasBeenSet = false;

    AuthTokenUpdateStatus m_authTokenStatus{AuthTokenUpdateStatus::NOT_SET};
    bool m_authTokenStatusHasBeenSet = false;

    UserGroupsUpdateStatus m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<PendingLogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode{TransitEncryptionMode::NOT_SET};
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode{ClusterMode::NOT_SET};
    bool m_clusterModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
