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
#include <aws/elasticache/model/NodeGroupConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents an individual cache node in a snapshot of a cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/NodeSnapshot">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API NodeSnapshot
  {
  public:
    NodeSnapshot();
    NodeSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    NodeSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline NodeSnapshot& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline NodeSnapshot& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline NodeSnapshot& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}


    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::move(value); }

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}

    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}


    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline const NodeGroupConfiguration& GetNodeGroupConfiguration() const{ return m_nodeGroupConfiguration; }

    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline bool NodeGroupConfigurationHasBeenSet() const { return m_nodeGroupConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline void SetNodeGroupConfiguration(const NodeGroupConfiguration& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = value; }

    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline void SetNodeGroupConfiguration(NodeGroupConfiguration&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = std::move(value); }

    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline NodeSnapshot& WithNodeGroupConfiguration(const NodeGroupConfiguration& value) { SetNodeGroupConfiguration(value); return *this;}

    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline NodeSnapshot& WithNodeGroupConfiguration(NodeGroupConfiguration&& value) { SetNodeGroupConfiguration(std::move(value)); return *this;}


    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline const Aws::String& GetCacheSize() const{ return m_cacheSize; }

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline bool CacheSizeHasBeenSet() const { return m_cacheSizeHasBeenSet; }

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline void SetCacheSize(const Aws::String& value) { m_cacheSizeHasBeenSet = true; m_cacheSize = value; }

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline void SetCacheSize(Aws::String&& value) { m_cacheSizeHasBeenSet = true; m_cacheSize = std::move(value); }

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline void SetCacheSize(const char* value) { m_cacheSizeHasBeenSet = true; m_cacheSize.assign(value); }

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline NodeSnapshot& WithCacheSize(const Aws::String& value) { SetCacheSize(value); return *this;}

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline NodeSnapshot& WithCacheSize(Aws::String&& value) { SetCacheSize(std::move(value)); return *this;}

    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline NodeSnapshot& WithCacheSize(const char* value) { SetCacheSize(value); return *this;}


    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheNodeCreateTime() const{ return m_cacheNodeCreateTime; }

    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline bool CacheNodeCreateTimeHasBeenSet() const { return m_cacheNodeCreateTimeHasBeenSet; }

    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline void SetCacheNodeCreateTime(const Aws::Utils::DateTime& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = value; }

    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline void SetCacheNodeCreateTime(Aws::Utils::DateTime&& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = std::move(value); }

    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheNodeCreateTime(const Aws::Utils::DateTime& value) { SetCacheNodeCreateTime(value); return *this;}

    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline NodeSnapshot& WithCacheNodeCreateTime(Aws::Utils::DateTime&& value) { SetCacheNodeCreateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }

    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }

    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline NodeSnapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline NodeSnapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}

  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet;

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet;

    NodeGroupConfiguration m_nodeGroupConfiguration;
    bool m_nodeGroupConfigurationHasBeenSet;

    Aws::String m_cacheSize;
    bool m_cacheSizeHasBeenSet;

    Aws::Utils::DateTime m_cacheNodeCreateTime;
    bool m_cacheNodeCreateTimeHasBeenSet;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
