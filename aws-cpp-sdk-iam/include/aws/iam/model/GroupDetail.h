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
   * policies.</p> <p>This data type is used as a response element in the
   * <a>GetAccountAuthorizationDetails</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GroupDetail">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API GroupDetail
  {
  public:
    GroupDetail();
    GroupDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    GroupDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline GroupDetail& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline GroupDetail& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the group. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline GroupDetail& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline GroupDetail& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline GroupDetail& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The friendly name that identifies the group.</p>
     */
    inline GroupDetail& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline GroupDetail& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline GroupDetail& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The stable and unique string identifying the group. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline GroupDetail& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline GroupDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline GroupDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    
    inline GroupDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline GroupDetail& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the group was created.</p>
     */
    inline GroupDetail& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline const Aws::Vector<PolicyDetail>& GetGroupPolicyList() const{ return m_groupPolicyList; }

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline bool GroupPolicyListHasBeenSet() const { return m_groupPolicyListHasBeenSet; }

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline void SetGroupPolicyList(const Aws::Vector<PolicyDetail>& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = value; }

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline void SetGroupPolicyList(Aws::Vector<PolicyDetail>&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList = std::move(value); }

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline GroupDetail& WithGroupPolicyList(const Aws::Vector<PolicyDetail>& value) { SetGroupPolicyList(value); return *this;}

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline GroupDetail& WithGroupPolicyList(Aws::Vector<PolicyDetail>&& value) { SetGroupPolicyList(std::move(value)); return *this;}

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline GroupDetail& AddGroupPolicyList(const PolicyDetail& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.push_back(value); return *this; }

    /**
     * <p>A list of the inline policies embedded in the group.</p>
     */
    inline GroupDetail& AddGroupPolicyList(PolicyDetail&& value) { m_groupPolicyListHasBeenSet = true; m_groupPolicyList.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline const Aws::Vector<AttachedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline bool AttachedManagedPoliciesHasBeenSet() const { return m_attachedManagedPoliciesHasBeenSet; }

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline void SetAttachedManagedPolicies(const Aws::Vector<AttachedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline void SetAttachedManagedPolicies(Aws::Vector<AttachedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::move(value); }

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline GroupDetail& WithAttachedManagedPolicies(const Aws::Vector<AttachedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline GroupDetail& WithAttachedManagedPolicies(Aws::Vector<AttachedPolicy>&& value) { SetAttachedManagedPolicies(std::move(value)); return *this;}

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline GroupDetail& AddAttachedManagedPolicies(const AttachedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

    /**
     * <p>A list of the managed policies attached to the group.</p>
     */
    inline GroupDetail& AddAttachedManagedPolicies(AttachedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Vector<PolicyDetail> m_groupPolicyList;
    bool m_groupPolicyListHasBeenSet;

    Aws::Vector<AttachedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
