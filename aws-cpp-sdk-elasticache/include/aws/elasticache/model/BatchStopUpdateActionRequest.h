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
  class BatchStopUpdateActionRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API BatchStopUpdateActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchStopUpdateAction"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The replication group IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroupIds() const{ return m_replicationGroupIds; }

    /**
     * <p>The replication group IDs</p>
     */
    inline bool ReplicationGroupIdsHasBeenSet() const { return m_replicationGroupIdsHasBeenSet; }

    /**
     * <p>The replication group IDs</p>
     */
    inline void SetReplicationGroupIds(const Aws::Vector<Aws::String>& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = value; }

    /**
     * <p>The replication group IDs</p>
     */
    inline void SetReplicationGroupIds(Aws::Vector<Aws::String>&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = std::move(value); }

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchStopUpdateActionRequest& WithReplicationGroupIds(const Aws::Vector<Aws::String>& value) { SetReplicationGroupIds(value); return *this;}

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchStopUpdateActionRequest& WithReplicationGroupIds(Aws::Vector<Aws::String>&& value) { SetReplicationGroupIds(std::move(value)); return *this;}

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchStopUpdateActionRequest& AddReplicationGroupIds(const Aws::String& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchStopUpdateActionRequest& AddReplicationGroupIds(Aws::String&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchStopUpdateActionRequest& AddReplicationGroupIds(const char* value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }


    /**
     * <p>The cache cluster IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheClusterIds() const{ return m_cacheClusterIds; }

    /**
     * <p>The cache cluster IDs</p>
     */
    inline bool CacheClusterIdsHasBeenSet() const { return m_cacheClusterIdsHasBeenSet; }

    /**
     * <p>The cache cluster IDs</p>
     */
    inline void SetCacheClusterIds(const Aws::Vector<Aws::String>& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds = value; }

    /**
     * <p>The cache cluster IDs</p>
     */
    inline void SetCacheClusterIds(Aws::Vector<Aws::String>&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds = std::move(value); }

    /**
     * <p>The cache cluster IDs</p>
     */
    inline BatchStopUpdateActionRequest& WithCacheClusterIds(const Aws::Vector<Aws::String>& value) { SetCacheClusterIds(value); return *this;}

    /**
     * <p>The cache cluster IDs</p>
     */
    inline BatchStopUpdateActionRequest& WithCacheClusterIds(Aws::Vector<Aws::String>&& value) { SetCacheClusterIds(std::move(value)); return *this;}

    /**
     * <p>The cache cluster IDs</p>
     */
    inline BatchStopUpdateActionRequest& AddCacheClusterIds(const Aws::String& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.push_back(value); return *this; }

    /**
     * <p>The cache cluster IDs</p>
     */
    inline BatchStopUpdateActionRequest& AddCacheClusterIds(Aws::String&& value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The cache cluster IDs</p>
     */
    inline BatchStopUpdateActionRequest& AddCacheClusterIds(const char* value) { m_cacheClusterIdsHasBeenSet = true; m_cacheClusterIds.push_back(value); return *this; }


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchStopUpdateActionRequest& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchStopUpdateActionRequest& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchStopUpdateActionRequest& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}

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
