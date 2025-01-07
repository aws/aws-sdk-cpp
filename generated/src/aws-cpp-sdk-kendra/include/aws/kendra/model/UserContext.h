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
    AWS_KENDRA_API UserContext();
    AWS_KENDRA_API UserContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user context token for filtering search results for a user. It must be a
     * JWT or a JSON token.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline UserContext& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline UserContext& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline UserContext& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user you want to filter search results based on their
     * access to documents.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UserContext& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UserContext& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UserContext& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of groups you want to filter search results based on the groups'
     * access to documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline UserContext& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline UserContext& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline UserContext& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline UserContext& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline UserContext& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of data source groups you want to filter search results based on
     * groups' access to documents in that data source.</p>
     */
    inline const Aws::Vector<DataSourceGroup>& GetDataSourceGroups() const{ return m_dataSourceGroups; }
    inline bool DataSourceGroupsHasBeenSet() const { return m_dataSourceGroupsHasBeenSet; }
    inline void SetDataSourceGroups(const Aws::Vector<DataSourceGroup>& value) { m_dataSourceGroupsHasBeenSet = true; m_dataSourceGroups = value; }
    inline void SetDataSourceGroups(Aws::Vector<DataSourceGroup>&& value) { m_dataSourceGroupsHasBeenSet = true; m_dataSourceGroups = std::move(value); }
    inline UserContext& WithDataSourceGroups(const Aws::Vector<DataSourceGroup>& value) { SetDataSourceGroups(value); return *this;}
    inline UserContext& WithDataSourceGroups(Aws::Vector<DataSourceGroup>&& value) { SetDataSourceGroups(std::move(value)); return *this;}
    inline UserContext& AddDataSourceGroups(const DataSourceGroup& value) { m_dataSourceGroupsHasBeenSet = true; m_dataSourceGroups.push_back(value); return *this; }
    inline UserContext& AddDataSourceGroups(DataSourceGroup&& value) { m_dataSourceGroupsHasBeenSet = true; m_dataSourceGroups.push_back(std::move(value)); return *this; }
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
