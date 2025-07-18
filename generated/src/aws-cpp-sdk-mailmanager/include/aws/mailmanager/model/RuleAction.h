/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/DropAction.h>
#include <aws/mailmanager/model/RelayAction.h>
#include <aws/mailmanager/model/ArchiveAction.h>
#include <aws/mailmanager/model/S3Action.h>
#include <aws/mailmanager/model/SendAction.h>
#include <aws/mailmanager/model/AddHeaderAction.h>
#include <aws/mailmanager/model/ReplaceRecipientAction.h>
#include <aws/mailmanager/model/DeliverToMailboxAction.h>
#include <aws/mailmanager/model/DeliverToQBusinessAction.h>
#include <aws/mailmanager/model/SnsAction.h>
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
    AWS_MAILMANAGER_API RuleAction() = default;
    AWS_MAILMANAGER_API RuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This action terminates the evaluation of rules in the rule set.</p>
     */
    inline const DropAction& GetDrop() const { return m_drop; }
    inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }
    template<typename DropT = DropAction>
    void SetDrop(DropT&& value) { m_dropHasBeenSet = true; m_drop = std::forward<DropT>(value); }
    template<typename DropT = DropAction>
    RuleAction& WithDrop(DropT&& value) { SetDrop(std::forward<DropT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action relays the email to another SMTP server.</p>
     */
    inline const RelayAction& GetRelay() const { return m_relay; }
    inline bool RelayHasBeenSet() const { return m_relayHasBeenSet; }
    template<typename RelayT = RelayAction>
    void SetRelay(RelayT&& value) { m_relayHasBeenSet = true; m_relay = std::forward<RelayT>(value); }
    template<typename RelayT = RelayAction>
    RuleAction& WithRelay(RelayT&& value) { SetRelay(std::forward<RelayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action archives the email. This can be used to deliver an email to an
     * archive.</p>
     */
    inline const ArchiveAction& GetArchive() const { return m_archive; }
    inline bool ArchiveHasBeenSet() const { return m_archiveHasBeenSet; }
    template<typename ArchiveT = ArchiveAction>
    void SetArchive(ArchiveT&& value) { m_archiveHasBeenSet = true; m_archive = std::forward<ArchiveT>(value); }
    template<typename ArchiveT = ArchiveAction>
    RuleAction& WithArchive(ArchiveT&& value) { SetArchive(std::forward<ArchiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action writes the MIME content of the email to an S3 bucket.</p>
     */
    inline const S3Action& GetWriteToS3() const { return m_writeToS3; }
    inline bool WriteToS3HasBeenSet() const { return m_writeToS3HasBeenSet; }
    template<typename WriteToS3T = S3Action>
    void SetWriteToS3(WriteToS3T&& value) { m_writeToS3HasBeenSet = true; m_writeToS3 = std::forward<WriteToS3T>(value); }
    template<typename WriteToS3T = S3Action>
    RuleAction& WithWriteToS3(WriteToS3T&& value) { SetWriteToS3(std::forward<WriteToS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action sends the email to the internet.</p>
     */
    inline const SendAction& GetSend() const { return m_send; }
    inline bool SendHasBeenSet() const { return m_sendHasBeenSet; }
    template<typename SendT = SendAction>
    void SetSend(SendT&& value) { m_sendHasBeenSet = true; m_send = std::forward<SendT>(value); }
    template<typename SendT = SendAction>
    RuleAction& WithSend(SendT&& value) { SetSend(std::forward<SendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action adds a header. This can be used to add arbitrary email
     * headers.</p>
     */
    inline const AddHeaderAction& GetAddHeader() const { return m_addHeader; }
    inline bool AddHeaderHasBeenSet() const { return m_addHeaderHasBeenSet; }
    template<typename AddHeaderT = AddHeaderAction>
    void SetAddHeader(AddHeaderT&& value) { m_addHeaderHasBeenSet = true; m_addHeader = std::forward<AddHeaderT>(value); }
    template<typename AddHeaderT = AddHeaderAction>
    RuleAction& WithAddHeader(AddHeaderT&& value) { SetAddHeader(std::forward<AddHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action replaces certain or all recipients with a different set of
     * recipients.</p>
     */
    inline const ReplaceRecipientAction& GetReplaceRecipient() const { return m_replaceRecipient; }
    inline bool ReplaceRecipientHasBeenSet() const { return m_replaceRecipientHasBeenSet; }
    template<typename ReplaceRecipientT = ReplaceRecipientAction>
    void SetReplaceRecipient(ReplaceRecipientT&& value) { m_replaceRecipientHasBeenSet = true; m_replaceRecipient = std::forward<ReplaceRecipientT>(value); }
    template<typename ReplaceRecipientT = ReplaceRecipientAction>
    RuleAction& WithReplaceRecipient(ReplaceRecipientT&& value) { SetReplaceRecipient(std::forward<ReplaceRecipientT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action delivers an email to a WorkMail mailbox.</p>
     */
    inline const DeliverToMailboxAction& GetDeliverToMailbox() const { return m_deliverToMailbox; }
    inline bool DeliverToMailboxHasBeenSet() const { return m_deliverToMailboxHasBeenSet; }
    template<typename DeliverToMailboxT = DeliverToMailboxAction>
    void SetDeliverToMailbox(DeliverToMailboxT&& value) { m_deliverToMailboxHasBeenSet = true; m_deliverToMailbox = std::forward<DeliverToMailboxT>(value); }
    template<typename DeliverToMailboxT = DeliverToMailboxAction>
    RuleAction& WithDeliverToMailbox(DeliverToMailboxT&& value) { SetDeliverToMailbox(std::forward<DeliverToMailboxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action delivers an email to an Amazon Q Business application for
     * ingestion into its knowledge base.</p>
     */
    inline const DeliverToQBusinessAction& GetDeliverToQBusiness() const { return m_deliverToQBusiness; }
    inline bool DeliverToQBusinessHasBeenSet() const { return m_deliverToQBusinessHasBeenSet; }
    template<typename DeliverToQBusinessT = DeliverToQBusinessAction>
    void SetDeliverToQBusiness(DeliverToQBusinessT&& value) { m_deliverToQBusinessHasBeenSet = true; m_deliverToQBusiness = std::forward<DeliverToQBusinessT>(value); }
    template<typename DeliverToQBusinessT = DeliverToQBusinessAction>
    RuleAction& WithDeliverToQBusiness(DeliverToQBusinessT&& value) { SetDeliverToQBusiness(std::forward<DeliverToQBusinessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This action publishes the email content to an Amazon SNS topic.</p>
     */
    inline const SnsAction& GetPublishToSns() const { return m_publishToSns; }
    inline bool PublishToSnsHasBeenSet() const { return m_publishToSnsHasBeenSet; }
    template<typename PublishToSnsT = SnsAction>
    void SetPublishToSns(PublishToSnsT&& value) { m_publishToSnsHasBeenSet = true; m_publishToSns = std::forward<PublishToSnsT>(value); }
    template<typename PublishToSnsT = SnsAction>
    RuleAction& WithPublishToSns(PublishToSnsT&& value) { SetPublishToSns(std::forward<PublishToSnsT>(value)); return *this;}
    ///@}
  private:

    DropAction m_drop;
    bool m_dropHasBeenSet = false;

    RelayAction m_relay;
    bool m_relayHasBeenSet = false;

    ArchiveAction m_archive;
    bool m_archiveHasBeenSet = false;

    S3Action m_writeToS3;
    bool m_writeToS3HasBeenSet = false;

    SendAction m_send;
    bool m_sendHasBeenSet = false;

    AddHeaderAction m_addHeader;
    bool m_addHeaderHasBeenSet = false;

    ReplaceRecipientAction m_replaceRecipient;
    bool m_replaceRecipientHasBeenSet = false;

    DeliverToMailboxAction m_deliverToMailbox;
    bool m_deliverToMailboxHasBeenSet = false;

    DeliverToQBusinessAction m_deliverToQBusiness;
    bool m_deliverToQBusinessHasBeenSet = false;

    SnsAction m_publishToSns;
    bool m_publishToSnsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
