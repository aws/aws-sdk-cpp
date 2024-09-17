/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the cluster to be deleted. This parameter is not case
     * sensitive.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline DeleteReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline DeleteReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline DeleteReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, all of the read replicas are deleted, but the
     * primary node is retained.</p>
     */
    inline bool GetRetainPrimaryCluster() const{ return m_retainPrimaryCluster; }
    inline bool RetainPrimaryClusterHasBeenSet() const { return m_retainPrimaryClusterHasBeenSet; }
    inline void SetRetainPrimaryCluster(bool value) { m_retainPrimaryClusterHasBeenSet = true; m_retainPrimaryCluster = value; }
    inline DeleteReplicationGroupRequest& WithRetainPrimaryCluster(bool value) { SetRetainPrimaryCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a final node group (shard) snapshot. ElastiCache creates the
     * snapshot from the primary node in the cluster, rather than one of the replicas;
     * this is to ensure that it captures the freshest data. After the final snapshot
     * is taken, the replication group is immediately deleted.</p>
     */
    inline const Aws::String& GetFinalSnapshotIdentifier() const{ return m_finalSnapshotIdentifier; }
    inline bool FinalSnapshotIdentifierHasBeenSet() const { return m_finalSnapshotIdentifierHasBeenSet; }
    inline void SetFinalSnapshotIdentifier(const Aws::String& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = value; }
    inline void SetFinalSnapshotIdentifier(Aws::String&& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = std::move(value); }
    inline void SetFinalSnapshotIdentifier(const char* value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier.assign(value); }
    inline DeleteReplicationGroupRequest& WithFinalSnapshotIdentifier(const Aws::String& value) { SetFinalSnapshotIdentifier(value); return *this;}
    inline DeleteReplicationGroupRequest& WithFinalSnapshotIdentifier(Aws::String&& value) { SetFinalSnapshotIdentifier(std::move(value)); return *this;}
    inline DeleteReplicationGroupRequest& WithFinalSnapshotIdentifier(const char* value) { SetFinalSnapshotIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    bool m_retainPrimaryCluster;
    bool m_retainPrimaryClusterHasBeenSet = false;

    Aws::String m_finalSnapshotIdentifier;
    bool m_finalSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
