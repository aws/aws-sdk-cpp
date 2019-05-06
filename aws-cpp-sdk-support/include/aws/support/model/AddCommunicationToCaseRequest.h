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
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   * <p>To be written.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCaseRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API AddCommunicationToCaseRequest : public SupportRequest
  {
  public:
    AddCommunicationToCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddCommunicationToCase"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline AddCommunicationToCaseRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline AddCommunicationToCaseRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline AddCommunicationToCaseRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline const Aws::String& GetCommunicationBody() const{ return m_communicationBody; }

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline void SetCommunicationBody(const Aws::String& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = value; }

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline void SetCommunicationBody(Aws::String&& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = std::move(value); }

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline void SetCommunicationBody(const char* value) { m_communicationBodyHasBeenSet = true; m_communicationBody.assign(value); }

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline AddCommunicationToCaseRequest& WithCommunicationBody(const Aws::String& value) { SetCommunicationBody(value); return *this;}

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline AddCommunicationToCaseRequest& WithCommunicationBody(Aws::String&& value) { SetCommunicationBody(std::move(value)); return *this;}

    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline AddCommunicationToCaseRequest& WithCommunicationBody(const char* value) { SetCommunicationBody(value); return *this;}


    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline void SetCcEmailAddresses(const Aws::Vector<Aws::String>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline void SetCcEmailAddresses(Aws::Vector<Aws::String>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline AddCommunicationToCaseRequest& WithCcEmailAddresses(const Aws::Vector<Aws::String>& value) { SetCcEmailAddresses(value); return *this;}

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline AddCommunicationToCaseRequest& WithCcEmailAddresses(Aws::Vector<Aws::String>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline AddCommunicationToCaseRequest& AddCcEmailAddresses(const Aws::String& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline AddCommunicationToCaseRequest& AddCcEmailAddresses(Aws::String&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline AddCommunicationToCaseRequest& AddCcEmailAddresses(const char* value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }


    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = value; }

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::move(value); }

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId.assign(value); }

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline AddCommunicationToCaseRequest& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline AddCommunicationToCaseRequest& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline AddCommunicationToCaseRequest& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet;

    Aws::String m_communicationBody;
    bool m_communicationBodyHasBeenSet;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet;

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
