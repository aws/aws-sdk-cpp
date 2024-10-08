/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ConfigureShard.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class DecreaseReplicaCountRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DecreaseReplicaCountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DecreaseReplicaCount"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The id of the replication group from which you want to remove replica
     * nodes.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline DecreaseReplicaCountRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline DecreaseReplicaCountRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline DecreaseReplicaCountRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of read replica nodes you want at the completion of this
     * operation. For Valkey or Redis OSS (cluster mode disabled) replication groups,
     * this is the number of replica nodes in the replication group. For Valkey or
     * Redis OSS (cluster mode enabled) replication groups, this is the number of
     * replica nodes in each of the replication group's node groups.</p> <p>The minimum
     * number of replicas in a shard or replication group is:</p> <ul> <li> <p>Valkey
     * or Redis OSS (cluster mode disabled)</p> <ul> <li> <p>If Multi-AZ is enabled:
     * 1</p> </li> <li> <p>If Multi-AZ is not enabled: 0</p> </li> </ul> </li> <li>
     * <p>Valkey or Redis OSS (cluster mode enabled): 0 (though you will not be able to
     * failover to a replica if your primary node fails)</p> </li> </ul>
     */
    inline int GetNewReplicaCount() const{ return m_newReplicaCount; }
    inline bool NewReplicaCountHasBeenSet() const { return m_newReplicaCountHasBeenSet; }
    inline void SetNewReplicaCount(int value) { m_newReplicaCountHasBeenSet = true; m_newReplicaCount = value; }
    inline DecreaseReplicaCountRequest& WithNewReplicaCount(int value) { SetNewReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Valkey or Redis OSS (cluster mode enabled) replication group.
     * The <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline const Aws::Vector<ConfigureShard>& GetReplicaConfiguration() const{ return m_replicaConfiguration; }
    inline bool ReplicaConfigurationHasBeenSet() const { return m_replicaConfigurationHasBeenSet; }
    inline void SetReplicaConfiguration(const Aws::Vector<ConfigureShard>& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = value; }
    inline void SetReplicaConfiguration(Aws::Vector<ConfigureShard>&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = std::move(value); }
    inline DecreaseReplicaCountRequest& WithReplicaConfiguration(const Aws::Vector<ConfigureShard>& value) { SetReplicaConfiguration(value); return *this;}
    inline DecreaseReplicaCountRequest& WithReplicaConfiguration(Aws::Vector<ConfigureShard>&& value) { SetReplicaConfiguration(std::move(value)); return *this;}
    inline DecreaseReplicaCountRequest& AddReplicaConfiguration(const ConfigureShard& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration.push_back(value); return *this; }
    inline DecreaseReplicaCountRequest& AddReplicaConfiguration(ConfigureShard&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the node ids to remove from the replication group or node group
     * (shard).</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicasToRemove() const{ return m_replicasToRemove; }
    inline bool ReplicasToRemoveHasBeenSet() const { return m_replicasToRemoveHasBeenSet; }
    inline void SetReplicasToRemove(const Aws::Vector<Aws::String>& value) { m_replicasToRemoveHasBeenSet = true; m_replicasToRemove = value; }
    inline void SetReplicasToRemove(Aws::Vector<Aws::String>&& value) { m_replicasToRemoveHasBeenSet = true; m_replicasToRemove = std::move(value); }
    inline DecreaseReplicaCountRequest& WithReplicasToRemove(const Aws::Vector<Aws::String>& value) { SetReplicasToRemove(value); return *this;}
    inline DecreaseReplicaCountRequest& WithReplicasToRemove(Aws::Vector<Aws::String>&& value) { SetReplicasToRemove(std::move(value)); return *this;}
    inline DecreaseReplicaCountRequest& AddReplicasToRemove(const Aws::String& value) { m_replicasToRemoveHasBeenSet = true; m_replicasToRemove.push_back(value); return *this; }
    inline DecreaseReplicaCountRequest& AddReplicasToRemove(Aws::String&& value) { m_replicasToRemoveHasBeenSet = true; m_replicasToRemove.push_back(std::move(value)); return *this; }
    inline DecreaseReplicaCountRequest& AddReplicasToRemove(const char* value) { m_replicasToRemoveHasBeenSet = true; m_replicasToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, the number of replica nodes is decreased immediately.
     * <code>ApplyImmediately=False</code> is not currently supported.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline DecreaseReplicaCountRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    int m_newReplicaCount;
    bool m_newReplicaCountHasBeenSet = false;

    Aws::Vector<ConfigureShard> m_replicaConfiguration;
    bool m_replicaConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicasToRemove;
    bool m_replicasToRemoveHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
