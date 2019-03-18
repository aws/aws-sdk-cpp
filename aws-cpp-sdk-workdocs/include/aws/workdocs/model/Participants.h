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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/UserMetadata.h>
#include <aws/workdocs/model/GroupMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the users or user groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Participants">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API Participants
  {
  public:
    Participants();
    Participants(Aws::Utils::Json::JsonView jsonValue);
    Participants& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of users.</p>
     */
    inline const Aws::Vector<UserMetadata>& GetUsers() const{ return m_users; }

    /**
     * <p>The list of users.</p>
     */
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }

    /**
     * <p>The list of users.</p>
     */
    inline void SetUsers(const Aws::Vector<UserMetadata>& value) { m_usersHasBeenSet = true; m_users = value; }

    /**
     * <p>The list of users.</p>
     */
    inline void SetUsers(Aws::Vector<UserMetadata>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }

    /**
     * <p>The list of users.</p>
     */
    inline Participants& WithUsers(const Aws::Vector<UserMetadata>& value) { SetUsers(value); return *this;}

    /**
     * <p>The list of users.</p>
     */
    inline Participants& WithUsers(Aws::Vector<UserMetadata>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>The list of users.</p>
     */
    inline Participants& AddUsers(const UserMetadata& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }

    /**
     * <p>The list of users.</p>
     */
    inline Participants& AddUsers(UserMetadata&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of user groups.</p>
     */
    inline const Aws::Vector<GroupMetadata>& GetGroups() const{ return m_groups; }

    /**
     * <p>The list of user groups.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The list of user groups.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupMetadata>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The list of user groups.</p>
     */
    inline void SetGroups(Aws::Vector<GroupMetadata>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The list of user groups.</p>
     */
    inline Participants& WithGroups(const Aws::Vector<GroupMetadata>& value) { SetGroups(value); return *this;}

    /**
     * <p>The list of user groups.</p>
     */
    inline Participants& WithGroups(Aws::Vector<GroupMetadata>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The list of user groups.</p>
     */
    inline Participants& AddGroups(const GroupMetadata& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The list of user groups.</p>
     */
    inline Participants& AddGroups(GroupMetadata&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserMetadata> m_users;
    bool m_usersHasBeenSet;

    Aws::Vector<GroupMetadata> m_groups;
    bool m_groupsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
