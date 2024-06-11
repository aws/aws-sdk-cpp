/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NodeSnapshot
  {
  public:
    AWS_ELASTICACHE_API NodeSnapshot();
    AWS_ELASTICACHE_API NodeSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline NodeSnapshot& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline NodeSnapshot& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline NodeSnapshot& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }
    inline NodeSnapshot& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}
    inline NodeSnapshot& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}
    inline NodeSnapshot& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline const Aws::String& GetCacheNodeId() const{ return m_cacheNodeId; }
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }
    inline void SetCacheNodeId(const Aws::String& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = value; }
    inline void SetCacheNodeId(Aws::String&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::move(value); }
    inline void SetCacheNodeId(const char* value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId.assign(value); }
    inline NodeSnapshot& WithCacheNodeId(const Aws::String& value) { SetCacheNodeId(value); return *this;}
    inline NodeSnapshot& WithCacheNodeId(Aws::String&& value) { SetCacheNodeId(std::move(value)); return *this;}
    inline NodeSnapshot& WithCacheNodeId(const char* value) { SetCacheNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline const NodeGroupConfiguration& GetNodeGroupConfiguration() const{ return m_nodeGroupConfiguration; }
    inline bool NodeGroupConfigurationHasBeenSet() const { return m_nodeGroupConfigurationHasBeenSet; }
    inline void SetNodeGroupConfiguration(const NodeGroupConfiguration& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = value; }
    inline void SetNodeGroupConfiguration(NodeGroupConfiguration&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = std::move(value); }
    inline NodeSnapshot& WithNodeGroupConfiguration(const NodeGroupConfiguration& value) { SetNodeGroupConfiguration(value); return *this;}
    inline NodeSnapshot& WithNodeGroupConfiguration(NodeGroupConfiguration&& value) { SetNodeGroupConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline const Aws::String& GetCacheSize() const{ return m_cacheSize; }
    inline bool CacheSizeHasBeenSet() const { return m_cacheSizeHasBeenSet; }
    inline void SetCacheSize(const Aws::String& value) { m_cacheSizeHasBeenSet = true; m_cacheSize = value; }
    inline void SetCacheSize(Aws::String&& value) { m_cacheSizeHasBeenSet = true; m_cacheSize = std::move(value); }
    inline void SetCacheSize(const char* value) { m_cacheSizeHasBeenSet = true; m_cacheSize.assign(value); }
    inline NodeSnapshot& WithCacheSize(const Aws::String& value) { SetCacheSize(value); return *this;}
    inline NodeSnapshot& WithCacheSize(Aws::String&& value) { SetCacheSize(std::move(value)); return *this;}
    inline NodeSnapshot& WithCacheSize(const char* value) { SetCacheSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheNodeCreateTime() const{ return m_cacheNodeCreateTime; }
    inline bool CacheNodeCreateTimeHasBeenSet() const { return m_cacheNodeCreateTimeHasBeenSet; }
    inline void SetCacheNodeCreateTime(const Aws::Utils::DateTime& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = value; }
    inline void SetCacheNodeCreateTime(Aws::Utils::DateTime&& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = std::move(value); }
    inline NodeSnapshot& WithCacheNodeCreateTime(const Aws::Utils::DateTime& value) { SetCacheNodeCreateTime(value); return *this;}
    inline NodeSnapshot& WithCacheNodeCreateTime(Aws::Utils::DateTime&& value) { SetCacheNodeCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline NodeSnapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}
    inline NodeSnapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::String m_cacheNodeId;
    bool m_cacheNodeIdHasBeenSet = false;

    NodeGroupConfiguration m_nodeGroupConfiguration;
    bool m_nodeGroupConfigurationHasBeenSet = false;

    Aws::String m_cacheSize;
    bool m_cacheSizeHasBeenSet = false;

    Aws::Utils::DateTime m_cacheNodeCreateTime;
    bool m_cacheNodeCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
