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
   * <p>The settings to be applied to the Redis replication group, either immediately
   * or during the next maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReplicationGroupPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class ReplicationGroupPendingModifiedValues
  {
  public:
    AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues();
    AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReplicationGroupPendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::move(value); }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(std::move(value)); return *this;}

    /**
     * <p>The primary cluster ID that is applied immediately (if
     * <code>--apply-immediately</code> was specified), or during the next maintenance
     * window.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}


    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline const PendingAutomaticFailoverStatus& GetAutomaticFailoverStatus() const{ return m_automaticFailoverStatus; }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline bool AutomaticFailoverStatusHasBeenSet() const { return m_automaticFailoverStatusHasBeenSet; }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline void SetAutomaticFailoverStatus(const PendingAutomaticFailoverStatus& value) { m_automaticFailoverStatusHasBeenSet = true; m_automaticFailoverStatus = value; }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline void SetAutomaticFailoverStatus(PendingAutomaticFailoverStatus&& value) { m_automaticFailoverStatusHasBeenSet = true; m_automaticFailoverStatus = std::move(value); }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithAutomaticFailoverStatus(const PendingAutomaticFailoverStatus& value) { SetAutomaticFailoverStatus(value); return *this;}

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithAutomaticFailoverStatus(PendingAutomaticFailoverStatus&& value) { SetAutomaticFailoverStatus(std::move(value)); return *this;}


    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline const ReshardingStatus& GetResharding() const{ return m_resharding; }

    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline bool ReshardingHasBeenSet() const { return m_reshardingHasBeenSet; }

    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline void SetResharding(const ReshardingStatus& value) { m_reshardingHasBeenSet = true; m_resharding = value; }

    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline void SetResharding(ReshardingStatus&& value) { m_reshardingHasBeenSet = true; m_resharding = std::move(value); }

    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithResharding(const ReshardingStatus& value) { SetResharding(value); return *this;}

    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithResharding(ReshardingStatus&& value) { SetResharding(std::move(value)); return *this;}


    /**
     * <p>The auth token status</p>
     */
    inline const AuthTokenUpdateStatus& GetAuthTokenStatus() const{ return m_authTokenStatus; }

    /**
     * <p>The auth token status</p>
     */
    inline bool AuthTokenStatusHasBeenSet() const { return m_authTokenStatusHasBeenSet; }

    /**
     * <p>The auth token status</p>
     */
    inline void SetAuthTokenStatus(const AuthTokenUpdateStatus& value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = value; }

    /**
     * <p>The auth token status</p>
     */
    inline void SetAuthTokenStatus(AuthTokenUpdateStatus&& value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = std::move(value); }

    /**
     * <p>The auth token status</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithAuthTokenStatus(const AuthTokenUpdateStatus& value) { SetAuthTokenStatus(value); return *this;}

    /**
     * <p>The auth token status</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithAuthTokenStatus(AuthTokenUpdateStatus&& value) { SetAuthTokenStatus(std::move(value)); return *this;}


    /**
     * <p>The user group being modified.</p>
     */
    inline const UserGroupsUpdateStatus& GetUserGroups() const{ return m_userGroups; }

    /**
     * <p>The user group being modified.</p>
     */
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }

    /**
     * <p>The user group being modified.</p>
     */
    inline void SetUserGroups(const UserGroupsUpdateStatus& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }

    /**
     * <p>The user group being modified.</p>
     */
    inline void SetUserGroups(UserGroupsUpdateStatus&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }

    /**
     * <p>The user group being modified.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithUserGroups(const UserGroupsUpdateStatus& value) { SetUserGroups(value); return *this;}

    /**
     * <p>The user group being modified.</p>
     */
    inline ReplicationGroupPendingModifiedValues& WithUserGroups(UserGroupsUpdateStatus&& value) { SetUserGroups(std::move(value)); return *this;}


    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline const Aws::Vector<PendingLogDeliveryConfiguration>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline void SetLogDeliveryConfigurations(const Aws::Vector<PendingLogDeliveryConfiguration>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline void SetLogDeliveryConfigurations(Aws::Vector<PendingLogDeliveryConfiguration>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline ReplicationGroupPendingModifiedValues& WithLogDeliveryConfigurations(const Aws::Vector<PendingLogDeliveryConfiguration>& value) { SetLogDeliveryConfigurations(value); return *this;}

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline ReplicationGroupPendingModifiedValues& WithLogDeliveryConfigurations(Aws::Vector<PendingLogDeliveryConfiguration>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline ReplicationGroupPendingModifiedValues& AddLogDeliveryConfigurations(const PendingLogDeliveryConfiguration& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline ReplicationGroupPendingModifiedValues& AddLogDeliveryConfigurations(PendingLogDeliveryConfiguration&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet = false;

    PendingAutomaticFailoverStatus m_automaticFailoverStatus;
    bool m_automaticFailoverStatusHasBeenSet = false;

    ReshardingStatus m_resharding;
    bool m_reshardingHasBeenSet = false;

    AuthTokenUpdateStatus m_authTokenStatus;
    bool m_authTokenStatusHasBeenSet = false;

    UserGroupsUpdateStatus m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<PendingLogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
