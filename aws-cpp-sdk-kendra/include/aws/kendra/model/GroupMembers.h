/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/kendra/model/MemberGroup.h>
#include <aws/kendra/model/MemberUser.h>
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
   * <p>A list of users or sub groups that belong to a group. This is useful for user
   * context filtering, where search results are filtered based on the user or their
   * group access to documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GroupMembers">AWS
   * API Reference</a></p>
   */
  class GroupMembers
  {
  public:
    AWS_KENDRA_API GroupMembers();
    AWS_KENDRA_API GroupMembers(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GroupMembers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline const Aws::Vector<MemberGroup>& GetMemberGroups() const{ return m_memberGroups; }

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline bool MemberGroupsHasBeenSet() const { return m_memberGroupsHasBeenSet; }

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline void SetMemberGroups(const Aws::Vector<MemberGroup>& value) { m_memberGroupsHasBeenSet = true; m_memberGroups = value; }

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline void SetMemberGroups(Aws::Vector<MemberGroup>&& value) { m_memberGroupsHasBeenSet = true; m_memberGroups = std::move(value); }

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline GroupMembers& WithMemberGroups(const Aws::Vector<MemberGroup>& value) { SetMemberGroups(value); return *this;}

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline GroupMembers& WithMemberGroups(Aws::Vector<MemberGroup>&& value) { SetMemberGroups(std::move(value)); return *this;}

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline GroupMembers& AddMemberGroups(const MemberGroup& value) { m_memberGroupsHasBeenSet = true; m_memberGroups.push_back(value); return *this; }

    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline GroupMembers& AddMemberGroups(MemberGroup&& value) { m_memberGroupsHasBeenSet = true; m_memberGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline const Aws::Vector<MemberUser>& GetMemberUsers() const{ return m_memberUsers; }

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline bool MemberUsersHasBeenSet() const { return m_memberUsersHasBeenSet; }

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline void SetMemberUsers(const Aws::Vector<MemberUser>& value) { m_memberUsersHasBeenSet = true; m_memberUsers = value; }

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline void SetMemberUsers(Aws::Vector<MemberUser>&& value) { m_memberUsersHasBeenSet = true; m_memberUsers = std::move(value); }

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline GroupMembers& WithMemberUsers(const Aws::Vector<MemberUser>& value) { SetMemberUsers(value); return *this;}

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline GroupMembers& WithMemberUsers(Aws::Vector<MemberUser>&& value) { SetMemberUsers(std::move(value)); return *this;}

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline GroupMembers& AddMemberUsers(const MemberUser& value) { m_memberUsersHasBeenSet = true; m_memberUsers.push_back(value); return *this; }

    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline GroupMembers& AddMemberUsers(MemberUser&& value) { m_memberUsersHasBeenSet = true; m_memberUsers.push_back(std::move(value)); return *this; }


    /**
     * <p>If you have more than 1000 users and/or sub groups for a single group, you
     * need to provide the path to the S3 file that lists your users and sub groups for
     * a group. Your sub groups can contain more than 1000 users, but the list of sub
     * groups that belong to a group (and/or users) must be no more than 1000.</p>
     * <p>You can download this <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/samples/group_members.zip">example
     * S3 file</a> that uses the correct format for listing group members. Note,
     * <code>dataSourceId</code> is optional. The value of <code>type</code> for a
     * group is always <code>GROUP</code> and for a user it is always
     * <code>USER</code>.</p>
     */
    inline const S3Path& GetS3PathforGroupMembers() const{ return m_s3PathforGroupMembers; }

    /**
     * <p>If you have more than 1000 users and/or sub groups for a single group, you
     * need to provide the path to the S3 file that lists your users and sub groups for
     * a group. Your sub groups can contain more than 1000 users, but the list of sub
     * groups that belong to a group (and/or users) must be no more than 1000.</p>
     * <p>You can download this <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/samples/group_members.zip">example
     * S3 file</a> that uses the correct format for listing group members. Note,
     * <code>dataSourceId</code> is optional. The value of <code>type</code> for a
     * group is always <code>GROUP</code> and for a user it is always
     * <code>USER</code>.</p>
     */
    inline bool S3PathforGroupMembersHasBeenSet() const { return m_s3PathforGroupMembersHasBeenSet; }

    /**
     * <p>If you have more than 1000 users and/or sub groups for a single group, you
     * need to provide the path to the S3 file that lists your users and sub groups for
     * a group. Your sub groups can contain more than 1000 users, but the list of sub
     * groups that belong to a group (and/or users) must be no more than 1000.</p>
     * <p>You can download this <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/samples/group_members.zip">example
     * S3 file</a> that uses the correct format for listing group members. Note,
     * <code>dataSourceId</code> is optional. The value of <code>type</code> for a
     * group is always <code>GROUP</code> and for a user it is always
     * <code>USER</code>.</p>
     */
    inline void SetS3PathforGroupMembers(const S3Path& value) { m_s3PathforGroupMembersHasBeenSet = true; m_s3PathforGroupMembers = value; }

    /**
     * <p>If you have more than 1000 users and/or sub groups for a single group, you
     * need to provide the path to the S3 file that lists your users and sub groups for
     * a group. Your sub groups can contain more than 1000 users, but the list of sub
     * groups that belong to a group (and/or users) must be no more than 1000.</p>
     * <p>You can download this <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/samples/group_members.zip">example
     * S3 file</a> that uses the correct format for listing group members. Note,
     * <code>dataSourceId</code> is optional. The value of <code>type</code> for a
     * group is always <code>GROUP</code> and for a user it is always
     * <code>USER</code>.</p>
     */
    inline void SetS3PathforGroupMembers(S3Path&& value) { m_s3PathforGroupMembersHasBeenSet = true; m_s3PathforGroupMembers = std::move(value); }

    /**
     * <p>If you have more than 1000 users and/or sub groups for a single group, you
     * need to provide the path to the S3 file that lists your users and sub groups for
     * a group. Your sub groups can contain more than 1000 users, but the list of sub
     * groups that belong to a group (and/or users) must be no more than 1000.</p>
     * <p>You can download this <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/samples/group_members.zip">example
     * S3 file</a> that uses the correct format for listing group members. Note,
     * <code>dataSourceId</code> is optional. The value of <code>type</code> for a
     * group is always <code>GROUP</code> and for a user it is always
     * <code>USER</code>.</p>
     */
    inline GroupMembers& WithS3PathforGroupMembers(const S3Path& value) { SetS3PathforGroupMembers(value); return *this;}

    /**
     * <p>If you have more than 1000 users and/or sub groups for a single group, you
     * need to provide the path to the S3 file that lists your users and sub groups for
     * a group. Your sub groups can contain more than 1000 users, but the list of sub
     * groups that belong to a group (and/or users) must be no more than 1000.</p>
     * <p>You can download this <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/samples/group_members.zip">example
     * S3 file</a> that uses the correct format for listing group members. Note,
     * <code>dataSourceId</code> is optional. The value of <code>type</code> for a
     * group is always <code>GROUP</code> and for a user it is always
     * <code>USER</code>.</p>
     */
    inline GroupMembers& WithS3PathforGroupMembers(S3Path&& value) { SetS3PathforGroupMembers(std::move(value)); return *this;}

  private:

    Aws::Vector<MemberGroup> m_memberGroups;
    bool m_memberGroupsHasBeenSet = false;

    Aws::Vector<MemberUser> m_memberUsers;
    bool m_memberUsersHasBeenSet = false;

    S3Path m_s3PathforGroupMembers;
    bool m_s3PathforGroupMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
