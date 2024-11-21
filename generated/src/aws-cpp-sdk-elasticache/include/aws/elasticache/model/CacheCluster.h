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
    AWS_ELASTICACHE_API CacheCluster();
    AWS_ELASTICACHE_API CacheCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline CacheCluster& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline CacheCluster& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline CacheCluster& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a Memcached cluster endpoint which can be used by an application
     * to connect to any node in the cluster. The configuration endpoint will always
     * have <code>.cfg</code> in it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline const Endpoint& GetConfigurationEndpoint() const{ return m_configurationEndpoint; }
    inline bool ConfigurationEndpointHasBeenSet() const { return m_configurationEndpointHasBeenSet; }
    inline void SetConfigurationEndpoint(const Endpoint& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = value; }
    inline void SetConfigurationEndpoint(Endpoint&& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = std::move(value); }
    inline CacheCluster& WithConfigurationEndpoint(const Endpoint& value) { SetConfigurationEndpoint(value); return *this;}
    inline CacheCluster& WithConfigurationEndpoint(Endpoint&& value) { SetConfigurationEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline const Aws::String& GetClientDownloadLandingPage() const{ return m_clientDownloadLandingPage; }
    inline bool ClientDownloadLandingPageHasBeenSet() const { return m_clientDownloadLandingPageHasBeenSet; }
    inline void SetClientDownloadLandingPage(const Aws::String& value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage = value; }
    inline void SetClientDownloadLandingPage(Aws::String&& value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage = std::move(value); }
    inline void SetClientDownloadLandingPage(const char* value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage.assign(value); }
    inline CacheCluster& WithClientDownloadLandingPage(const Aws::String& value) { SetClientDownloadLandingPage(value); return *this;}
    inline CacheCluster& WithClientDownloadLandingPage(Aws::String&& value) { SetClientDownloadLandingPage(std::move(value)); return *this;}
    inline CacheCluster& WithClientDownloadLandingPage(const char* value) { SetClientDownloadLandingPage(value); return *this;}
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
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline CacheCluster& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline CacheCluster& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline CacheCluster& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CacheCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CacheCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CacheCluster& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CacheCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CacheCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CacheCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline const Aws::String& GetCacheClusterStatus() const{ return m_cacheClusterStatus; }
    inline bool CacheClusterStatusHasBeenSet() const { return m_cacheClusterStatusHasBeenSet; }
    inline void SetCacheClusterStatus(const Aws::String& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = value; }
    inline void SetCacheClusterStatus(Aws::String&& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = std::move(value); }
    inline void SetCacheClusterStatus(const char* value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus.assign(value); }
    inline CacheCluster& WithCacheClusterStatus(const Aws::String& value) { SetCacheClusterStatus(value); return *this;}
    inline CacheCluster& WithCacheClusterStatus(Aws::String&& value) { SetCacheClusterStatus(std::move(value)); return *this;}
    inline CacheCluster& WithCacheClusterStatus(const char* value) { SetCacheClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cache nodes in the cluster.</p> <p>For clusters running Valkey
     * or Redis OSS, this value must be 1. For clusters running Memcached, this value
     * must be between 1 and 40.</p>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline CacheCluster& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const{ return m_preferredAvailabilityZone; }
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }
    inline void SetPreferredAvailabilityZone(const Aws::String& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }
    inline void SetPreferredAvailabilityZone(Aws::String&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::move(value); }
    inline void SetPreferredAvailabilityZone(const char* value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone.assign(value); }
    inline CacheCluster& WithPreferredAvailabilityZone(const Aws::String& value) { SetPreferredAvailabilityZone(value); return *this;}
    inline CacheCluster& WithPreferredAvailabilityZone(Aws::String&& value) { SetPreferredAvailabilityZone(std::move(value)); return *this;}
    inline CacheCluster& WithPreferredAvailabilityZone(const char* value) { SetPreferredAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN in which the cache cluster is created.</p>
     */
    inline const Aws::String& GetPreferredOutpostArn() const{ return m_preferredOutpostArn; }
    inline bool PreferredOutpostArnHasBeenSet() const { return m_preferredOutpostArnHasBeenSet; }
    inline void SetPreferredOutpostArn(const Aws::String& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = value; }
    inline void SetPreferredOutpostArn(Aws::String&& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = std::move(value); }
    inline void SetPreferredOutpostArn(const char* value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn.assign(value); }
    inline CacheCluster& WithPreferredOutpostArn(const Aws::String& value) { SetPreferredOutpostArn(value); return *this;}
    inline CacheCluster& WithPreferredOutpostArn(Aws::String&& value) { SetPreferredOutpostArn(std::move(value)); return *this;}
    inline CacheCluster& WithPreferredOutpostArn(const char* value) { SetPreferredOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheClusterCreateTime() const{ return m_cacheClusterCreateTime; }
    inline bool CacheClusterCreateTimeHasBeenSet() const { return m_cacheClusterCreateTimeHasBeenSet; }
    inline void SetCacheClusterCreateTime(const Aws::Utils::DateTime& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = value; }
    inline void SetCacheClusterCreateTime(Aws::Utils::DateTime&& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = std::move(value); }
    inline CacheCluster& WithCacheClusterCreateTime(const Aws::Utils::DateTime& value) { SetCacheClusterCreateTime(value); return *this;}
    inline CacheCluster& WithCacheClusterCreateTime(Aws::Utils::DateTime&& value) { SetCacheClusterCreateTime(std::move(value)); return *this;}
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
    inline CacheCluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline CacheCluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline CacheCluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline CacheCluster& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline CacheCluster& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }
    inline CacheCluster& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}
    inline CacheCluster& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline const Aws::Vector<CacheSecurityGroupMembership>& GetCacheSecurityGroups() const{ return m_cacheSecurityGroups; }
    inline bool CacheSecurityGroupsHasBeenSet() const { return m_cacheSecurityGroupsHasBeenSet; }
    inline void SetCacheSecurityGroups(const Aws::Vector<CacheSecurityGroupMembership>& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups = value; }
    inline void SetCacheSecurityGroups(Aws::Vector<CacheSecurityGroupMembership>&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups = std::move(value); }
    inline CacheCluster& WithCacheSecurityGroups(const Aws::Vector<CacheSecurityGroupMembership>& value) { SetCacheSecurityGroups(value); return *this;}
    inline CacheCluster& WithCacheSecurityGroups(Aws::Vector<CacheSecurityGroupMembership>&& value) { SetCacheSecurityGroups(std::move(value)); return *this;}
    inline CacheCluster& AddCacheSecurityGroups(const CacheSecurityGroupMembership& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups.push_back(value); return *this; }
    inline CacheCluster& AddCacheSecurityGroups(CacheSecurityGroupMembership&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline const CacheParameterGroupStatus& GetCacheParameterGroup() const{ return m_cacheParameterGroup; }
    inline bool CacheParameterGroupHasBeenSet() const { return m_cacheParameterGroupHasBeenSet; }
    inline void SetCacheParameterGroup(const CacheParameterGroupStatus& value) { m_cacheParameterGroupHasBeenSet = true; m_cacheParameterGroup = value; }
    inline void SetCacheParameterGroup(CacheParameterGroupStatus&& value) { m_cacheParameterGroupHasBeenSet = true; m_cacheParameterGroup = std::move(value); }
    inline CacheCluster& WithCacheParameterGroup(const CacheParameterGroupStatus& value) { SetCacheParameterGroup(value); return *this;}
    inline CacheCluster& WithCacheParameterGroup(CacheParameterGroupStatus&& value) { SetCacheParameterGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }
    inline CacheCluster& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}
    inline CacheCluster& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}
    inline CacheCluster& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline const Aws::Vector<CacheNode>& GetCacheNodes() const{ return m_cacheNodes; }
    inline bool CacheNodesHasBeenSet() const { return m_cacheNodesHasBeenSet; }
    inline void SetCacheNodes(const Aws::Vector<CacheNode>& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes = value; }
    inline void SetCacheNodes(Aws::Vector<CacheNode>&& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes = std::move(value); }
    inline CacheCluster& WithCacheNodes(const Aws::Vector<CacheNode>& value) { SetCacheNodes(value); return *this;}
    inline CacheCluster& WithCacheNodes(Aws::Vector<CacheNode>&& value) { SetCacheNodes(std::move(value)); return *this;}
    inline CacheCluster& AddCacheNodes(const CacheNode& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes.push_back(value); return *this; }
    inline CacheCluster& AddCacheNodes(CacheNode&& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey or Redis OSS engine version 6.0 or later, set this
     * parameter to yes if you want to opt-in to the next auto minor version upgrade
     * campaign. This parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CacheCluster& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline CacheCluster& WithSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { SetSecurityGroups(value); return *this;}
    inline CacheCluster& WithSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline CacheCluster& AddSecurityGroups(const SecurityGroupMembership& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline CacheCluster& AddSecurityGroups(SecurityGroupMembership&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline CacheCluster& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline CacheCluster& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline CacheCluster& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
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
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline CacheCluster& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline CacheCluster& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline CacheCluster& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline CacheCluster& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Valkey or Redis OSS commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const{ return m_authTokenEnabled; }
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }
    inline CacheCluster& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the auth token was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetAuthTokenLastModifiedDate() const{ return m_authTokenLastModifiedDate; }
    inline bool AuthTokenLastModifiedDateHasBeenSet() const { return m_authTokenLastModifiedDateHasBeenSet; }
    inline void SetAuthTokenLastModifiedDate(const Aws::Utils::DateTime& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = value; }
    inline void SetAuthTokenLastModifiedDate(Aws::Utils::DateTime&& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = std::move(value); }
    inline CacheCluster& WithAuthTokenLastModifiedDate(const Aws::Utils::DateTime& value) { SetAuthTokenLastModifiedDate(value); return *this;}
    inline CacheCluster& WithAuthTokenLastModifiedDate(Aws::Utils::DateTime&& value) { SetAuthTokenLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using Redis OSS version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }
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
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline CacheCluster& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the cache cluster.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline CacheCluster& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline CacheCluster& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline CacheCluster& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether log delivery is enabled for the
     * replication group.</p>
     */
    inline bool GetReplicationGroupLogDeliveryEnabled() const{ return m_replicationGroupLogDeliveryEnabled; }
    inline bool ReplicationGroupLogDeliveryEnabledHasBeenSet() const { return m_replicationGroupLogDeliveryEnabledHasBeenSet; }
    inline void SetReplicationGroupLogDeliveryEnabled(bool value) { m_replicationGroupLogDeliveryEnabledHasBeenSet = true; m_replicationGroupLogDeliveryEnabled = value; }
    inline CacheCluster& WithReplicationGroupLogDeliveryEnabled(bool value) { SetReplicationGroupLogDeliveryEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfiguration>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    inline void SetLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfiguration>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }
    inline void SetLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfiguration>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }
    inline CacheCluster& WithLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfiguration>& value) { SetLogDeliveryConfigurations(value); return *this;}
    inline CacheCluster& WithLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfiguration>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}
    inline CacheCluster& AddLogDeliveryConfigurations(const LogDeliveryConfiguration& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }
    inline CacheCluster& AddLogDeliveryConfigurations(LogDeliveryConfiguration&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Valkey 7.2 and
     * above, Redis OSS engine version 6.2 and above or Memcached engine version 1.6.6
     * and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const NetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline CacheCluster& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline CacheCluster& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type associated with the cluster, either <code>ipv4</code> |
     * <code>ipv6</code>. IPv6 is supported for workloads using Valkey 7.2 and above,
     * Redis OSS engine version 6.2 and above or Memcached engine version 1.6.6 and
     * above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const IpDiscovery& GetIpDiscovery() const{ return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(const IpDiscovery& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline void SetIpDiscovery(IpDiscovery&& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = std::move(value); }
    inline CacheCluster& WithIpDiscovery(const IpDiscovery& value) { SetIpDiscovery(value); return *this;}
    inline CacheCluster& WithIpDiscovery(IpDiscovery&& value) { SetIpDiscovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline const TransitEncryptionMode& GetTransitEncryptionMode() const{ return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(const TransitEncryptionMode& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode&& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = std::move(value); }
    inline CacheCluster& WithTransitEncryptionMode(const TransitEncryptionMode& value) { SetTransitEncryptionMode(value); return *this;}
    inline CacheCluster& WithTransitEncryptionMode(TransitEncryptionMode&& value) { SetTransitEncryptionMode(std::move(value)); return *this;}
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

    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet = false;

    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet = false;

    Aws::String m_preferredOutpostArn;
    bool m_preferredOutpostArnHasBeenSet = false;

    Aws::Utils::DateTime m_cacheClusterCreateTime;
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

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    bool m_authTokenEnabled;
    bool m_authTokenEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_authTokenLastModifiedDate;
    bool m_authTokenLastModifiedDateHasBeenSet = false;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled;
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_replicationGroupLogDeliveryEnabled;
    bool m_replicationGroupLogDeliveryEnabledHasBeenSet = false;

    Aws::Vector<LogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery;
    bool m_ipDiscoveryHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode;
    bool m_transitEncryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
