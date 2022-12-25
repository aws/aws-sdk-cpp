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
   */
  class DecreaseNodeGroupsInGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DecreaseNodeGroupsInGlobalReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DecreaseNodeGroupsInGlobalReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global datastore</p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global datastore</p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration</p>
     */
    inline int GetNodeGroupCount() const{ return m_nodeGroupCount; }

    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration</p>
     */
    inline bool NodeGroupCountHasBeenSet() const { return m_nodeGroupCountHasBeenSet; }

    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration</p>
     */
    inline void SetNodeGroupCount(int value) { m_nodeGroupCountHasBeenSet = true; m_nodeGroupCount = value; }

    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration</p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithNodeGroupCount(int value) { SetNodeGroupCount(value); return *this;}


    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalNodeGroupsToRemove() const{ return m_globalNodeGroupsToRemove; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline bool GlobalNodeGroupsToRemoveHasBeenSet() const { return m_globalNodeGroupsToRemoveHasBeenSet; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline void SetGlobalNodeGroupsToRemove(const Aws::Vector<Aws::String>& value) { m_globalNodeGroupsToRemoveHasBeenSet = true; m_globalNodeGroupsToRemove = value; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline void SetGlobalNodeGroupsToRemove(Aws::Vector<Aws::String>&& value) { m_globalNodeGroupsToRemoveHasBeenSet = true; m_globalNodeGroupsToRemove = std::move(value); }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalNodeGroupsToRemove(const Aws::Vector<Aws::String>& value) { SetGlobalNodeGroupsToRemove(value); return *this;}

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalNodeGroupsToRemove(Aws::Vector<Aws::String>&& value) { SetGlobalNodeGroupsToRemove(std::move(value)); return *this;}

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& AddGlobalNodeGroupsToRemove(const Aws::String& value) { m_globalNodeGroupsToRemoveHasBeenSet = true; m_globalNodeGroupsToRemove.push_back(value); return *this; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& AddGlobalNodeGroupsToRemove(Aws::String&& value) { m_globalNodeGroupsToRemoveHasBeenSet = true; m_globalNodeGroupsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRemove is a list of NodeGroupIds to remove from the cluster.
     * ElastiCache for Redis will attempt to remove all node groups listed by
     * GlobalNodeGroupsToRemove from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& AddGlobalNodeGroupsToRemove(const char* value) { m_globalNodeGroupsToRemoveHasBeenSet = true; m_globalNodeGroupsToRemove.push_back(value); return *this; }


    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalNodeGroupsToRetain() const{ return m_globalNodeGroupsToRetain; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline bool GlobalNodeGroupsToRetainHasBeenSet() const { return m_globalNodeGroupsToRetainHasBeenSet; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline void SetGlobalNodeGroupsToRetain(const Aws::Vector<Aws::String>& value) { m_globalNodeGroupsToRetainHasBeenSet = true; m_globalNodeGroupsToRetain = value; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline void SetGlobalNodeGroupsToRetain(Aws::Vector<Aws::String>&& value) { m_globalNodeGroupsToRetainHasBeenSet = true; m_globalNodeGroupsToRetain = std::move(value); }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalNodeGroupsToRetain(const Aws::Vector<Aws::String>& value) { SetGlobalNodeGroupsToRetain(value); return *this;}

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalNodeGroupsToRetain(Aws::Vector<Aws::String>&& value) { SetGlobalNodeGroupsToRetain(std::move(value)); return *this;}

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& AddGlobalNodeGroupsToRetain(const Aws::String& value) { m_globalNodeGroupsToRetainHasBeenSet = true; m_globalNodeGroupsToRetain.push_back(value); return *this; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& AddGlobalNodeGroupsToRetain(Aws::String&& value) { m_globalNodeGroupsToRetainHasBeenSet = true; m_globalNodeGroupsToRetain.push_back(std::move(value)); return *this; }

    /**
     * <p>If the value of NodeGroupCount is less than the current number of node groups
     * (shards), then either NodeGroupsToRemove or NodeGroupsToRetain is required.
     * GlobalNodeGroupsToRetain is a list of NodeGroupIds to retain from the cluster.
     * ElastiCache for Redis will attempt to retain all node groups listed by
     * GlobalNodeGroupsToRetain from the cluster. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& AddGlobalNodeGroupsToRetain(const char* value) { m_globalNodeGroupsToRetainHasBeenSet = true; m_globalNodeGroupsToRetain.push_back(value); return *this; }


    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is true. </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is true. </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is true. </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is true. </p>
     */
    inline DecreaseNodeGroupsInGlobalReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    int m_nodeGroupCount;
    bool m_nodeGroupCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_globalNodeGroupsToRemove;
    bool m_globalNodeGroupsToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_globalNodeGroupsToRetain;
    bool m_globalNodeGroupsToRetainHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
