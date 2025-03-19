/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about the user context for an Amazon Kendra index.</p>
   * <p>User context filtering is a kind of personalized search with the benefit of
   * controlling access to documents. For example, not all teams that search the
   * company portal for information should access top-secret company documents, nor
   * are these documents relevant to all users. Only specific users or groups of
   * teams given access to top-secret documents should see these documents in their
   * search results.</p> <p>You provide one of the following:</p> <ul> <li> <p>User
   * token</p> </li> <li> <p>User ID, the groups the user belongs to, and any data
   * sources the groups can access.</p> </li> </ul> <p>If you provide both, an
   * exception is thrown.</p>  <p>If you're using an Amazon Kendra Gen AI
   * Enterprise Edition index, you can use <code>UserId</code>, <code>Groups</code>,
   * and <code>DataSourceGroups</code> to filter content. If you set the
   * <code>UserId</code> to a particular user ID, it also includes all public
   * documents.</p> <p>Amazon Kendra Gen AI Enterprise Edition indices don't support
   * token based document filtering. If you're using an Amazon Kendra Gen AI
   * Enterprise Edition index, Amazon Kendra returns a
   * <code>ValidationException</code> error if the <code>Token</code> field has a
   * non-null value.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserContext">AWS
   * API Reference</a></p>
   */
  class UserContext
  {
  public:
    AWS_KENDRA_API UserContext() = default;
    AWS_KENDRA_API UserContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user context token for filtering search results for a user. It must be a
     * JWT or a JSON token.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    UserContext& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user you want to filter search results based on their
     * access to documents.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UserContext& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups you want to filter search results based on the groups'
     * access to documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    UserContext& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    UserContext& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of data source groups you want to filter search results based on
     * groups' access to documents in that data source.</p>
     */
    inline const Aws::Vector<DataSourceGroup>& GetDataSourceGroups() const { return m_dataSourceGroups; }
    inline bool DataSourceGroupsHasBeenSet() const { return m_dataSourceGroupsHasBeenSet; }
    template<typename DataSourceGroupsT = Aws::Vector<DataSourceGroup>>
    void SetDataSourceGroups(DataSourceGroupsT&& value) { m_dataSourceGroupsHasBeenSet = true; m_dataSourceGroups = std::forward<DataSourceGroupsT>(value); }
    template<typename DataSourceGroupsT = Aws::Vector<DataSourceGroup>>
    UserContext& WithDataSourceGroups(DataSourceGroupsT&& value) { SetDataSourceGroups(std::forward<DataSourceGroupsT>(value)); return *this;}
    template<typename DataSourceGroupsT = DataSourceGroup>
    UserContext& AddDataSourceGroups(DataSourceGroupsT&& value) { m_dataSourceGroupsHasBeenSet = true; m_dataSourceGroups.emplace_back(std::forward<DataSourceGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<DataSourceGroup> m_dataSourceGroups;
    bool m_dataSourceGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
