/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class BatchApplyUpdateActionRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API BatchApplyUpdateActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchApplyUpdateAction"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The replication group IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroupIds() const { return m_replicationGroupIds; }
    inline bool ReplicationGroupIdsHasBeenSet() const { return m_replicationGroupIdsHasBeenSet; }
    template<typename ReplicationGroupIdsT = Aws::Vector<Aws::String>>
    void SetReplicationGroupIds(ReplicationGroupIdsT&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = std::forward<ReplicationGroupIdsT>(value); }
    template<typename ReplicationGroupIdsT = Aws::Vector<Aws::String>>
    BatchApplyUpdateActionRequest& WithReplicationGroupIds(ReplicationGroupIdsT&& value) { SetReplicationGroupIds(std::forward<ReplicationGroupIdsT>(value)); return *this;}
    template<typename ReplicationGroupIdsT = Aws::String>
    BatchApplyUpdateActionRequest& AddReplicationGroupIds(ReplicationGroupIdsT&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.emplace_back(std::forward<ReplicationGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cache cluster IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheClusterIds() const { return m_cacheClusterIds; }
    inline bool CacheClusterIdsHasBeenSet() const { return m_cacheClusterIdsHasBeenSet; }
    template<typename CacheClusterIdsT = Aws::Vector<Aws::String>>
    void SetCacheClusterIds(CacheClusterIdsT&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds = std::forward<CacheClusterIdsT>(value); }
    template<typename CacheClusterIdsT = Aws::Vector<Aws::String>>
    BatchApplyUpdateActionRequest& WithCacheClusterIds(CacheClusterIdsT&& value) { SetCacheClusterIds(std::forward<CacheClusterIdsT>(value)); return *this;}
    template<typename CacheClusterIdsT = Aws::String>
    BatchApplyUpdateActionRequest& AddCacheClusterIds(CacheClusterIdsT&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.emplace_back(std::forward<CacheClusterIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    BatchApplyUpdateActionRequest& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_replicationGroupIds;
    bool m_replicationGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheClusterIds;
    bool m_cacheClusterIdsHasBeenSet = false;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
