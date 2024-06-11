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
    AWS_ELASTICACHE_API RebootCacheClusterRequest();

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
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline RebootCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline RebootCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline RebootCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cluster, specify all of the cache node IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToReboot() const{ return m_cacheNodeIdsToReboot; }
    inline bool CacheNodeIdsToRebootHasBeenSet() const { return m_cacheNodeIdsToRebootHasBeenSet; }
    inline void SetCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = value; }
    inline void SetCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = std::move(value); }
    inline RebootCacheClusterRequest& WithCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToReboot(value); return *this;}
    inline RebootCacheClusterRequest& WithCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToReboot(std::move(value)); return *this;}
    inline RebootCacheClusterRequest& AddCacheNodeIdsToReboot(const Aws::String& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }
    inline RebootCacheClusterRequest& AddCacheNodeIdsToReboot(Aws::String&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(std::move(value)); return *this; }
    inline RebootCacheClusterRequest& AddCacheNodeIdsToReboot(const char* value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }
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
