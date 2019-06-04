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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ELASTICACHE_API BatchApplyUpdateActionRequest : public ElastiCacheRequest
  {
  public:
    BatchApplyUpdateActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchApplyUpdateAction"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The replication group IDs</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationGroupIds() const{ return m_replicationGroupIds; }

    /**
     * <p>The replication group IDs</p>
     */
    inline bool ReplicationGroupIdsHasBeenSet() const { return m_replicationGroupIdsHasBeenSet; }

    /**
     * <p>The replication group IDs</p>
     */
    inline void SetReplicationGroupIds(const Aws::Vector<Aws::String>& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = value; }

    /**
     * <p>The replication group IDs</p>
     */
    inline void SetReplicationGroupIds(Aws::Vector<Aws::String>&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds = std::move(value); }

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchApplyUpdateActionRequest& WithReplicationGroupIds(const Aws::Vector<Aws::String>& value) { SetReplicationGroupIds(value); return *this;}

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchApplyUpdateActionRequest& WithReplicationGroupIds(Aws::Vector<Aws::String>&& value) { SetReplicationGroupIds(std::move(value)); return *this;}

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchApplyUpdateActionRequest& AddReplicationGroupIds(const Aws::String& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchApplyUpdateActionRequest& AddReplicationGroupIds(Aws::String&& value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The replication group IDs</p>
     */
    inline BatchApplyUpdateActionRequest& AddReplicationGroupIds(const char* value) { m_replicationGroupIdsHasBeenSet = true; m_replicationGroupIds.push_back(value); return *this; }


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchApplyUpdateActionRequest& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchApplyUpdateActionRequest& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchApplyUpdateActionRequest& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_replicationGroupIds;
    bool m_replicationGroupIdsHasBeenSet;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
