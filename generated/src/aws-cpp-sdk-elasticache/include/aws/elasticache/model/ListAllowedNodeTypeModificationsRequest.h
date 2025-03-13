/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The input parameters for the <code>ListAllowedNodeTypeModifications</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ListAllowedNodeTypeModificationsMessage">AWS
   * API Reference</a></p>
   */
  class ListAllowedNodeTypeModificationsRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAllowedNodeTypeModifications"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the cluster you want to scale up to a larger node instanced type.
     * ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     *  <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * 
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    ListAllowedNodeTypeModificationsRequest& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p>  <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> 
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    ListAllowedNodeTypeModificationsRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
