/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EmailAddressInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/InboundEmailContent.h>
#include <aws/connect/model/InboundAdditionalRecipients.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Reference.h>
#include <aws/connect/model/EmailAttachment.h>
#include <aws/connect/model/SegmentAttributeValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StartEmailContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartEmailContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEmailContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    StartEmailContactRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the customer.</p>
     */
    inline const EmailAddressInfo& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = EmailAddressInfo>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = EmailAddressInfo>
    StartEmailContactRequest& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetDestinationEmailAddress() const { return m_destinationEmailAddress; }
    inline bool DestinationEmailAddressHasBeenSet() const { return m_destinationEmailAddressHasBeenSet; }
    template<typename DestinationEmailAddressT = Aws::String>
    void SetDestinationEmailAddress(DestinationEmailAddressT&& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = std::forward<DestinationEmailAddressT>(value); }
    template<typename DestinationEmailAddressT = Aws::String>
    StartEmailContactRequest& WithDestinationEmailAddress(DestinationEmailAddressT&& value) { SetDestinationEmailAddress(std::forward<DestinationEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the email contact.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartEmailContactRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Emails can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> |
     * <code>DATE</code>. <code>EMAIL</code> | <code>EMAIL_MESSAGE</code>
     * |<code>ATTACHMENT</code> are not a supported reference type during email
     * creation.</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    StartEmailContactRequest& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesKeyT = Aws::String, typename ReferencesValueT = Reference>
    StartEmailContactRequest& AddReferences(ReferencesKeyT&& key, ReferencesValueT&& value) {
      m_referencesHasBeenSet = true; m_references.emplace(std::forward<ReferencesKeyT>(key), std::forward<ReferencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of a email that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartEmailContactRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message body to be sent to the newly created email.</p>
     */
    inline const InboundEmailContent& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = InboundEmailContent>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = InboundEmailContent>
    StartEmailContactRequest& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional recipients address of the email.</p>
     */
    inline const InboundAdditionalRecipients& GetAdditionalRecipients() const { return m_additionalRecipients; }
    inline bool AdditionalRecipientsHasBeenSet() const { return m_additionalRecipientsHasBeenSet; }
    template<typename AdditionalRecipientsT = InboundAdditionalRecipients>
    void SetAdditionalRecipients(AdditionalRecipientsT&& value) { m_additionalRecipientsHasBeenSet = true; m_additionalRecipients = std::forward<AdditionalRecipientsT>(value); }
    template<typename AdditionalRecipientsT = InboundAdditionalRecipients>
    StartEmailContactRequest& WithAdditionalRecipients(AdditionalRecipientsT&& value) { SetAdditionalRecipients(std::forward<AdditionalRecipientsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of S3 presigned URLs of email attachments and their file name. </p>
     */
    inline const Aws::Vector<EmailAttachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<EmailAttachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<EmailAttachment>>
    StartEmailContactRequest& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = EmailAttachment>
    StartEmailContactRequest& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow for initiating the emails. To see the
     * ContactFlowId in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Flows</b>. Choose the flow. On the flow page, under the name
     * of the flow, choose <b>Show additional flow information</b>. The ContactFlowId
     * is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    template<typename ContactFlowIdT = Aws::String>
    void SetContactFlowId(ContactFlowIdT&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::forward<ContactFlowIdT>(value); }
    template<typename ContactFlowIdT = Aws::String>
    StartEmailContactRequest& WithContactFlowId(ContactFlowIdT&& value) { SetContactFlowId(std::forward<ContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId that is related to this contact. Linking emails together by
     * using <code>RelatedContactID</code> copies over contact attributes from the
     * related email contact to the new email contact. All updates to user-defined
     * attributes in the new email contact are limited to the individual contact ID.
     * There are no limits to the number of contacts that can be linked by using
     * <code>RelatedContactId</code>. </p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    StartEmailContactRequest& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    StartEmailContactRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    StartEmailContactRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * using an attribute map. The attributes are standard Amazon Connect attributes.
     * They can be accessed in flows.</p> <p>Attribute keys can include only
     * alphanumeric, -, and _.</p> <p>This field can be used to show channel subtype,
     * such as <code>connect:Guide</code>.</p>  <p>To set contact expiry, a
     * <code>ValueMap</code> must be specified containing the integer number of minutes
     * the contact will be active for before expiring, with
     * <code>SegmentAttributes</code> like { <code> "connect:ContactExpiry":
     * {"ValueMap" : { "ExpiryDuration": { "ValueInteger":135}}}}</code>.</p> 
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    StartEmailContactRequest& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = SegmentAttributeValue>
    StartEmailContactRequest& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartEmailContactRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    EmailAddressInfo m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_destinationEmailAddress;
    bool m_destinationEmailAddressHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InboundEmailContent m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    InboundAdditionalRecipients m_additionalRecipients;
    bool m_additionalRecipientsHasBeenSet = false;

    Aws::Vector<EmailAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
