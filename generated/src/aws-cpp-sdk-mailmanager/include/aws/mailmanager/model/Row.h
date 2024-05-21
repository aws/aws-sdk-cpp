/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A result row containing metadata for an archived email message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Row">AWS API
   * Reference</a></p>
   */
  class Row
  {
  public:
    AWS_MAILMANAGER_API Row();
    AWS_MAILMANAGER_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline const Aws::String& GetArchivedMessageId() const{ return m_archivedMessageId; }

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline bool ArchivedMessageIdHasBeenSet() const { return m_archivedMessageIdHasBeenSet; }

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline void SetArchivedMessageId(const Aws::String& value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId = value; }

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline void SetArchivedMessageId(Aws::String&& value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId = std::move(value); }

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline void SetArchivedMessageId(const char* value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId.assign(value); }

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline Row& WithArchivedMessageId(const Aws::String& value) { SetArchivedMessageId(value); return *this;}

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline Row& WithArchivedMessageId(Aws::String&& value) { SetArchivedMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline Row& WithArchivedMessageId(const char* value) { SetArchivedMessageId(value); return *this;}


    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline const Aws::String& GetCc() const{ return m_cc; }

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline bool CcHasBeenSet() const { return m_ccHasBeenSet; }

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline void SetCc(const Aws::String& value) { m_ccHasBeenSet = true; m_cc = value; }

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline void SetCc(Aws::String&& value) { m_ccHasBeenSet = true; m_cc = std::move(value); }

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline void SetCc(const char* value) { m_ccHasBeenSet = true; m_cc.assign(value); }

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline Row& WithCc(const Aws::String& value) { SetCc(value); return *this;}

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline Row& WithCc(Aws::String&& value) { SetCc(std::move(value)); return *this;}

    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline Row& WithCc(const char* value) { SetCc(value); return *this;}


    /**
     * <p>The date the email was sent.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }

    /**
     * <p>The date the email was sent.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date the email was sent.</p>
     */
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date the email was sent.</p>
     */
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date the email was sent.</p>
     */
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }

    /**
     * <p>The date the email was sent.</p>
     */
    inline Row& WithDate(const Aws::String& value) { SetDate(value); return *this;}

    /**
     * <p>The date the email was sent.</p>
     */
    inline Row& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}

    /**
     * <p>The date the email was sent.</p>
     */
    inline Row& WithDate(const char* value) { SetDate(value); return *this;}


    /**
     * <p>The email address of the sender.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The email address of the sender.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The email address of the sender.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The email address of the sender.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The email address of the sender.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The email address of the sender.</p>
     */
    inline Row& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The email address of the sender.</p>
     */
    inline Row& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The email address of the sender.</p>
     */
    inline Row& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>A flag indicating if the email has attachments.</p>
     */
    inline bool GetHasAttachments() const{ return m_hasAttachments; }

    /**
     * <p>A flag indicating if the email has attachments.</p>
     */
    inline bool HasAttachmentsHasBeenSet() const { return m_hasAttachmentsHasBeenSet; }

    /**
     * <p>A flag indicating if the email has attachments.</p>
     */
    inline void SetHasAttachments(bool value) { m_hasAttachmentsHasBeenSet = true; m_hasAttachments = value; }

    /**
     * <p>A flag indicating if the email has attachments.</p>
     */
    inline Row& WithHasAttachments(bool value) { SetHasAttachments(value); return *this;}


    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline const Aws::String& GetInReplyTo() const{ return m_inReplyTo; }

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline void SetInReplyTo(const Aws::String& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = value; }

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline void SetInReplyTo(Aws::String&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::move(value); }

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline void SetInReplyTo(const char* value) { m_inReplyToHasBeenSet = true; m_inReplyTo.assign(value); }

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline Row& WithInReplyTo(const Aws::String& value) { SetInReplyTo(value); return *this;}

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline Row& WithInReplyTo(Aws::String&& value) { SetInReplyTo(std::move(value)); return *this;}

    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline Row& WithInReplyTo(const char* value) { SetInReplyTo(value); return *this;}


    /**
     * <p>The unique message ID of the email.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline Row& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline Row& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The unique message ID of the email.</p>
     */
    inline Row& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReceivedHeaders() const{ return m_receivedHeaders; }

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline bool ReceivedHeadersHasBeenSet() const { return m_receivedHeadersHasBeenSet; }

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline void SetReceivedHeaders(const Aws::Vector<Aws::String>& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders = value; }

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline void SetReceivedHeaders(Aws::Vector<Aws::String>&& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders = std::move(value); }

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline Row& WithReceivedHeaders(const Aws::Vector<Aws::String>& value) { SetReceivedHeaders(value); return *this;}

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline Row& WithReceivedHeaders(Aws::Vector<Aws::String>&& value) { SetReceivedHeaders(std::move(value)); return *this;}

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline Row& AddReceivedHeaders(const Aws::String& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.push_back(value); return *this; }

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline Row& AddReceivedHeaders(Aws::String&& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline Row& AddReceivedHeaders(const char* value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.push_back(value); return *this; }


    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTimestamp() const{ return m_receivedTimestamp; }

    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline bool ReceivedTimestampHasBeenSet() const { return m_receivedTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline void SetReceivedTimestamp(const Aws::Utils::DateTime& value) { m_receivedTimestampHasBeenSet = true; m_receivedTimestamp = value; }

    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline void SetReceivedTimestamp(Aws::Utils::DateTime&& value) { m_receivedTimestampHasBeenSet = true; m_receivedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline Row& WithReceivedTimestamp(const Aws::Utils::DateTime& value) { SetReceivedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline Row& WithReceivedTimestamp(Aws::Utils::DateTime&& value) { SetReceivedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The subject header value of the email.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject header value of the email.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject header value of the email.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject header value of the email.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject header value of the email.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject header value of the email.</p>
     */
    inline Row& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject header value of the email.</p>
     */
    inline Row& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject header value of the email.</p>
     */
    inline Row& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The email addresses in the To header.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline Row& WithTo(const Aws::String& value) { SetTo(value); return *this;}

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline Row& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}

    /**
     * <p>The email addresses in the To header.</p>
     */
    inline Row& WithTo(const char* value) { SetTo(value); return *this;}


    /**
     * <p>The user agent that sent the email.</p>
     */
    inline const Aws::String& GetXMailer() const{ return m_xMailer; }

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline bool XMailerHasBeenSet() const { return m_xMailerHasBeenSet; }

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline void SetXMailer(const Aws::String& value) { m_xMailerHasBeenSet = true; m_xMailer = value; }

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline void SetXMailer(Aws::String&& value) { m_xMailerHasBeenSet = true; m_xMailer = std::move(value); }

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline void SetXMailer(const char* value) { m_xMailerHasBeenSet = true; m_xMailer.assign(value); }

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline Row& WithXMailer(const Aws::String& value) { SetXMailer(value); return *this;}

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline Row& WithXMailer(Aws::String&& value) { SetXMailer(std::move(value)); return *this;}

    /**
     * <p>The user agent that sent the email.</p>
     */
    inline Row& WithXMailer(const char* value) { SetXMailer(value); return *this;}


    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline const Aws::String& GetXOriginalMailer() const{ return m_xOriginalMailer; }

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline bool XOriginalMailerHasBeenSet() const { return m_xOriginalMailerHasBeenSet; }

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline void SetXOriginalMailer(const Aws::String& value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer = value; }

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline void SetXOriginalMailer(Aws::String&& value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer = std::move(value); }

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline void SetXOriginalMailer(const char* value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer.assign(value); }

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline Row& WithXOriginalMailer(const Aws::String& value) { SetXOriginalMailer(value); return *this;}

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline Row& WithXOriginalMailer(Aws::String&& value) { SetXOriginalMailer(std::move(value)); return *this;}

    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline Row& WithXOriginalMailer(const char* value) { SetXOriginalMailer(value); return *this;}


    /**
     * <p>The priority level of the email.</p>
     */
    inline const Aws::String& GetXPriority() const{ return m_xPriority; }

    /**
     * <p>The priority level of the email.</p>
     */
    inline bool XPriorityHasBeenSet() const { return m_xPriorityHasBeenSet; }

    /**
     * <p>The priority level of the email.</p>
     */
    inline void SetXPriority(const Aws::String& value) { m_xPriorityHasBeenSet = true; m_xPriority = value; }

    /**
     * <p>The priority level of the email.</p>
     */
    inline void SetXPriority(Aws::String&& value) { m_xPriorityHasBeenSet = true; m_xPriority = std::move(value); }

    /**
     * <p>The priority level of the email.</p>
     */
    inline void SetXPriority(const char* value) { m_xPriorityHasBeenSet = true; m_xPriority.assign(value); }

    /**
     * <p>The priority level of the email.</p>
     */
    inline Row& WithXPriority(const Aws::String& value) { SetXPriority(value); return *this;}

    /**
     * <p>The priority level of the email.</p>
     */
    inline Row& WithXPriority(Aws::String&& value) { SetXPriority(std::move(value)); return *this;}

    /**
     * <p>The priority level of the email.</p>
     */
    inline Row& WithXPriority(const char* value) { SetXPriority(value); return *this;}

  private:

    Aws::String m_archivedMessageId;
    bool m_archivedMessageIdHasBeenSet = false;

    Aws::String m_cc;
    bool m_ccHasBeenSet = false;

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    bool m_hasAttachments;
    bool m_hasAttachmentsHasBeenSet = false;

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_receivedHeaders;
    bool m_receivedHeadersHasBeenSet = false;

    Aws::Utils::DateTime m_receivedTimestamp;
    bool m_receivedTimestampHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_xMailer;
    bool m_xMailerHasBeenSet = false;

    Aws::String m_xOriginalMailer;
    bool m_xOriginalMailerHasBeenSet = false;

    Aws::String m_xPriority;
    bool m_xPriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
