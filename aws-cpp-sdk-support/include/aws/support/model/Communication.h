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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/AttachmentDetails.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>A communication associated with an AWS Support case. The communication
   * consists of the case ID, the message body, attachment information, the account
   * email address, and the date and time of the communication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Communication">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API Communication
  {
  public:
    Communication();
    Communication(Aws::Utils::Json::JsonView jsonValue);
    Communication& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline Communication& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline Communication& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline Communication& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline Communication& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline Communication& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The text of the communication between the customer and AWS Support.</p>
     */
    inline Communication& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline const Aws::String& GetSubmittedBy() const{ return m_submittedBy; }

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline void SetSubmittedBy(const Aws::String& value) { m_submittedByHasBeenSet = true; m_submittedBy = value; }

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline void SetSubmittedBy(Aws::String&& value) { m_submittedByHasBeenSet = true; m_submittedBy = std::move(value); }

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline void SetSubmittedBy(const char* value) { m_submittedByHasBeenSet = true; m_submittedBy.assign(value); }

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline Communication& WithSubmittedBy(const Aws::String& value) { SetSubmittedBy(value); return *this;}

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline Communication& WithSubmittedBy(Aws::String&& value) { SetSubmittedBy(std::move(value)); return *this;}

    /**
     * <p>The email address of the account that submitted the AWS Support case.</p>
     */
    inline Communication& WithSubmittedBy(const char* value) { SetSubmittedBy(value); return *this;}


    /**
     * <p>The time the communication was created.</p>
     */
    inline const Aws::String& GetTimeCreated() const{ return m_timeCreated; }

    /**
     * <p>The time the communication was created.</p>
     */
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }

    /**
     * <p>The time the communication was created.</p>
     */
    inline void SetTimeCreated(const Aws::String& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = value; }

    /**
     * <p>The time the communication was created.</p>
     */
    inline void SetTimeCreated(Aws::String&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::move(value); }

    /**
     * <p>The time the communication was created.</p>
     */
    inline void SetTimeCreated(const char* value) { m_timeCreatedHasBeenSet = true; m_timeCreated.assign(value); }

    /**
     * <p>The time the communication was created.</p>
     */
    inline Communication& WithTimeCreated(const Aws::String& value) { SetTimeCreated(value); return *this;}

    /**
     * <p>The time the communication was created.</p>
     */
    inline Communication& WithTimeCreated(Aws::String&& value) { SetTimeCreated(std::move(value)); return *this;}

    /**
     * <p>The time the communication was created.</p>
     */
    inline Communication& WithTimeCreated(const char* value) { SetTimeCreated(value); return *this;}


    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline const Aws::Vector<AttachmentDetails>& GetAttachmentSet() const{ return m_attachmentSet; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline bool AttachmentSetHasBeenSet() const { return m_attachmentSetHasBeenSet; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline void SetAttachmentSet(const Aws::Vector<AttachmentDetails>& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet = value; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline void SetAttachmentSet(Aws::Vector<AttachmentDetails>&& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet = std::move(value); }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& WithAttachmentSet(const Aws::Vector<AttachmentDetails>& value) { SetAttachmentSet(value); return *this;}

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& WithAttachmentSet(Aws::Vector<AttachmentDetails>&& value) { SetAttachmentSet(std::move(value)); return *this;}

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& AddAttachmentSet(const AttachmentDetails& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet.push_back(value); return *this; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& AddAttachmentSet(AttachmentDetails&& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet;

    Aws::String m_body;
    bool m_bodyHasBeenSet;

    Aws::String m_submittedBy;
    bool m_submittedByHasBeenSet;

    Aws::String m_timeCreated;
    bool m_timeCreatedHasBeenSet;

    Aws::Vector<AttachmentDetails> m_attachmentSet;
    bool m_attachmentSetHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
