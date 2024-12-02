/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/QueueInfoInput.h>
#include <aws/connect/model/UserInfo.h>
#include <aws/connect/model/Endpoint.h>
#include <aws/connect/model/Reference.h>
#include <aws/connect/model/SegmentAttributeValue.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline UpdateContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline UpdateContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline UpdateContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateContactRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the contact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }
    inline UpdateContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}
    inline UpdateContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}
    inline UpdateContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    inline UpdateContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }
    inline UpdateContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline UpdateContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline UpdateContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * (unique contact ID) using an attribute map. The attributes are standard Amazon
     * Connect attributes. They can be accessed in flows.</p> <p>Attribute keys can
     * include only alphanumeric, -, and _.</p> <p>This field can be used to show
     * channel subtype, such as <code>connect:Guide</code>.</p> <p>Currently Contact
     * Expiry is the only segment attribute which can be updated by using the
     * UpdateContact API.</p>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }
    inline UpdateContactRequest& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}
    inline UpdateContactRequest& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}
    inline UpdateContactRequest& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    inline UpdateContactRequest& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }
    inline UpdateContactRequest& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline UpdateContactRequest& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateContactRequest& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline UpdateContactRequest& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about the queue associated with a contact. This parameter can
     * only be updated for external audio contacts. It is used when you integrate
     * third-party systems with Contact Lens for analytics. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-integration.html">Amazon
     * Connect Contact Lens integration</a> in the <i> Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const QueueInfoInput& GetQueueInfo() const{ return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    inline void SetQueueInfo(const QueueInfoInput& value) { m_queueInfoHasBeenSet = true; m_queueInfo = value; }
    inline void SetQueueInfo(QueueInfoInput&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::move(value); }
    inline UpdateContactRequest& WithQueueInfo(const QueueInfoInput& value) { SetQueueInfo(value); return *this;}
    inline UpdateContactRequest& WithQueueInfo(QueueInfoInput&& value) { SetQueueInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the agent associated with a contact. This parameter can
     * only be updated for external audio contacts. It is used when you integrate
     * third-party systems with Contact Lens for analytics. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-integration.html">Amazon
     * Connect Contact Lens integration</a> in the <i> Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const UserInfo& GetUserInfo() const{ return m_userInfo; }
    inline bool UserInfoHasBeenSet() const { return m_userInfoHasBeenSet; }
    inline void SetUserInfo(const UserInfo& value) { m_userInfoHasBeenSet = true; m_userInfo = value; }
    inline void SetUserInfo(UserInfo&& value) { m_userInfoHasBeenSet = true; m_userInfo = std::move(value); }
    inline UpdateContactRequest& WithUserInfo(const UserInfo& value) { SetUserInfo(value); return *this;}
    inline UpdateContactRequest& WithUserInfo(UserInfo&& value) { SetUserInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the customer for which the contact was initiated. For
     * external audio contacts, this is usually the end customer's phone number. This
     * value can only be updated for external audio contacts. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-integration.html">Amazon
     * Connect Contact Lens integration</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const Endpoint& GetCustomerEndpoint() const{ return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    inline void SetCustomerEndpoint(const Endpoint& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = value; }
    inline void SetCustomerEndpoint(Endpoint&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::move(value); }
    inline UpdateContactRequest& WithCustomerEndpoint(const Endpoint& value) { SetCustomerEndpoint(value); return *this;}
    inline UpdateContactRequest& WithCustomerEndpoint(Endpoint&& value) { SetCustomerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>External system endpoint for the contact was initiated. For external audio
     * contacts, this is the phone number of the external system such as the contact
     * center. This value can only be updated for external audio contacts. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-integration.html">Amazon
     * Connect Contact Lens integration</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const Endpoint& GetSystemEndpoint() const{ return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    inline void SetSystemEndpoint(const Endpoint& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = value; }
    inline void SetSystemEndpoint(Endpoint&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::move(value); }
    inline UpdateContactRequest& WithSystemEndpoint(const Endpoint& value) { SetSystemEndpoint(value); return *this;}
    inline UpdateContactRequest& WithSystemEndpoint(Endpoint&& value) { SetSystemEndpoint(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    QueueInfoInput m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    UserInfo m_userInfo;
    bool m_userInfoHasBeenSet = false;

    Endpoint m_customerEndpoint;
    bool m_customerEndpointHasBeenSet = false;

    Endpoint m_systemEndpoint;
    bool m_systemEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
