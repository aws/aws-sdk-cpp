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
   * <p>Represents the input of a <code>DeleteCacheCluster</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class DeleteCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteCacheClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCacheCluster"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The cluster identifier for the cluster to be deleted. This parameter is not
     * case sensitive.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    DeleteCacheClusterRequest& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of a final cluster snapshot. This is the unique name
     * that identifies the snapshot. ElastiCache creates the snapshot, and then deletes
     * the cluster immediately afterward.</p>
     */
    inline const Aws::String& GetFinalSnapshotIdentifier() const { return m_finalSnapshotIdentifier; }
    inline bool FinalSnapshotIdentifierHasBeenSet() const { return m_finalSnapshotIdentifierHasBeenSet; }
    template<typename FinalSnapshotIdentifierT = Aws::String>
    void SetFinalSnapshotIdentifier(FinalSnapshotIdentifierT&& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = std::forward<FinalSnapshotIdentifierT>(value); }
    template<typename FinalSnapshotIdentifierT = Aws::String>
    DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(FinalSnapshotIdentifierT&& value) { SetFinalSnapshotIdentifier(std::forward<FinalSnapshotIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_finalSnapshotIdentifier;
    bool m_finalSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
