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
   * <p>Contains information about a managed policy.</p> <p>This data type is used as
   * a response element in the <a>CreatePolicy</a>, <a>GetPolicy</a>, and
   * <a>ListPolicies</a> operations. </p> <p>For more information about managed
   * policies, refer to <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
   * policies and inline policies</a> in the <i>IAM User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Policy">AWS API
   * Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_IAM_API Policy();
    AWS_IAM_API Policy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API Policy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline Policy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline Policy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The friendly name (not ARN) identifying the policy.</p>
     */
    inline Policy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The stable and unique string identifying the policy.</p> <p>For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline Policy& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline Policy& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline Policy& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the policy.</p> <p>For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::move(value); }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId.assign(value); }

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline Policy& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline Policy& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the version of the policy that is set as the default
     * version.</p>
     */
    inline Policy& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The number of entities (users, groups, and roles) that the policy is attached
     * to.</p>
     */
    inline int GetAttachmentCount() const{ return m_attachmentCount; }

    /**
     * <p>The number of entities (users, groups, and roles) that the policy is attached
     * to.</p>
     */
    inline bool AttachmentCountHasBeenSet() const { return m_attachmentCountHasBeenSet; }

    /**
     * <p>The number of entities (users, groups, and roles) that the policy is attached
     * to.</p>
     */
    inline void SetAttachmentCount(int value) { m_attachmentCountHasBeenSet = true; m_attachmentCount = value; }

    /**
     * <p>The number of entities (users, groups, and roles) that the policy is attached
     * to.</p>
     */
    inline Policy& WithAttachmentCount(int value) { SetAttachmentCount(value); return *this;}


    /**
     * <p>The number of entities (users and roles) for which the policy is used to set
     * the permissions boundary. </p> <p>For more information about permissions
     * boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline int GetPermissionsBoundaryUsageCount() const{ return m_permissionsBoundaryUsageCount; }

    /**
     * <p>The number of entities (users and roles) for which the policy is used to set
     * the permissions boundary. </p> <p>For more information about permissions
     * boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool PermissionsBoundaryUsageCountHasBeenSet() const { return m_permissionsBoundaryUsageCountHasBeenSet; }

    /**
     * <p>The number of entities (users and roles) for which the policy is used to set
     * the permissions boundary. </p> <p>For more information about permissions
     * boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetPermissionsBoundaryUsageCount(int value) { m_permissionsBoundaryUsageCountHasBeenSet = true; m_permissionsBoundaryUsageCount = value; }

    /**
     * <p>The number of entities (users and roles) for which the policy is used to set
     * the permissions boundary. </p> <p>For more information about permissions
     * boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithPermissionsBoundaryUsageCount(int value) { SetPermissionsBoundaryUsageCount(value); return *this;}


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
    inline Policy& WithIsAttachable(bool value) { SetIsAttachable(value); return *this;}


    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline Policy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline Policy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly description of the policy.</p> <p>This element is included in the
     * response to the <a>GetPolicy</a> operation. It is not included in the response
     * to the <a>ListPolicies</a> operation. </p>
     */
    inline Policy& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline Policy& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was created.</p>
     */
    inline Policy& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


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
    inline Policy& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the policy was last updated.</p> <p>When a policy has
     * only one version, this field contains the date and time when the policy was
     * created. When a policy has more than one version, this field contains the date
     * and time when the most recent policy version was created.</p>
     */
    inline Policy& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline Policy& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    int m_attachmentCount;
    bool m_attachmentCountHasBeenSet = false;

    int m_permissionsBoundaryUsageCount;
    bool m_permissionsBoundaryUsageCountHasBeenSet = false;

    bool m_isAttachable;
    bool m_isAttachableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
