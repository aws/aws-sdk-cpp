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
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API InviteAccountToOrganizationRequest : public OrganizationsRequest
  {
  public:
    InviteAccountToOrganizationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier (ID) of the AWS account that you want to invite to join your
     * organization. This is a JSON object that contains the following elements: </p>
     * <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account id number</b> </i>&gt;"
     * }</code> </p> <p>If you use the AWS CLI, you can submit this as a single string,
     * similar to the following example:</p> <p> <code>--target
     * id=123456789012,type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, then you must provide the AWS account ID number as the
     * <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, then you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target id=bill@example.com,type=EMAIL</code> </p>
     */
    inline const HandshakeParty& GetTarget() const{ return m_target; }

    /**
     * <p>The identifier (ID) of the AWS account that you want to invite to join your
     * organization. This is a JSON object that contains the following elements: </p>
     * <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account id number</b> </i>&gt;"
     * }</code> </p> <p>If you use the AWS CLI, you can submit this as a single string,
     * similar to the following example:</p> <p> <code>--target
     * id=123456789012,type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, then you must provide the AWS account ID number as the
     * <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, then you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target id=bill@example.com,type=EMAIL</code> </p>
     */
    inline void SetTarget(const HandshakeParty& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The identifier (ID) of the AWS account that you want to invite to join your
     * organization. This is a JSON object that contains the following elements: </p>
     * <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account id number</b> </i>&gt;"
     * }</code> </p> <p>If you use the AWS CLI, you can submit this as a single string,
     * similar to the following example:</p> <p> <code>--target
     * id=123456789012,type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, then you must provide the AWS account ID number as the
     * <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, then you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target id=bill@example.com,type=EMAIL</code> </p>
     */
    inline void SetTarget(HandshakeParty&& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The identifier (ID) of the AWS account that you want to invite to join your
     * organization. This is a JSON object that contains the following elements: </p>
     * <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account id number</b> </i>&gt;"
     * }</code> </p> <p>If you use the AWS CLI, you can submit this as a single string,
     * similar to the following example:</p> <p> <code>--target
     * id=123456789012,type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, then you must provide the AWS account ID number as the
     * <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, then you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target id=bill@example.com,type=EMAIL</code> </p>
     */
    inline InviteAccountToOrganizationRequest& WithTarget(const HandshakeParty& value) { SetTarget(value); return *this;}

    /**
     * <p>The identifier (ID) of the AWS account that you want to invite to join your
     * organization. This is a JSON object that contains the following elements: </p>
     * <p> <code>{ "Type": "ACCOUNT", "Id": "&lt;<i> <b>account id number</b> </i>&gt;"
     * }</code> </p> <p>If you use the AWS CLI, you can submit this as a single string,
     * similar to the following example:</p> <p> <code>--target
     * id=123456789012,type=ACCOUNT</code> </p> <p>If you specify <code>"Type":
     * "ACCOUNT"</code>, then you must provide the AWS account ID number as the
     * <code>Id</code>. If you specify <code>"Type": "EMAIL"</code>, then you must
     * specify the email address that is associated with the account.</p> <p>
     * <code>--target id=bill@example.com,type=EMAIL</code> </p>
     */
    inline InviteAccountToOrganizationRequest& WithTarget(HandshakeParty&& value) { SetTarget(value); return *this;}

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline InviteAccountToOrganizationRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline InviteAccountToOrganizationRequest& WithNotes(Aws::String&& value) { SetNotes(value); return *this;}

    /**
     * <p>Additional information that you want to include in the generated email to the
     * recipient account owner.</p>
     */
    inline InviteAccountToOrganizationRequest& WithNotes(const char* value) { SetNotes(value); return *this;}

  private:
    HandshakeParty m_target;
    bool m_targetHasBeenSet;
    Aws::String m_notes;
    bool m_notesHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
