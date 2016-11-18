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

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteCacheCluster</code> operation.</p>
   */
  class AWS_ELASTICACHE_API DeleteCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    DeleteCacheClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline DeleteCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline DeleteCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster identifier for the cluster to be deleted. This parameter is
     * not case sensitive.</p>
     */
    inline DeleteCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline const Aws::String& GetFinalSnapshotIdentifier() const{ return m_finalSnapshotIdentifier; }

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline void SetFinalSnapshotIdentifier(const Aws::String& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = value; }

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline void SetFinalSnapshotIdentifier(Aws::String&& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = value; }

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline void SetFinalSnapshotIdentifier(const char* value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier.assign(value); }

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(const Aws::String& value) { SetFinalSnapshotIdentifier(value); return *this;}

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(Aws::String&& value) { SetFinalSnapshotIdentifier(value); return *this;}

    /**
     * <p>The user-supplied name of a final cache cluster snapshot. This is the unique
     * name that identifies the snapshot. ElastiCache creates the snapshot, and then
     * deletes the cache cluster immediately afterward.</p>
     */
    inline DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(const char* value) { SetFinalSnapshotIdentifier(value); return *this;}

  private:
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    Aws::String m_finalSnapshotIdentifier;
    bool m_finalSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
