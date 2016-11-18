/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/InstanceProfile.h>
#include <aws/iam/model/PolicyDetail.h>
#include <aws/iam/model/AttachedPolicy.h>

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
   * <p>Contains information about an IAM role, including all of the role's
   * policies.</p> <p>This data type is used as a response element in the
   * <a>GetAccountAuthorizationDetails</a> action.</p>
   */
  class AWS_IAM_API RoleDetail
  {
  public:
    RoleDetail();
    RoleDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    RoleDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline RoleDetail& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline RoleDetail& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the role. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline RoleDetail& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline RoleDetail& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline RoleDetail& WithRoleName(Aws::String&& value) { SetRoleName(value); return *this;}

    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline RoleDetail& WithRoleName(const char* value) { SetRoleName(value); return *this;}

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetRoleId() const{ return m_roleId; }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetRoleId(const Aws::String& value) { m_roleIdHasBeenSet = true; m_roleId = value; }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetRoleId(Aws::String&& value) { m_roleIdHasBeenSet = true; m_roleId = value; }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetRoleId(const char* value) { m_roleIdHasBeenSet = true; m_roleId.assign(value); }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline RoleDetail& WithRoleId(const Aws::String& value) { SetRoleId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline RoleDetail& WithRoleId(Aws::String&& value) { SetRoleId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline RoleDetail& WithRoleId(const char* value) { SetRoleId(value); return *this;}

    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline RoleDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline RoleDetail& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    
    inline RoleDetail& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline RoleDetail& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline RoleDetail& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const{ return m_assumeRolePolicyDocument; }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(const Aws::String& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(Aws::String&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = value; }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline void SetAssumeRolePolicyDocument(const char* value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument.assign(value); }

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline RoleDetail& WithAssumeRolePolicyDocument(const Aws::String& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline RoleDetail& WithAssumeRolePolicyDocument(Aws::String&& value) { SetAssumeRolePolicyDocument(value); return *this;}

    /**
     * <p>The trust policy that grants permission to assume the role.</p>
     */
    inline RoleDetail& WithAssumeRolePolicyDocument(const char* value) { SetAssumeRolePolicyDocument(value); return *this;}

    
    inline const Aws::Vector<InstanceProfile>& GetInstanceProfileList() const{ return m_instanceProfileList; }

    
    inline void SetInstanceProfileList(const Aws::Vector<InstanceProfile>& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList = value; }

    
    inline void SetInstanceProfileList(Aws::Vector<InstanceProfile>&& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList = value; }

    
    inline RoleDetail& WithInstanceProfileList(const Aws::Vector<InstanceProfile>& value) { SetInstanceProfileList(value); return *this;}

    
    inline RoleDetail& WithInstanceProfileList(Aws::Vector<InstanceProfile>&& value) { SetInstanceProfileList(value); return *this;}

    
    inline RoleDetail& AddInstanceProfileList(const InstanceProfile& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList.push_back(value); return *this; }

    
    inline RoleDetail& AddInstanceProfileList(InstanceProfile&& value) { m_instanceProfileListHasBeenSet = true; m_instanceProfileList.push_back(value); return *this; }

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline const Aws::Vector<PolicyDetail>& GetRolePolicyList() const{ return m_rolePolicyList; }

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline void SetRolePolicyList(const Aws::Vector<PolicyDetail>& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList = value; }

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline void SetRolePolicyList(Aws::Vector<PolicyDetail>&& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList = value; }

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline RoleDetail& WithRolePolicyList(const Aws::Vector<PolicyDetail>& value) { SetRolePolicyList(value); return *this;}

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline RoleDetail& WithRolePolicyList(Aws::Vector<PolicyDetail>&& value) { SetRolePolicyList(value); return *this;}

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline RoleDetail& AddRolePolicyList(const PolicyDetail& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList.push_back(value); return *this; }

    /**
     * <p>A list of inline policies embedded in the role. These policies are the role's
     * access (permissions) policies.</p>
     */
    inline RoleDetail& AddRolePolicyList(PolicyDetail&& value) { m_rolePolicyListHasBeenSet = true; m_rolePolicyList.push_back(value); return *this; }

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline const Aws::Vector<AttachedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline void SetAttachedManagedPolicies(const Aws::Vector<AttachedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline void SetAttachedManagedPolicies(Aws::Vector<AttachedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline RoleDetail& WithAttachedManagedPolicies(const Aws::Vector<AttachedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline RoleDetail& WithAttachedManagedPolicies(Aws::Vector<AttachedPolicy>&& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline RoleDetail& AddAttachedManagedPolicies(const AttachedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

    /**
     * <p>A list of managed policies attached to the role. These policies are the
     * role's access (permissions) policies.</p>
     */
    inline RoleDetail& AddAttachedManagedPolicies(AttachedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
    Aws::String m_roleId;
    bool m_roleIdHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet;
    Aws::Vector<InstanceProfile> m_instanceProfileList;
    bool m_instanceProfileListHasBeenSet;
    Aws::Vector<PolicyDetail> m_rolePolicyList;
    bool m_rolePolicyListHasBeenSet;
    Aws::Vector<AttachedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
