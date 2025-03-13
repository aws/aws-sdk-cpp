/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/PendingModifiedValues.h>
#include <aws/elasticache/model/NotificationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/CacheParameterGroupStatus.h>
#include <aws/elasticache/model/NetworkType.h>
#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/elasticache/model/CacheSecurityGroupMembership.h>
#include <aws/elasticache/model/CacheNode.h>
#include <aws/elasticache/model/SecurityGroupMembership.h>
#include <aws/elasticache/model/LogDeliveryConfiguration.h>
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
   * <p>Contains all of the attributes of a specific cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheCluster">AWS
   * API Reference</a></p>
   */
  class CacheCluster
  {
  public:
    AWS_ELASTICACHE_API CacheCluster() = default;
    AWS_ELASTICACHE_API CacheCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    CacheCluster& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a Memcached cluster endpoint which can be used by an application
     * to connect to any node in the cluster. The configuration endpoint will always
     * have <code>.cfg</code> in it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline const Endpoint& GetConfigurationEndpoint() const { return m_configurationEndpoint; }
    inline bool ConfigurationEndpointHasBeenSet() const { return m_configurationEndpointHasBeenSet; }
    template<typename ConfigurationEndpointT = Endpoint>
    void SetConfigurationEndpoint(ConfigurationEndpointT&& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = std::forward<ConfigurationEndpointT>(value); }
    template<typename ConfigurationEndpointT = Endpoint>
    CacheCluster& WithConfigurationEndpoint(ConfigurationEndpointT&& value) { SetConfigurationEndpoint(std::forward<ConfigurationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline const Aws::String& GetClientDownloadLandingPage() const { return m_clientDownloadLandingPage; }
    inline bool ClientDownloadLandingPageHasBeenSet() const { return m_clientDownloadLandingPageHasBeenSet; }
    template<typename ClientDownloadLandingPageT = Aws::String>
    void SetClientDownloadLandingPage(ClientDownloadLandingPageT&& value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage = std::forward<ClientDownloadLandingPageT>(value); }
    template<typename ClientDownloadLandingPageT = Aws::String>
    CacheCluster& WithClientDownloadLandingPage(ClientDownloadLandingPageT&& value) { SetClientDownloadLandingPage(std::forward<ClientDownloadLandingPageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M7g node types</b>: <code>cache.m7g.large</code>,
     * <code>cache.m7g.xlarge</code>, <code>cache.m7g.2xlarge</code>,
     * <code>cache.m7g.4xlarge</code>, <code>cache.m7g.8xlarge</code>,
     * <code>cache.m7g.12xlarge</code>, <code>cache.m7g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M6g node types</b> (available only for Redis
     * OSS engine version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis OSS engine version 5.0.6 onward and Memcached engine version 1.5.16
     * onward): <code>cache.t4g.micro</code>, <code>cache.t4g.small</code>,
     * <code>cache.t4g.medium</code> </p> <p> <b>T3 node types:</b>
     * <code>cache.t3.micro</code>, <code>cache.t3.small</code>,
     * <code>cache.t3.medium</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended. Existing clusters are still supported but creation of new clusters
     * is not supported for these types.)</p> <p> <b>T1 node types:</b>
     * <code>cache.t1.micro</code> </p> <p> <b>M1 node types:</b>
     * <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended. Existing clusters are still supported but creation of new clusters
     * is not supported for these types.)</p> <p> <b>C1 node types:</b>
     * <code>cache.c1.xlarge</code> </p> </li> </ul> </li> <li> <p>Memory
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R7g node types</b>:
     * <code>cache.r7g.large</code>, <code>cache.r7g.xlarge</code>,
     * <code>cache.r7g.2xlarge</code>, <code>cache.r7g.4xlarge</code>,
     * <code>cache.r7g.8xlarge</code>, <code>cache.r7g.12xlarge</code>,
     * <code>cache.r7g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R6g node types</b> (available only for Redis
     * OSS engine version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.r6g.large</code>, <code>cache.r6g.xlarge</code>,
     * <code>cache.r6g.2xlarge</code>, <code>cache.r6g.4xlarge</code>,
     * <code>cache.r6g.8xlarge</code>, <code>cache.r6g.12xlarge</code>,
     * <code>cache.r6g.16xlarge</code> </p> <p> <b>R5 node types:</b>
     * <code>cache.r5.large</code>, <code>cache.r5.xlarge</code>,
     * <code>cache.r5.2xlarge</code>, <code>cache.r5.4xlarge</code>,
     * <code>cache.r5.12xlarge</code>, <code>cache.r5.24xlarge</code> </p> <p> <b>R4
     * node types:</b> <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended. Existing clusters are still supported
     * but creation of new clusters is not supported for these types.)</p> <p> <b>M2
     * node types:</b> <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Valkey or Redis OSS
     * append-only files (AOF) are not supported for T1 or T2 instances.</p> </li> <li>
     * <p>Valkey or Redis OSS Multi-AZ with automatic failover is not supported on T1
     * instances.</p> </li> <li> <p>The configuration variables <code>appendonly</code>
     * and <code>appendfsync</code> are not supported on Valkey, or on Redis OSS
     * version 2.8.22 and later.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheNodeType() const { return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    template<typename CacheNodeTypeT = Aws::String>
    void SetCacheNodeType(CacheNodeTypeT&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::forward<CacheNodeTypeT>(value); }
    template<typename CacheNodeTypeT = Aws::String>
    CacheCluster& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CacheCluster& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CacheCluster& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline const Aws::String& GetCacheClusterStatus() const { return m_cacheClusterStatus; }
    inline bool CacheClusterStatusHasBeenSet() const { return m_cacheClusterStatusHasBeenSet; }
    template<typename CacheClusterStatusT = Aws::String>
    void SetCacheClusterStatus(CacheClusterStatusT&& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = std::forward<CacheClusterStatusT>(value); }
    template<typename CacheClusterStatusT = Aws::String>
    CacheCluster& WithCacheClusterStatus(CacheClusterStatusT&& value) { SetCacheClusterStatus(std::forward<CacheClusterStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cache nodes in the cluster.</p> <p>For clusters running Valkey
     * or Redis OSS, this value must be 1. For clusters running Memcached, this value
     * must be between 1 and 40.</p>
     */
    inline int GetNumCacheNodes() const { return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline CacheCluster& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const { return m_preferredAvailabilityZone; }
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    void SetPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::forward<PreferredAvailabilityZoneT>(value); }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    CacheCluster& WithPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { SetPreferredAvailabilityZone(std::forward<PreferredAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN in which the cache cluster is created.</p>
     */
    inline const Aws::String& GetPreferredOutpostArn() const { return m_preferredOutpostArn; }
    inline bool PreferredOutpostArnHasBeenSet() const { return m_preferredOutpostArnHasBeenSet; }
    template<typename PreferredOutpostArnT = Aws::String>
    void SetPreferredOutpostArn(PreferredOutpostArnT&& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = std::forward<PreferredOutpostArnT>(value); }
    template<typename PreferredOutpostArnT = Aws::String>
    CacheCluster& WithPreferredOutpostArn(PreferredOutpostArnT&& value) { SetPreferredOutpostArn(std::forward<PreferredOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheClusterCreateTime() const { return m_cacheClusterCreateTime; }
    inline bool CacheClusterCreateTimeHasBeenSet() const { return m_cacheClusterCreateTimeHasBeenSet; }
    template<typename CacheClusterCreateTimeT = Aws::Utils::DateTime>
    void SetCacheClusterCreateTime(CacheClusterCreateTimeT&& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = std::forward<CacheClusterCreateTimeT>(value); }
    template<typename CacheClusterCreateTimeT = Aws::Utils::DateTime>
    CacheCluster& WithCacheClusterCreateTime(CacheClusterCreateTimeT&& value) { SetCacheClusterCreateTime(std::forward<CacheClusterCreateTimeT>(value)); return *this;}
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
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CacheCluster& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = PendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = PendingModifiedValues>
    CacheCluster& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    CacheCluster& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline const Aws::Vector<CacheSecurityGroupMembership>& GetCacheSecurityGroups() const { return m_cacheSecurityGroups; }
    inline bool CacheSecurityGroupsHasBeenSet() const { return m_cacheSecurityGroupsHasBeenSet; }
    template<typename CacheSecurityGroupsT = Aws::Vector<CacheSecurityGroupMembership>>
    void SetCacheSecurityGroups(CacheSecurityGroupsT&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups = std::forward<CacheSecurityGroupsT>(value); }
    template<typename CacheSecurityGroupsT = Aws::Vector<CacheSecurityGroupMembership>>
    CacheCluster& WithCacheSecurityGroups(CacheSecurityGroupsT&& value) { SetCacheSecurityGroups(std::forward<CacheSecurityGroupsT>(value)); return *this;}
    template<typename CacheSecurityGroupsT = CacheSecurityGroupMembership>
    CacheCluster& AddCacheSecurityGroups(CacheSecurityGroupsT&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups.emplace_back(std::forward<CacheSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline const CacheParameterGroupStatus& GetCacheParameterGroup() const { return m_cacheParameterGroup; }
    inline bool CacheParameterGroupHasBeenSet() const { return m_cacheParameterGroupHasBeenSet; }
    template<typename CacheParameterGroupT = CacheParameterGroupStatus>
    void SetCacheParameterGroup(CacheParameterGroupT&& value) { m_cacheParameterGroupHasBeenSet = true; m_cacheParameterGroup = std::forward<CacheParameterGroupT>(value); }
    template<typename CacheParameterGroupT = CacheParameterGroupStatus>
    CacheCluster& WithCacheParameterGroup(CacheParameterGroupT&& value) { SetCacheParameterGroup(std::forward<CacheParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    CacheCluster& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline const Aws::Vector<CacheNode>& GetCacheNodes() const { return m_cacheNodes; }
    inline bool CacheNodesHasBeenSet() const { return m_cacheNodesHasBeenSet; }
    template<typename CacheNodesT = Aws::Vector<CacheNode>>
    void SetCacheNodes(CacheNodesT&& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes = std::forward<CacheNodesT>(value); }
    template<typename CacheNodesT = Aws::Vector<CacheNode>>
    CacheCluster& WithCacheNodes(CacheNodesT&& value) { SetCacheNodes(std::forward<CacheNodesT>(value)); return *this;}
    template<typename CacheNodesT = CacheNode>
    CacheCluster& AddCacheNodes(CacheNodesT&& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes.emplace_back(std::forward<CacheNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey or Redis OSS engine version 6.0 or later, set this
     * parameter to yes if you want to opt-in to the next auto minor version upgrade
     * campaign. This parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CacheCluster& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupMembership>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<SecurityGroupMembership>>
    CacheCluster& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = SecurityGroupMembership>
    CacheCluster& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    CacheCluster& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p> If the value of
     * SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     * 
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline CacheCluster& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline const Aws::String& GetSnapshotWindow() const { return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    template<typename SnapshotWindowT = Aws::String>
    void SetSnapshotWindow(SnapshotWindowT&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::forward<SnapshotWindowT>(value); }
    template<typename SnapshotWindowT = Aws::String>
    CacheCluster& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Valkey or Redis OSS commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const { return m_authTokenEnabled; }
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }
    inline CacheCluster& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the auth token was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetAuthTokenLastModifiedDate() const { return m_authTokenLastModifiedDate; }
    inline bool AuthTokenLastModifiedDateHasBeenSet() const { return m_authTokenLastModifiedDateHasBeenSet; }
    template<typename AuthTokenLastModifiedDateT = Aws::Utils::DateTime>
    void SetAuthTokenLastModifiedDate(AuthTokenLastModifiedDateT&& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = std::forward<AuthTokenLastModifiedDateT>(value); }
    template<typename AuthTokenLastModifiedDateT = Aws::Utils::DateTime>
    CacheCluster& WithAuthTokenLastModifiedDate(AuthTokenLastModifiedDateT&& value) { SetAuthTokenLastModifiedDate(std::forward<AuthTokenLastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using Redis OSS version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline CacheCluster& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable at-rest encryption on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using Redis OSS version <code>3.2.6</code>,
     * <code>4.x</code> or later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAtRestEncryptionEnabled() const { return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline CacheCluster& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the cache cluster.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    CacheCluster& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether log delivery is enabled for the
     * replication group.</p>
     */
    inline bool GetReplicationGroupLogDeliveryEnabled() const { return m_replicationGroupLogDeliveryEnabled; }
    inline bool ReplicationGroupLogDeliveryEnabledHasBeenSet() const { return m_replicationGroupLogDeliveryEnabledHasBeenSet; }
    inline void SetReplicationGroupLogDeliveryEnabled(bool value) { m_replicationGroupLogDeliveryEnabledHasBeenSet = true; m_replicationGroupLogDeliveryEnabled = value; }
    inline CacheCluster& WithReplicationGroupLogDeliveryEnabled(bool value) { SetReplicationGroupLogDeliveryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfiguration>& GetLogDeliveryConfigurations() const { return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfiguration>>
    void SetLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::forward<LogDeliveryConfigurationsT>(value); }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfiguration>>
    CacheCluster& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = LogDeliveryConfiguration>
    CacheCluster& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Valkey 7.2 and
     * above, Redis OSS engine version 6.2 7.1 or Memcached engine version 1.6.6 and
     * above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CacheCluster& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type associated with the cluster, either <code>ipv4</code> |
     * <code>ipv6</code>. IPv6 is supported for workloads using Valkey 7.2 and above,
     * Redis OSS engine version 6.2 to 7.1 or Memcached engine version 1.6.6 and above
     * on all instances built on the <a href="http://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline IpDiscovery GetIpDiscovery() const { return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(IpDiscovery value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline CacheCluster& WithIpDiscovery(IpDiscovery value) { SetIpDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline TransitEncryptionMode GetTransitEncryptionMode() const { return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline CacheCluster& WithTransitEncryptionMode(TransitEncryptionMode value) { SetTransitEncryptionMode(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Endpoint m_configurationEndpoint;
    bool m_configurationEndpointHasBeenSet = false;

    Aws::String m_clientDownloadLandingPage;
    bool m_clientDownloadLandingPageHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheClusterStatus;
    bool m_cacheClusterStatusHasBeenSet = false;

    int m_numCacheNodes{0};
    bool m_numCacheNodesHasBeenSet = false;

    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet = false;

    Aws::String m_preferredOutpostArn;
    bool m_preferredOutpostArnHasBeenSet = false;

    Aws::Utils::DateTime m_cacheClusterCreateTime{};
    bool m_cacheClusterCreateTimeHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    Aws::Vector<CacheSecurityGroupMembership> m_cacheSecurityGroups;
    bool m_cacheSecurityGroupsHasBeenSet = false;

    CacheParameterGroupStatus m_cacheParameterGroup;
    bool m_cacheParameterGroupHasBeenSet = false;

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::Vector<CacheNode> m_cacheNodes;
    bool m_cacheNodesHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    bool m_authTokenEnabled{false};
    bool m_authTokenEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_authTokenLastModifiedDate{};
    bool m_authTokenLastModifiedDateHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled{false};
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_replicationGroupLogDeliveryEnabled{false};
    bool m_replicationGroupLogDeliveryEnabledHasBeenSet = false;

    Aws::Vector<LogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery{IpDiscovery::NOT_SET};
    bool m_ipDiscoveryHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode{TransitEncryptionMode::NOT_SET};
    bool m_transitEncryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
