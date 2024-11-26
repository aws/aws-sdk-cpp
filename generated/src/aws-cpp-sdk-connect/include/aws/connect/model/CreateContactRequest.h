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
    AWS_CONNECT_API CreateContactRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline CreateContactRequest& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline CreateContactRequest& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline CreateContactRequest& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline CreateContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline CreateContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation: URL |
     * NUMBER | STRING | DATE | EMAIL | ATTACHMENT.</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }
    inline CreateContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}
    inline CreateContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}
    inline CreateContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    inline CreateContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }
    inline CreateContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline CreateContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline CreateContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel for the contact</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline CreateContactRequest& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline CreateContactRequest& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline const ContactInitiationMethod& GetInitiationMethod() const{ return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(const ContactInitiationMethod& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline void SetInitiationMethod(ContactInitiationMethod&& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = std::move(value); }
    inline CreateContactRequest& WithInitiationMethod(const ContactInitiationMethod& value) { SetInitiationMethod(value); return *this;}
    inline CreateContactRequest& WithInitiationMethod(ContactInitiationMethod&& value) { SetInitiationMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of minutes the contact will be active for before expiring</p>
     */
    inline int GetExpiryDurationInMinutes() const{ return m_expiryDurationInMinutes; }
    inline bool ExpiryDurationInMinutesHasBeenSet() const { return m_expiryDurationInMinutesHasBeenSet; }
    inline void SetExpiryDurationInMinutes(int value) { m_expiryDurationInMinutesHasBeenSet = true; m_expiryDurationInMinutes = value; }
    inline CreateContactRequest& WithExpiryDurationInMinutes(int value) { SetExpiryDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User details for the contact</p>
     */
    inline const UserInfo& GetUserInfo() const{ return m_userInfo; }
    inline bool UserInfoHasBeenSet() const { return m_userInfoHasBeenSet; }
    inline void SetUserInfo(const UserInfo& value) { m_userInfoHasBeenSet = true; m_userInfo = value; }
    inline void SetUserInfo(UserInfo&& value) { m_userInfoHasBeenSet = true; m_userInfo = std::move(value); }
    inline CreateContactRequest& WithUserInfo(const UserInfo& value) { SetUserInfo(value); return *this;}
    inline CreateContactRequest& WithUserInfo(UserInfo&& value) { SetUserInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Initial state of the contact when it's created</p>
     */
    inline const InitiateAs& GetInitiateAs() const{ return m_initiateAs; }
    inline bool InitiateAsHasBeenSet() const { return m_initiateAsHasBeenSet; }
    inline void SetInitiateAs(const InitiateAs& value) { m_initiateAsHasBeenSet = true; m_initiateAs = value; }
    inline void SetInitiateAs(InitiateAs&& value) { m_initiateAsHasBeenSet = true; m_initiateAs = std::move(value); }
    inline CreateContactRequest& WithInitiateAs(const InitiateAs& value) { SetInitiateAs(value); return *this;}
    inline CreateContactRequest& WithInitiateAs(InitiateAs&& value) { SetInitiateAs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a the contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateContactRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the contact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }
    inline CreateContactRequest& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}
    inline CreateContactRequest& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}
    inline CreateContactRequest& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    inline CreateContactRequest& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }
    inline CreateContactRequest& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline CreateContactRequest& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContactRequest& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline CreateContactRequest& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod;
    bool m_initiationMethodHasBeenSet = false;

    int m_expiryDurationInMinutes;
    bool m_expiryDurationInMinutesHasBeenSet = false;

    UserInfo m_userInfo;
    bool m_userInfoHasBeenSet = false;

    InitiateAs m_initiateAs;
    bool m_initiateAsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
