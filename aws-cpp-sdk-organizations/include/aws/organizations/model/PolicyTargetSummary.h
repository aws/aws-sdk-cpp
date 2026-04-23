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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/TargetType.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about a root, OU, or account that a policy is attached
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/PolicyTargetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API PolicyTargetSummary
  {
  public:
    PolicyTargetSummary();
    PolicyTargetSummary(Aws::Utils::Json::JsonView jsonValue);
    PolicyTargetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline PolicyTargetSummary& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline PolicyTargetSummary& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a target ID string
     * requires one of the following:</p> <ul> <li> <p>Root: a string that begins with
     * "r-" followed by from 4 to 32 lower-case letters or digits.</p> </li> <li>
     * <p>Account: a string that consists of exactly 12 digits.</p> </li> <li>
     * <p>Organizational unit (OU): a string that begins with "ou-" followed by from 4
     * to 32 lower-case letters or digits (the ID of the root that the OU is in)
     * followed by a second "-" dash and from 8 to 32 additional lower-case letters or
     * digits.</p> </li> </ul>
     */
    inline PolicyTargetSummary& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline PolicyTargetSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline PolicyTargetSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the policy target.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline PolicyTargetSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline PolicyTargetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline PolicyTargetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the policy target.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline PolicyTargetSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the policy target.</p>
     */
    inline const TargetType& GetType() const{ return m_type; }

    /**
     * <p>The type of the policy target.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the policy target.</p>
     */
    inline void SetType(const TargetType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the policy target.</p>
     */
    inline void SetType(TargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the policy target.</p>
     */
    inline PolicyTargetSummary& WithType(const TargetType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the policy target.</p>
     */
    inline PolicyTargetSummary& WithType(TargetType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    TargetType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
