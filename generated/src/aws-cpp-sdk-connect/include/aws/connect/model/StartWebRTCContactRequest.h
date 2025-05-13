/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AllowedCapabilities.h>
#include <aws/connect/model/ParticipantDetails.h>
#include <aws/connect/model/Reference.h>
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
  class StartWebRTCContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartWebRTCContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWebRTCContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    StartWebRTCContactRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    StartWebRTCContactRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartWebRTCContactRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Flows</b>. Choose the flow. On the flow page, under the name of the flow,
     * choose <b>Show additional flow information</b>. The ContactFlowId is the last
     * part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    template<typename ContactFlowIdT = Aws::String>
    void SetContactFlowId(ContactFlowIdT&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::forward<ContactFlowIdT>(value); }
    template<typename ContactFlowIdT = Aws::String>
    StartWebRTCContactRequest& WithContactFlowId(ContactFlowIdT&& value) { SetContactFlowId(std::forward<ContactFlowIdT>(value)); return *this;}
    ///@}

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
    StartWebRTCContactRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline const AllowedCapabilities& GetAllowedCapabilities() const { return m_allowedCapabilities; }
    inline bool AllowedCapabilitiesHasBeenSet() const { return m_allowedCapabilitiesHasBeenSet; }
    template<typename AllowedCapabilitiesT = AllowedCapabilities>
    void SetAllowedCapabilities(AllowedCapabilitiesT&& value) { m_allowedCapabilitiesHasBeenSet = true; m_allowedCapabilities = std::forward<AllowedCapabilitiesT>(value); }
    template<typename AllowedCapabilitiesT = AllowedCapabilities>
    StartWebRTCContactRequest& WithAllowedCapabilities(AllowedCapabilitiesT&& value) { SetAllowedCapabilities(std::forward<AllowedCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ParticipantDetails& GetParticipantDetails() const { return m_participantDetails; }
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }
    template<typename ParticipantDetailsT = ParticipantDetails>
    void SetParticipantDetails(ParticipantDetailsT&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::forward<ParticipantDetailsT>(value); }
    template<typename ParticipantDetailsT = ParticipantDetails>
    StartWebRTCContactRequest& WithParticipantDetails(ParticipantDetailsT&& value) { SetParticipantDetails(std::forward<ParticipantDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    StartWebRTCContactRequest& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Map<Aws::String, Reference>>
    StartWebRTCContactRequest& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesKeyT = Aws::String, typename ReferencesValueT = Reference>
    StartWebRTCContactRequest& AddReferences(ReferencesKeyT&& key, ReferencesValueT&& value) {
      m_referencesHasBeenSet = true; m_references.emplace(std::forward<ReferencesKeyT>(key), std::forward<ReferencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartWebRTCContactRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    AllowedCapabilities m_allowedCapabilities;
    bool m_allowedCapabilitiesHasBeenSet = false;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
