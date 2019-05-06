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
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteReplicationGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteReplicationGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DeleteReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    DeleteReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline DeleteReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline DeleteReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline DeleteReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>If set to <code>true</code>, all of the read replicas are deleted, but the
     * primary node is retained.</p>
     */
    inline bool GetRetainPrimaryCluster() const{ return m_retainPrimaryCluster; }

    /**
     * <p>If set to <code>true</code>, all of the read replicas are deleted, but the
     * primary node is retained.</p>
     */
    inline bool RetainPrimaryClusterHasBeenSet() const { return m_retainPrimaryClusterHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, all of the read replicas are deleted, but the
     * primary node is retained.</p>
     */
    inline void SetRetainPrimaryCluster(bool value) { m_retainPrimaryClusterHasBeenSet = true; m_retainPrimaryCluster = value; }

    /**
     * <p>If set to <code>true</code>, all of the read replicas are deleted, but the
     * primary node is retained.</p>
     */
    inline DeleteReplicationGroupRequest& WithRetainPrimaryCluster(bool value) { SetRetainPrimaryCluster(value); return *this;}


    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline const Aws::String& GetFinalSnapshotIdentifier() const{ return m_finalSnapshotIdentifier; }

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline bool FinalSnapshotIdentifierHasBeenSet() const { return m_finalSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline void SetFinalSnapshotIdentifier(const Aws::String& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = value; }

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline void SetFinalSnapshotIdentifier(Aws::String&& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = std::move(value); }

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline void SetFinalSnapshotIdentifier(const char* value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier.assign(value); }

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline DeleteReplicationGroupRequest& WithFinalSnapshotIdentifier(const Aws::String& value) { SetFinalSnapshotIdentifier(value); return *this;}

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline DeleteReplicationGroupRequest& WithFinalSnapshotIdentifier(Aws::String&& value) { SetFinalSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline DeleteReplicationGroupRequest& WithFinalSnapshotIdentifier(const char* value) { SetFinalSnapshotIdentifier(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    bool m_retainPrimaryCluster;
    bool m_retainPrimaryClusterHasBeenSet;

    Aws::String m_finalSnapshotIdentifier;
    bool m_finalSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
