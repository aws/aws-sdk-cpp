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
  class AWS_ELASTICACHE_API IncreaseReplicaCountRequest : public ElastiCacheRequest
  {
  public:
    IncreaseReplicaCountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IncreaseReplicaCount"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline IncreaseReplicaCountRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline IncreaseReplicaCountRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The id of the replication group to which you want to add replica nodes.</p>
     */
    inline IncreaseReplicaCountRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The number of read replica nodes you want at the completion of this
     * operation. For Redis (cluster mode disabled) replication groups, this is the
     * number of replica nodes in the replication group. For Redis (cluster mode
     * enabled) replication groups, this is the number of replica nodes in each of the
     * replication group's node groups.</p>
     */
    inline int GetNewReplicaCount() const{ return m_newReplicaCount; }

    /**
     * <p>The number of read replica nodes you want at the completion of this
     * operation. For Redis (cluster mode disabled) replication groups, this is the
     * number of replica nodes in the replication group. For Redis (cluster mode
     * enabled) replication groups, this is the number of replica nodes in each of the
     * replication group's node groups.</p>
     */
    inline bool NewReplicaCountHasBeenSet() const { return m_newReplicaCountHasBeenSet; }

    /**
     * <p>The number of read replica nodes you want at the completion of this
     * operation. For Redis (cluster mode disabled) replication groups, this is the
     * number of replica nodes in the replication group. For Redis (cluster mode
     * enabled) replication groups, this is the number of replica nodes in each of the
     * replication group's node groups.</p>
     */
    inline void SetNewReplicaCount(int value) { m_newReplicaCountHasBeenSet = true; m_newReplicaCount = value; }

    /**
     * <p>The number of read replica nodes you want at the completion of this
     * operation. For Redis (cluster mode disabled) replication groups, this is the
     * number of replica nodes in the replication group. For Redis (cluster mode
     * enabled) replication groups, this is the number of replica nodes in each of the
     * replication group's node groups.</p>
     */
    inline IncreaseReplicaCountRequest& WithNewReplicaCount(int value) { SetNewReplicaCount(value); return *this;}


    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline const Aws::Vector<ConfigureShard>& GetReplicaConfiguration() const{ return m_replicaConfiguration; }

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline bool ReplicaConfigurationHasBeenSet() const { return m_replicaConfigurationHasBeenSet; }

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline void SetReplicaConfiguration(const Aws::Vector<ConfigureShard>& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = value; }

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline void SetReplicaConfiguration(Aws::Vector<ConfigureShard>&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration = std::move(value); }

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline IncreaseReplicaCountRequest& WithReplicaConfiguration(const Aws::Vector<ConfigureShard>& value) { SetReplicaConfiguration(value); return *this;}

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline IncreaseReplicaCountRequest& WithReplicaConfiguration(Aws::Vector<ConfigureShard>&& value) { SetReplicaConfiguration(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline IncreaseReplicaCountRequest& AddReplicaConfiguration(const ConfigureShard& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConfigureShard</code> objects that can be used to configure
     * each shard in a Redis (cluster mode enabled) replication group. The
     * <code>ConfigureShard</code> has three members: <code>NewReplicaCount</code>,
     * <code>NodeGroupId</code>, and <code>PreferredAvailabilityZones</code>.</p>
     */
    inline IncreaseReplicaCountRequest& AddReplicaConfiguration(ConfigureShard&& value) { m_replicaConfigurationHasBeenSet = true; m_replicaConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>True</code>, the number of replica nodes is increased immediately.
     * <code>ApplyImmediately=False</code> is not currently supported.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>If <code>True</code>, the number of replica nodes is increased immediately.
     * <code>ApplyImmediately=False</code> is not currently supported.</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>If <code>True</code>, the number of replica nodes is increased immediately.
     * <code>ApplyImmediately=False</code> is not currently supported.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>If <code>True</code>, the number of replica nodes is increased immediately.
     * <code>ApplyImmediately=False</code> is not currently supported.</p>
     */
    inline IncreaseReplicaCountRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    int m_newReplicaCount;
    bool m_newReplicaCountHasBeenSet;

    Aws::Vector<ConfigureShard> m_replicaConfiguration;
    bool m_replicaConfigurationHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
