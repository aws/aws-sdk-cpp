/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModifyReplicationGroupShardConfigurationRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyReplicationGroupShardConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationGroupShardConfiguration"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Valkey or Redis OSS (cluster mode enabled) cluster
     * (replication group) on which the shards are to be configured.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    ModifyReplicationGroupShardConfigurationRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of node groups (shards) that results from the modification of the
     * shard configuration.</p>
     */
    inline int GetNodeGroupCount() const { return m_nodeGroupCount; }
    inline bool NodeGroupCountHasBeenSet() const { return m_nodeGroupCountHasBeenSet; }
    inline void SetNodeGroupCount(int value) { m_nodeGroupCountHasBeenSet = true; m_nodeGroupCount = value; }
    inline ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupCount(int value) { SetNodeGroupCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the shard reconfiguration process begins immediately. At
     * present, the only permitted value for this parameter is <code>true</code>.</p>
     * <p>Value: true</p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyReplicationGroupShardConfigurationRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the preferred availability zones for each node group in the
     * cluster. If the value of <code>NodeGroupCount</code> is greater than the current
     * number of node groups (shards), you can use this parameter to specify the
     * preferred availability zones of the cluster's shards. If you omit this parameter
     * ElastiCache selects availability zones for you.</p> <p>You can specify this
     * parameter only if the value of <code>NodeGroupCount</code> is greater than the
     * current number of node groups (shards).</p>
     */
    inline const Aws::Vector<ReshardingConfiguration>& GetReshardingConfiguration() const { return m_reshardingConfiguration; }
    inline bool ReshardingConfigurationHasBeenSet() const { return m_reshardingConfigurationHasBeenSet; }
    template<typename ReshardingConfigurationT = Aws::Vector<ReshardingConfiguration>>
    void SetReshardingConfiguration(ReshardingConfigurationT&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration = std::forward<ReshardingConfigurationT>(value); }
    template<typename ReshardingConfigurationT = Aws::Vector<ReshardingConfiguration>>
    ModifyReplicationGroupShardConfigurationRequest& WithReshardingConfiguration(ReshardingConfigurationT&& value) { SetReshardingConfiguration(std::forward<ReshardingConfigurationT>(value)); return *this;}
    template<typename ReshardingConfigurationT = ReshardingConfiguration>
    ModifyReplicationGroupShardConfigurationRequest& AddReshardingConfiguration(ReshardingConfigurationT&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration.emplace_back(std::forward<ReshardingConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRemove</code> is
     * a list of <code>NodeGroupId</code>s to remove from the cluster.</p>
     * <p>ElastiCache will attempt to remove all node groups listed by
     * <code>NodeGroupsToRemove</code> from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeGroupsToRemove() const { return m_nodeGroupsToRemove; }
    inline bool NodeGroupsToRemoveHasBeenSet() const { return m_nodeGroupsToRemoveHasBeenSet; }
    template<typename NodeGroupsToRemoveT = Aws::Vector<Aws::String>>
    void SetNodeGroupsToRemove(NodeGroupsToRemoveT&& value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove = std::forward<NodeGroupsToRemoveT>(value); }
    template<typename NodeGroupsToRemoveT = Aws::Vector<Aws::String>>
    ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupsToRemove(NodeGroupsToRemoveT&& value) { SetNodeGroupsToRemove(std::forward<NodeGroupsToRemoveT>(value)); return *this;}
    template<typename NodeGroupsToRemoveT = Aws::String>
    ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRemove(NodeGroupsToRemoveT&& value) { m_nodeGroupsToRemoveHasBeenSet = true; m_nodeGroupsToRemove.emplace_back(std::forward<NodeGroupsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the value of <code>NodeGroupCount</code> is less than the current number
     * of node groups (shards), then either <code>NodeGroupsToRemove</code> or
     * <code>NodeGroupsToRetain</code> is required. <code>NodeGroupsToRetain</code> is
     * a list of <code>NodeGroupId</code>s to retain in the cluster.</p> <p>ElastiCache
     * will attempt to remove all node groups except those listed by
     * <code>NodeGroupsToRetain</code> from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeGroupsToRetain() const { return m_nodeGroupsToRetain; }
    inline bool NodeGroupsToRetainHasBeenSet() const { return m_nodeGroupsToRetainHasBeenSet; }
    template<typename NodeGroupsToRetainT = Aws::Vector<Aws::String>>
    void SetNodeGroupsToRetain(NodeGroupsToRetainT&& value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain = std::forward<NodeGroupsToRetainT>(value); }
    template<typename NodeGroupsToRetainT = Aws::Vector<Aws::String>>
    ModifyReplicationGroupShardConfigurationRequest& WithNodeGroupsToRetain(NodeGroupsToRetainT&& value) { SetNodeGroupsToRetain(std::forward<NodeGroupsToRetainT>(value)); return *this;}
    template<typename NodeGroupsToRetainT = Aws::String>
    ModifyReplicationGroupShardConfigurationRequest& AddNodeGroupsToRetain(NodeGroupsToRetainT&& value) { m_nodeGroupsToRetainHasBeenSet = true; m_nodeGroupsToRetain.emplace_back(std::forward<NodeGroupsToRetainT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    int m_nodeGroupCount{0};
    bool m_nodeGroupCountHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::Vector<ReshardingConfiguration> m_reshardingConfiguration;
    bool m_reshardingConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeGroupsToRemove;
    bool m_nodeGroupsToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeGroupsToRetain;
    bool m_nodeGroupsToRetainHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
