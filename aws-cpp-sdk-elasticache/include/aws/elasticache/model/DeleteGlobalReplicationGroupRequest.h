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
   */
  class AWS_ELASTICACHE_API DeleteGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    DeleteGlobalReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGlobalReplicationGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline DeleteGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline DeleteGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline DeleteGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>If set to <code>true</code>, the primary replication is retained as a
     * standalone replication group. </p>
     */
    inline bool GetRetainPrimaryReplicationGroup() const{ return m_retainPrimaryReplicationGroup; }

    /**
     * <p>If set to <code>true</code>, the primary replication is retained as a
     * standalone replication group. </p>
     */
    inline bool RetainPrimaryReplicationGroupHasBeenSet() const { return m_retainPrimaryReplicationGroupHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, the primary replication is retained as a
     * standalone replication group. </p>
     */
    inline void SetRetainPrimaryReplicationGroup(bool value) { m_retainPrimaryReplicationGroupHasBeenSet = true; m_retainPrimaryReplicationGroup = value; }

    /**
     * <p>If set to <code>true</code>, the primary replication is retained as a
     * standalone replication group. </p>
     */
    inline DeleteGlobalReplicationGroupRequest& WithRetainPrimaryReplicationGroup(bool value) { SetRetainPrimaryReplicationGroup(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet;

    bool m_retainPrimaryReplicationGroup;
    bool m_retainPrimaryReplicationGroupHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
