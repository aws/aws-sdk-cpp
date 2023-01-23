/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class ModifyUserGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyUserGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyUserGroup"; }

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
    inline ModifyUserGroupRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline ModifyUserGroupRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline ModifyUserGroupRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}


    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToAdd() const{ return m_userIdsToAdd; }

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline bool UserIdsToAddHasBeenSet() const { return m_userIdsToAddHasBeenSet; }

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline void SetUserIdsToAdd(const Aws::Vector<Aws::String>& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd = value; }

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline void SetUserIdsToAdd(Aws::Vector<Aws::String>&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd = std::move(value); }

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline ModifyUserGroupRequest& WithUserIdsToAdd(const Aws::Vector<Aws::String>& value) { SetUserIdsToAdd(value); return *this;}

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline ModifyUserGroupRequest& WithUserIdsToAdd(Aws::Vector<Aws::String>&& value) { SetUserIdsToAdd(std::move(value)); return *this;}

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline ModifyUserGroupRequest& AddUserIdsToAdd(const Aws::String& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.push_back(value); return *this; }

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline ModifyUserGroupRequest& AddUserIdsToAdd(Aws::String&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline ModifyUserGroupRequest& AddUserIdsToAdd(const char* value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.push_back(value); return *this; }


    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToRemove() const{ return m_userIdsToRemove; }

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline bool UserIdsToRemoveHasBeenSet() const { return m_userIdsToRemoveHasBeenSet; }

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline void SetUserIdsToRemove(const Aws::Vector<Aws::String>& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove = value; }

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline void SetUserIdsToRemove(Aws::Vector<Aws::String>&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove = std::move(value); }

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline ModifyUserGroupRequest& WithUserIdsToRemove(const Aws::Vector<Aws::String>& value) { SetUserIdsToRemove(value); return *this;}

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline ModifyUserGroupRequest& WithUserIdsToRemove(Aws::Vector<Aws::String>&& value) { SetUserIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline ModifyUserGroupRequest& AddUserIdsToRemove(const Aws::String& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.push_back(value); return *this; }

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline ModifyUserGroupRequest& AddUserIdsToRemove(Aws::String&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline ModifyUserGroupRequest& AddUserIdsToRemove(const char* value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.push_back(value); return *this; }

  private:

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdsToAdd;
    bool m_userIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdsToRemove;
    bool m_userIdsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
