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
    AWS_ELASTICACHE_API ModifyUserGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyUserGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const { return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    template<typename UserGroupIdT = Aws::String>
    void SetUserGroupId(UserGroupIdT&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::forward<UserGroupIdT>(value); }
    template<typename UserGroupIdT = Aws::String>
    ModifyUserGroupRequest& WithUserGroupId(UserGroupIdT&& value) { SetUserGroupId(std::forward<UserGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user IDs to add to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToAdd() const { return m_userIdsToAdd; }
    inline bool UserIdsToAddHasBeenSet() const { return m_userIdsToAddHasBeenSet; }
    template<typename UserIdsToAddT = Aws::Vector<Aws::String>>
    void SetUserIdsToAdd(UserIdsToAddT&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd = std::forward<UserIdsToAddT>(value); }
    template<typename UserIdsToAddT = Aws::Vector<Aws::String>>
    ModifyUserGroupRequest& WithUserIdsToAdd(UserIdsToAddT&& value) { SetUserIdsToAdd(std::forward<UserIdsToAddT>(value)); return *this;}
    template<typename UserIdsToAddT = Aws::String>
    ModifyUserGroupRequest& AddUserIdsToAdd(UserIdsToAddT&& value) { m_userIdsToAddHasBeenSet = true; m_userIdsToAdd.emplace_back(std::forward<UserIdsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of user IDs to remove from the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIdsToRemove() const { return m_userIdsToRemove; }
    inline bool UserIdsToRemoveHasBeenSet() const { return m_userIdsToRemoveHasBeenSet; }
    template<typename UserIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetUserIdsToRemove(UserIdsToRemoveT&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove = std::forward<UserIdsToRemoveT>(value); }
    template<typename UserIdsToRemoveT = Aws::Vector<Aws::String>>
    ModifyUserGroupRequest& WithUserIdsToRemove(UserIdsToRemoveT&& value) { SetUserIdsToRemove(std::forward<UserIdsToRemoveT>(value)); return *this;}
    template<typename UserIdsToRemoveT = Aws::String>
    ModifyUserGroupRequest& AddUserIdsToRemove(UserIdsToRemoveT&& value) { m_userIdsToRemoveHasBeenSet = true; m_userIdsToRemove.emplace_back(std::forward<UserIdsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Modifies the engine listed in a user group. The options are valkey or
     * redis.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ModifyUserGroupRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdsToAdd;
    bool m_userIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIdsToRemove;
    bool m_userIdsToRemoveHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
