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
    AWS_ELASTICACHE_API NodeSnapshot() = default;
    AWS_ELASTICACHE_API NodeSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API NodeSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the source cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    NodeSnapshot& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the source node group (shard).</p>
     */
    inline const Aws::String& GetNodeGroupId() const { return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    template<typename NodeGroupIdT = Aws::String>
    void SetNodeGroupId(NodeGroupIdT&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::forward<NodeGroupIdT>(value); }
    template<typename NodeGroupIdT = Aws::String>
    NodeSnapshot& WithNodeGroupId(NodeGroupIdT&& value) { SetNodeGroupId(std::forward<NodeGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node identifier for the node in the source cluster.</p>
     */
    inline const Aws::String& GetCacheNodeId() const { return m_cacheNodeId; }
    inline bool CacheNodeIdHasBeenSet() const { return m_cacheNodeIdHasBeenSet; }
    template<typename CacheNodeIdT = Aws::String>
    void SetCacheNodeId(CacheNodeIdT&& value) { m_cacheNodeIdHasBeenSet = true; m_cacheNodeId = std::forward<CacheNodeIdT>(value); }
    template<typename CacheNodeIdT = Aws::String>
    NodeSnapshot& WithCacheNodeId(CacheNodeIdT&& value) { SetCacheNodeId(std::forward<CacheNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the source node group (shard).</p>
     */
    inline const NodeGroupConfiguration& GetNodeGroupConfiguration() const { return m_nodeGroupConfiguration; }
    inline bool NodeGroupConfigurationHasBeenSet() const { return m_nodeGroupConfigurationHasBeenSet; }
    template<typename NodeGroupConfigurationT = NodeGroupConfiguration>
    void SetNodeGroupConfiguration(NodeGroupConfigurationT&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = std::forward<NodeGroupConfigurationT>(value); }
    template<typename NodeGroupConfigurationT = NodeGroupConfiguration>
    NodeSnapshot& WithNodeGroupConfiguration(NodeGroupConfigurationT&& value) { SetNodeGroupConfiguration(std::forward<NodeGroupConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the cache on the source cache node.</p>
     */
    inline const Aws::String& GetCacheSize() const { return m_cacheSize; }
    inline bool CacheSizeHasBeenSet() const { return m_cacheSizeHasBeenSet; }
    template<typename CacheSizeT = Aws::String>
    void SetCacheSize(CacheSizeT&& value) { m_cacheSizeHasBeenSet = true; m_cacheSize = std::forward<CacheSizeT>(value); }
    template<typename CacheSizeT = Aws::String>
    NodeSnapshot& WithCacheSize(CacheSizeT&& value) { SetCacheSize(std::forward<CacheSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the cache node was created in the source cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheNodeCreateTime() const { return m_cacheNodeCreateTime; }
    inline bool CacheNodeCreateTimeHasBeenSet() const { return m_cacheNodeCreateTimeHasBeenSet; }
    template<typename CacheNodeCreateTimeT = Aws::Utils::DateTime>
    void SetCacheNodeCreateTime(CacheNodeCreateTimeT&& value) { m_cacheNodeCreateTimeHasBeenSet = true; m_cacheNodeCreateTime = std::forward<CacheNodeCreateTimeT>(value); }
    template<typename CacheNodeCreateTimeT = Aws::Utils::DateTime>
    NodeSnapshot& WithCacheNodeCreateTime(CacheNodeCreateTimeT&& value) { SetCacheNodeCreateTime(std::forward<CacheNodeCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the source node's metadata and cache data set was
     * obtained for the snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value); }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    NodeSnapshot& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) { SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_cacheNodeCreateTime{};
    bool m_cacheNodeCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime{};
    bool m_snapshotCreateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
