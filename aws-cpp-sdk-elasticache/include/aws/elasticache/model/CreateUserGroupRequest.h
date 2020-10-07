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
  class AWS_ELASTICACHE_API CreateUserGroupRequest : public ElastiCacheRequest
  {
  public:
    CreateUserGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline CreateUserGroupRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline CreateUserGroupRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user group.</p>
     */
    inline CreateUserGroupRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}


    /**
     * <p>Must be Redis. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Must be Redis. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Must be Redis. </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Must be Redis. </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Must be Redis. </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Must be Redis. </p>
     */
    inline CreateUserGroupRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Must be Redis. </p>
     */
    inline CreateUserGroupRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Must be Redis. </p>
     */
    inline CreateUserGroupRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline CreateUserGroupRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

  private:

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
