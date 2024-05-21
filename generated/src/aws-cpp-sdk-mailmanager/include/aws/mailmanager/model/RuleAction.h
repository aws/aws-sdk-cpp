/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/AddHeaderAction.h>
#include <aws/mailmanager/model/ArchiveAction.h>
#include <aws/mailmanager/model/DeliverToMailboxAction.h>
#include <aws/mailmanager/model/DropAction.h>
#include <aws/mailmanager/model/RelayAction.h>
#include <aws/mailmanager/model/ReplaceRecipientAction.h>
#include <aws/mailmanager/model/SendAction.h>
#include <aws/mailmanager/model/S3Action.h>
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
   * <p>The action for a rule to take. Only one of the contained actions can be
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleAction">AWS
   * API Reference</a></p>
   */
  class RuleAction
  {
  public:
    AWS_MAILMANAGER_API RuleAction();
    AWS_MAILMANAGER_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline const AddHeaderAction& GetAddHeader() const{ return m_addHeader; }

    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline bool AddHeaderHasBeenSet() const { return m_addHeaderHasBeenSet; }

    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline void SetAddHeader(const AddHeaderAction& value) { m_addHeaderHasBeenSet = true; m_addHeader = value; }

    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline void SetAddHeader(AddHeaderAction&& value) { m_addHeaderHasBeenSet = true; m_addHeader = std::move(value); }

    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline RuleAction& WithAddHeader(const AddHeaderAction& value) { SetAddHeader(value); return *this;}

    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline RuleAction& WithAddHeader(AddHeaderAction&& value) { SetAddHeader(std::move(value)); return *this;}


    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline const ArchiveAction& GetArchive() const{ return m_archive; }

    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline bool ArchiveHasBeenSet() const { return m_archiveHasBeenSet; }

    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline void SetArchive(const ArchiveAction& value) { m_archiveHasBeenSet = true; m_archive = value; }

    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline void SetArchive(ArchiveAction&& value) { m_archiveHasBeenSet = true; m_archive = std::move(value); }

    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline RuleAction& WithArchive(const ArchiveAction& value) { SetArchive(value); return *this;}

    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline RuleAction& WithArchive(ArchiveAction&& value) { SetArchive(std::move(value)); return *this;}


    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline const DeliverToMailboxAction& GetDeliverToMailbox() const{ return m_deliverToMailbox; }

    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline bool DeliverToMailboxHasBeenSet() const { return m_deliverToMailboxHasBeenSet; }

    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline void SetDeliverToMailbox(const DeliverToMailboxAction& value) { m_deliverToMailboxHasBeenSet = true; m_deliverToMailbox = value; }

    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline void SetDeliverToMailbox(DeliverToMailboxAction&& value) { m_deliverToMailboxHasBeenSet = true; m_deliverToMailbox = std::move(value); }

    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline RuleAction& WithDeliverToMailbox(const DeliverToMailboxAction& value) { SetDeliverToMailbox(value); return *this;}

    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline RuleAction& WithDeliverToMailbox(DeliverToMailboxAction&& value) { SetDeliverToMailbox(std::move(value)); return *this;}


    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline const DropAction& GetDrop() const{ return m_drop; }

    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }

    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline void SetDrop(const DropAction& value) { m_dropHasBeenSet = true; m_drop = value; }

    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline void SetDrop(DropAction&& value) { m_dropHasBeenSet = true; m_drop = std::move(value); }

    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline RuleAction& WithDrop(const DropAction& value) { SetDrop(value); return *this;}

    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline RuleAction& WithDrop(DropAction&& value) { SetDrop(std::move(value)); return *this;}


    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline const RelayAction& GetRelay() const{ return m_relay; }

    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline bool RelayHasBeenSet() const { return m_relayHasBeenSet; }

    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline void SetRelay(const RelayAction& value) { m_relayHasBeenSet = true; m_relay = value; }

    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline void SetRelay(RelayAction&& value) { m_relayHasBeenSet = true; m_relay = std::move(value); }

    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline RuleAction& WithRelay(const RelayAction& value) { SetRelay(value); return *this;}

    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline RuleAction& WithRelay(RelayAction&& value) { SetRelay(std::move(value)); return *this;}


    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline const ReplaceRecipientAction& GetReplaceRecipient() const{ return m_replaceRecipient; }

    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline bool ReplaceRecipientHasBeenSet() const { return m_replaceRecipientHasBeenSet; }

    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline void SetReplaceRecipient(const ReplaceRecipientAction& value) { m_replaceRecipientHasBeenSet = true; m_replaceRecipient = value; }

    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline void SetReplaceRecipient(ReplaceRecipientAction&& value) { m_replaceRecipientHasBeenSet = true; m_replaceRecipient = std::move(value); }

    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline RuleAction& WithReplaceRecipient(const ReplaceRecipientAction& value) { SetReplaceRecipient(value); return *this;}

    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline RuleAction& WithReplaceRecipient(ReplaceRecipientAction&& value) { SetReplaceRecipient(std::move(value)); return *this;}


    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline const SendAction& GetSend() const{ return m_send; }

    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline bool SendHasBeenSet() const { return m_sendHasBeenSet; }

    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline void SetSend(const SendAction& value) { m_sendHasBeenSet = true; m_send = value; }

    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline void SetSend(SendAction&& value) { m_sendHasBeenSet = true; m_send = std::move(value); }

    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline RuleAction& WithSend(const SendAction& value) { SetSend(value); return *this;}

    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline RuleAction& WithSend(SendAction&& value) { SetSend(std::move(value)); return *this;}


    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline const S3Action& GetWriteToS3() const{ return m_writeToS3; }

    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline bool WriteToS3HasBeenSet() const { return m_writeToS3HasBeenSet; }

    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline void SetWriteToS3(const S3Action& value) { m_writeToS3HasBeenSet = true; m_writeToS3 = value; }

    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline void SetWriteToS3(S3Action&& value) { m_writeToS3HasBeenSet = true; m_writeToS3 = std::move(value); }

    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline RuleAction& WithWriteToS3(const S3Action& value) { SetWriteToS3(value); return *this;}

    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline RuleAction& WithWriteToS3(S3Action&& value) { SetWriteToS3(std::move(value)); return *this;}

  private:

    AddHeaderAction m_addHeader;
    bool m_addHeaderHasBeenSet = false;

    ArchiveAction m_archive;
    bool m_archiveHasBeenSet = false;

    DeliverToMailboxAction m_deliverToMailbox;
    bool m_deliverToMailboxHasBeenSet = false;

    DropAction m_drop;
    bool m_dropHasBeenSet = false;

    RelayAction m_relay;
    bool m_relayHasBeenSet = false;

    ReplaceRecipientAction m_replaceRecipient;
    bool m_replaceRecipientHasBeenSet = false;

    SendAction m_send;
    bool m_sendHasBeenSet = false;

    S3Action m_writeToS3;
    bool m_writeToS3HasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
