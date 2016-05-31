/*
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
#include <aws/elasticache/model/Endpoint.h>

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
   * <p>Represents an individual cache node within a cache cluster. Each cache node
   * runs its own instance of the cluster's protocol-compliant caching software -
   * either Memcached or Redis.</p> <p>Valid node types are as follows:</p> <ul> <li>
   * <p>General purpose:</p> <ul> <li> <p>Current generation:
   * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
   * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
   * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
   * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
   * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
   * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
   * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
   * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
   * <p>Current generation: <code>cache.r3.large</code>,
   * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
   * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
   * <p>Previous generation: <code>cache.m2.xlarge</code>,
   * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
   * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
   * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
   * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
   * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
   * complete listing of cache node types and specifications, see <a
   * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
   * Features and Details</a> and either <a
   * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
   * Node Type-Specific Parameters for Memcached</a> or <a
   * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
   * Node Type-Specific Parameters for Redis</a>.</p>
   */
  class AWS_ELASTICACHE_API CacheNode
  {
  public:
    CacheNode();
    CacheNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline CacheNode& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline CacheNode& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's AWS account.</p>
     */
    inline CacheNode& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The current state of this cache node.</p>
     */
    inline const Aws::String& GetCacheNodeStatus() const{ return m_cacheNodeStatus; }

    /**
     * <p>The current state of this cache node.</p>
     */
    inline void SetCacheNodeStatus(const Aws::String& value) { m_cacheNodeStatusHasBeenSet = true; m_cacheNodeStatus = value; }

    /**
     * <p>The current state of this cache node.</p>
     */
    inline void SetCacheNodeStatus(Aws::String&& value) { m_cacheNodeStatusHasBeenSet = true; m_cacheNodeStatus = value; }

    /**
     * <p>The current state of this cache node.</p>
     */
    inline void SetCacheNodeStatus(const char* value) { m_cacheNodeStatusHasBeenSet = true; m_cacheNodeStatus.assign(value); }

    /**
     * <p>The current state of this cache node.</p>
     */
    inline CacheNode& WithCacheNodeStatus(const Aws::String& value) { SetCacheNodeStatus(value); return *this;}

    /**
     * <p>The current state of this cache node.</p>
     */
    inline CacheNode& WithCacheNodeStatus(Aws::String&& value) { SetCacheNodeStatus(value); return *this;}

    /**
     * <p>The current state of this cache node.</p>
     */
    inline CacheNode& WithCacheNodeStatus(const char* value) { SetCacheNodeStatus(value); return *this;}

    /**
     * <p>The date and time when the cache node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheNodeCreateTime() const{ return m_cacheNodeCreateTime; }

    /**
     * <p>The date and time when the cache node was created.</p>
     */
    inline void SetCacheNodeCreateTime(const Aws::Utils::DateTime& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = value; }

    /**
     * <p>The date and time when the cache node was created.</p>
     */
    inline void SetCacheNodeCreateTime(Aws::Utils::DateTime&& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = value; }

    /**
     * <p>The date and time when the cache node was created.</p>
     */
    inline CacheNode& WithCacheNodeCreateTime(const Aws::Utils::DateTime& value) { SetCacheNodeCreateTime(value); return *this;}

    /**
     * <p>The date and time when the cache node was created.</p>
     */
    inline CacheNode& WithCacheNodeCreateTime(Aws::Utils::DateTime&& value) { SetCacheNodeCreateTime(value); return *this;}

    /**
     * <p>The hostname for connecting to this cache node.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The hostname for connecting to this cache node.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The hostname for connecting to this cache node.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The hostname for connecting to this cache node.</p>
     */
    inline CacheNode& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The hostname for connecting to this cache node.</p>
     */
    inline CacheNode& WithEndpoint(Endpoint&& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const{ return m_parameterGroupStatus; }

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline void SetParameterGroupStatus(const Aws::String& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = value; }

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline void SetParameterGroupStatus(Aws::String&& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = value; }

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline void SetParameterGroupStatus(const char* value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus.assign(value); }

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline CacheNode& WithParameterGroupStatus(const Aws::String& value) { SetParameterGroupStatus(value); return *this;}

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline CacheNode& WithParameterGroupStatus(Aws::String&& value) { SetParameterGroupStatus(value); return *this;}

    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline CacheNode& WithParameterGroupStatus(const char* value) { SetParameterGroupStatus(value); return *this;}

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline const Aws::String& GetSourceCacheNodeId() const{ return m_sourceCacheNodeId; }

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline void SetSourceCacheNodeId(const Aws::String& value) { m_sourceCacheNodeIdHasBeenSet = true; m_sourceCacheNodeId = value; }

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline void SetSourceCacheNodeId(Aws::String&& value) { m_sourceCacheNodeIdHasBeenSet = true; m_sourceCacheNodeId = value; }

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline void SetSourceCacheNodeId(const char* value) { m_sourceCacheNodeIdHasBeenSet = true; m_sourceCacheNodeId.assign(value); }

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline CacheNode& WithSourceCacheNodeId(const Aws::String& value) { SetSourceCacheNodeId(value); return *this;}

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline CacheNode& WithSourceCacheNodeId(Aws::String&& value) { SetSourceCacheNodeId(value); return *this;}

    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, then this node is not associated with a primary cache
     * cluster.</p>
     */
    inline CacheNode& WithSourceCacheNodeId(const char* value) { SetSourceCacheNodeId(value); return *this;}

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline const Aws::String& GetCustomerAvailabilityZone() const{ return m_customerAvailabilityZone; }

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline void SetCustomerAvailabilityZone(const Aws::String& value) { m_customerAvailabilityZoneHasBeenSet = true; m_customerAvailabilityZone = value; }

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline void SetCustomerAvailabilityZone(Aws::String&& value) { m_customerAvailabilityZoneHasBeenSet = true; m_customerAvailabilityZone = value; }

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline void SetCustomerAvailabilityZone(const char* value) { m_customerAvailabilityZoneHasBeenSet = true; m_customerAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline CacheNode& WithCustomerAvailabilityZone(const Aws::String& value) { SetCustomerAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline CacheNode& WithCustomerAvailabilityZone(Aws::String&& value) { SetCustomerAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline CacheNode& WithCustomerAvailabilityZone(const char* value) { SetCustomerAvailabilityZone(value); return *this;}

  private:
    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet;
    Aws::String m_cacheNodeStatus;
    bool m_cacheNodeStatusHasBeenSet;
    Aws::Utils::DateTime m_cacheNodeCreateTime;
    bool m_cacheNodeCreateTimeHasBeenSet;
    Endpoint m_endpoint;
    bool m_endpointHasBeenSet;
    Aws::String m_parameterGroupStatus;
    bool m_parameterGroupStatusHasBeenSet;
    Aws::String m_sourceCacheNodeId;
    bool m_sourceCacheNodeIdHasBeenSet;
    Aws::String m_customerAvailabilityZone;
    bool m_customerAvailabilityZoneHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
