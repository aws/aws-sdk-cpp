﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/AZMode.h>
#include <aws/elasticache/model/AuthTokenUpdateStrategyType.h>
#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/elasticache/model/LogDeliveryConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ModifyCacheCluster</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class ModifyCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyCacheClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCacheCluster"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline ModifyCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline ModifyCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cache nodes that the cluster should have. If the value for
     * <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * more nodes are added. If the value is less than the number of existing cache
     * nodes, nodes are removed. If the value is equal to the number of current cache
     * nodes, any pending add or remove requests are canceled.</p> <p>If you are
     * removing cache nodes, you must use the <code>CacheNodeIdsToRemove</code>
     * parameter to provide the IDs of the specific cache nodes to remove.</p> <p>For
     * clusters running Valkey or Redis OSS, this value must be 1. For clusters running
     * Memcached, this value must be between 1 and 40.</p>  <p>Adding or removing
     * Memcached cache nodes can be applied immediately or as a pending operation (see
     * <code>ApplyImmediately</code>).</p> <p>A pending operation to modify the number
     * of cache nodes in a cluster during its maintenance window, whether by adding or
     * removing nodes in accordance with the scale out architecture, is not queued. The
     * customer's latest request to add or remove nodes to the cluster overrides any
     * previous pending operations to modify the number of cache nodes in the cluster.
     * For example, a request to remove 2 nodes would override a previous pending
     * operation to remove 3 nodes. Similarly, a request to add 2 nodes would override
     * a previous pending operation to remove 3 nodes and vice versa. As Memcached
     * cache nodes may now be provisioned in different Availability Zones with flexible
     * cache node placement, a request to add nodes does not automatically override a
     * previous pending operation to add nodes. The customer can modify the previous
     * pending operation to add more nodes or explicitly cancel the pending request and
     * retry the new request. To cancel pending operations to modify the number of
     * cache nodes in a cluster, use the <code>ModifyCacheCluster</code> request and
     * set <code>NumCacheNodes</code> equal to the number of cache nodes currently in
     * the cluster.</p> 
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline ModifyCacheClusterRequest& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToRemove() const{ return m_cacheNodeIdsToRemove; }
    inline bool CacheNodeIdsToRemoveHasBeenSet() const { return m_cacheNodeIdsToRemoveHasBeenSet; }
    inline void SetCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = value; }
    inline void SetCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = std::move(value); }
    inline ModifyCacheClusterRequest& WithCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToRemove(value); return *this;}
    inline ModifyCacheClusterRequest& WithCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToRemove(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(const Aws::String& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(Aws::String&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(std::move(value)); return *this; }
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(const char* value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p>  <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. </p> 
     */
    inline const AZMode& GetAZMode() const{ return m_aZMode; }
    inline bool AZModeHasBeenSet() const { return m_aZModeHasBeenSet; }
    inline void SetAZMode(const AZMode& value) { m_aZModeHasBeenSet = true; m_aZMode = value; }
    inline void SetAZMode(AZMode&& value) { m_aZModeHasBeenSet = true; m_aZMode = std::move(value); }
    inline ModifyCacheClusterRequest& WithAZMode(const AZMode& value) { SetAZMode(value); return *this;}
    inline ModifyCacheClusterRequest& WithAZMode(AZMode&& value) { SetAZMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This option is only supported on Memcached clusters.</p> 
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have
     * 3 active nodes and wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3
     * + 2) and optionally specify two Availability Zones for the two new nodes.</p>
     * </li> <li> <p> <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending
     * creation (from the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/CacheNodes.SupportedTypes.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p>  <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p>  </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetNewAvailabilityZones() const{ return m_newAvailabilityZones; }
    inline bool NewAvailabilityZonesHasBeenSet() const { return m_newAvailabilityZonesHasBeenSet; }
    inline void SetNewAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones = value; }
    inline void SetNewAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones = std::move(value); }
    inline ModifyCacheClusterRequest& WithNewAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetNewAvailabilityZones(value); return *this;}
    inline ModifyCacheClusterRequest& WithNewAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetNewAvailabilityZones(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(const Aws::String& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(Aws::String&& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(std::move(value)); return *this; }
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(const char* value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::move(value); }
    inline ModifyCacheClusterRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}
    inline ModifyCacheClusterRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(std::move(value)); return *this; }
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline ModifyCacheClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline ModifyCacheClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
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
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p>  <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> 
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::move(value); }
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the cluster.</p> <p>If <code>false</code>, changes to the cluster are applied on
     * the next maintenance reboot, or the next failure reboot, whichever occurs
     * first.</p>  <p>If you perform a <code>ModifyCacheCluster</code>
     * before a pending modification is applied, the pending modification is replaced
     * by the newer modification.</p>  <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyCacheClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine listed in a cluster message. The options are redis,
     * memcached or valkey.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ModifyCacheClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ModifyCacheClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ModifyCacheClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ModifyCacheClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey 7.2 or Redis OSS engine version 6.0 or later, set
     * this parameter to yes to opt-in to the next auto minor version upgrade campaign.
     * This parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ModifyCacheClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p>If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> 
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline ModifyCacheClusterRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline ModifyCacheClusterRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline ModifyCacheClusterRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline ModifyCacheClusterRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline ModifyCacheClusterRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved parameter. The password used to access a password protected server.
     * This parameter must be specified with the <code>auth-token-update</code>
     * parameter. Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters</p> </li> <li> <p>Must be at least 16 characters and no more than 128
     * characters in length</p> </li> <li> <p>Cannot contain any of the following
     * characters: '/', '"', or '@', '%'</p> </li> </ul> <p> For more information, see
     * AUTH password at <a href="http://redis.io/commands/AUTH">AUTH</a>.</p>
     */
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    inline void SetAuthToken(const Aws::String& value) { m_authTokenHasBeenSet = true; m_authToken = value; }
    inline void SetAuthToken(Aws::String&& value) { m_authTokenHasBeenSet = true; m_authToken = std::move(value); }
    inline void SetAuthToken(const char* value) { m_authTokenHasBeenSet = true; m_authToken.assign(value); }
    inline ModifyCacheClusterRequest& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}
    inline ModifyCacheClusterRequest& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the strategy to use to update the AUTH token. This parameter must
     * be specified with the <code>auth-token</code> parameter. Possible values:</p>
     * <ul> <li> <p>ROTATE - default, if no update strategy is provided</p> </li> <li>
     * <p>SET - allowed only after ROTATE</p> </li> <li> <p>DELETE - allowed only when
     * transitioning to RBAC</p> </li> </ul> <p> For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/dg/auth.html">Authenticating
     * Users with AUTH</a> </p>
     */
    inline const AuthTokenUpdateStrategyType& GetAuthTokenUpdateStrategy() const{ return m_authTokenUpdateStrategy; }
    inline bool AuthTokenUpdateStrategyHasBeenSet() const { return m_authTokenUpdateStrategyHasBeenSet; }
    inline void SetAuthTokenUpdateStrategy(const AuthTokenUpdateStrategyType& value) { m_authTokenUpdateStrategyHasBeenSet = true; m_authTokenUpdateStrategy = value; }
    inline void SetAuthTokenUpdateStrategy(AuthTokenUpdateStrategyType&& value) { m_authTokenUpdateStrategyHasBeenSet = true; m_authTokenUpdateStrategy = std::move(value); }
    inline ModifyCacheClusterRequest& WithAuthTokenUpdateStrategy(const AuthTokenUpdateStrategyType& value) { SetAuthTokenUpdateStrategy(value); return *this;}
    inline ModifyCacheClusterRequest& WithAuthTokenUpdateStrategy(AuthTokenUpdateStrategyType&& value) { SetAuthTokenUpdateStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfigurationRequest>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    inline void SetLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }
    inline void SetLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }
    inline ModifyCacheClusterRequest& WithLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { SetLogDeliveryConfigurations(value); return *this;}
    inline ModifyCacheClusterRequest& WithLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}
    inline ModifyCacheClusterRequest& AddLogDeliveryConfigurations(const LogDeliveryConfigurationRequest& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }
    inline ModifyCacheClusterRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationRequest&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network type you choose when modifying a cluster, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Valkey 7.2 and above, Redis OSS engine version 6.2 to 7.1 or Memcached engine
     * version 1.6.6 and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const IpDiscovery& GetIpDiscovery() const{ return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(const IpDiscovery& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline void SetIpDiscovery(IpDiscovery&& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = std::move(value); }
    inline ModifyCacheClusterRequest& WithIpDiscovery(const IpDiscovery& value) { SetIpDiscovery(value); return *this;}
    inline ModifyCacheClusterRequest& WithIpDiscovery(IpDiscovery&& value) { SetIpDiscovery(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheNodeIdsToRemove;
    bool m_cacheNodeIdsToRemoveHasBeenSet = false;

    AZMode m_aZMode;
    bool m_aZModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_newAvailabilityZones;
    bool m_newAvailabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    AuthTokenUpdateStrategyType m_authTokenUpdateStrategy;
    bool m_authTokenUpdateStrategyHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    IpDiscovery m_ipDiscovery;
    bool m_ipDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
