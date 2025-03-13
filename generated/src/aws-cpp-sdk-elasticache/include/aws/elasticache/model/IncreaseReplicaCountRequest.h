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
  class IncreaseReplicaCountRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API IncreaseReplicaCountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IncreaseReplicaCount"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    IncreaseReplicaCountRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of read replica nodes you want at the completion of this
     * operation. For Valkey or Redis OSS (cluster mode disabled) replication groups,
     * this is the number of replica nodes in the replication group. For Valkey or
     * Redis OSS (cluster mode enabled) replication groups, this is the number of
     * replica nodes in each of the replication group's node groups.</p>
     */
    inline int GetNewReplicaCount() const { return m_newReplicaCount; }
    inline bool NewReplicaCountHasBeenSet() const { return m_newReplicaCountHasBeenSet; }
    inline void SetNewReplicaCount(int value) { m_newReplicaCountHasBeenSet = true; m_newReplicaCount = value; }
    inline IncreaseReplicaCountRequest& WithNewReplicaCount(int value) { SetNewReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Valkey or Redis OSS (cluster mode enabled) replication group.
     * The <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline const Aws::Vector<ConfigureShard>& GetReplicaConfiguration() const { return m_replicaConfiguration; }
    inline bool ReplicaConfigurationHasBeenSet() const { return m_replicaConfigurationHasBeenSet; }
    template<typename ReplicaConfigurationT = Aws::Vector<ConfigureShard>>
    void SetReplicaConfiguration(ReplicaConfigurationT&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = std::forward<ReplicaConfigurationT>(value); }
    template<typename ReplicaConfigurationT = Aws::Vector<ConfigureShard>>
    IncreaseReplicaCountRequest& WithReplicaConfiguration(ReplicaConfigurationT&& value) { SetReplicaConfiguration(std::forward<ReplicaConfigurationT>(value)); return *this;}
    template<typename ReplicaConfigurationT = ConfigureShard>
    IncreaseReplicaCountRequest& AddReplicaConfiguration(ReplicaConfigurationT&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration.emplace_back(std::forward<ReplicaConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>True</code>, the number of replica nodes is increased immediately.
     * <code>ApplyImmediately=False</code> is not currently supported.</p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline IncreaseReplicaCountRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    int m_newReplicaCount{0};
    bool m_newReplicaCountHasBeenSet = false;

    Aws::Vector<ConfigureShard> m_replicaConfiguration;
    bool m_replicaConfigurationHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
