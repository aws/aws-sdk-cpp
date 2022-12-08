/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NetworkType.h>
#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/elasticache/model/NodeGroupConfiguration.h>
#include <aws/elasticache/model/Tag.h>
#include <aws/elasticache/model/LogDeliveryConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateReplicationGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateReplicationGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::move(value); }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}


    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline CreateReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline CreateReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline CreateReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::move(value); }

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}


    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>
     * <code>AutomaticFailoverEnabled</code> must be enabled for Redis (cluster mode
     * enabled) replication groups.</p> <p>Default: false</p>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }

    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>
     * <code>AutomaticFailoverEnabled</code> must be enabled for Redis (cluster mode
     * enabled) replication groups.</p> <p>Default: false</p>
     */
    inline bool AutomaticFailoverEnabledHasBeenSet() const { return m_automaticFailoverEnabledHasBeenSet; }

    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>
     * <code>AutomaticFailoverEnabled</code> must be enabled for Redis (cluster mode
     * enabled) replication groups.</p> <p>Default: false</p>
     */
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }

    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>
     * <code>AutomaticFailoverEnabled</code> must be enabled for Redis (cluster mode
     * enabled) replication groups.</p> <p>Default: false</p>
     */
    inline CreateReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}


    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a>.</p>
     */
    inline bool GetMultiAZEnabled() const{ return m_multiAZEnabled; }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a>.</p>
     */
    inline bool MultiAZEnabledHasBeenSet() const { return m_multiAZEnabledHasBeenSet; }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a>.</p>
     */
    inline void SetMultiAZEnabled(bool value) { m_multiAZEnabledHasBeenSet = true; m_multiAZEnabled = value; }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithMultiAZEnabled(bool value) { SetMultiAZEnabled(value); return *this;}


    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If
     * <code>AutomaticFailoverEnabled</code> is <code>true</code>, the value of this
     * parameter must be at least 2. If <code>AutomaticFailoverEnabled</code> is
     * <code>false</code> you can omit this parameter (it will default to 1), or you
     * can explicitly set it to a value between 2 and 6.</p> <p>The maximum permitted
     * value for <code>NumCacheClusters</code> is 6 (1 primary plus 5 replicas).</p>
     */
    inline int GetNumCacheClusters() const{ return m_numCacheClusters; }

    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If
     * <code>AutomaticFailoverEnabled</code> is <code>true</code>, the value of this
     * parameter must be at least 2. If <code>AutomaticFailoverEnabled</code> is
     * <code>false</code> you can omit this parameter (it will default to 1), or you
     * can explicitly set it to a value between 2 and 6.</p> <p>The maximum permitted
     * value for <code>NumCacheClusters</code> is 6 (1 primary plus 5 replicas).</p>
     */
    inline bool NumCacheClustersHasBeenSet() const { return m_numCacheClustersHasBeenSet; }

    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If
     * <code>AutomaticFailoverEnabled</code> is <code>true</code>, the value of this
     * parameter must be at least 2. If <code>AutomaticFailoverEnabled</code> is
     * <code>false</code> you can omit this parameter (it will default to 1), or you
     * can explicitly set it to a value between 2 and 6.</p> <p>The maximum permitted
     * value for <code>NumCacheClusters</code> is 6 (1 primary plus 5 replicas).</p>
     */
    inline void SetNumCacheClusters(int value) { m_numCacheClustersHasBeenSet = true; m_numCacheClusters = value; }

    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If
     * <code>AutomaticFailoverEnabled</code> is <code>true</code>, the value of this
     * parameter must be at least 2. If <code>AutomaticFailoverEnabled</code> is
     * <code>false</code> you can omit this parameter (it will default to 1), or you
     * can explicitly set it to a value between 2 and 6.</p> <p>The maximum permitted
     * value for <code>NumCacheClusters</code> is 6 (1 primary plus 5 replicas).</p>
     */
    inline CreateReplicationGroupRequest& WithNumCacheClusters(int value) { SetNumCacheClusters(value); return *this;}


    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredCacheClusterAZs() const{ return m_preferredCacheClusterAZs; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline bool PreferredCacheClusterAZsHasBeenSet() const { return m_preferredCacheClusterAZsHasBeenSet; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline void SetPreferredCacheClusterAZs(const Aws::Vector<Aws::String>& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = value; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline void SetPreferredCacheClusterAZs(Aws::Vector<Aws::String>&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = std::move(value); }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(const Aws::Vector<Aws::String>& value) { SetPreferredCacheClusterAZs(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(Aws::Vector<Aws::String>&& value) { SetPreferredCacheClusterAZs(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(const Aws::String& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(Aws::String&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(const char* value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }


    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline int GetNumNodeGroups() const{ return m_numNodeGroups; }

    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline bool NumNodeGroupsHasBeenSet() const { return m_numNodeGroupsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline void SetNumNodeGroups(int value) { m_numNodeGroupsHasBeenSet = true; m_numNodeGroups = value; }

    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline CreateReplicationGroupRequest& WithNumNodeGroups(int value) { SetNumNodeGroups(value); return *this;}


    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline int GetReplicasPerNodeGroup() const{ return m_replicasPerNodeGroup; }

    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline bool ReplicasPerNodeGroupHasBeenSet() const { return m_replicasPerNodeGroupHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline void SetReplicasPerNodeGroup(int value) { m_replicasPerNodeGroupHasBeenSet = true; m_replicasPerNodeGroup = value; }

    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicasPerNodeGroup(int value) { SetReplicasPerNodeGroup(value); return *this;}


    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline const Aws::Vector<NodeGroupConfiguration>& GetNodeGroupConfiguration() const{ return m_nodeGroupConfiguration; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline bool NodeGroupConfigurationHasBeenSet() const { return m_nodeGroupConfigurationHasBeenSet; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline void SetNodeGroupConfiguration(const Aws::Vector<NodeGroupConfiguration>& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = value; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline void SetNodeGroupConfiguration(Aws::Vector<NodeGroupConfiguration>&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = std::move(value); }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline CreateReplicationGroupRequest& WithNodeGroupConfiguration(const Aws::Vector<NodeGroupConfiguration>& value) { SetNodeGroupConfiguration(value); return *this;}

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline CreateReplicationGroupRequest& WithNodeGroupConfiguration(Aws::Vector<NodeGroupConfiguration>&& value) { SetNodeGroupConfiguration(std::move(value)); return *this;}

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline CreateReplicationGroupRequest& AddNodeGroupConfiguration(const NodeGroupConfiguration& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Redis (cluster mode disabled) or
     * a Redis (cluster mode enabled) replication group, you can use this parameter to
     * individually configure each node group (shard), or you can omit this parameter.
     * However, it is required when seeding a Redis (cluster mode enabled) cluster from
     * a S3 rdb file. You must configure each node group (shard) using this parameter
     * because you must specify the slots for each node group.</p>
     */
    inline CreateReplicationGroupRequest& AddNodeGroupConfiguration(NodeGroupConfiguration&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M6g node types</b> (available only for Redis engine
     * version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R6g node types</b>
     * (available only for Redis engine version 5.0.6 onward and for Memcached engine
     * version 1.5.16 onward).</p> <p> <code>cache.r6g.large</code>,
     * <code>cache.r6g.xlarge</code>, <code>cache.r6g.2xlarge</code>,
     * <code>cache.r6g.4xlarge</code>, <code>cache.r6g.8xlarge</code>,
     * <code>cache.r6g.12xlarge</code>, <code>cache.r6g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R5 node types:</b>
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}


    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline CreateReplicationGroupRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline CreateReplicationGroupRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. Must be Redis.</p>
     */
    inline CreateReplicationGroupRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline CreateReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline CreateReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline CreateReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}


    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::move(value); }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(std::move(value)); return *this;}

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }


    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline CreateReplicationGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline CreateReplicationGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline CreateReplicationGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline CreateReplicationGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const{ return m_snapshotArns; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline bool SnapshotArnsHasBeenSet() const { return m_snapshotArnsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline void SetSnapshotArns(const Aws::Vector<Aws::String>& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline void SetSnapshotArns(Aws::Vector<Aws::String>&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotArns(const Aws::Vector<Aws::String>& value) { SetSnapshotArns(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotArns(Aws::Vector<Aws::String>&& value) { SetSnapshotArns(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& AddSnapshotArns(const Aws::String& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& AddSnapshotArns(Aws::String&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * new replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The new replication group will have the number of node groups (console:
     * shards) specified by the parameter <i>NumNodeGroups</i> or the number of node
     * groups configured by <i>NodeGroupConfiguration</i> regardless of the number of
     * ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& AddSnapshotArns(const char* value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }


    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. Valid values
     * for <code>ddd</code> are:</p> <p>Specifies the weekly time range during which
     * maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline CreateReplicationGroupRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}


    /**
     * <p> If you are running Redis engine version 6.0 or later, set this parameter to
     * yes if you want to opt-in to the next auto minor version upgrade campaign. This
     * parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> If you are running Redis engine version 6.0 or later, set this parameter to
     * yes if you want to opt-in to the next auto minor version upgrade campaign. This
     * parameter is disabled for previous versions.  </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p> If you are running Redis engine version 6.0 or later, set this parameter to
     * yes if you want to opt-in to the next auto minor version upgrade campaign. This
     * parameter is disabled for previous versions.  </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> If you are running Redis engine version 6.0 or later, set this parameter to
     * yes if you want to opt-in to the next auto minor version upgrade campaign. This
     * parameter is disabled for previous versions.  </p>
     */
    inline CreateReplicationGroupRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <p>Default: 0 (i.e., automatic backups are disabled for this cluster).</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <p>Default: 0 (i.e., automatic backups are disabled for this cluster).</p>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <p>Default: 0 (i.e., automatic backups are disabled for this cluster).</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <p>Default: 0 (i.e., automatic backups are disabled for this cluster).</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}


    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline void SetAuthToken(const Aws::String& value) { m_authTokenHasBeenSet = true; m_authToken = value; }

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline void SetAuthToken(Aws::String&& value) { m_authTokenHasBeenSet = true; m_authToken = std::move(value); }

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline void SetAuthToken(const char* value) { m_authTokenHasBeenSet = true; m_authToken.assign(value); }

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline CreateReplicationGroupRequest& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline CreateReplicationGroupRequest& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}

    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline CreateReplicationGroupRequest& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}


    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p>This parameter is valid only if the <code>Engine</code>
     * parameter is <code>redis</code>, the <code>EngineVersion</code> parameter is
     * <code>3.2.6</code>, <code>4.x</code> or later, and the cluster is being created
     * in an Amazon VPC.</p> <p>If you enable in-transit encryption, you must also
     * specify a value for <code>CacheSubnetGroup</code>.</p> <p> <b>Required:</b> Only
     * available when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p>This parameter is valid only if the <code>Engine</code>
     * parameter is <code>redis</code>, the <code>EngineVersion</code> parameter is
     * <code>3.2.6</code>, <code>4.x</code> or later, and the cluster is being created
     * in an Amazon VPC.</p> <p>If you enable in-transit encryption, you must also
     * specify a value for <code>CacheSubnetGroup</code>.</p> <p> <b>Required:</b> Only
     * available when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     */
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p>This parameter is valid only if the <code>Engine</code>
     * parameter is <code>redis</code>, the <code>EngineVersion</code> parameter is
     * <code>3.2.6</code>, <code>4.x</code> or later, and the cluster is being created
     * in an Amazon VPC.</p> <p>If you enable in-transit encryption, you must also
     * specify a value for <code>CacheSubnetGroup</code>.</p> <p> <b>Required:</b> Only
     * available when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     */
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p>This parameter is valid only if the <code>Engine</code>
     * parameter is <code>redis</code>, the <code>EngineVersion</code> parameter is
     * <code>3.2.6</code>, <code>4.x</code> or later, and the cluster is being created
     * in an Amazon VPC.</p> <p>If you enable in-transit encryption, you must also
     * specify a value for <code>CacheSubnetGroup</code>.</p> <p> <b>Required:</b> Only
     * available when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     */
    inline CreateReplicationGroupRequest& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}


    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }

    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }

    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using redis version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline CreateReplicationGroupRequest& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}


    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline CreateReplicationGroupRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline CreateReplicationGroupRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline CreateReplicationGroupRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const{ return m_userGroupIds; }

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline void SetUserGroupIds(const Aws::Vector<Aws::String>& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = value; }

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline void SetUserGroupIds(Aws::Vector<Aws::String>&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::move(value); }

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithUserGroupIds(const Aws::Vector<Aws::String>& value) { SetUserGroupIds(value); return *this;}

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithUserGroupIds(Aws::Vector<Aws::String>&& value) { SetUserGroupIds(std::move(value)); return *this;}

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline CreateReplicationGroupRequest& AddUserGroupIds(const Aws::String& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline CreateReplicationGroupRequest& AddUserGroupIds(Aws::String&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline CreateReplicationGroupRequest& AddUserGroupIds(const char* value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfigurationRequest>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline void SetLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline void SetLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline CreateReplicationGroupRequest& WithLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { SetLogDeliveryConfigurations(value); return *this;}

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline CreateReplicationGroupRequest& WithLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline CreateReplicationGroupRequest& AddLogDeliveryConfigurations(const LogDeliveryConfigurationRequest& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }

    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline CreateReplicationGroupRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationRequest&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool GetDataTieringEnabled() const{ return m_dataTieringEnabled; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool DataTieringEnabledHasBeenSet() const { return m_dataTieringEnabledHasBeenSet; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline void SetDataTieringEnabled(bool value) { m_dataTieringEnabledHasBeenSet = true; m_dataTieringEnabled = value; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithDataTieringEnabled(bool value) { SetDataTieringEnabled(value); return *this;}


    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Redis engine
     * version 6.2 onward or Memcached engine version 1.6.6 on all instances built on
     * the <a href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Redis engine
     * version 6.2 onward or Memcached engine version 1.6.6 on all instances built on
     * the <a href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Redis engine
     * version 6.2 onward or Memcached engine version 1.6.6 on all instances built on
     * the <a href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline void SetNetworkType(const NetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Redis engine
     * version 6.2 onward or Memcached engine version 1.6.6 on all instances built on
     * the <a href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline void SetNetworkType(NetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Redis engine
     * version 6.2 onward or Memcached engine version 1.6.6 on all instances built on
     * the <a href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}

    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Redis engine
     * version 6.2 onward or Memcached engine version 1.6.6 on all instances built on
     * the <a href="https://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}


    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="https://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline const IpDiscovery& GetIpDiscovery() const{ return m_ipDiscovery; }

    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="https://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }

    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="https://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline void SetIpDiscovery(const IpDiscovery& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }

    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="https://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline void SetIpDiscovery(IpDiscovery&& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = std::move(value); }

    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="https://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithIpDiscovery(const IpDiscovery& value) { SetIpDiscovery(value); return *this;}

    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="https://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithIpDiscovery(IpDiscovery&& value) { SetIpDiscovery(std::move(value)); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet = false;

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet = false;

    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet = false;

    bool m_multiAZEnabled;
    bool m_multiAZEnabledHasBeenSet = false;

    int m_numCacheClusters;
    bool m_numCacheClustersHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredCacheClusterAZs;
    bool m_preferredCacheClusterAZsHasBeenSet = false;

    int m_numNodeGroups;
    bool m_numNodeGroupsHasBeenSet = false;

    int m_replicasPerNodeGroup;
    bool m_replicasPerNodeGroupHasBeenSet = false;

    Aws::Vector<NodeGroupConfiguration> m_nodeGroupConfiguration;
    bool m_nodeGroupConfigurationHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotArns;
    bool m_snapshotArnsHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled;
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIds;
    bool m_userGroupIdsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    bool m_dataTieringEnabled;
    bool m_dataTieringEnabledHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery;
    bool m_ipDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
