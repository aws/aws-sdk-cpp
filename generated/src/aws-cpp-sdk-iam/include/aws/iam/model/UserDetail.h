/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/AttachedPermissionsBoundary.h>
#include <aws/iam/model/PolicyDetail.h>
#include <aws/iam/model/AttachedPolicy.h>
#include <aws/iam/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an IAM user, including all the user's policies and
   * all the IAM groups the user is in.</p> <p>This data type is used as a response
   * element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountAuthorizationDetails.html">GetAccountAuthorizationDetails</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UserDetail">AWS API
   * Reference</a></p>
   */
  class UserDetail
  {
  public:
    AWS_IAM_API UserDetail() = default;
    AWS_IAM_API UserDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API UserDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    UserDetail& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    UserDetail& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UserDetail& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UserDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    UserDetail& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline const Aws::Vector<PolicyDetail>& GetUserPolicyList() const { return m_userPolicyList; }
    inline bool UserPolicyListHasBeenSet() const { return m_userPolicyListHasBeenSet; }
    template<typename UserPolicyListT = Aws::Vector<PolicyDetail>>
    void SetUserPolicyList(UserPolicyListT&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList = std::forward<UserPolicyListT>(value); }
    template<typename UserPolicyListT = Aws::Vector<PolicyDetail>>
    UserDetail& WithUserPolicyList(UserPolicyListT&& value) { SetUserPolicyList(std::forward<UserPolicyListT>(value)); return *this;}
    template<typename UserPolicyListT = PolicyDetail>
    UserDetail& AddUserPolicyList(UserPolicyListT&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList.emplace_back(std::forward<UserPolicyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupList() const { return m_groupList; }
    inline bool GroupListHasBeenSet() const { return m_groupListHasBeenSet; }
    template<typename GroupListT = Aws::Vector<Aws::String>>
    void SetGroupList(GroupListT&& value) { m_groupListHasBeenSet = true; m_groupList = std::forward<GroupListT>(value); }
    template<typename GroupListT = Aws::Vector<Aws::String>>
    UserDetail& WithGroupList(GroupListT&& value) { SetGroupList(std::forward<GroupListT>(value)); return *this;}
    template<typename GroupListT = Aws::String>
    UserDetail& AddGroupList(GroupListT&& value) { m_groupListHasBeenSet = true; m_groupList.emplace_back(std::forward<GroupListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline const Aws::Vector<AttachedPolicy>& GetAttachedManagedPolicies() const { return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AttachedPolicy>>
    void SetAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::forward<AttachedManagedPoliciesT>(value); }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AttachedPolicy>>
    UserDetail& WithAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { SetAttachedManagedPolicies(std::forward<AttachedManagedPoliciesT>(value)); return *this;}
    template<typename AttachedManagedPoliciesT = AttachedPolicy>
    UserDetail& AddAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.emplace_back(std::forward<AttachedManagedPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the policy used to set the permissions boundary for the user.</p>
     * <p>For more information about permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline const AttachedPermissionsBoundary& GetPermissionsBoundary() const { return m_permissionsBoundary; }
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }
    template<typename PermissionsBoundaryT = AttachedPermissionsBoundary>
    void SetPermissionsBoundary(PermissionsBoundaryT&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::forward<PermissionsBoundaryT>(value); }
    template<typename PermissionsBoundaryT = AttachedPermissionsBoundary>
    UserDetail& WithPermissionsBoundary(PermissionsBoundaryT&& value) { SetPermissionsBoundary(std::forward<PermissionsBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are associated with the user. For more information about
     * tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UserDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UserDetail& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Vector<PolicyDetail> m_userPolicyList;
    bool m_userPolicyListHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupList;
    bool m_groupListHasBeenSet = false;

    Aws::Vector<AttachedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet = false;

    AttachedPermissionsBoundary m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
