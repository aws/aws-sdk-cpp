﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/AutomaticFailoverStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NodeSnapshot.h>

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
   * <p>Represents a copy of an entire Redis cache cluster as of the time when the
   * snapshot was taken.</p>
   */
  class AWS_ELASTICACHE_API Snapshot
  {
  public:
    Snapshot();
    Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline Snapshot& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline Snapshot& WithSnapshotName(Aws::String&& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline Snapshot& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline Snapshot& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline Snapshot& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline Snapshot& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>A description of the source replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }

    /**
     * <p>A description of the source replication group.</p>
     */
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A description of the source replication group.</p>
     */
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A description of the source replication group.</p>
     */
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }

    /**
     * <p>A description of the source replication group.</p>
     */
    inline Snapshot& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A description of the source replication group.</p>
     */
    inline Snapshot& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A description of the source replication group.</p>
     */
    inline Snapshot& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline Snapshot& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline Snapshot& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied identifier of the source cache cluster.</p>
     */
    inline Snapshot& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline const Aws::String& GetSnapshotStatus() const{ return m_snapshotStatus; }

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline void SetSnapshotStatus(const Aws::String& value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus = value; }

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline void SetSnapshotStatus(Aws::String&& value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus = value; }

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline void SetSnapshotStatus(const char* value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus.assign(value); }

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline Snapshot& WithSnapshotStatus(const Aws::String& value) { SetSnapshotStatus(value); return *this;}

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline Snapshot& WithSnapshotStatus(Aws::String&& value) { SetSnapshotStatus(value); return *this;}

    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline Snapshot& WithSnapshotStatus(const char* value) { SetSnapshotStatus(value); return *this;}

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline const Aws::String& GetSnapshotSource() const{ return m_snapshotSource; }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline void SetSnapshotSource(const Aws::String& value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource = value; }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline void SetSnapshotSource(Aws::String&& value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource = value; }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline void SetSnapshotSource(const char* value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource.assign(value); }

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline Snapshot& WithSnapshotSource(const Aws::String& value) { SetSnapshotSource(value); return *this;}

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline Snapshot& WithSnapshotSource(Aws::String&& value) { SetSnapshotSource(value); return *this;}

    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline Snapshot& WithSnapshotSource(const char* value) { SetSnapshotSource(value); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline Snapshot& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline Snapshot& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for the source cache
     * cluster.</p> <p>Valid node types are as follows:</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline Snapshot& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline Snapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline Snapshot& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cache cluster.</p>
     */
    inline Snapshot& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline Snapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline Snapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the cache engine version that is used by the source cache
     * cluster.</p>
     */
    inline Snapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The number of cache nodes in the source cache cluster.</p> <p>For clusters
     * running Redis, this value must be 1. For clusters running Memcached, this value
     * must be between 1 and 20.</p>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }

    /**
     * <p>The number of cache nodes in the source cache cluster.</p> <p>For clusters
     * running Redis, this value must be 1. For clusters running Memcached, this value
     * must be between 1 and 20.</p>
     */
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }

    /**
     * <p>The number of cache nodes in the source cache cluster.</p> <p>For clusters
     * running Redis, this value must be 1. For clusters running Memcached, this value
     * must be between 1 and 20.</p>
     */
    inline Snapshot& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const{ return m_preferredAvailabilityZone; }

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline void SetPreferredAvailabilityZone(const Aws::String& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline void SetPreferredAvailabilityZone(Aws::String&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline void SetPreferredAvailabilityZone(const char* value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone.assign(value); }

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline Snapshot& WithPreferredAvailabilityZone(const Aws::String& value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline Snapshot& WithPreferredAvailabilityZone(Aws::String&& value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the source cache cluster is
     * located.</p>
     */
    inline Snapshot& WithPreferredAvailabilityZone(const char* value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The date and time when the source cache cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheClusterCreateTime() const{ return m_cacheClusterCreateTime; }

    /**
     * <p>The date and time when the source cache cluster was created.</p>
     */
    inline void SetCacheClusterCreateTime(const Aws::Utils::DateTime& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = value; }

    /**
     * <p>The date and time when the source cache cluster was created.</p>
     */
    inline void SetCacheClusterCreateTime(Aws::Utils::DateTime&& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = value; }

    /**
     * <p>The date and time when the source cache cluster was created.</p>
     */
    inline Snapshot& WithCacheClusterCreateTime(const Aws::Utils::DateTime& value) { SetCacheClusterCreateTime(value); return *this;}

    /**
     * <p>The date and time when the source cache cluster was created.</p>
     */
    inline Snapshot& WithCacheClusterCreateTime(Aws::Utils::DateTime&& value) { SetCacheClusterCreateTime(value); return *this;}

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
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

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
    inline Snapshot& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

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
    inline Snapshot& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

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
    inline Snapshot& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline Snapshot& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline Snapshot& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cache cluster
     * for publishing notifications.</p>
     */
    inline Snapshot& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    /**
     * <p>The port number used by each cache nodes in the source cache cluster.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number used by each cache nodes in the source cache cluster.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number used by each cache nodes in the source cache cluster.</p>
     */
    inline Snapshot& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline Snapshot& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline Snapshot& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The cache parameter group that is associated with the source cache
     * cluster.</p>
     */
    inline Snapshot& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline Snapshot& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline Snapshot& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group associated with the source cache
     * cluster.</p>
     */
    inline Snapshot& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline Snapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline Snapshot& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cache cluster.</p>
     */
    inline Snapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline Snapshot& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>For an automatic snapshot, the number of days for which ElastiCache retains
     * the snapshot before deleting it.</p> <p>For manual snapshots, this field
     * reflects the <code>SnapshotRetentionLimit</code> for the source cache cluster
     * when the snapshot was created. This field is otherwise ignored: Manual snapshots
     * do not expire, and can only be deleted using the <code>DeleteSnapshot</code>
     * operation. </p> <p> <b>Important</b> If the value of SnapshotRetentionLimit is
     * set to zero (0), backups are turned off.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>For an automatic snapshot, the number of days for which ElastiCache retains
     * the snapshot before deleting it.</p> <p>For manual snapshots, this field
     * reflects the <code>SnapshotRetentionLimit</code> for the source cache cluster
     * when the snapshot was created. This field is otherwise ignored: Manual snapshots
     * do not expire, and can only be deleted using the <code>DeleteSnapshot</code>
     * operation. </p> <p> <b>Important</b> If the value of SnapshotRetentionLimit is
     * set to zero (0), backups are turned off.</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>For an automatic snapshot, the number of days for which ElastiCache retains
     * the snapshot before deleting it.</p> <p>For manual snapshots, this field
     * reflects the <code>SnapshotRetentionLimit</code> for the source cache cluster
     * when the snapshot was created. This field is otherwise ignored: Manual snapshots
     * do not expire, and can only be deleted using the <code>DeleteSnapshot</code>
     * operation. </p> <p> <b>Important</b> If the value of SnapshotRetentionLimit is
     * set to zero (0), backups are turned off.</p>
     */
    inline Snapshot& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline Snapshot& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline Snapshot& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cache cluster.</p>
     */
    inline Snapshot& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The number of node groups (shards) in this snapshot. When restoring from a
     * snapshot, the number of node groups (shards) in the snapshot and in the restored
     * replication group must be the same.</p>
     */
    inline int GetNumNodeGroups() const{ return m_numNodeGroups; }

    /**
     * <p>The number of node groups (shards) in this snapshot. When restoring from a
     * snapshot, the number of node groups (shards) in the snapshot and in the restored
     * replication group must be the same.</p>
     */
    inline void SetNumNodeGroups(int value) { m_numNodeGroupsHasBeenSet = true; m_numNodeGroups = value; }

    /**
     * <p>The number of node groups (shards) in this snapshot. When restoring from a
     * snapshot, the number of node groups (shards) in the snapshot and in the restored
     * replication group must be the same.</p>
     */
    inline Snapshot& WithNumNodeGroups(int value) { SetNumNodeGroups(value); return *this;}

    /**
     * <p>Indicates the status of Multi-AZ for the source replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline const AutomaticFailoverStatus& GetAutomaticFailover() const{ return m_automaticFailover; }

    /**
     * <p>Indicates the status of Multi-AZ for the source replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline void SetAutomaticFailover(const AutomaticFailoverStatus& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }

    /**
     * <p>Indicates the status of Multi-AZ for the source replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline void SetAutomaticFailover(AutomaticFailoverStatus&& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }

    /**
     * <p>Indicates the status of Multi-AZ for the source replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline Snapshot& WithAutomaticFailover(const AutomaticFailoverStatus& value) { SetAutomaticFailover(value); return *this;}

    /**
     * <p>Indicates the status of Multi-AZ for the source replication group.</p> <note>
     * <p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>
     * <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis (cluster mode
     * disabled):T1 and T2 cache node types.</p> <p>Redis (cluster mode enabled): T1
     * node types.</p> </li> </ul> </note>
     */
    inline Snapshot& WithAutomaticFailover(AutomaticFailoverStatus&& value) { SetAutomaticFailover(value); return *this;}

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline const Aws::Vector<NodeSnapshot>& GetNodeSnapshots() const{ return m_nodeSnapshots; }

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline void SetNodeSnapshots(const Aws::Vector<NodeSnapshot>& value) { m_nodeSnapshotsHasBeenSet = true; m_nodeSnapshots = value; }

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline void SetNodeSnapshots(Aws::Vector<NodeSnapshot>&& value) { m_nodeSnapshotsHasBeenSet = true; m_nodeSnapshots = value; }

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline Snapshot& WithNodeSnapshots(const Aws::Vector<NodeSnapshot>& value) { SetNodeSnapshots(value); return *this;}

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline Snapshot& WithNodeSnapshots(Aws::Vector<NodeSnapshot>&& value) { SetNodeSnapshots(value); return *this;}

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline Snapshot& AddNodeSnapshots(const NodeSnapshot& value) { m_nodeSnapshotsHasBeenSet = true; m_nodeSnapshots.push_back(value); return *this; }

    /**
     * <p>A list of the cache nodes in the source cache cluster.</p>
     */
    inline Snapshot& AddNodeSnapshots(NodeSnapshot&& value) { m_nodeSnapshotsHasBeenSet = true; m_nodeSnapshots.push_back(value); return *this; }

  private:
    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet;
    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;
    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet;
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    Aws::String m_snapshotStatus;
    bool m_snapshotStatusHasBeenSet;
    Aws::String m_snapshotSource;
    bool m_snapshotSourceHasBeenSet;
    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet;
    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet;
    Aws::Utils::DateTime m_cacheClusterCreateTime;
    bool m_cacheClusterCreateTimeHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;
    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;
    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;
    int m_numNodeGroups;
    bool m_numNodeGroupsHasBeenSet;
    AutomaticFailoverStatus m_automaticFailover;
    bool m_automaticFailoverHasBeenSet;
    Aws::Vector<NodeSnapshot> m_nodeSnapshots;
    bool m_nodeSnapshotsHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
