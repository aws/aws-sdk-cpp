/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsIamPolicyVersion.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Represents an IAM permissions policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamPolicyDetails">AWS
   * API Reference</a></p>
   */
  class AwsIamPolicyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsIamPolicyDetails();
    AWS_SECURITYHUB_API AwsIamPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of users, groups, and roles that the policy is attached to.</p>
     */
    inline int GetAttachmentCount() const{ return m_attachmentCount; }

    /**
     * <p>The number of users, groups, and roles that the policy is attached to.</p>
     */
    inline bool AttachmentCountHasBeenSet() const { return m_attachmentCountHasBeenSet; }

    /**
     * <p>The number of users, groups, and roles that the policy is attached to.</p>
     */
    inline void SetAttachmentCount(int value) { m_attachmentCountHasBeenSet = true; m_attachmentCount = value; }

    /**
     * <p>The number of users, groups, and roles that the policy is attached to.</p>
     */
    inline AwsIamPolicyDetails& WithAttachmentCount(int value) { SetAttachmentCount(value); return *this;}


    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamPolicyDetails& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamPolicyDetails& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}

    /**
     * <p>When the policy was created.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamPolicyDetails& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}


    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline bool DefaultVersionIdHasBeenSet() const { return m_defaultVersionIdHasBeenSet; }

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = value; }

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId = std::move(value); }

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionIdHasBeenSet = true; m_defaultVersionId.assign(value); }

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the default version of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>A description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Whether the policy can be attached to a user, group, or role.</p>
     */
    inline bool GetIsAttachable() const{ return m_isAttachable; }

    /**
     * <p>Whether the policy can be attached to a user, group, or role.</p>
     */
    inline bool IsAttachableHasBeenSet() const { return m_isAttachableHasBeenSet; }

    /**
     * <p>Whether the policy can be attached to a user, group, or role.</p>
     */
    inline void SetIsAttachable(bool value) { m_isAttachableHasBeenSet = true; m_isAttachable = value; }

    /**
     * <p>Whether the policy can be attached to a user, group, or role.</p>
     */
    inline AwsIamPolicyDetails& WithIsAttachable(bool value) { SetIsAttachable(value); return *this;}


    /**
     * <p>The path to the policy.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the policy.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the policy.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the policy.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the policy.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The number of users and roles that use the policy to set the permissions
     * boundary.</p>
     */
    inline int GetPermissionsBoundaryUsageCount() const{ return m_permissionsBoundaryUsageCount; }

    /**
     * <p>The number of users and roles that use the policy to set the permissions
     * boundary.</p>
     */
    inline bool PermissionsBoundaryUsageCountHasBeenSet() const { return m_permissionsBoundaryUsageCountHasBeenSet; }

    /**
     * <p>The number of users and roles that use the policy to set the permissions
     * boundary.</p>
     */
    inline void SetPermissionsBoundaryUsageCount(int value) { m_permissionsBoundaryUsageCountHasBeenSet = true; m_permissionsBoundaryUsageCount = value; }

    /**
     * <p>The number of users and roles that use the policy to set the permissions
     * boundary.</p>
     */
    inline AwsIamPolicyDetails& WithPermissionsBoundaryUsageCount(int value) { SetPermissionsBoundaryUsageCount(value); return *this;}


    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>List of versions of the policy.</p>
     */
    inline const Aws::Vector<AwsIamPolicyVersion>& GetPolicyVersionList() const{ return m_policyVersionList; }

    /**
     * <p>List of versions of the policy.</p>
     */
    inline bool PolicyVersionListHasBeenSet() const { return m_policyVersionListHasBeenSet; }

    /**
     * <p>List of versions of the policy.</p>
     */
    inline void SetPolicyVersionList(const Aws::Vector<AwsIamPolicyVersion>& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = value; }

    /**
     * <p>List of versions of the policy.</p>
     */
    inline void SetPolicyVersionList(Aws::Vector<AwsIamPolicyVersion>&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList = std::move(value); }

    /**
     * <p>List of versions of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyVersionList(const Aws::Vector<AwsIamPolicyVersion>& value) { SetPolicyVersionList(value); return *this;}

    /**
     * <p>List of versions of the policy.</p>
     */
    inline AwsIamPolicyDetails& WithPolicyVersionList(Aws::Vector<AwsIamPolicyVersion>&& value) { SetPolicyVersionList(std::move(value)); return *this;}

    /**
     * <p>List of versions of the policy.</p>
     */
    inline AwsIamPolicyDetails& AddPolicyVersionList(const AwsIamPolicyVersion& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.push_back(value); return *this; }

    /**
     * <p>List of versions of the policy.</p>
     */
    inline AwsIamPolicyDetails& AddPolicyVersionList(AwsIamPolicyVersion&& value) { m_policyVersionListHasBeenSet = true; m_policyVersionList.push_back(std::move(value)); return *this; }


    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdateDate(const Aws::String& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdateDate(Aws::String&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdateDate(const char* value) { m_updateDateHasBeenSet = true; m_updateDate.assign(value); }

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamPolicyDetails& WithUpdateDate(const Aws::String& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamPolicyDetails& WithUpdateDate(Aws::String&& value) { SetUpdateDate(std::move(value)); return *this;}

    /**
     * <p>When the policy was most recently updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamPolicyDetails& WithUpdateDate(const char* value) { SetUpdateDate(value); return *this;}

  private:

    int m_attachmentCount;
    bool m_attachmentCountHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_defaultVersionId;
    bool m_defaultVersionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isAttachable;
    bool m_isAttachableHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_permissionsBoundaryUsageCount;
    bool m_permissionsBoundaryUsageCountHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Vector<AwsIamPolicyVersion> m_policyVersionList;
    bool m_policyVersionListHasBeenSet = false;

    Aws::String m_updateDate;
    bool m_updateDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
