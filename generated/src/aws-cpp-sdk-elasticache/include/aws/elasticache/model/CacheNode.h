/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/Endpoint.h>
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
   * <p>Represents an individual cache node within a cluster. Each cache node runs
   * its own instance of the cluster's protocol-compliant caching software - either
   * Memcached, Valkey or Redis OSS.</p> <p>The following node types are supported by
   * ElastiCache. Generally speaking, the current generation types provide more
   * memory and computational power at lower cost when compared to their equivalent
   * previous generation counterparts.</p> <ul> <li> <p>General purpose:</p> <ul>
   * <li> <p>Current generation: </p> <p> <b>M7g node types</b>:
   * <code>cache.m7g.large</code>, <code>cache.m7g.xlarge</code>,
   * <code>cache.m7g.2xlarge</code>, <code>cache.m7g.4xlarge</code>,
   * <code>cache.m7g.8xlarge</code>, <code>cache.m7g.12xlarge</code>,
   * <code>cache.m7g.16xlarge</code> </p>  <p>For region availability, see <a
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
   * version 2.8.22 and later.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CacheNode">AWS
   * API Reference</a></p>
   */
  class CacheNode
  {
  public:
    AWS_ELASTICACHE_API CacheNode();
    AWS_ELASTICACHE_API CacheNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CacheNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The cache node identifier. A node ID is a numeric identifier (0001, 0002,
     * etc.). The combination of cluster ID and node ID uniquely identifies every cache
     * node used in a customer's Amazon account.</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::move(value); }
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }
    inline CacheNode& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}
    inline CacheNode& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}
    inline CacheNode& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this cache node, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>rebooting</code>, or
     * <code>deleting</code>.</p>
     */
    inline const Aws::String& GetCacheNodeStatus() const{ return m_cacheNodeStatus; }
    inline bool CacheNodeStatusHasBeenSet() const { return m_cacheNodeStatusHasBeenSet; }
    inline void SetCacheNodeStatus(const Aws::String& value) { m_cacheNodeStatusHasBeenSet = true; m_cacheNodeStatus = value; }
    inline void SetCacheNodeStatus(Aws::String&& value) { m_cacheNodeStatusHasBeenSet = true; m_cacheNodeStatus = std::move(value); }
    inline void SetCacheNodeStatus(const char* value) { m_cacheNodeStatusHasBeenSet = true; m_cacheNodeStatus.assign(value); }
    inline CacheNode& WithCacheNodeStatus(const Aws::String& value) { SetCacheNodeStatus(value); return *this;}
    inline CacheNode& WithCacheNodeStatus(Aws::String&& value) { SetCacheNodeStatus(std::move(value)); return *this;}
    inline CacheNode& WithCacheNodeStatus(const char* value) { SetCacheNodeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cache node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheNodeCreateTime() const{ return m_cacheNodeCreateTime; }
    inline bool CacheNodeCreateTimeHasBeenSet() const { return m_cacheNodeCreateTimeHasBeenSet; }
    inline void SetCacheNodeCreateTime(const Aws::Utils::DateTime& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = value; }
    inline void SetCacheNodeCreateTime(Aws::Utils::DateTime&& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = std::move(value); }
    inline CacheNode& WithCacheNodeCreateTime(const Aws::Utils::DateTime& value) { SetCacheNodeCreateTime(value); return *this;}
    inline CacheNode& WithCacheNodeCreateTime(Aws::Utils::DateTime&& value) { SetCacheNodeCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname for connecting to this cache node.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline CacheNode& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}
    inline CacheNode& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter group applied to this cache node.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const{ return m_parameterGroupStatus; }
    inline bool ParameterGroupStatusHasBeenSet() const { return m_parameterGroupStatusHasBeenSet; }
    inline void SetParameterGroupStatus(const Aws::String& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = value; }
    inline void SetParameterGroupStatus(Aws::String&& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = std::move(value); }
    inline void SetParameterGroupStatus(const char* value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus.assign(value); }
    inline CacheNode& WithParameterGroupStatus(const Aws::String& value) { SetParameterGroupStatus(value); return *this;}
    inline CacheNode& WithParameterGroupStatus(Aws::String&& value) { SetParameterGroupStatus(std::move(value)); return *this;}
    inline CacheNode& WithParameterGroupStatus(const char* value) { SetParameterGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the primary node to which this read replica node is synchronized.
     * If this field is empty, this node is not associated with a primary cluster.</p>
     */
    inline const Aws::String& GetSourceCacheNodeId() const{ return m_sourceCacheNodeId; }
    inline bool SourceCacheNodeIdHasBeenSet() const { return m_sourceCacheNodeIdHasBeenSet; }
    inline void SetSourceCacheNodeId(const Aws::String& value) { m_sourceCacheNodeIdHasBeenSet = true; m_sourceCacheNodeId = value; }
    inline void SetSourceCacheNodeId(Aws::String&& value) { m_sourceCacheNodeIdHasBeenSet = true; m_sourceCacheNodeId = std::move(value); }
    inline void SetSourceCacheNodeId(const char* value) { m_sourceCacheNodeIdHasBeenSet = true; m_sourceCacheNodeId.assign(value); }
    inline CacheNode& WithSourceCacheNodeId(const Aws::String& value) { SetSourceCacheNodeId(value); return *this;}
    inline CacheNode& WithSourceCacheNodeId(Aws::String&& value) { SetSourceCacheNodeId(std::move(value)); return *this;}
    inline CacheNode& WithSourceCacheNodeId(const char* value) { SetSourceCacheNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where this node was created and now resides.</p>
     */
    inline const Aws::String& GetCustomerAvailabilityZone() const{ return m_customerAvailabilityZone; }
    inline bool CustomerAvailabilityZoneHasBeenSet() const { return m_customerAvailabilityZoneHasBeenSet; }
    inline void SetCustomerAvailabilityZone(const Aws::String& value) { m_customerAvailabilityZoneHasBeenSet = true; m_customerAvailabilityZone = value; }
    inline void SetCustomerAvailabilityZone(Aws::String&& value) { m_customerAvailabilityZoneHasBeenSet = true; m_customerAvailabilityZone = std::move(value); }
    inline void SetCustomerAvailabilityZone(const char* value) { m_customerAvailabilityZoneHasBeenSet = true; m_customerAvailabilityZone.assign(value); }
    inline CacheNode& WithCustomerAvailabilityZone(const Aws::String& value) { SetCustomerAvailabilityZone(value); return *this;}
    inline CacheNode& WithCustomerAvailabilityZone(Aws::String&& value) { SetCustomerAvailabilityZone(std::move(value)); return *this;}
    inline CacheNode& WithCustomerAvailabilityZone(const char* value) { SetCustomerAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer outpost ARN of the cache node.</p>
     */
    inline const Aws::String& GetCustomerOutpostArn() const{ return m_customerOutpostArn; }
    inline bool CustomerOutpostArnHasBeenSet() const { return m_customerOutpostArnHasBeenSet; }
    inline void SetCustomerOutpostArn(const Aws::String& value) { m_customerOutpostArnHasBeenSet = true; m_customerOutpostArn = value; }
    inline void SetCustomerOutpostArn(Aws::String&& value) { m_customerOutpostArnHasBeenSet = true; m_customerOutpostArn = std::move(value); }
    inline void SetCustomerOutpostArn(const char* value) { m_customerOutpostArnHasBeenSet = true; m_customerOutpostArn.assign(value); }
    inline CacheNode& WithCustomerOutpostArn(const Aws::String& value) { SetCustomerOutpostArn(value); return *this;}
    inline CacheNode& WithCustomerOutpostArn(Aws::String&& value) { SetCustomerOutpostArn(std::move(value)); return *this;}
    inline CacheNode& WithCustomerOutpostArn(const char* value) { SetCustomerOutpostArn(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet = false;

    Aws::String m_cacheNodeStatus;
    bool m_cacheNodeStatusHasBeenSet = false;

    Aws::Utils::DateTime m_cacheNodeCreateTime;
    bool m_cacheNodeCreateTimeHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_parameterGroupStatus;
    bool m_parameterGroupStatusHasBeenSet = false;

    Aws::String m_sourceCacheNodeId;
    bool m_sourceCacheNodeIdHasBeenSet = false;

    Aws::String m_customerAvailabilityZone;
    bool m_customerAvailabilityZoneHasBeenSet = false;

    Aws::String m_customerOutpostArn;
    bool m_customerOutpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
