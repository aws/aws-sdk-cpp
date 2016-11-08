/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>RebootCacheCluster</code> operation.</p>
   */
  class AWS_ELASTICACHE_API RebootCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    RebootCacheClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline RebootCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline RebootCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline RebootCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToReboot() const{ return m_cacheNodeIdsToReboot; }

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline void SetCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = value; }

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline void SetCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot = value; }

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline RebootCacheClusterRequest& WithCacheNodeIdsToReboot(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToReboot(value); return *this;}

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline RebootCacheClusterRequest& WithCacheNodeIdsToReboot(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToReboot(value); return *this;}

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline RebootCacheClusterRequest& AddCacheNodeIdsToReboot(const Aws::String& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline RebootCacheClusterRequest& AddCacheNodeIdsToReboot(Aws::String&& value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }

    /**
     * <p>A list of cache node IDs to reboot. A node ID is a numeric identifier (0001,
     * 0002, etc.). To reboot an entire cache cluster, specify all of the cache node
     * IDs.</p>
     */
    inline RebootCacheClusterRequest& AddCacheNodeIdsToReboot(const char* value) { m_cacheNodeIdsToRebootHasBeenSet = true; m_cacheNodeIdsToReboot.push_back(value); return *this; }

  private:
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    Aws::Vector<Aws::String> m_cacheNodeIdsToReboot;
    bool m_cacheNodeIdsToRebootHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
