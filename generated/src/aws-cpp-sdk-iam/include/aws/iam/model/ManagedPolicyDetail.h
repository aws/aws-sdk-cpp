﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/PolicyVersion.h>
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
   * <p>Contains information about a managed policy, including the policy's ARN,
   * versions, and the number of principal entities (users, groups, and roles) that
   * the policy is attached to.</p> <p>This data type is used as a response element
   * in the <a>GetAccountAuthorizationDetails</a> operation.</p> <p>For more
   * information about managed policies, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
   * policies and inline policies</a> in the <i>IAM User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ManagedPolicyDetail">AWS
   * API Reference</a></p>
   */
  class ManagedPolicyDetail
  {
  public:
    AWS_IAM_API ManagedPolicyDetail() = default;
    AWS_IAM_API ManagedPolicyDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ManagedPolicyDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ManagedPolicyDetail& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    ManagedPolicyDetail& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ManagedPolicyDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ManagedPolicyDetail& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetDefaultVersionId() const { return m_defaultVersionId; }
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }
    template<typename DefaultVersionIdT = Aws::String>
    void SetDefaultVersionId(DefaultVersionIdT&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::forward<DefaultVersionIdT>(value); }
    template<typename DefaultVersionIdT = Aws::String>
    ManagedPolicyDetail& WithDefaultVersionId(DefaultVersionIdT&& value) { SetDefaultVersionId(std::forward<DefaultVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of principal entities (users, groups, and roles) that the policy
     * is attached to.</p>
     */
    inline int GetAttachmentCount() const { return m_attachmentCount; }
    inline bool AttachmentCountHasBeenSet() const { return m_attachmentCountHasBeenSet; }
    inline void SetAttachmentCount(int value) { m_attachmentCountHasBeenSet = true; m_attachmentCount = value; }
    inline ManagedPolicyDetail& WithAttachmentCount(int value) { SetAttachmentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entities (users and roles) for which the policy is used as the
     * permissions boundary. </p> <p>For more information about permissions boundaries,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline int GetPermissionsBoundaryUsageCount() const { return m_permissionsBoundaryUsageCount; }
    inline bool PermissionsBoundaryUsageCountHasBeenSet() const { return m_permissionsBoundaryUsageCountHasBeenSet; }
    inline void SetPermissionsBoundaryUsageCount(int value) { m_permissionsBoundaryUsageCountHasBeenSet = true; m_permissionsBoundaryUsageCount = value; }
    inline ManagedPolicyDetail& WithPermissionsBoundaryUsageCount(int value) { SetPermissionsBoundaryUsageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the policy can be attached to an IAM user, group, or
     * role.</p>
     */
    inline bool GetIsAttachable() const { return m_isAttachable; }
    inline bool IsAttachableHasBeenSet() const { return m_isAttachableHasBeenSet; }
    inline void SetIsAttachable(bool value) { m_isAttachableHasBeenSet = true; m_isAttachable = value; }
    inline ManagedPolicyDetail& WithIsAttachable(bool value) { SetIsAttachable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ManagedPolicyDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    ManagedPolicyDetail& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    ManagedPolicyDetail& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline const Aws::Vector<PolicyVersion>& GetPolicyVersionList() const { return m_policyVersionList; }
    inline bool PolicyVersionListHasBeenSet() const { return m_policyVersionListHasBeenSet; }
    template<typename PolicyVersionListT = Aws::Vector<PolicyVersion>>
    void SetPolicyVersionList(PolicyVersionListT&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = std::forward<PolicyVersionListT>(value); }
    template<typename PolicyVersionListT = Aws::Vector<PolicyVersion>>
    ManagedPolicyDetail& WithPolicyVersionList(PolicyVersionListT&& value) { SetPolicyVersionList(std::forward<PolicyVersionListT>(value)); return *this;}
    template<typename PolicyVersionListT = PolicyVersion>
    ManagedPolicyDetail& AddPolicyVersionList(PolicyVersionListT&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.emplace_back(std::forward<PolicyVersionListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    int m_attachmentCount{0};
    bool m_attachmentCountHasBeenSet = false;

    int m_permissionsBoundaryUsageCount{0};
    bool m_permissionsBoundaryUsageCountHasBeenSet = false;

    bool m_isAttachable{false};
    bool m_isAttachableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;

    Aws::Vector<PolicyVersion> m_policyVersionList;
    bool m_policyVersionListHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
