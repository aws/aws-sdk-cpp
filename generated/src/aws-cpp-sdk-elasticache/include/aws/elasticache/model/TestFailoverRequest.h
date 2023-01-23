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
   */
  class TestFailoverRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API TestFailoverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestFailover"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline TestFailoverRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline TestFailoverRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the replication group (console: cluster) whose automatic failover
     * is being tested by this operation.</p>
     */
    inline TestFailoverRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline TestFailoverRequest& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline TestFailoverRequest& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the node group (called shard in the console) in this replication
     * group on which automatic failover is to be tested. You may test automatic
     * failover on up to 5 node groups in any rolling 24-hour period.</p>
     */
    inline TestFailoverRequest& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
