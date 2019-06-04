/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ModifyReplicationGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ModifyReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    ModifyReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::move(value); }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}


    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::move(value); }

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(std::move(value)); return *this;}

    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}


    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const{ return m_snapshottingClusterId; }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline bool SnapshottingClusterIdHasBeenSet() const { return m_snapshottingClusterIdHasBeenSet; }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline void SetSnapshottingClusterId(const Aws::String& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline void SetSnapshottingClusterId(Aws::String&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = std::move(value); }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline void SetSnapshottingClusterId(const char* value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId.assign(value); }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(const Aws::String& value) { SetSnapshottingClusterId(value); return *this;}

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(Aws::String&& value) { SetSnapshottingClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(const char* value) { SetSnapshottingClusterId(value); return *this;}


    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Amazon ElastiCache for Redis does
     * not support Multi-AZ with automatic failover on:</p> <ul> <li> <p>Redis versions
     * earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode disabled): T1 node
     * types.</p> </li> <li> <p>Redis (cluster mode enabled): T1 node types.</p> </li>
     * </ul>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }

    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Amazon ElastiCache for Redis does
     * not support Multi-AZ with automatic failover on:</p> <ul> <li> <p>Redis versions
     * earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode disabled): T1 node
     * types.</p> </li> <li> <p>Redis (cluster mode enabled): T1 node types.</p> </li>
     * </ul>
     */
    inline bool AutomaticFailoverEnabledHasBeenSet() const { return m_automaticFailoverEnabledHasBeenSet; }

    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Amazon ElastiCache for Redis does
     * not support Multi-AZ with automatic failover on:</p> <ul> <li> <p>Redis versions
     * earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode disabled): T1 node
     * types.</p> </li> <li> <p>Redis (cluster mode enabled): T1 node types.</p> </li>
     * </ul>
     */
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }

    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Amazon ElastiCache for Redis does
     * not support Multi-AZ with automatic failover on:</p> <ul> <li> <p>Redis versions
     * earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode disabled): T1 node
     * types.</p> </li> <li> <p>Redis (cluster mode enabled): T1 node types.</p> </li>
     * </ul>
     */
    inline ModifyReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}


    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::move(value); }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(std::move(value)); return *this;}

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }


    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline ModifyReplicationGroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline ModifyReplicationGroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> </note>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}


    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::move(value); }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}


    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the replication group.</p> <p>If <code>false</code>, changes to the nodes in the
     * replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the replication group.</p> <p>If <code>false</code>, changes to the nodes in the
     * replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the replication group.</p> <p>If <code>false</code>, changes to the nodes in the
     * replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the replication group.</p> <p>If <code>false</code>, changes to the nodes in the
     * replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline ModifyReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline ModifyReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline ModifyReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline ModifyReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline ModifyReplicationGroupRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The number of days for which ElastiCache retains automatic node group (shard)
     * snapshots before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <p> <b>Important</b> If the value
     * of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic node group (shard)
     * snapshots before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <p> <b>Important</b> If the value
     * of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which ElastiCache retains automatic node group (shard)
     * snapshots before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <p> <b>Important</b> If the value
     * of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic node group (shard)
     * snapshots before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <p> <b>Important</b> If the value
     * of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}


    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet;

    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet;

    Aws::String m_snapshottingClusterId;
    bool m_snapshottingClusterIdHasBeenSet;

    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet;

    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;

    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
