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
    AWS_CONNECT_API StartEmailContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartEmailContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline StartEmailContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline StartEmailContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const EmailAddressInfo& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    inline void SetFromEmailAddress(const EmailAddressInfo& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(EmailAddressInfo&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }
    inline StartEmailContactRequest& WithFromEmailAddress(const EmailAddressInfo& value) { SetFromEmailAddress(value); return *this;}
    inline StartEmailContactRequest& WithFromEmailAddress(EmailAddressInfo&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetDestinationEmailAddress() const{ return m_destinationEmailAddress; }
    inline bool DestinationEmailAddressHasBeenSet() const { return m_destinationEmailAddressHasBeenSet; }
    inline void SetDestinationEmailAddress(const Aws::String& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = value; }
    inline void SetDestinationEmailAddress(Aws::String&& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = std::move(value); }
    inline void SetDestinationEmailAddress(const char* value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress.assign(value); }
    inline StartEmailContactRequest& WithDestinationEmailAddress(const Aws::String& value) { SetDestinationEmailAddress(value); return *this;}
    inline StartEmailContactRequest& WithDestinationEmailAddress(Aws::String&& value) { SetDestinationEmailAddress(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithDestinationEmailAddress(const char* value) { SetDestinationEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartEmailContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartEmailContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }
    inline StartEmailContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}
    inline StartEmailContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}
    inline StartEmailContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    inline StartEmailContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }
    inline StartEmailContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline StartEmailContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }
    inline StartEmailContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline StartEmailContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartEmailContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartEmailContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const InboundEmailContent& GetEmailMessage() const{ return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    inline void SetEmailMessage(const InboundEmailContent& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }
    inline void SetEmailMessage(InboundEmailContent&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }
    inline StartEmailContactRequest& WithEmailMessage(const InboundEmailContent& value) { SetEmailMessage(value); return *this;}
    inline StartEmailContactRequest& WithEmailMessage(InboundEmailContent&& value) { SetEmailMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const InboundAdditionalRecipients& GetAdditionalRecipients() const{ return m_additionalRecipients; }
    inline bool AdditionalRecipientsHasBeenSet() const { return m_additionalRecipientsHasBeenSet; }
    inline void SetAdditionalRecipients(const InboundAdditionalRecipients& value) { m_additionalRecipientsHasBeenSet = true; m_additionalRecipients = value; }
    inline void SetAdditionalRecipients(InboundAdditionalRecipients&& value) { m_additionalRecipientsHasBeenSet = true; m_additionalRecipients = std::move(value); }
    inline StartEmailContactRequest& WithAdditionalRecipients(const InboundAdditionalRecipients& value) { SetAdditionalRecipients(value); return *this;}
    inline StartEmailContactRequest& WithAdditionalRecipients(InboundAdditionalRecipients&& value) { SetAdditionalRecipients(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<EmailAttachment>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<EmailAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<EmailAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline StartEmailContactRequest& WithAttachments(const Aws::Vector<EmailAttachment>& value) { SetAttachments(value); return *this;}
    inline StartEmailContactRequest& WithAttachments(Aws::Vector<EmailAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline StartEmailContactRequest& AddAttachments(const EmailAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline StartEmailContactRequest& AddAttachments(EmailAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }
    inline StartEmailContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline StartEmailContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline StartEmailContactRequest& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline StartEmailContactRequest& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline StartEmailContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline StartEmailContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline StartEmailContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline StartEmailContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline StartEmailContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline StartEmailContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline StartEmailContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline StartEmailContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline StartEmailContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }
    inline StartEmailContactRequest& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}
    inline StartEmailContactRequest& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}
    inline StartEmailContactRequest& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    inline StartEmailContactRequest& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }
    inline StartEmailContactRequest& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline StartEmailContactRequest& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline StartEmailContactRequest& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline StartEmailContactRequest& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartEmailContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartEmailContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartEmailContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
