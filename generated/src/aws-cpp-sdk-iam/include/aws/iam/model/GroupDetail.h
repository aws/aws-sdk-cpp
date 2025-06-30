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
#include <aws/iam/model/PolicyDetail.h>
#include <aws/iam/model/AttachedPolicy.h>
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
   * <p>Contains information about an IAM group, including all of the group's
   * policies.</p> <p>This data type is used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountAuthorizationDetails.html">GetAccountAuthorizationDetails</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GroupDetail">AWS API
   * Reference</a></p>
   */
  class GroupDetail
  {
  public:
    AWS_IAM_API GroupDetail() = default;
    AWS_IAM_API GroupDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API GroupDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    GroupDetail& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    GroupDetail& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    GroupDetail& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GroupDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    GroupDetail& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline const Aws::Vector<PolicyDetail>& GetGroupPolicyList() const { return m_groupPolicyList; }
    inline bool GroupPolicyListHasBeenSet() const { return m_groupPolicyListHasBeenSet; }
    template<typename GroupPolicyListT = Aws::Vector<PolicyDetail>>
    void SetGroupPolicyList(GroupPolicyListT&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = std::forward<GroupPolicyListT>(value); }
    template<typename GroupPolicyListT = Aws::Vector<PolicyDetail>>
    GroupDetail& WithGroupPolicyList(GroupPolicyListT&& value) { SetGroupPolicyList(std::forward<GroupPolicyListT>(value)); return *this;}
    template<typename GroupPolicyListT = PolicyDetail>
    GroupDetail& AddGroupPolicyList(GroupPolicyListT&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.emplace_back(std::forward<GroupPolicyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline const Aws::Vector<AttachedPolicy>& GetAttachedManagedPolicies() const { return m_attachedManagedPolicies; }
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AttachedPolicy>>
    void SetAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::forward<AttachedManagedPoliciesT>(value); }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AttachedPolicy>>
    GroupDetail& WithAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { SetAttachedManagedPolicies(std::forward<AttachedManagedPoliciesT>(value)); return *this;}
    template<typename AttachedManagedPoliciesT = AttachedPolicy>
    GroupDetail& AddAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.emplace_back(std::forward<AttachedManagedPoliciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Vector<PolicyDetail> m_groupPolicyList;
    bool m_groupPolicyListHasBeenSet = false;

    Aws::Vector<AttachedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
