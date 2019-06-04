/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/ReshardingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input for a
   * <code>ModifyReplicationGroupShardConfiguration</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupShardConfigurationMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ModifyReplicationGroupShardConfigurationRequest : public ElastiCacheRequest
  {
  public:
    ModifyReplicationGroupShardConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationGroupShardConfiguration"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Redis (cluster mode enabled) cluster (replication group) on
     * which the shards are to be configured.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration.</p>
     */
    inline int GetNodeGroupCount() const{ return m_nodeGroupCount; }

    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration.</p>
     */
    inline bool NodeGroupCountHasBeenSet() const { return m_nodeGroupCountHasBeenSet; }

    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration.</p>
     */
    inline void SetNodeGroupCount(int value) { m_nodeGroupCountHasBeenSet = true; m_nodeGroupCount = value; }

    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupCount(int value) { SetNodeGroupCount(value); return *this;}


    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is <code>true</code>.</p>
     * <p>Value: true</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is <code>true</code>.</p>
     * <p>Value: true</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is <code>true</code>.</p>
     * <p>Value: true</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is <code>true</code>.</p>
     * <p>Value: true</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline const Aws::Vector<ReshardingConfiguration>& GetReshardingConfiguration() const{ return m_reshardingConfiguration; }

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline bool ReshardingConfigurationHasBeenSet() const { return m_reshardingConfigurationHasBeenSet; }

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline void SetReshardingConfiguration(const Aws::Vector<ReshardingConfiguration>& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration = value; }

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline void SetReshardingConfiguration(Aws::Vector<ReshardingConfiguration>&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration = std::move(value); }

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithReshardingConfiguration(const Aws::Vector<ReshardingConfiguration>& value) { SetReshardingConfiguration(value); return *this;}

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithReshardingConfiguration(Aws::Vector<ReshardingConfiguration>&& value) { SetReshardingConfiguration(std::move(value)); return *this;}

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddReshardingConfiguration(const ReshardingConfiguration& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration.push_back(value); return *this; }

    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddReshardingConfiguration(ReshardingConfiguration&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeGroupsToRemove() const{ return m_nodeGroupsToRemove; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline bool NodeGroupsToRemoveHasBeenSet() const { return m_nodeGroupsToRemoveHasBeenSet; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline void SetNodeGroupsToRemove(const Aws::Vector<Aws::String>& value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove = value; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline void SetNodeGroupsToRemove(Aws::Vector<Aws::String>&& value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove = std::move(value); }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupsToRemove(const Aws::Vector<Aws::String>& value) { SetNodeGroupsToRemove(value); return *this;}

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupsToRemove(Aws::Vector<Aws::String>&& value) { SetNodeGroupsToRemove(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRemove(const Aws::String& value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove.push_back(value); return *this; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRemove(Aws::String&& value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache for Redis will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRemove(const char* value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove.push_back(value); return *this; }


    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeGroupsToRetain() const{ return m_nodeGroupsToRetain; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline bool NodeGroupsToRetainHasBeenSet() const { return m_nodeGroupsToRetainHasBeenSet; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline void SetNodeGroupsToRetain(const Aws::Vector<Aws::String>& value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain = value; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline void SetNodeGroupsToRetain(Aws::Vector<Aws::String>&& value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain = std::move(value); }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupsToRetain(const Aws::Vector<Aws::String>& value) { SetNodeGroupsToRetain(value); return *this;}

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupsToRetain(Aws::Vector<Aws::String>&& value) { SetNodeGroupsToRetain(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRetain(const Aws::String& value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain.push_back(value); return *this; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRetain(Aws::String&& value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain.push_back(std::move(value)); return *this; }

    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * for Redis will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRetain(const char* value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain.push_back(value); return *this; }

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    int m_nodeGroupCount;
    bool m_nodeGroupCountHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    Aws::Vector<ReshardingConfiguration> m_reshardingConfiguration;
    bool m_reshardingConfigurationHasBeenSet;

    Aws::Vector<Aws::String> m_nodeGroupsToRemove;
    bool m_nodeGroupsToRemoveHasBeenSet;

    Aws::Vector<Aws::String> m_nodeGroupsToRetain;
    bool m_nodeGroupsToRetainHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
