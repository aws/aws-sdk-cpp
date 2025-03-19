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
  class DeleteGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteGlobalReplicationGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGlobalReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const { return m_globalReplicationGroupId; }
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    void SetGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::forward<GlobalReplicationGroupIdT>(value); }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    DeleteGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { SetGlobalReplicationGroupId(std::forward<GlobalReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary replication group is retained as a standalone replication group.
     * </p>
     */
    inline bool GetRetainPrimaryReplicationGroup() const { return m_retainPrimaryReplicationGroup; }
    inline bool RetainPrimaryReplicationGroupHasBeenSet() const { return m_retainPrimaryReplicationGroupHasBeenSet; }
    inline void SetRetainPrimaryReplicationGroup(bool value) { m_retainPrimaryReplicationGroupHasBeenSet = true; m_retainPrimaryReplicationGroup = value; }
    inline DeleteGlobalReplicationGroupRequest& WithRetainPrimaryReplicationGroup(bool value) { SetRetainPrimaryReplicationGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    bool m_retainPrimaryReplicationGroup{false};
    bool m_retainPrimaryReplicationGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
