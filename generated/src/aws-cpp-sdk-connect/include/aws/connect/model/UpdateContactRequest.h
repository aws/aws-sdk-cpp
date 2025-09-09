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
    AWS_CONNECT_API UpdateContactRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateContactRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    UpdateContactRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the contact.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateContactRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the contact.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateContactRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    UpdateContactRequest& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesKeyT = Aws::String, typename ReferencesValueT = Reference>
    UpdateContactRequest& AddReferences(ReferencesKeyT&& key, ReferencesValueT&& value) {
      m_referencesHasBeenSet = true; m_references.emplace(std::forward<ReferencesKeyT>(key), std::forward<ReferencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * (unique contact ID) using an attribute map. The attributes are standard Amazon
     * Connect attributes. They can be accessed in flows.</p> <p>Attribute keys can
     * include only alphanumeric, -, and _.</p> <p>This field can be used to show
     * channel subtype, such as <code>connect:Guide</code>.</p> <p>Contact Expiry, and
     * user-defined attributes (String - String) that are defined in predefined
     * attributes, can be updated by using the UpdateContact API.</p>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    UpdateContactRequest& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = SegmentAttributeValue>
    UpdateContactRequest& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
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
    inline const QueueInfoInput& GetQueueInfo() const { return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    template<typename QueueInfoT = QueueInfoInput>
    void SetQueueInfo(QueueInfoT&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::forward<QueueInfoT>(value); }
    template<typename QueueInfoT = QueueInfoInput>
    UpdateContactRequest& WithQueueInfo(QueueInfoT&& value) { SetQueueInfo(std::forward<QueueInfoT>(value)); return *this;}
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
    inline const UserInfo& GetUserInfo() const { return m_userInfo; }
    inline bool UserInfoHasBeenSet() const { return m_userInfoHasBeenSet; }
    template<typename UserInfoT = UserInfo>
    void SetUserInfo(UserInfoT&& value) { m_userInfoHasBeenSet = true; m_userInfo = std::forward<UserInfoT>(value); }
    template<typename UserInfoT = UserInfo>
    UpdateContactRequest& WithUserInfo(UserInfoT&& value) { SetUserInfo(std::forward<UserInfoT>(value)); return *this;}
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
    inline const Endpoint& GetCustomerEndpoint() const { return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    template<typename CustomerEndpointT = Endpoint>
    void SetCustomerEndpoint(CustomerEndpointT&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::forward<CustomerEndpointT>(value); }
    template<typename CustomerEndpointT = Endpoint>
    UpdateContactRequest& WithCustomerEndpoint(CustomerEndpointT&& value) { SetCustomerEndpoint(std::forward<CustomerEndpointT>(value)); return *this;}
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
    inline const Endpoint& GetSystemEndpoint() const { return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    template<typename SystemEndpointT = Endpoint>
    void SetSystemEndpoint(SystemEndpointT&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::forward<SystemEndpointT>(value); }
    template<typename SystemEndpointT = Endpoint>
    UpdateContactRequest& WithSystemEndpoint(SystemEndpointT&& value) { SetSystemEndpoint(std::forward<SystemEndpointT>(value)); return *this;}
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
