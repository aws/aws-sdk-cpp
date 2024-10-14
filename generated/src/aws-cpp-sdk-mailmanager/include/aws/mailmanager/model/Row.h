/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/Envelope.h>
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


    ///@{
    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline const Aws::String& GetArchivedMessageId() const{ return m_archivedMessageId; }
    inline bool ArchivedMessageIdHasBeenSet() const { return m_archivedMessageIdHasBeenSet; }
    inline void SetArchivedMessageId(const Aws::String& value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId = value; }
    inline void SetArchivedMessageId(Aws::String&& value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId = std::move(value); }
    inline void SetArchivedMessageId(const char* value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId.assign(value); }
    inline Row& WithArchivedMessageId(const Aws::String& value) { SetArchivedMessageId(value); return *this;}
    inline Row& WithArchivedMessageId(Aws::String&& value) { SetArchivedMessageId(std::move(value)); return *this;}
    inline Row& WithArchivedMessageId(const char* value) { SetArchivedMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline const Aws::String& GetCc() const{ return m_cc; }
    inline bool CcHasBeenSet() const { return m_ccHasBeenSet; }
    inline void SetCc(const Aws::String& value) { m_ccHasBeenSet = true; m_cc = value; }
    inline void SetCc(Aws::String&& value) { m_ccHasBeenSet = true; m_cc = std::move(value); }
    inline void SetCc(const char* value) { m_ccHasBeenSet = true; m_cc.assign(value); }
    inline Row& WithCc(const Aws::String& value) { SetCc(value); return *this;}
    inline Row& WithCc(Aws::String&& value) { SetCc(std::move(value)); return *this;}
    inline Row& WithCc(const char* value) { SetCc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the email was sent.</p>
     */
    inline const Aws::String& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::String& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::String&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline void SetDate(const char* value) { m_dateHasBeenSet = true; m_date.assign(value); }
    inline Row& WithDate(const Aws::String& value) { SetDate(value); return *this;}
    inline Row& WithDate(Aws::String&& value) { SetDate(std::move(value)); return *this;}
    inline Row& WithDate(const char* value) { SetDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMTP envelope information of the email.</p>
     */
    inline const Envelope& GetEnvelope() const{ return m_envelope; }
    inline bool EnvelopeHasBeenSet() const { return m_envelopeHasBeenSet; }
    inline void SetEnvelope(const Envelope& value) { m_envelopeHasBeenSet = true; m_envelope = value; }
    inline void SetEnvelope(Envelope&& value) { m_envelopeHasBeenSet = true; m_envelope = std::move(value); }
    inline Row& WithEnvelope(const Envelope& value) { SetEnvelope(value); return *this;}
    inline Row& WithEnvelope(Envelope&& value) { SetEnvelope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the sender.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }
    inline Row& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}
    inline Row& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}
    inline Row& WithFrom(const char* value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if the email has attachments.</p>
     */
    inline bool GetHasAttachments() const{ return m_hasAttachments; }
    inline bool HasAttachmentsHasBeenSet() const { return m_hasAttachmentsHasBeenSet; }
    inline void SetHasAttachments(bool value) { m_hasAttachmentsHasBeenSet = true; m_hasAttachments = value; }
    inline Row& WithHasAttachments(bool value) { SetHasAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline const Aws::String& GetInReplyTo() const{ return m_inReplyTo; }
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }
    inline void SetInReplyTo(const Aws::String& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = value; }
    inline void SetInReplyTo(Aws::String&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::move(value); }
    inline void SetInReplyTo(const char* value) { m_inReplyToHasBeenSet = true; m_inReplyTo.assign(value); }
    inline Row& WithInReplyTo(const Aws::String& value) { SetInReplyTo(value); return *this;}
    inline Row& WithInReplyTo(Aws::String&& value) { SetInReplyTo(std::move(value)); return *this;}
    inline Row& WithInReplyTo(const char* value) { SetInReplyTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the ingress endpoint through which the email was received.</p>
     */
    inline const Aws::String& GetIngressPointId() const{ return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    inline void SetIngressPointId(const Aws::String& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = value; }
    inline void SetIngressPointId(Aws::String&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::move(value); }
    inline void SetIngressPointId(const char* value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId.assign(value); }
    inline Row& WithIngressPointId(const Aws::String& value) { SetIngressPointId(value); return *this;}
    inline Row& WithIngressPointId(Aws::String&& value) { SetIngressPointId(std::move(value)); return *this;}
    inline Row& WithIngressPointId(const char* value) { SetIngressPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique message ID of the email.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline Row& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline Row& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline Row& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReceivedHeaders() const{ return m_receivedHeaders; }
    inline bool ReceivedHeadersHasBeenSet() const { return m_receivedHeadersHasBeenSet; }
    inline void SetReceivedHeaders(const Aws::Vector<Aws::String>& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders = value; }
    inline void SetReceivedHeaders(Aws::Vector<Aws::String>&& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders = std::move(value); }
    inline Row& WithReceivedHeaders(const Aws::Vector<Aws::String>& value) { SetReceivedHeaders(value); return *this;}
    inline Row& WithReceivedHeaders(Aws::Vector<Aws::String>&& value) { SetReceivedHeaders(std::move(value)); return *this;}
    inline Row& AddReceivedHeaders(const Aws::String& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.push_back(value); return *this; }
    inline Row& AddReceivedHeaders(Aws::String&& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.push_back(std::move(value)); return *this; }
    inline Row& AddReceivedHeaders(const char* value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTimestamp() const{ return m_receivedTimestamp; }
    inline bool ReceivedTimestampHasBeenSet() const { return m_receivedTimestampHasBeenSet; }
    inline void SetReceivedTimestamp(const Aws::Utils::DateTime& value) { m_receivedTimestampHasBeenSet = true; m_receivedTimestamp = value; }
    inline void SetReceivedTimestamp(Aws::Utils::DateTime&& value) { m_receivedTimestampHasBeenSet = true; m_receivedTimestamp = std::move(value); }
    inline Row& WithReceivedTimestamp(const Aws::Utils::DateTime& value) { SetReceivedTimestamp(value); return *this;}
    inline Row& WithReceivedTimestamp(Aws::Utils::DateTime&& value) { SetReceivedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderHostname() const{ return m_senderHostname; }
    inline bool SenderHostnameHasBeenSet() const { return m_senderHostnameHasBeenSet; }
    inline void SetSenderHostname(const Aws::String& value) { m_senderHostnameHasBeenSet = true; m_senderHostname = value; }
    inline void SetSenderHostname(Aws::String&& value) { m_senderHostnameHasBeenSet = true; m_senderHostname = std::move(value); }
    inline void SetSenderHostname(const char* value) { m_senderHostnameHasBeenSet = true; m_senderHostname.assign(value); }
    inline Row& WithSenderHostname(const Aws::String& value) { SetSenderHostname(value); return *this;}
    inline Row& WithSenderHostname(Aws::String&& value) { SetSenderHostname(std::move(value)); return *this;}
    inline Row& WithSenderHostname(const char* value) { SetSenderHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderIpAddress() const{ return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    inline void SetSenderIpAddress(const Aws::String& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = value; }
    inline void SetSenderIpAddress(Aws::String&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::move(value); }
    inline void SetSenderIpAddress(const char* value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress.assign(value); }
    inline Row& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}
    inline Row& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}
    inline Row& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject header value of the email.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline Row& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline Row& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline Row& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses in the To header.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }
    inline Row& WithTo(const Aws::String& value) { SetTo(value); return *this;}
    inline Row& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}
    inline Row& WithTo(const char* value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user agent that sent the email.</p>
     */
    inline const Aws::String& GetXMailer() const{ return m_xMailer; }
    inline bool XMailerHasBeenSet() const { return m_xMailerHasBeenSet; }
    inline void SetXMailer(const Aws::String& value) { m_xMailerHasBeenSet = true; m_xMailer = value; }
    inline void SetXMailer(Aws::String&& value) { m_xMailerHasBeenSet = true; m_xMailer = std::move(value); }
    inline void SetXMailer(const char* value) { m_xMailerHasBeenSet = true; m_xMailer.assign(value); }
    inline Row& WithXMailer(const Aws::String& value) { SetXMailer(value); return *this;}
    inline Row& WithXMailer(Aws::String&& value) { SetXMailer(std::move(value)); return *this;}
    inline Row& WithXMailer(const char* value) { SetXMailer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline const Aws::String& GetXOriginalMailer() const{ return m_xOriginalMailer; }
    inline bool XOriginalMailerHasBeenSet() const { return m_xOriginalMailerHasBeenSet; }
    inline void SetXOriginalMailer(const Aws::String& value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer = value; }
    inline void SetXOriginalMailer(Aws::String&& value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer = std::move(value); }
    inline void SetXOriginalMailer(const char* value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer.assign(value); }
    inline Row& WithXOriginalMailer(const Aws::String& value) { SetXOriginalMailer(value); return *this;}
    inline Row& WithXOriginalMailer(Aws::String&& value) { SetXOriginalMailer(std::move(value)); return *this;}
    inline Row& WithXOriginalMailer(const char* value) { SetXOriginalMailer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority level of the email.</p>
     */
    inline const Aws::String& GetXPriority() const{ return m_xPriority; }
    inline bool XPriorityHasBeenSet() const { return m_xPriorityHasBeenSet; }
    inline void SetXPriority(const Aws::String& value) { m_xPriorityHasBeenSet = true; m_xPriority = value; }
    inline void SetXPriority(Aws::String&& value) { m_xPriorityHasBeenSet = true; m_xPriority = std::move(value); }
    inline void SetXPriority(const char* value) { m_xPriorityHasBeenSet = true; m_xPriority.assign(value); }
    inline Row& WithXPriority(const Aws::String& value) { SetXPriority(value); return *this;}
    inline Row& WithXPriority(Aws::String&& value) { SetXPriority(std::move(value)); return *this;}
    inline Row& WithXPriority(const char* value) { SetXPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_archivedMessageId;
    bool m_archivedMessageIdHasBeenSet = false;

    Aws::String m_cc;
    bool m_ccHasBeenSet = false;

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    Envelope m_envelope;
    bool m_envelopeHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    bool m_hasAttachments;
    bool m_hasAttachmentsHasBeenSet = false;

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet = false;

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_receivedHeaders;
    bool m_receivedHeadersHasBeenSet = false;

    Aws::Utils::DateTime m_receivedTimestamp;
    bool m_receivedTimestampHasBeenSet = false;

    Aws::String m_senderHostname;
    bool m_senderHostnameHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

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
