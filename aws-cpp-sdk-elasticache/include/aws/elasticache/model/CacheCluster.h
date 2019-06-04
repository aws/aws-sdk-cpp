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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/PendingModifiedValues.h>
#include <aws/elasticache/model/NotificationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/CacheParameterGroupStatus.h>
#include <aws/elasticache/model/CacheSecurityGroupMembership.h>
#include <aws/elasticache/model/CacheNode.h>
#include <aws/elasticache/model/SecurityGroupMembership.h>
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
  class AWS_ELASTICACHE_API CacheCluster
  {
  public:
    CacheCluster();
    CacheCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    CacheCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline CacheCluster& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline CacheCluster& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>The user-supplied identifier of the cluster. This identifier is a unique key
     * that identifies a cluster.</p>
     */
    inline CacheCluster& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>Represents a Memcached cluster endpoint which, if Automatic Discovery is
     * enabled on the cluster, can be used by an application to connect to any node in
     * the cluster. The configuration endpoint will always have <code>.cfg</code> in
     * it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline const Endpoint& GetConfigurationEndpoint() const{ return m_configurationEndpoint; }

    /**
     * <p>Represents a Memcached cluster endpoint which, if Automatic Discovery is
     * enabled on the cluster, can be used by an application to connect to any node in
     * the cluster. The configuration endpoint will always have <code>.cfg</code> in
     * it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline bool ConfigurationEndpointHasBeenSet() const { return m_configurationEndpointHasBeenSet; }

    /**
     * <p>Represents a Memcached cluster endpoint which, if Automatic Discovery is
     * enabled on the cluster, can be used by an application to connect to any node in
     * the cluster. The configuration endpoint will always have <code>.cfg</code> in
     * it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline void SetConfigurationEndpoint(const Endpoint& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = value; }

    /**
     * <p>Represents a Memcached cluster endpoint which, if Automatic Discovery is
     * enabled on the cluster, can be used by an application to connect to any node in
     * the cluster. The configuration endpoint will always have <code>.cfg</code> in
     * it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline void SetConfigurationEndpoint(Endpoint&& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = std::move(value); }

    /**
     * <p>Represents a Memcached cluster endpoint which, if Automatic Discovery is
     * enabled on the cluster, can be used by an application to connect to any node in
     * the cluster. The configuration endpoint will always have <code>.cfg</code> in
     * it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline CacheCluster& WithConfigurationEndpoint(const Endpoint& value) { SetConfigurationEndpoint(value); return *this;}

    /**
     * <p>Represents a Memcached cluster endpoint which, if Automatic Discovery is
     * enabled on the cluster, can be used by an application to connect to any node in
     * the cluster. The configuration endpoint will always have <code>.cfg</code> in
     * it.</p> <p>Example:
     * <code>mem-3.9dvc4r<u>.cfg</u>.usw2.cache.amazonaws.com:11211</code> </p>
     */
    inline CacheCluster& WithConfigurationEndpoint(Endpoint&& value) { SetConfigurationEndpoint(std::move(value)); return *this;}


    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline const Aws::String& GetClientDownloadLandingPage() const{ return m_clientDownloadLandingPage; }

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline bool ClientDownloadLandingPageHasBeenSet() const { return m_clientDownloadLandingPageHasBeenSet; }

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline void SetClientDownloadLandingPage(const Aws::String& value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage = value; }

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline void SetClientDownloadLandingPage(Aws::String&& value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage = std::move(value); }

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline void SetClientDownloadLandingPage(const char* value) { m_clientDownloadLandingPageHasBeenSet = true; m_clientDownloadLandingPage.assign(value); }

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline CacheCluster& WithClientDownloadLandingPage(const Aws::String& value) { SetClientDownloadLandingPage(value); return *this;}

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline CacheCluster& WithClientDownloadLandingPage(Aws::String&& value) { SetClientDownloadLandingPage(std::move(value)); return *this;}

    /**
     * <p>The URL of the web page where you can download the latest ElastiCache client
     * library.</p>
     */
    inline CacheCluster& WithClientDownloadLandingPage(const char* value) { SetClientDownloadLandingPage(value); return *this;}


    /**
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
    inline CacheCluster& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
    inline CacheCluster& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for the cluster.</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M5 node types:</b> <code>cache.m5.large</code>,
     * <code>cache.m5.xlarge</code>, <code>cache.m5.2xlarge</code>,
     * <code>cache.m5.4xlarge</code>, <code>cache.m5.12xlarge</code>,
     * <code>cache.m5.24xlarge</code> </p> <p> <b>M4 node types:</b>
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
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
    inline CacheCluster& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}


    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline CacheCluster& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline CacheCluster& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * to be used for this cluster.</p>
     */
    inline CacheCluster& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline CacheCluster& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline CacheCluster& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the cache engine that is used in this cluster.</p>
     */
    inline CacheCluster& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline const Aws::String& GetCacheClusterStatus() const{ return m_cacheClusterStatus; }

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline bool CacheClusterStatusHasBeenSet() const { return m_cacheClusterStatusHasBeenSet; }

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline void SetCacheClusterStatus(const Aws::String& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = value; }

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline void SetCacheClusterStatus(Aws::String&& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = std::move(value); }

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline void SetCacheClusterStatus(const char* value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus.assign(value); }

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline CacheCluster& WithCacheClusterStatus(const Aws::String& value) { SetCacheClusterStatus(value); return *this;}

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline CacheCluster& WithCacheClusterStatus(Aws::String&& value) { SetCacheClusterStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of this cluster, one of the following values:
     * <code>available</code>, <code>creating</code>, <code>deleted</code>,
     * <code>deleting</code>, <code>incompatible-network</code>,
     * <code>modifying</code>, <code>rebooting cluster nodes</code>,
     * <code>restore-failed</code>, or <code>snapshotting</code>.</p>
     */
    inline CacheCluster& WithCacheClusterStatus(const char* value) { SetCacheClusterStatus(value); return *this;}


    /**
     * <p>The number of cache nodes in the cluster.</p> <p>For clusters running Redis,
     * this value must be 1. For clusters running Memcached, this value must be between
     * 1 and 20.</p>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }

    /**
     * <p>The number of cache nodes in the cluster.</p> <p>For clusters running Redis,
     * this value must be 1. For clusters running Memcached, this value must be between
     * 1 and 20.</p>
     */
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }

    /**
     * <p>The number of cache nodes in the cluster.</p> <p>For clusters running Redis,
     * this value must be 1. For clusters running Memcached, this value must be between
     * 1 and 20.</p>
     */
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }

    /**
     * <p>The number of cache nodes in the cluster.</p> <p>For clusters running Redis,
     * this value must be 1. For clusters running Memcached, this value must be between
     * 1 and 20.</p>
     */
    inline CacheCluster& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}


    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const{ return m_preferredAvailabilityZone; }

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline void SetPreferredAvailabilityZone(const Aws::String& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline void SetPreferredAvailabilityZone(Aws::String&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::move(value); }

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline void SetPreferredAvailabilityZone(const char* value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone.assign(value); }

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline CacheCluster& WithPreferredAvailabilityZone(const Aws::String& value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline CacheCluster& WithPreferredAvailabilityZone(Aws::String&& value) { SetPreferredAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone in which the cluster is located or
     * "Multiple" if the cache nodes are located in different Availability Zones.</p>
     */
    inline CacheCluster& WithPreferredAvailabilityZone(const char* value) { SetPreferredAvailabilityZone(value); return *this;}


    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheClusterCreateTime() const{ return m_cacheClusterCreateTime; }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline bool CacheClusterCreateTimeHasBeenSet() const { return m_cacheClusterCreateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline void SetCacheClusterCreateTime(const Aws::Utils::DateTime& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = value; }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline void SetCacheClusterCreateTime(Aws::Utils::DateTime&& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = std::move(value); }

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline CacheCluster& WithCacheClusterCreateTime(const Aws::Utils::DateTime& value) { SetCacheClusterCreateTime(value); return *this;}

    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline CacheCluster& WithCacheClusterCreateTime(Aws::Utils::DateTime&& value) { SetCacheClusterCreateTime(std::move(value)); return *this;}


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
    inline CacheCluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

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
    inline CacheCluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

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
    inline CacheCluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    
    inline CacheCluster& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    
    inline CacheCluster& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}


    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline CacheCluster& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Describes a notification topic and its status. Notification topics are used
     * for publishing ElastiCache events to subscribers using Amazon Simple
     * Notification Service (SNS). </p>
     */
    inline CacheCluster& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline const Aws::Vector<CacheSecurityGroupMembership>& GetCacheSecurityGroups() const{ return m_cacheSecurityGroups; }

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline bool CacheSecurityGroupsHasBeenSet() const { return m_cacheSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline void SetCacheSecurityGroups(const Aws::Vector<CacheSecurityGroupMembership>& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups = value; }

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline void SetCacheSecurityGroups(Aws::Vector<CacheSecurityGroupMembership>&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups = std::move(value); }

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline CacheCluster& WithCacheSecurityGroups(const Aws::Vector<CacheSecurityGroupMembership>& value) { SetCacheSecurityGroups(value); return *this;}

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline CacheCluster& WithCacheSecurityGroups(Aws::Vector<CacheSecurityGroupMembership>&& value) { SetCacheSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline CacheCluster& AddCacheSecurityGroups(const CacheSecurityGroupMembership& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of cache security group elements, composed of name and status
     * sub-elements.</p>
     */
    inline CacheCluster& AddCacheSecurityGroups(CacheSecurityGroupMembership&& value) { m_cacheSecurityGroupsHasBeenSet = true; m_cacheSecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline const CacheParameterGroupStatus& GetCacheParameterGroup() const{ return m_cacheParameterGroup; }

    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline bool CacheParameterGroupHasBeenSet() const { return m_cacheParameterGroupHasBeenSet; }

    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroup(const CacheParameterGroupStatus& value) { m_cacheParameterGroupHasBeenSet = true; m_cacheParameterGroup = value; }

    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline void SetCacheParameterGroup(CacheParameterGroupStatus&& value) { m_cacheParameterGroupHasBeenSet = true; m_cacheParameterGroup = std::move(value); }

    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline CacheCluster& WithCacheParameterGroup(const CacheParameterGroupStatus& value) { SetCacheParameterGroup(value); return *this;}

    /**
     * <p>Status of the cache parameter group.</p>
     */
    inline CacheCluster& WithCacheParameterGroup(CacheParameterGroupStatus&& value) { SetCacheParameterGroup(std::move(value)); return *this;}


    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline CacheCluster& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline CacheCluster& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache subnet group associated with the cluster.</p>
     */
    inline CacheCluster& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}


    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline const Aws::Vector<CacheNode>& GetCacheNodes() const{ return m_cacheNodes; }

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline bool CacheNodesHasBeenSet() const { return m_cacheNodesHasBeenSet; }

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline void SetCacheNodes(const Aws::Vector<CacheNode>& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes = value; }

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline void SetCacheNodes(Aws::Vector<CacheNode>&& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes = std::move(value); }

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline CacheCluster& WithCacheNodes(const Aws::Vector<CacheNode>& value) { SetCacheNodes(value); return *this;}

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline CacheCluster& WithCacheNodes(Aws::Vector<CacheNode>&& value) { SetCacheNodes(std::move(value)); return *this;}

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline CacheCluster& AddCacheNodes(const CacheNode& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes.push_back(value); return *this; }

    /**
     * <p>A list of cache nodes that are members of the cluster.</p>
     */
    inline CacheCluster& AddCacheNodes(CacheNode&& value) { m_cacheNodesHasBeenSet = true; m_cacheNodes.push_back(std::move(value)); return *this; }


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
    inline CacheCluster& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline const Aws::Vector<SecurityGroupMembership>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline CacheCluster& WithSecurityGroups(const Aws::Vector<SecurityGroupMembership>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline CacheCluster& WithSecurityGroups(Aws::Vector<SecurityGroupMembership>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline CacheCluster& AddSecurityGroups(const SecurityGroupMembership& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>A list of VPC Security Groups associated with the cluster.</p>
     */
    inline CacheCluster& AddSecurityGroups(SecurityGroupMembership&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline CacheCluster& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline CacheCluster& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The replication group to which this cluster belongs. If this field is empty,
     * the cluster is not associated with any replication group.</p>
     */
    inline CacheCluster& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <important> <p> If the value of
     * SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     * </important>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <important> <p> If the value of
     * SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     * </important>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <important> <p> If the value of
     * SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     * </important>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <important> <p> If the value of
     * SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     * </important>
     */
    inline CacheCluster& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline CacheCluster& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline CacheCluster& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster.</p> <p>Example: <code>05:00-09:00</code> </p>
     */
    inline CacheCluster& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}


    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const{ return m_authTokenEnabled; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline CacheCluster& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}


    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline CacheCluster& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}


    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable at-rest encryption on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }

    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable at-rest encryption on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable at-rest encryption on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }

    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable at-rest encryption on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code> or
     * <code>4.x</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline CacheCluster& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}

  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;

    Endpoint m_configurationEndpoint;
    bool m_configurationEndpointHasBeenSet;

    Aws::String m_clientDownloadLandingPage;
    bool m_clientDownloadLandingPageHasBeenSet;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_cacheClusterStatus;
    bool m_cacheClusterStatusHasBeenSet;

    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet;

    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet;

    Aws::Utils::DateTime m_cacheClusterCreateTime;
    bool m_cacheClusterCreateTimeHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet;

    Aws::Vector<CacheSecurityGroupMembership> m_cacheSecurityGroups;
    bool m_cacheSecurityGroupsHasBeenSet;

    CacheParameterGroupStatus m_cacheParameterGroup;
    bool m_cacheParameterGroupHasBeenSet;

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet;

    Aws::Vector<CacheNode> m_cacheNodes;
    bool m_cacheNodesHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::Vector<SecurityGroupMembership> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;

    bool m_authTokenEnabled;
    bool m_authTokenEnabledHasBeenSet;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet;

    bool m_atRestEncryptionEnabled;
    bool m_atRestEncryptionEnabledHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
