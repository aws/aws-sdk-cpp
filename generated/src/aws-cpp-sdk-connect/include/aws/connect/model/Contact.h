/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactInitiationMethod.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/QueueInfo.h>
#include <aws/connect/model/AgentInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/WisdomInfo.h>
#include <aws/connect/model/EndpointInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/RoutingCriteria.h>
#include <aws/connect/model/Customer.h>
#include <aws/connect/model/Campaign.h>
#include <aws/connect/model/AnsweringMachineDetectionStatus.h>
#include <aws/connect/model/CustomerVoiceActivity.h>
#include <aws/connect/model/QualityMetrics.h>
#include <aws/connect/model/ChatMetrics.h>
#include <aws/connect/model/DisconnectDetails.h>
#include <aws/connect/model/AdditionalEmailRecipients.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ContactDetails.h>
#include <aws/connect/model/SegmentAttributeValue.h>
#include <aws/connect/model/RecordingInfo.h>
#include <aws/connect/model/ContactEvaluation.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Contact">AWS API
   * Reference</a></p>
   */
  class Contact
  {
  public:
    AWS_CONNECT_API Contact() = default;
    AWS_CONNECT_API Contact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Contact& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the contact.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Contact& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    template<typename InitialContactIdT = Aws::String>
    void SetInitialContactId(InitialContactIdT&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::forward<InitialContactIdT>(value); }
    template<typename InitialContactIdT = Aws::String>
    Contact& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline const Aws::String& GetPreviousContactId() const { return m_previousContactId; }
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }
    template<typename PreviousContactIdT = Aws::String>
    void SetPreviousContactId(PreviousContactIdT&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::forward<PreviousContactIdT>(value); }
    template<typename PreviousContactIdT = Aws::String>
    Contact& WithPreviousContactId(PreviousContactIdT&& value) { SetPreviousContactId(std::forward<PreviousContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the root contactId which is used as a unique identifier for all
     * subsequent contacts in a contact tree.</p>
     */
    inline const Aws::String& GetContactAssociationId() const { return m_contactAssociationId; }
    inline bool ContactAssociationIdHasBeenSet() const { return m_contactAssociationIdHasBeenSet; }
    template<typename ContactAssociationIdT = Aws::String>
    void SetContactAssociationId(ContactAssociationIdT&& value) { m_contactAssociationIdHasBeenSet = true; m_contactAssociationId = std::forward<ContactAssociationIdT>(value); }
    template<typename ContactAssociationIdT = Aws::String>
    Contact& WithContactAssociationId(ContactAssociationIdT&& value) { SetContactAssociationId(std::forward<ContactAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline ContactInitiationMethod GetInitiationMethod() const { return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(ContactInitiationMethod value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline Contact& WithInitiationMethod(ContactInitiationMethod value) { SetInitiationMethod(value); return *this;}
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
    Contact& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    Contact& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline Contact& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline const QueueInfo& GetQueueInfo() const { return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    template<typename QueueInfoT = QueueInfo>
    void SetQueueInfo(QueueInfoT&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::forward<QueueInfoT>(value); }
    template<typename QueueInfoT = QueueInfo>
    Contact& WithQueueInfo(QueueInfoT&& value) { SetQueueInfo(std::forward<QueueInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline const AgentInfo& GetAgentInfo() const { return m_agentInfo; }
    inline bool AgentInfoHasBeenSet() const { return m_agentInfoHasBeenSet; }
    template<typename AgentInfoT = AgentInfo>
    void SetAgentInfo(AgentInfoT&& value) { m_agentInfoHasBeenSet = true; m_agentInfo = std::forward<AgentInfoT>(value); }
    template<typename AgentInfoT = AgentInfo>
    Contact& WithAgentInfo(AgentInfoT&& value) { SetAgentInfo(std::forward<AgentInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this contact was initiated, in UTC time. For
     * <code>INBOUND</code>, this is when the contact arrived. For
     * <code>OUTBOUND</code>, this is when the agent began dialing. For
     * <code>CALLBACK</code>, this is when the callback contact was created. For
     * <code>TRANSFER</code> and <code>QUEUE_TRANSFER</code>, this is when the transfer
     * was initiated. For <code>API</code>, this is when the request arrived. For
     * <code>EXTERNAL_OUTBOUND</code>, this is when the agent started dialing the
     * external participant. For <code>MONITOR</code>, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTimestamp() const { return m_initiationTimestamp; }
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }
    template<typename InitiationTimestampT = Aws::Utils::DateTime>
    void SetInitiationTimestamp(InitiationTimestampT&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::forward<InitiationTimestampT>(value); }
    template<typename InitiationTimestampT = Aws::Utils::DateTime>
    Contact& WithInitiationTimestamp(InitiationTimestampT&& value) { SetInitiationTimestamp(std::forward<InitiationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the customer endpoint disconnected from the current
     * contact, in UTC time. In transfer scenarios, the DisconnectTimestamp of the
     * previous contact indicates the date and time when that contact ended.</p>
     */
    inline const Aws::Utils::DateTime& GetDisconnectTimestamp() const { return m_disconnectTimestamp; }
    inline bool DisconnectTimestampHasBeenSet() const { return m_disconnectTimestampHasBeenSet; }
    template<typename DisconnectTimestampT = Aws::Utils::DateTime>
    void SetDisconnectTimestamp(DisconnectTimestampT&& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = std::forward<DisconnectTimestampT>(value); }
    template<typename DisconnectTimestampT = Aws::Utils::DateTime>
    Contact& WithDisconnectTimestamp(DisconnectTimestampT&& value) { SetDisconnectTimestamp(std::forward<DisconnectTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    Contact& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPausedTimestamp() const { return m_lastPausedTimestamp; }
    inline bool LastPausedTimestampHasBeenSet() const { return m_lastPausedTimestampHasBeenSet; }
    template<typename LastPausedTimestampT = Aws::Utils::DateTime>
    void SetLastPausedTimestamp(LastPausedTimestampT&& value) { m_lastPausedTimestampHasBeenSet = true; m_lastPausedTimestamp = std::forward<LastPausedTimestampT>(value); }
    template<typename LastPausedTimestampT = Aws::Utils::DateTime>
    Contact& WithLastPausedTimestamp(LastPausedTimestampT&& value) { SetLastPausedTimestamp(std::forward<LastPausedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResumedTimestamp() const { return m_lastResumedTimestamp; }
    inline bool LastResumedTimestampHasBeenSet() const { return m_lastResumedTimestampHasBeenSet; }
    template<typename LastResumedTimestampT = Aws::Utils::DateTime>
    void SetLastResumedTimestamp(LastResumedTimestampT&& value) { m_lastResumedTimestampHasBeenSet = true; m_lastResumedTimestamp = std::forward<LastResumedTimestampT>(value); }
    template<typename LastResumedTimestampT = Aws::Utils::DateTime>
    Contact& WithLastResumedTimestamp(LastResumedTimestampT&& value) { SetLastResumedTimestamp(std::forward<LastResumedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total pause count for a contact.</p>
     */
    inline int GetTotalPauseCount() const { return m_totalPauseCount; }
    inline bool TotalPauseCountHasBeenSet() const { return m_totalPauseCountHasBeenSet; }
    inline void SetTotalPauseCount(int value) { m_totalPauseCountHasBeenSet = true; m_totalPauseCount = value; }
    inline Contact& WithTotalPauseCount(int value) { SetTotalPauseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total pause duration for a contact in seconds.</p>
     */
    inline int GetTotalPauseDurationInSeconds() const { return m_totalPauseDurationInSeconds; }
    inline bool TotalPauseDurationInSecondsHasBeenSet() const { return m_totalPauseDurationInSecondsHasBeenSet; }
    inline void SetTotalPauseDurationInSeconds(int value) { m_totalPauseDurationInSecondsHasBeenSet = true; m_totalPauseDurationInSeconds = value; }
    inline Contact& WithTotalPauseDurationInSeconds(int value) { SetTotalPauseDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimestamp() const { return m_scheduledTimestamp; }
    inline bool ScheduledTimestampHasBeenSet() const { return m_scheduledTimestampHasBeenSet; }
    template<typename ScheduledTimestampT = Aws::Utils::DateTime>
    void SetScheduledTimestamp(ScheduledTimestampT&& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = std::forward<ScheduledTimestampT>(value); }
    template<typename ScheduledTimestampT = Aws::Utils::DateTime>
    Contact& WithScheduledTimestamp(ScheduledTimestampT&& value) { SetScheduledTimestamp(std::forward<ScheduledTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline const Aws::String& GetRelatedContactId() const { return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    template<typename RelatedContactIdT = Aws::String>
    void SetRelatedContactId(RelatedContactIdT&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::forward<RelatedContactIdT>(value); }
    template<typename RelatedContactIdT = Aws::String>
    Contact& WithRelatedContactId(RelatedContactIdT&& value) { SetRelatedContactId(std::forward<RelatedContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline const WisdomInfo& GetWisdomInfo() const { return m_wisdomInfo; }
    inline bool WisdomInfoHasBeenSet() const { return m_wisdomInfoHasBeenSet; }
    template<typename WisdomInfoT = WisdomInfo>
    void SetWisdomInfo(WisdomInfoT&& value) { m_wisdomInfoHasBeenSet = true; m_wisdomInfo = std::forward<WisdomInfoT>(value); }
    template<typename WisdomInfoT = WisdomInfo>
    Contact& WithWisdomInfo(WisdomInfoT&& value) { SetWisdomInfo(std::forward<WisdomInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's identification number. For example, the
     * <code>CustomerId</code> may be a customer number from your CRM. You can create a
     * Lambda function to pull the unique customer ID of the caller from your CRM
     * system. If you enable Amazon Connect Voice ID capability, this attribute is
     * populated with the <code>CustomerSpeakerId</code> of the caller.</p>
     */
    inline const Aws::String& GetCustomerId() const { return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    template<typename CustomerIdT = Aws::String>
    void SetCustomerId(CustomerIdT&& value) { m_customerIdHasBeenSet = true; m_customerId = std::forward<CustomerIdT>(value); }
    template<typename CustomerIdT = Aws::String>
    Contact& WithCustomerId(CustomerIdT&& value) { SetCustomerId(std::forward<CustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer or external third party participant endpoint.</p>
     */
    inline const EndpointInfo& GetCustomerEndpoint() const { return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    template<typename CustomerEndpointT = EndpointInfo>
    void SetCustomerEndpoint(CustomerEndpointT&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::forward<CustomerEndpointT>(value); }
    template<typename CustomerEndpointT = EndpointInfo>
    Contact& WithCustomerEndpoint(CustomerEndpointT&& value) { SetCustomerEndpoint(std::forward<CustomerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system endpoint. For <code>INBOUND</code>, this is the phone number or
     * email address that the customer dialed. For <code>OUTBOUND</code> and
     * <code>EXTERNAL_OUTBOUND</code>, this is the outbound caller ID number assigned
     * to the outbound queue that is used to dial the customer. For callback, this
     * shows up as Softphone for calls handled by agents with softphone.</p>
     */
    inline const EndpointInfo& GetSystemEndpoint() const { return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    template<typename SystemEndpointT = EndpointInfo>
    void SetSystemEndpoint(SystemEndpointT&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::forward<SystemEndpointT>(value); }
    template<typename SystemEndpointT = EndpointInfo>
    Contact& WithSystemEndpoint(SystemEndpointT&& value) { SetSystemEndpoint(std::forward<SystemEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that represents the queue time adjust to be applied to the
     * contact, in seconds (longer / larger queue time are routed preferentially).
     * Cannot be specified if the QueuePriority is specified. Must be statically
     * defined and a valid integer value.</p>
     */
    inline int GetQueueTimeAdjustmentSeconds() const { return m_queueTimeAdjustmentSeconds; }
    inline bool QueueTimeAdjustmentSecondsHasBeenSet() const { return m_queueTimeAdjustmentSecondsHasBeenSet; }
    inline void SetQueueTimeAdjustmentSeconds(int value) { m_queueTimeAdjustmentSecondsHasBeenSet = true; m_queueTimeAdjustmentSeconds = value; }
    inline Contact& WithQueueTimeAdjustmentSeconds(int value) { SetQueueTimeAdjustmentSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that represents the queue priority to be applied to the contact
     * (lower priorities are routed preferentially). Cannot be specified if the
     * QueueTimeAdjustmentSeconds is specified. Must be statically defined, must be
     * larger than zero, and a valid integer value. Default Value is 5.</p>
     */
    inline long long GetQueuePriority() const { return m_queuePriority; }
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }
    inline void SetQueuePriority(long long value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }
    inline Contact& WithQueuePriority(long long value) { SetQueuePriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Contact& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Contact& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp when customer endpoint connected to Amazon Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToSystemTimestamp() const { return m_connectedToSystemTimestamp; }
    inline bool ConnectedToSystemTimestampHasBeenSet() const { return m_connectedToSystemTimestampHasBeenSet; }
    template<typename ConnectedToSystemTimestampT = Aws::Utils::DateTime>
    void SetConnectedToSystemTimestamp(ConnectedToSystemTimestampT&& value) { m_connectedToSystemTimestampHasBeenSet = true; m_connectedToSystemTimestamp = std::forward<ConnectedToSystemTimestampT>(value); }
    template<typename ConnectedToSystemTimestampT = Aws::Utils::DateTime>
    Contact& WithConnectedToSystemTimestamp(ConnectedToSystemTimestampT&& value) { SetConnectedToSystemTimestamp(std::forward<ConnectedToSystemTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest routing criteria on the contact.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const { return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    template<typename RoutingCriteriaT = RoutingCriteria>
    void SetRoutingCriteria(RoutingCriteriaT&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::forward<RoutingCriteriaT>(value); }
    template<typename RoutingCriteriaT = RoutingCriteria>
    Contact& WithRoutingCriteria(RoutingCriteriaT&& value) { SetRoutingCriteria(std::forward<RoutingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Customer on the contact.</p>
     */
    inline const Customer& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = Customer>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = Customer>
    Contact& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Campaign& GetCampaign() const { return m_campaign; }
    inline bool CampaignHasBeenSet() const { return m_campaignHasBeenSet; }
    template<typename CampaignT = Campaign>
    void SetCampaign(CampaignT&& value) { m_campaignHasBeenSet = true; m_campaign = std::forward<CampaignT>(value); }
    template<typename CampaignT = Campaign>
    Contact& WithCampaign(CampaignT&& value) { SetCampaign(std::forward<CampaignT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how an <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/how-to-create-campaigns.html">outbound
     * campaign</a> call is actually disposed if the contact is connected to Amazon
     * Connect.</p>
     */
    inline AnsweringMachineDetectionStatus GetAnsweringMachineDetectionStatus() const { return m_answeringMachineDetectionStatus; }
    inline bool AnsweringMachineDetectionStatusHasBeenSet() const { return m_answeringMachineDetectionStatusHasBeenSet; }
    inline void SetAnsweringMachineDetectionStatus(AnsweringMachineDetectionStatus value) { m_answeringMachineDetectionStatusHasBeenSet = true; m_answeringMachineDetectionStatus = value; }
    inline Contact& WithAnsweringMachineDetectionStatus(AnsweringMachineDetectionStatus value) { SetAnsweringMachineDetectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about customer’s voice activity.</p>
     */
    inline const CustomerVoiceActivity& GetCustomerVoiceActivity() const { return m_customerVoiceActivity; }
    inline bool CustomerVoiceActivityHasBeenSet() const { return m_customerVoiceActivityHasBeenSet; }
    template<typename CustomerVoiceActivityT = CustomerVoiceActivity>
    void SetCustomerVoiceActivity(CustomerVoiceActivityT&& value) { m_customerVoiceActivityHasBeenSet = true; m_customerVoiceActivity = std::forward<CustomerVoiceActivityT>(value); }
    template<typename CustomerVoiceActivityT = CustomerVoiceActivity>
    Contact& WithCustomerVoiceActivity(CustomerVoiceActivityT&& value) { SetCustomerVoiceActivity(std::forward<CustomerVoiceActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the quality of the participant's media connection.</p>
     */
    inline const QualityMetrics& GetQualityMetrics() const { return m_qualityMetrics; }
    inline bool QualityMetricsHasBeenSet() const { return m_qualityMetricsHasBeenSet; }
    template<typename QualityMetricsT = QualityMetrics>
    void SetQualityMetrics(QualityMetricsT&& value) { m_qualityMetricsHasBeenSet = true; m_qualityMetrics = std::forward<QualityMetricsT>(value); }
    template<typename QualityMetricsT = QualityMetrics>
    Contact& WithQualityMetrics(QualityMetricsT&& value) { SetQualityMetrics(std::forward<QualityMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how agent, bot, and customer interact in a chat
     * contact.</p>
     */
    inline const ChatMetrics& GetChatMetrics() const { return m_chatMetrics; }
    inline bool ChatMetricsHasBeenSet() const { return m_chatMetricsHasBeenSet; }
    template<typename ChatMetricsT = ChatMetrics>
    void SetChatMetrics(ChatMetricsT&& value) { m_chatMetricsHasBeenSet = true; m_chatMetrics = std::forward<ChatMetricsT>(value); }
    template<typename ChatMetricsT = ChatMetrics>
    Contact& WithChatMetrics(ChatMetricsT&& value) { SetChatMetrics(std::forward<ChatMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the call disconnect experience.</p>
     */
    inline const DisconnectDetails& GetDisconnectDetails() const { return m_disconnectDetails; }
    inline bool DisconnectDetailsHasBeenSet() const { return m_disconnectDetailsHasBeenSet; }
    template<typename DisconnectDetailsT = DisconnectDetails>
    void SetDisconnectDetails(DisconnectDetailsT&& value) { m_disconnectDetailsHasBeenSet = true; m_disconnectDetails = std::forward<DisconnectDetailsT>(value); }
    template<typename DisconnectDetailsT = DisconnectDetails>
    Contact& WithDisconnectDetails(DisconnectDetailsT&& value) { SetDisconnectDetails(std::forward<DisconnectDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of additional email addresses for an email contact.</p>
     */
    inline const AdditionalEmailRecipients& GetAdditionalEmailRecipients() const { return m_additionalEmailRecipients; }
    inline bool AdditionalEmailRecipientsHasBeenSet() const { return m_additionalEmailRecipientsHasBeenSet; }
    template<typename AdditionalEmailRecipientsT = AdditionalEmailRecipients>
    void SetAdditionalEmailRecipients(AdditionalEmailRecipientsT&& value) { m_additionalEmailRecipientsHasBeenSet = true; m_additionalEmailRecipients = std::forward<AdditionalEmailRecipientsT>(value); }
    template<typename AdditionalEmailRecipientsT = AdditionalEmailRecipients>
    Contact& WithAdditionalEmailRecipients(AdditionalEmailRecipientsT&& value) { SetAdditionalEmailRecipients(std::forward<AdditionalEmailRecipientsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * using an attribute map. The attributes are standard Amazon Connect attributes
     * and can be accessed in flows. Attribute keys can include only alphanumeric, -,
     * and _ characters. This field can be used to show channel subtype. For example,
     * <code>connect:Guide</code> or <code>connect:SMS</code>.</p>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, SegmentAttributeValue>>
    Contact& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = SegmentAttributeValue>
    Contact& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If recording was enabled, this is information about the recordings.</p>
     */
    inline const Aws::Vector<RecordingInfo>& GetRecordings() const { return m_recordings; }
    inline bool RecordingsHasBeenSet() const { return m_recordingsHasBeenSet; }
    template<typename RecordingsT = Aws::Vector<RecordingInfo>>
    void SetRecordings(RecordingsT&& value) { m_recordingsHasBeenSet = true; m_recordings = std::forward<RecordingsT>(value); }
    template<typename RecordingsT = Aws::Vector<RecordingInfo>>
    Contact& WithRecordings(RecordingsT&& value) { SetRecordings(std::forward<RecordingsT>(value)); return *this;}
    template<typename RecordingsT = RecordingInfo>
    Contact& AddRecordings(RecordingsT&& value) { m_recordingsHasBeenSet = true; m_recordings.emplace_back(std::forward<RecordingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The disconnect reason for the contact.</p>
     */
    inline const Aws::String& GetDisconnectReason() const { return m_disconnectReason; }
    inline bool DisconnectReasonHasBeenSet() const { return m_disconnectReasonHasBeenSet; }
    template<typename DisconnectReasonT = Aws::String>
    void SetDisconnectReason(DisconnectReasonT&& value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = std::forward<DisconnectReasonT>(value); }
    template<typename DisconnectReasonT = Aws::String>
    Contact& WithDisconnectReason(DisconnectReasonT&& value) { SetDisconnectReason(std::forward<DisconnectReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the contact evaluations where the key is the FormId, which
     * is a unique identifier for the form.</p>
     */
    inline const Aws::Map<Aws::String, ContactEvaluation>& GetContactEvaluations() const { return m_contactEvaluations; }
    inline bool ContactEvaluationsHasBeenSet() const { return m_contactEvaluationsHasBeenSet; }
    template<typename ContactEvaluationsT = Aws::Map<Aws::String, ContactEvaluation>>
    void SetContactEvaluations(ContactEvaluationsT&& value) { m_contactEvaluationsHasBeenSet = true; m_contactEvaluations = std::forward<ContactEvaluationsT>(value); }
    template<typename ContactEvaluationsT = Aws::Map<Aws::String, ContactEvaluation>>
    Contact& WithContactEvaluations(ContactEvaluationsT&& value) { SetContactEvaluations(std::forward<ContactEvaluationsT>(value)); return *this;}
    template<typename ContactEvaluationsKeyT = Aws::String, typename ContactEvaluationsValueT = ContactEvaluation>
    Contact& AddContactEvaluations(ContactEvaluationsKeyT&& key, ContactEvaluationsValueT&& value) {
      m_contactEvaluationsHasBeenSet = true; m_contactEvaluations.emplace(std::forward<ContactEvaluationsKeyT>(key), std::forward<ContactEvaluationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of string key/value pairs that contain user-defined attributes which
     * are lightly typed within the contact. This object is used only for task
     * contacts.</p>
     */
    inline const ContactDetails& GetContactDetails() const { return m_contactDetails; }
    inline bool ContactDetailsHasBeenSet() const { return m_contactDetailsHasBeenSet; }
    template<typename ContactDetailsT = ContactDetails>
    void SetContactDetails(ContactDetailsT&& value) { m_contactDetailsHasBeenSet = true; m_contactDetails = std::forward<ContactDetailsT>(value); }
    template<typename ContactDetailsT = ContactDetails>
    Contact& WithContactDetails(ContactDetailsT&& value) { SetContactDetails(std::forward<ContactDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    Contact& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    Contact& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet = false;

    Aws::String m_contactAssociationId;
    bool m_contactAssociationIdHasBeenSet = false;

    ContactInitiationMethod m_initiationMethod{ContactInitiationMethod::NOT_SET};
    bool m_initiationMethodHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;

    QueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    AgentInfo m_agentInfo;
    bool m_agentInfoHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTimestamp{};
    bool m_initiationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_disconnectTimestamp{};
    bool m_disconnectTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
    bool m_lastUpdateTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastPausedTimestamp{};
    bool m_lastPausedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastResumedTimestamp{};
    bool m_lastResumedTimestampHasBeenSet = false;

    int m_totalPauseCount{0};
    bool m_totalPauseCountHasBeenSet = false;

    int m_totalPauseDurationInSeconds{0};
    bool m_totalPauseDurationInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimestamp{};
    bool m_scheduledTimestampHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    WisdomInfo m_wisdomInfo;
    bool m_wisdomInfoHasBeenSet = false;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;

    EndpointInfo m_customerEndpoint;
    bool m_customerEndpointHasBeenSet = false;

    EndpointInfo m_systemEndpoint;
    bool m_systemEndpointHasBeenSet = false;

    int m_queueTimeAdjustmentSeconds{0};
    bool m_queueTimeAdjustmentSecondsHasBeenSet = false;

    long long m_queuePriority{0};
    bool m_queuePriorityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToSystemTimestamp{};
    bool m_connectedToSystemTimestampHasBeenSet = false;

    RoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    Campaign m_campaign;
    bool m_campaignHasBeenSet = false;

    AnsweringMachineDetectionStatus m_answeringMachineDetectionStatus{AnsweringMachineDetectionStatus::NOT_SET};
    bool m_answeringMachineDetectionStatusHasBeenSet = false;

    CustomerVoiceActivity m_customerVoiceActivity;
    bool m_customerVoiceActivityHasBeenSet = false;

    QualityMetrics m_qualityMetrics;
    bool m_qualityMetricsHasBeenSet = false;

    ChatMetrics m_chatMetrics;
    bool m_chatMetricsHasBeenSet = false;

    DisconnectDetails m_disconnectDetails;
    bool m_disconnectDetailsHasBeenSet = false;

    AdditionalEmailRecipients m_additionalEmailRecipients;
    bool m_additionalEmailRecipientsHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    Aws::Vector<RecordingInfo> m_recordings;
    bool m_recordingsHasBeenSet = false;

    Aws::String m_disconnectReason;
    bool m_disconnectReasonHasBeenSet = false;

    Aws::Map<Aws::String, ContactEvaluation> m_contactEvaluations;
    bool m_contactEvaluationsHasBeenSet = false;

    ContactDetails m_contactDetails;
    bool m_contactDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
