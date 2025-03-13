/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>RebootCacheCluster</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RebootCacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class RebootCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API RebootCacheClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootCacheCluster"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    RebootCacheClusterRequest& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cluster, specify all of the cache node IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToReboot() const { return m_cacheNodeIdsToReboot; }
    inline bool CacheNodeIdsToRebootHasBeenSet() const { return m_cacheNodeIdsToRebootHasBeenSet; }
    template<typename CacheNodeIdsToRebootT = Aws::Vector<Aws::String>>
    void SetCacheNodeIdsToReboot(CacheNodeIdsToRebootT&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = std::forward<CacheNodeIdsToRebootT>(value); }
    template<typename CacheNodeIdsToRebootT = Aws::Vector<Aws::String>>
    RebootCacheClusterRequest& WithCacheNodeIdsToReboot(CacheNodeIdsToRebootT&& value) { SetCacheNodeIdsToReboot(std::forward<CacheNodeIdsToRebootT>(value)); return *this;}
    template<typename CacheNodeIdsToRebootT = Aws::String>
    RebootCacheClusterRequest& AddCacheNodeIdsToReboot(CacheNodeIdsToRebootT&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.emplace_back(std::forward<CacheNodeIdsToRebootT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheNodeIdsToReboot;
    bool m_cacheNodeIdsToRebootHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
