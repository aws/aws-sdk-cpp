/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/ContactInitiationMethod.h>
#include <aws/connect/model/UserInfo.h>
#include <aws/connect/model/InitiateAs.h>
#include <aws/connect/model/Reference.h>
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
  class CreateContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContact"; }

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
    CreateContactRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    CreateContactRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    CreateContactRequest& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
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
    CreateContactRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    CreateContactRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code> | <code>ATTACHMENT</code>.</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    CreateContactRequest& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesKeyT = Aws::String, typename ReferencesValueT = Reference>
    CreateContactRequest& AddReferences(ReferencesKeyT&& key, ReferencesValueT&& value) {
      m_referencesHasBeenSet = true; m_references.emplace(std::forward<ReferencesKeyT>(key), std::forward<ReferencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The channel for the contact.</p>  <p>The CHAT channel is not
     * supported. The following information is incorrect. We're working to correct
     * it.</p> 
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline CreateContactRequest& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated. </p>  <p>CreateContact
     * only supports the following initiation methods. Valid values by channel are:
     * </p> <ul> <li> <p>For VOICE: <code>TRANSFER</code> and the subtype
     * <code>connect:ExternalAudio</code> </p> </li> <li> <p>For EMAIL:
     * <code>OUTBOUND</code> | <code>AGENT_REPLY</code> | <code>FLOW</code> </p> </li>
     * <li> <p>For TASK: <code>API</code> </p> </li> </ul> <p>The other channels listed
     * below are incorrect. We're working to correct this information.</p> 
     */
    inline ContactInitiationMethod GetInitiationMethod() const { return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(ContactInitiationMethod value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline CreateContactRequest& WithInitiationMethod(ContactInitiationMethod value) { SetInitiationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of minutes the contact will be active for before expiring</p>
     */
    inline int GetExpiryDurationInMinutes() const { return m_expiryDurationInMinutes; }
    inline bool ExpiryDurationInMinutesHasBeenSet() const { return m_expiryDurationInMinutesHasBeenSet; }
    inline void SetExpiryDurationInMinutes(int value) { m_expiryDurationInMinutesHasBeenSet = true; m_expiryDurationInMinutes = value; }
    inline CreateContactRequest& WithExpiryDurationInMinutes(int value) { SetExpiryDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User details for the contact</p>  <p>UserInfo is required when
     * creating an EMAIL contact with <code>OUTBOUND</code> and
     * <code>AGENT_REPLY</code> contact initiation methods.</p> 
     */
    inline const UserInfo& GetUserInfo() const { return m_userInfo; }
    inline bool UserInfoHasBeenSet() const { return m_userInfoHasBeenSet; }
    template<typename UserInfoT = UserInfo>
    void SetUserInfo(UserInfoT&& value) { m_userInfoHasBeenSet = true; m_userInfo = std::forward<UserInfoT>(value); }
    template<typename UserInfoT = UserInfo>
    CreateContactRequest& WithUserInfo(UserInfoT&& value) { SetUserInfo(std::forward<UserInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Initial state of the contact when it's created. Only TASK channel contacts
     * can be initiated with <code>COMPLETED</code> state.</p>
     */
    inline InitiateAs GetInitiateAs() const { return m_initiateAs; }
    inline bool InitiateAsHasBeenSet() const { return m_initiateAsHasBeenSet; }
    inline void SetInitiateAs(InitiateAs value) { m_initiateAsHasBeenSet = true; m_initiateAs = value; }
    inline CreateContactRequest& WithInitiateAs(InitiateAs value) { SetInitiateAs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a the contact.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateContactRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the contact.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateContactRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * (unique contact ID) using an attribute map. The attributes are standard Amazon
     * Connect attributes. They can be accessed in flows.</p> <p>Attribute keys can
     * include only alphanumeric, -, and _.</p> <p>This field can be used to set
     * Segment Contact Expiry as a duration in minutes.</p>  <p>To set contact
     * expiry, a ValueMap must be specified containing the integer number of minutes
     * the contact will be active for before expiring, with
     * <code>SegmentAttributes</code> like { <code> "connect:ContactExpiry":
     * {"ValueMap" : { "ExpiryDuration": { "ValueInteger": 135}}}}</code>. </p> 
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    CreateContactRequest& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = SegmentAttributeValue>
    CreateContactRequest& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the previous contact when creating a transfer contact. This value
     * can be provided only for external audio contacts. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-integration.html">Integrate
     * Amazon Connect Contact Lens with external voice systems</a> in the <i>Amazon
     * Connect Administrator Guide</i>.</p>
     */
    inline const Aws::String& GetPreviousContactId() const { return m_previousContactId; }
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }
    template<typename PreviousContactIdT = Aws::String>
    void SetPreviousContactId(PreviousContactIdT&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::forward<PreviousContactIdT>(value); }
    template<typename PreviousContactIdT = Aws::String>
    CreateContactRequest& WithPreviousContactId(PreviousContactIdT&& value) { SetPreviousContactId(std::forward<PreviousContactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod{ContactInitiationMethod::NOT_SET};
    bool m_initiationMethodHasBeenSet = false;

    int m_expiryDurationInMinutes{0};
    bool m_expiryDurationInMinutesHasBeenSet = false;

    UserInfo m_userInfo;
    bool m_userInfoHasBeenSet = false;

    InitiateAs m_initiateAs{InitiateAs::NOT_SET};
    bool m_initiateAsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
