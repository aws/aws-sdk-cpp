/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Envelope.h>
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
    AWS_MAILMANAGER_API Row() = default;
    AWS_MAILMANAGER_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the archived message.</p>
     */
    inline const Aws::String& GetArchivedMessageId() const { return m_archivedMessageId; }
    inline bool ArchivedMessageIdHasBeenSet() const { return m_archivedMessageIdHasBeenSet; }
    template<typename ArchivedMessageIdT = Aws::String>
    void SetArchivedMessageId(ArchivedMessageIdT&& value) { m_archivedMessageIdHasBeenSet = true; m_archivedMessageId = std::forward<ArchivedMessageIdT>(value); }
    template<typename ArchivedMessageIdT = Aws::String>
    Row& WithArchivedMessageId(ArchivedMessageIdT&& value) { SetArchivedMessageId(std::forward<ArchivedMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the email was received.</p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTimestamp() const { return m_receivedTimestamp; }
    inline bool ReceivedTimestampHasBeenSet() const { return m_receivedTimestampHasBeenSet; }
    template<typename ReceivedTimestampT = Aws::Utils::DateTime>
    void SetReceivedTimestamp(ReceivedTimestampT&& value) { m_receivedTimestampHasBeenSet = true; m_receivedTimestamp = std::forward<ReceivedTimestampT>(value); }
    template<typename ReceivedTimestampT = Aws::Utils::DateTime>
    Row& WithReceivedTimestamp(ReceivedTimestampT&& value) { SetReceivedTimestamp(std::forward<ReceivedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the email was sent.</p>
     */
    inline const Aws::String& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::String>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::String>
    Row& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses in the To header.</p>
     */
    inline const Aws::String& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::String>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::String>
    Row& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the sender.</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    Row& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses in the CC header.</p>
     */
    inline const Aws::String& GetCc() const { return m_cc; }
    inline bool CcHasBeenSet() const { return m_ccHasBeenSet; }
    template<typename CcT = Aws::String>
    void SetCc(CcT&& value) { m_ccHasBeenSet = true; m_cc = std::forward<CcT>(value); }
    template<typename CcT = Aws::String>
    Row& WithCc(CcT&& value) { SetCc(std::forward<CcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject header value of the email.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    Row& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique message ID of the email.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    Row& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if the email has attachments.</p>
     */
    inline bool GetHasAttachments() const { return m_hasAttachments; }
    inline bool HasAttachmentsHasBeenSet() const { return m_hasAttachmentsHasBeenSet; }
    inline void SetHasAttachments(bool value) { m_hasAttachmentsHasBeenSet = true; m_hasAttachments = value; }
    inline Row& WithHasAttachments(bool value) { SetHasAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The received headers from the email delivery path.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReceivedHeaders() const { return m_receivedHeaders; }
    inline bool ReceivedHeadersHasBeenSet() const { return m_receivedHeadersHasBeenSet; }
    template<typename ReceivedHeadersT = Aws::Vector<Aws::String>>
    void SetReceivedHeaders(ReceivedHeadersT&& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders = std::forward<ReceivedHeadersT>(value); }
    template<typename ReceivedHeadersT = Aws::Vector<Aws::String>>
    Row& WithReceivedHeaders(ReceivedHeadersT&& value) { SetReceivedHeaders(std::forward<ReceivedHeadersT>(value)); return *this;}
    template<typename ReceivedHeadersT = Aws::String>
    Row& AddReceivedHeaders(ReceivedHeadersT&& value) { m_receivedHeadersHasBeenSet = true; m_receivedHeaders.emplace_back(std::forward<ReceivedHeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The email message ID this is a reply to.</p>
     */
    inline const Aws::String& GetInReplyTo() const { return m_inReplyTo; }
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }
    template<typename InReplyToT = Aws::String>
    void SetInReplyTo(InReplyToT&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::forward<InReplyToT>(value); }
    template<typename InReplyToT = Aws::String>
    Row& WithInReplyTo(InReplyToT&& value) { SetInReplyTo(std::forward<InReplyToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user agent that sent the email.</p>
     */
    inline const Aws::String& GetXMailer() const { return m_xMailer; }
    inline bool XMailerHasBeenSet() const { return m_xMailerHasBeenSet; }
    template<typename XMailerT = Aws::String>
    void SetXMailer(XMailerT&& value) { m_xMailerHasBeenSet = true; m_xMailer = std::forward<XMailerT>(value); }
    template<typename XMailerT = Aws::String>
    Row& WithXMailer(XMailerT&& value) { SetXMailer(std::forward<XMailerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original user agent that sent the email.</p>
     */
    inline const Aws::String& GetXOriginalMailer() const { return m_xOriginalMailer; }
    inline bool XOriginalMailerHasBeenSet() const { return m_xOriginalMailerHasBeenSet; }
    template<typename XOriginalMailerT = Aws::String>
    void SetXOriginalMailer(XOriginalMailerT&& value) { m_xOriginalMailerHasBeenSet = true; m_xOriginalMailer = std::forward<XOriginalMailerT>(value); }
    template<typename XOriginalMailerT = Aws::String>
    Row& WithXOriginalMailer(XOriginalMailerT&& value) { SetXOriginalMailer(std::forward<XOriginalMailerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority level of the email.</p>
     */
    inline const Aws::String& GetXPriority() const { return m_xPriority; }
    inline bool XPriorityHasBeenSet() const { return m_xPriorityHasBeenSet; }
    template<typename XPriorityT = Aws::String>
    void SetXPriority(XPriorityT&& value) { m_xPriorityHasBeenSet = true; m_xPriority = std::forward<XPriorityT>(value); }
    template<typename XPriorityT = Aws::String>
    Row& WithXPriority(XPriorityT&& value) { SetXPriority(std::forward<XPriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the ingress endpoint through which the email was received.</p>
     */
    inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    template<typename IngressPointIdT = Aws::String>
    void SetIngressPointId(IngressPointIdT&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::forward<IngressPointIdT>(value); }
    template<typename IngressPointIdT = Aws::String>
    Row& WithIngressPointId(IngressPointIdT&& value) { SetIngressPointId(std::forward<IngressPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the host from which the email was received.</p>
     */
    inline const Aws::String& GetSenderHostname() const { return m_senderHostname; }
    inline bool SenderHostnameHasBeenSet() const { return m_senderHostnameHasBeenSet; }
    template<typename SenderHostnameT = Aws::String>
    void SetSenderHostname(SenderHostnameT&& value) { m_senderHostnameHasBeenSet = true; m_senderHostname = std::forward<SenderHostnameT>(value); }
    template<typename SenderHostnameT = Aws::String>
    Row& WithSenderHostname(SenderHostnameT&& value) { SetSenderHostname(std::forward<SenderHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <ul> <li> <p>Mail archived with Mail Manager: The IP address of the client that
     * connects to the ingress endpoint.</p> </li> <li> <p>Mail sent through a
     * configuration set with the archiving option enabled: The IP address of the
     * client that makes the SendEmail API call.</p> </li> </ul>
     */
    inline const Aws::String& GetSenderIpAddress() const { return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    template<typename SenderIpAddressT = Aws::String>
    void SetSenderIpAddress(SenderIpAddressT&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::forward<SenderIpAddressT>(value); }
    template<typename SenderIpAddressT = Aws::String>
    Row& WithSenderIpAddress(SenderIpAddressT&& value) { SetSenderIpAddress(std::forward<SenderIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMTP envelope information of the email.</p>
     */
    inline const Envelope& GetEnvelope() const { return m_envelope; }
    inline bool EnvelopeHasBeenSet() const { return m_envelopeHasBeenSet; }
    template<typename EnvelopeT = Envelope>
    void SetEnvelope(EnvelopeT&& value) { m_envelopeHasBeenSet = true; m_envelope = std::forward<EnvelopeT>(value); }
    template<typename EnvelopeT = Envelope>
    Row& WithEnvelope(EnvelopeT&& value) { SetEnvelope(std::forward<EnvelopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the archived email source, identified by either a Rule Set's ARN
     * with an Archive action, or a Configuration Set's Archive ARN.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    Row& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archivedMessageId;
    bool m_archivedMessageIdHasBeenSet = false;

    Aws::Utils::DateTime m_receivedTimestamp{};
    bool m_receivedTimestampHasBeenSet = false;

    Aws::String m_date;
    bool m_dateHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_cc;
    bool m_ccHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    bool m_hasAttachments{false};
    bool m_hasAttachmentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_receivedHeaders;
    bool m_receivedHeadersHasBeenSet = false;

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet = false;

    Aws::String m_xMailer;
    bool m_xMailerHasBeenSet = false;

    Aws::String m_xOriginalMailer;
    bool m_xOriginalMailerHasBeenSet = false;

    Aws::String m_xPriority;
    bool m_xPriorityHasBeenSet = false;

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_senderHostname;
    bool m_senderHostnameHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    Envelope m_envelope;
    bool m_envelopeHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
