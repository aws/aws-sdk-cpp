/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class StartEngagementRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API StartEngagementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEngagement"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline StartEngagementRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline StartEngagementRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact being engaged.</p>
     */
    inline StartEngagementRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline StartEngagementRequest& WithSender(const Aws::String& value) { SetSender(value); return *this;}

    /**
     * <p>The user that started the engagement.</p>
     */
    inline StartEngagementRequest& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}

    /**
     * <p>The user that started the engagement.</p>
     */
    inline StartEngagementRequest& WithSender(const char* value) { SetSender(value); return *this;}


    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline StartEngagementRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline StartEngagementRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The secure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline StartEngagementRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline StartEngagementRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline StartEngagementRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The secure content of the message that was sent to the contact. Use this
     * field for engagements to <code>VOICE</code> or <code>EMAIL</code>.</p>
     */
    inline StartEngagementRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline const Aws::String& GetPublicSubject() const{ return m_publicSubject; }

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline bool PublicSubjectHasBeenSet() const { return m_publicSubjectHasBeenSet; }

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline void SetPublicSubject(const Aws::String& value) { m_publicSubjectHasBeenSet = true; m_publicSubject = value; }

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline void SetPublicSubject(Aws::String&& value) { m_publicSubjectHasBeenSet = true; m_publicSubject = std::move(value); }

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline void SetPublicSubject(const char* value) { m_publicSubjectHasBeenSet = true; m_publicSubject.assign(value); }

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline StartEngagementRequest& WithPublicSubject(const Aws::String& value) { SetPublicSubject(value); return *this;}

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline StartEngagementRequest& WithPublicSubject(Aws::String&& value) { SetPublicSubject(std::move(value)); return *this;}

    /**
     * <p>The insecure subject of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline StartEngagementRequest& WithPublicSubject(const char* value) { SetPublicSubject(value); return *this;}


    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline const Aws::String& GetPublicContent() const{ return m_publicContent; }

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline bool PublicContentHasBeenSet() const { return m_publicContentHasBeenSet; }

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline void SetPublicContent(const Aws::String& value) { m_publicContentHasBeenSet = true; m_publicContent = value; }

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline void SetPublicContent(Aws::String&& value) { m_publicContentHasBeenSet = true; m_publicContent = std::move(value); }

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline void SetPublicContent(const char* value) { m_publicContentHasBeenSet = true; m_publicContent.assign(value); }

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline StartEngagementRequest& WithPublicContent(const Aws::String& value) { SetPublicContent(value); return *this;}

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline StartEngagementRequest& WithPublicContent(Aws::String&& value) { SetPublicContent(std::move(value)); return *this;}

    /**
     * <p>The insecure content of the message that was sent to the contact. Use this
     * field for engagements to <code>SMS</code>.</p>
     */
    inline StartEngagementRequest& WithPublicContent(const char* value) { SetPublicContent(value); return *this;}


    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline void SetIncidentId(const Aws::String& value) { m_incidentIdHasBeenSet = true; m_incidentId = value; }

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline void SetIncidentId(Aws::String&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::move(value); }

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline void SetIncidentId(const char* value) { m_incidentIdHasBeenSet = true; m_incidentId.assign(value); }

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline StartEngagementRequest& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline StartEngagementRequest& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the incident that the engagement is part of.</p>
     */
    inline StartEngagementRequest& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}


    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline StartEngagementRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline StartEngagementRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline StartEngagementRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_publicSubject;
    bool m_publicSubjectHasBeenSet = false;

    Aws::String m_publicContent;
    bool m_publicContentHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
