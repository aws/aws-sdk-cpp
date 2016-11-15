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
   * <p>Contains information about an IAM user, including all the user's policies and
   * all the IAM groups the user is in.</p> <p>This data type is used as a response
   * element in the <a>GetAccountAuthorizationDetails</a> action.</p>
   */
  class AWS_IAM_API UserDetail
  {
  public:
    UserDetail();
    UserDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    UserDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline UserDetail& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline UserDetail& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline UserDetail& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline UserDetail& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline UserDetail& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline UserDetail& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline UserDetail& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline UserDetail& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline UserDetail& WithUserId(const char* value) { SetUserId(value); return *this;}

    
    inline const Aws::String& GetArn() const{ return m_arn; }

    
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    
    inline UserDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    
    inline UserDetail& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    
    inline UserDetail& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline UserDetail& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline UserDetail& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(value); return *this;}

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline const Aws::Vector<PolicyDetail>& GetUserPolicyList() const{ return m_userPolicyList; }

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline void SetUserPolicyList(const Aws::Vector<PolicyDetail>& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList = value; }

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline void SetUserPolicyList(Aws::Vector<PolicyDetail>&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList = value; }

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline UserDetail& WithUserPolicyList(const Aws::Vector<PolicyDetail>& value) { SetUserPolicyList(value); return *this;}

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline UserDetail& WithUserPolicyList(Aws::Vector<PolicyDetail>&& value) { SetUserPolicyList(value); return *this;}

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline UserDetail& AddUserPolicyList(const PolicyDetail& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList.push_back(value); return *this; }

    /**
     * <p>A list of the inline policies embedded in the user.</p>
     */
    inline UserDetail& AddUserPolicyList(PolicyDetail&& value) { m_userPolicyListHasBeenSet = true; m_userPolicyList.push_back(value); return *this; }

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupList() const{ return m_groupList; }

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline void SetGroupList(const Aws::Vector<Aws::String>& value) { m_groupListHasBeenSet = true; m_groupList = value; }

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline void SetGroupList(Aws::Vector<Aws::String>&& value) { m_groupListHasBeenSet = true; m_groupList = value; }

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline UserDetail& WithGroupList(const Aws::Vector<Aws::String>& value) { SetGroupList(value); return *this;}

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline UserDetail& WithGroupList(Aws::Vector<Aws::String>&& value) { SetGroupList(value); return *this;}

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline UserDetail& AddGroupList(const Aws::String& value) { m_groupListHasBeenSet = true; m_groupList.push_back(value); return *this; }

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline UserDetail& AddGroupList(Aws::String&& value) { m_groupListHasBeenSet = true; m_groupList.push_back(value); return *this; }

    /**
     * <p>A list of IAM groups that the user is in.</p>
     */
    inline UserDetail& AddGroupList(const char* value) { m_groupListHasBeenSet = true; m_groupList.push_back(value); return *this; }

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline const Aws::Vector<AttachedPolicy>& GetAttachedManagedPolicies() const{ return m_attachedManagedPolicies; }

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline void SetAttachedManagedPolicies(const Aws::Vector<AttachedPolicy>& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline void SetAttachedManagedPolicies(Aws::Vector<AttachedPolicy>&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = value; }

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline UserDetail& WithAttachedManagedPolicies(const Aws::Vector<AttachedPolicy>& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline UserDetail& WithAttachedManagedPolicies(Aws::Vector<AttachedPolicy>&& value) { SetAttachedManagedPolicies(value); return *this;}

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline UserDetail& AddAttachedManagedPolicies(const AttachedPolicy& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

    /**
     * <p>A list of the managed policies attached to the user.</p>
     */
    inline UserDetail& AddAttachedManagedPolicies(AttachedPolicy&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.push_back(value); return *this; }

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
    Aws::Vector<PolicyDetail> m_userPolicyList;
    bool m_userPolicyListHasBeenSet;
    Aws::Vector<Aws::String> m_groupList;
    bool m_groupListHasBeenSet;
    Aws::Vector<AttachedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
