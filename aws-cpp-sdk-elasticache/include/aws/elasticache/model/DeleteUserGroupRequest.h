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
  class DeleteUserGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteUserGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUserGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }

    /**
     * <p>The ID of the user group.</p>
     */
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }

    /**
     * <p>The ID of the user group.</p>
     */
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }

    /**
     * <p>The ID of the user group.</p>
     */
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }

    /**
     * <p>The ID of the user group.</p>
     */
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }

    /**
     * <p>The ID of the user group.</p>
     */
    inline DeleteUserGroupRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline DeleteUserGroupRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline DeleteUserGroupRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}

  private:

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
