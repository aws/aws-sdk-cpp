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
   * <p>Contains information about an IAM user entity.</p> <p>This data type is used
   * as a response element in the following actions:</p> <ul> <li> <p>
   * <a>CreateUser</a> </p> </li> <li> <p> <a>GetUser</a> </p> </li> <li> <p>
   * <a>ListUsers</a> </p> </li> </ul>
   */
  class AWS_IAM_API User
  {
  public:
    User();
    User(const Aws::Utils::Xml::XmlNode& xmlNode);
    User& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline User& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline User& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline User& WithPath(const char* value) { SetPath(value); return *this;}

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
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}

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
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline User& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide.</p>
     */
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline User& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline User& WithArn(const char* value) { SetArn(value); return *this;}

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
    inline User& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline User& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user's password was last used to sign in to an
     * AWS website. For a list of AWS websites that capture a user's last sign-in time,
     * see the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Credential
     * Reports</a> topic in the <i>Using IAM</i> guide. If a password is used more than
     * once in a five-minute span, only the first use is returned in this field. This
     * field is null (not present) when:</p> <ul> <li> <p>The user does not have a
     * password</p> </li> <li> <p>The password exists but has never been used (at least
     * not since IAM started tracking this information on October 20th, 2014</p> </li>
     * <li> <p>there is no sign-in data associated with the user</p> </li> </ul>
     * <p>This value is returned only in the <a>GetUser</a> and <a>ListUsers</a>
     * actions. </p>
     */
    inline const Aws::Utils::DateTime& GetPasswordLastUsed() const{ return m_passwordLastUsed; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user's password was last used to sign in to an
     * AWS website. For a list of AWS websites that capture a user's last sign-in time,
     * see the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Credential
     * Reports</a> topic in the <i>Using IAM</i> guide. If a password is used more than
     * once in a five-minute span, only the first use is returned in this field. This
     * field is null (not present) when:</p> <ul> <li> <p>The user does not have a
     * password</p> </li> <li> <p>The password exists but has never been used (at least
     * not since IAM started tracking this information on October 20th, 2014</p> </li>
     * <li> <p>there is no sign-in data associated with the user</p> </li> </ul>
     * <p>This value is returned only in the <a>GetUser</a> and <a>ListUsers</a>
     * actions. </p>
     */
    inline void SetPasswordLastUsed(const Aws::Utils::DateTime& value) { m_passwordLastUsedHasBeenSet = true; m_passwordLastUsed = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user's password was last used to sign in to an
     * AWS website. For a list of AWS websites that capture a user's last sign-in time,
     * see the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Credential
     * Reports</a> topic in the <i>Using IAM</i> guide. If a password is used more than
     * once in a five-minute span, only the first use is returned in this field. This
     * field is null (not present) when:</p> <ul> <li> <p>The user does not have a
     * password</p> </li> <li> <p>The password exists but has never been used (at least
     * not since IAM started tracking this information on October 20th, 2014</p> </li>
     * <li> <p>there is no sign-in data associated with the user</p> </li> </ul>
     * <p>This value is returned only in the <a>GetUser</a> and <a>ListUsers</a>
     * actions. </p>
     */
    inline void SetPasswordLastUsed(Aws::Utils::DateTime&& value) { m_passwordLastUsedHasBeenSet = true; m_passwordLastUsed = value; }

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user's password was last used to sign in to an
     * AWS website. For a list of AWS websites that capture a user's last sign-in time,
     * see the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Credential
     * Reports</a> topic in the <i>Using IAM</i> guide. If a password is used more than
     * once in a five-minute span, only the first use is returned in this field. This
     * field is null (not present) when:</p> <ul> <li> <p>The user does not have a
     * password</p> </li> <li> <p>The password exists but has never been used (at least
     * not since IAM started tracking this information on October 20th, 2014</p> </li>
     * <li> <p>there is no sign-in data associated with the user</p> </li> </ul>
     * <p>This value is returned only in the <a>GetUser</a> and <a>ListUsers</a>
     * actions. </p>
     */
    inline User& WithPasswordLastUsed(const Aws::Utils::DateTime& value) { SetPasswordLastUsed(value); return *this;}

    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user's password was last used to sign in to an
     * AWS website. For a list of AWS websites that capture a user's last sign-in time,
     * see the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Credential
     * Reports</a> topic in the <i>Using IAM</i> guide. If a password is used more than
     * once in a five-minute span, only the first use is returned in this field. This
     * field is null (not present) when:</p> <ul> <li> <p>The user does not have a
     * password</p> </li> <li> <p>The password exists but has never been used (at least
     * not since IAM started tracking this information on October 20th, 2014</p> </li>
     * <li> <p>there is no sign-in data associated with the user</p> </li> </ul>
     * <p>This value is returned only in the <a>GetUser</a> and <a>ListUsers</a>
     * actions. </p>
     */
    inline User& WithPasswordLastUsed(Aws::Utils::DateTime&& value) { SetPasswordLastUsed(value); return *this;}

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
    Aws::Utils::DateTime m_passwordLastUsed;
    bool m_passwordLastUsedHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
