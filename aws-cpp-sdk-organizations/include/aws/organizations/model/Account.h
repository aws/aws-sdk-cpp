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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/AccountStatus.h>
#include <aws/organizations/model/AccountJoinedMethod.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about an AWS account that is a member of an
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Account">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API Account
  {
  public:
    Account();
    Account(const Aws::Utils::Json::JsonValue& jsonValue);
    Account& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline Account& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline Account& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline Account& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Account& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Account& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Account& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline Account& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline Account& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline Account& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The status of the account in the organization.</p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the account in the organization.</p>
     */
    inline void SetStatus(const AccountStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the account in the organization.</p>
     */
    inline void SetStatus(AccountStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the account in the organization.</p>
     */
    inline Account& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the account in the organization.</p>
     */
    inline Account& WithStatus(AccountStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline const AccountJoinedMethod& GetJoinedMethod() const{ return m_joinedMethod; }

    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline void SetJoinedMethod(const AccountJoinedMethod& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }

    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline void SetJoinedMethod(AccountJoinedMethod&& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }

    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline Account& WithJoinedMethod(const AccountJoinedMethod& value) { SetJoinedMethod(value); return *this;}

    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline Account& WithJoinedMethod(AccountJoinedMethod&& value) { SetJoinedMethod(value); return *this;}

    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline const Aws::Utils::DateTime& GetJoinedTimestamp() const{ return m_joinedTimestamp; }

    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline void SetJoinedTimestamp(const Aws::Utils::DateTime& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = value; }

    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline void SetJoinedTimestamp(Aws::Utils::DateTime&& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = value; }

    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline Account& WithJoinedTimestamp(const Aws::Utils::DateTime& value) { SetJoinedTimestamp(value); return *this;}

    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline Account& WithJoinedTimestamp(Aws::Utils::DateTime&& value) { SetJoinedTimestamp(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    AccountStatus m_status;
    bool m_statusHasBeenSet;
    AccountJoinedMethod m_joinedMethod;
    bool m_joinedMethodHasBeenSet;
    Aws::Utils::DateTime m_joinedTimestamp;
    bool m_joinedTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
