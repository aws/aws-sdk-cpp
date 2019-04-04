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
   * Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ManagedPolicyDetail">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ManagedPolicyDetail
  {
  public:
    ManagedPolicyDetail();
    ManagedPolicyDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    ManagedPolicyDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline ManagedPolicyDetail& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline ManagedPolicyDetail& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline ManagedPolicyDetail& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline ManagedPolicyDetail& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline ManagedPolicyDetail& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline ManagedPolicyDetail& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline ManagedPolicyDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline ManagedPolicyDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline ManagedPolicyDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline ManagedPolicyDetail& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline ManagedPolicyDetail& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline ManagedPolicyDetail& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::move(value); }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId.assign(value); }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline ManagedPolicyDetail& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline ManagedPolicyDetail& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * (operative) version.</p> <p>For more information about policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for Managed Policies</a> in the <i>Using IAM</i> guide. </p>
     */
    inline ManagedPolicyDetail& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The number of principal entities (users, groups, and roles) that the policy
     * is attached to.</p>
     */
    inline int GetAttachmentCount() const{ return m_attachmentCount; }

    /**
     * <p>The number of principal entities (users, groups, and roles) that the policy
     * is attached to.</p>
     */
    inline bool AttachmentCountHasBeenSet() const { return m_attachmentCountHasBeenSet; }

    /**
     * <p>The number of principal entities (users, groups, and roles) that the policy
     * is attached to.</p>
     */
    inline void SetAttachmentCount(int value) { m_attachmentCountHasBeenSet = true; m_attachmentCount = value; }

    /**
     * <p>The number of principal entities (users, groups, and roles) that the policy
     * is attached to.</p>
     */
    inline ManagedPolicyDetail& WithAttachmentCount(int value) { SetAttachmentCount(value); return *this;}


    /**
     * <p>The number of entities (users and roles) for which the policy is used as the
     * permissions boundary. </p> <p>For more information about permissions boundaries,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * Boundaries for IAM Identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline int GetPermissionsBoundaryUsageCount() const{ return m_permissionsBoundaryUsageCount; }

    /**
     * <p>The number of entities (users and roles) for which the policy is used as the
     * permissions boundary. </p> <p>For more information about permissions boundaries,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * Boundaries for IAM Identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PermissionsBoundaryUsageCountHasBeenSet() const { return m_permissionsBoundaryUsageCountHasBeenSet; }

    /**
     * <p>The number of entities (users and roles) for which the policy is used as the
     * permissions boundary. </p> <p>For more information about permissions boundaries,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * Boundaries for IAM Identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPermissionsBoundaryUsageCount(int value) { m_permissionsBoundaryUsageCountHasBeenSet = true; m_permissionsBoundaryUsageCount = value; }

    /**
     * <p>The number of entities (users and roles) for which the policy is used as the
     * permissions boundary. </p> <p>For more information about permissions boundaries,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * Boundaries for IAM Identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline ManagedPolicyDetail& WithPermissionsBoundaryUsageCount(int value) { SetPermissionsBoundaryUsageCount(value); return *this;}


    /**
     * <p>Specifies whether the policy can be attached to an IAM user, group, or
     * role.</p>
     */
    inline bool GetIsAttachable() const{ return m_isAttachable; }

    /**
     * <p>Specifies whether the policy can be attached to an IAM user, group, or
     * role.</p>
     */
    inline bool IsAttachableHasBeenSet() const { return m_isAttachableHasBeenSet; }

    /**
     * <p>Specifies whether the policy can be attached to an IAM user, group, or
     * role.</p>
     */
    inline void SetIsAttachable(bool value) { m_isAttachableHasBeenSet = true; m_isAttachable = value; }

    /**
     * <p>Specifies whether the policy can be attached to an IAM user, group, or
     * role.</p>
     */
    inline ManagedPolicyDetail& WithIsAttachable(bool value) { SetIsAttachable(value); return *this;}


    /**
     * <p>A friendly description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline ManagedPolicyDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline ManagedPolicyDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly description of the policy.</p>
     */
    inline ManagedPolicyDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline ManagedPolicyDetail& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline ManagedPolicyDetail& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline ManagedPolicyDetail& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline ManagedPolicyDetail& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline const Aws::Vector<PolicyVersion>& GetPolicyVersionList() const{ return m_policyVersionList; }

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline bool PolicyVersionListHasBeenSet() const { return m_policyVersionListHasBeenSet; }

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline void SetPolicyVersionList(const Aws::Vector<PolicyVersion>& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = value; }

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline void SetPolicyVersionList(Aws::Vector<PolicyVersion>&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = std::move(value); }

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline ManagedPolicyDetail& WithPolicyVersionList(const Aws::Vector<PolicyVersion>& value) { SetPolicyVersionList(value); return *this;}

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline ManagedPolicyDetail& WithPolicyVersionList(Aws::Vector<PolicyVersion>&& value) { SetPolicyVersionList(std::move(value)); return *this;}

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline ManagedPolicyDetail& AddPolicyVersionList(const PolicyVersion& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.push_back(value); return *this; }

    /**
     * <p>A list containing information about the versions of the policy.</p>
     */
    inline ManagedPolicyDetail& AddPolicyVersionList(PolicyVersion&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet;

    int m_attachmentCount;
    bool m_attachmentCountHasBeenSet;

    int m_permissionsBoundaryUsageCount;
    bool m_permissionsBoundaryUsageCountHasBeenSet;

    bool m_isAttachable;
    bool m_isAttachableHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet;

    Aws::Vector<PolicyVersion> m_policyVersionList;
    bool m_policyVersionListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
