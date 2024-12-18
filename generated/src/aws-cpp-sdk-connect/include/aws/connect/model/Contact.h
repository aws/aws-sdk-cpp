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
#include <aws/connect/model/DisconnectDetails.h>
#include <aws/connect/model/AdditionalEmailRecipients.h>
#include <aws/connect/model/SegmentAttributeValue.h>
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
    AWS_CONNECT_API Contact();
    AWS_CONNECT_API Contact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Contact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Contact& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Contact& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Contact& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the contact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Contact& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Contact& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Contact& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }
    inline Contact& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}
    inline Contact& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}
    inline Contact& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline const Aws::String& GetPreviousContactId() const{ return m_previousContactId; }
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }
    inline void SetPreviousContactId(const Aws::String& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = value; }
    inline void SetPreviousContactId(Aws::String&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::move(value); }
    inline void SetPreviousContactId(const char* value) { m_previousContactIdHasBeenSet = true; m_previousContactId.assign(value); }
    inline Contact& WithPreviousContactId(const Aws::String& value) { SetPreviousContactId(value); return *this;}
    inline Contact& WithPreviousContactId(Aws::String&& value) { SetPreviousContactId(std::move(value)); return *this;}
    inline Contact& WithPreviousContactId(const char* value) { SetPreviousContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the root contactId which is used as a unique identifier for all
     * subsequent contacts in a contact tree.</p>
     */
    inline const Aws::String& GetContactAssociationId() const{ return m_contactAssociationId; }
    inline bool ContactAssociationIdHasBeenSet() const { return m_contactAssociationIdHasBeenSet; }
    inline void SetContactAssociationId(const Aws::String& value) { m_contactAssociationIdHasBeenSet = true; m_contactAssociationId = value; }
    inline void SetContactAssociationId(Aws::String&& value) { m_contactAssociationIdHasBeenSet = true; m_contactAssociationId = std::move(value); }
    inline void SetContactAssociationId(const char* value) { m_contactAssociationIdHasBeenSet = true; m_contactAssociationId.assign(value); }
    inline Contact& WithContactAssociationId(const Aws::String& value) { SetContactAssociationId(value); return *this;}
    inline Contact& WithContactAssociationId(Aws::String&& value) { SetContactAssociationId(std::move(value)); return *this;}
    inline Contact& WithContactAssociationId(const char* value) { SetContactAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline const ContactInitiationMethod& GetInitiationMethod() const{ return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(const ContactInitiationMethod& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline void SetInitiationMethod(ContactInitiationMethod&& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = std::move(value); }
    inline Contact& WithInitiationMethod(const ContactInitiationMethod& value) { SetInitiationMethod(value); return *this;}
    inline Contact& WithInitiationMethod(ContactInitiationMethod&& value) { SetInitiationMethod(std::move(value)); return *this;}
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
    inline Contact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Contact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Contact& WithName(const char* value) { SetName(value); return *this;}
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
    inline Contact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Contact& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Contact& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline Contact& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline Contact& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline const QueueInfo& GetQueueInfo() const{ return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    inline void SetQueueInfo(const QueueInfo& value) { m_queueInfoHasBeenSet = true; m_queueInfo = value; }
    inline void SetQueueInfo(QueueInfo&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::move(value); }
    inline Contact& WithQueueInfo(const QueueInfo& value) { SetQueueInfo(value); return *this;}
    inline Contact& WithQueueInfo(QueueInfo&& value) { SetQueueInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline const AgentInfo& GetAgentInfo() const{ return m_agentInfo; }
    inline bool AgentInfoHasBeenSet() const { return m_agentInfoHasBeenSet; }
    inline void SetAgentInfo(const AgentInfo& value) { m_agentInfoHasBeenSet = true; m_agentInfo = value; }
    inline void SetAgentInfo(AgentInfo&& value) { m_agentInfoHasBeenSet = true; m_agentInfo = std::move(value); }
    inline Contact& WithAgentInfo(const AgentInfo& value) { SetAgentInfo(value); return *this;}
    inline Contact& WithAgentInfo(AgentInfo&& value) { SetAgentInfo(std::move(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetInitiationTimestamp() const{ return m_initiationTimestamp; }
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }
    inline void SetInitiationTimestamp(const Aws::Utils::DateTime& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = value; }
    inline void SetInitiationTimestamp(Aws::Utils::DateTime&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::move(value); }
    inline Contact& WithInitiationTimestamp(const Aws::Utils::DateTime& value) { SetInitiationTimestamp(value); return *this;}
    inline Contact& WithInitiationTimestamp(Aws::Utils::DateTime&& value) { SetInitiationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetDisconnectTimestamp() const{ return m_disconnectTimestamp; }
    inline bool DisconnectTimestampHasBeenSet() const { return m_disconnectTimestampHasBeenSet; }
    inline void SetDisconnectTimestamp(const Aws::Utils::DateTime& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = value; }
    inline void SetDisconnectTimestamp(Aws::Utils::DateTime&& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = std::move(value); }
    inline Contact& WithDisconnectTimestamp(const Aws::Utils::DateTime& value) { SetDisconnectTimestamp(value); return *this;}
    inline Contact& WithDisconnectTimestamp(Aws::Utils::DateTime&& value) { SetDisconnectTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }
    inline Contact& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}
    inline Contact& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPausedTimestamp() const{ return m_lastPausedTimestamp; }
    inline bool LastPausedTimestampHasBeenSet() const { return m_lastPausedTimestampHasBeenSet; }
    inline void SetLastPausedTimestamp(const Aws::Utils::DateTime& value) { m_lastPausedTimestampHasBeenSet = true; m_lastPausedTimestamp = value; }
    inline void SetLastPausedTimestamp(Aws::Utils::DateTime&& value) { m_lastPausedTimestampHasBeenSet = true; m_lastPausedTimestamp = std::move(value); }
    inline Contact& WithLastPausedTimestamp(const Aws::Utils::DateTime& value) { SetLastPausedTimestamp(value); return *this;}
    inline Contact& WithLastPausedTimestamp(Aws::Utils::DateTime&& value) { SetLastPausedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResumedTimestamp() const{ return m_lastResumedTimestamp; }
    inline bool LastResumedTimestampHasBeenSet() const { return m_lastResumedTimestampHasBeenSet; }
    inline void SetLastResumedTimestamp(const Aws::Utils::DateTime& value) { m_lastResumedTimestampHasBeenSet = true; m_lastResumedTimestamp = value; }
    inline void SetLastResumedTimestamp(Aws::Utils::DateTime&& value) { m_lastResumedTimestampHasBeenSet = true; m_lastResumedTimestamp = std::move(value); }
    inline Contact& WithLastResumedTimestamp(const Aws::Utils::DateTime& value) { SetLastResumedTimestamp(value); return *this;}
    inline Contact& WithLastResumedTimestamp(Aws::Utils::DateTime&& value) { SetLastResumedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total pause count for a contact.</p>
     */
    inline int GetTotalPauseCount() const{ return m_totalPauseCount; }
    inline bool TotalPauseCountHasBeenSet() const { return m_totalPauseCountHasBeenSet; }
    inline void SetTotalPauseCount(int value) { m_totalPauseCountHasBeenSet = true; m_totalPauseCount = value; }
    inline Contact& WithTotalPauseCount(int value) { SetTotalPauseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total pause duration for a contact in seconds.</p>
     */
    inline int GetTotalPauseDurationInSeconds() const{ return m_totalPauseDurationInSeconds; }
    inline bool TotalPauseDurationInSecondsHasBeenSet() const { return m_totalPauseDurationInSecondsHasBeenSet; }
    inline void SetTotalPauseDurationInSeconds(int value) { m_totalPauseDurationInSecondsHasBeenSet = true; m_totalPauseDurationInSeconds = value; }
    inline Contact& WithTotalPauseDurationInSeconds(int value) { SetTotalPauseDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimestamp() const{ return m_scheduledTimestamp; }
    inline bool ScheduledTimestampHasBeenSet() const { return m_scheduledTimestampHasBeenSet; }
    inline void SetScheduledTimestamp(const Aws::Utils::DateTime& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = value; }
    inline void SetScheduledTimestamp(Aws::Utils::DateTime&& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = std::move(value); }
    inline Contact& WithScheduledTimestamp(const Aws::Utils::DateTime& value) { SetScheduledTimestamp(value); return *this;}
    inline Contact& WithScheduledTimestamp(Aws::Utils::DateTime&& value) { SetScheduledTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline Contact& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline Contact& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline Contact& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline const WisdomInfo& GetWisdomInfo() const{ return m_wisdomInfo; }
    inline bool WisdomInfoHasBeenSet() const { return m_wisdomInfoHasBeenSet; }
    inline void SetWisdomInfo(const WisdomInfo& value) { m_wisdomInfoHasBeenSet = true; m_wisdomInfo = value; }
    inline void SetWisdomInfo(WisdomInfo&& value) { m_wisdomInfoHasBeenSet = true; m_wisdomInfo = std::move(value); }
    inline Contact& WithWisdomInfo(const WisdomInfo& value) { SetWisdomInfo(value); return *this;}
    inline Contact& WithWisdomInfo(WisdomInfo&& value) { SetWisdomInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer's identification number. For example, the
     * <code>CustomerId</code> may be a customer number from your CRM. You can create a
     * Lambda function to pull the unique customer ID of the caller from your CRM
     * system. If you enable Amazon Connect Voice ID capability, this attribute is
     * populated with the <code>CustomerSpeakerId</code> of the caller.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    inline void SetCustomerId(const Aws::String& value) { m_customerIdHasBeenSet = true; m_customerId = value; }
    inline void SetCustomerId(Aws::String&& value) { m_customerIdHasBeenSet = true; m_customerId = std::move(value); }
    inline void SetCustomerId(const char* value) { m_customerIdHasBeenSet = true; m_customerId.assign(value); }
    inline Contact& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}
    inline Contact& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}
    inline Contact& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer or external third party participant endpoint.</p>
     */
    inline const EndpointInfo& GetCustomerEndpoint() const{ return m_customerEndpoint; }
    inline bool CustomerEndpointHasBeenSet() const { return m_customerEndpointHasBeenSet; }
    inline void SetCustomerEndpoint(const EndpointInfo& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = value; }
    inline void SetCustomerEndpoint(EndpointInfo&& value) { m_customerEndpointHasBeenSet = true; m_customerEndpoint = std::move(value); }
    inline Contact& WithCustomerEndpoint(const EndpointInfo& value) { SetCustomerEndpoint(value); return *this;}
    inline Contact& WithCustomerEndpoint(EndpointInfo&& value) { SetCustomerEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system endpoint. For <code>INBOUND</code>, this is the phone number or
     * email address that the customer dialed. For <code>OUTBOUND</code> and
     * <code>EXTERNAL_OUTBOUND</code>, this is the outbound caller ID number assigned
     * to the outbound queue that is used to dial the customer. For callback, this
     * shows up as Softphone for calls handled by agents with softphone.</p>
     */
    inline const EndpointInfo& GetSystemEndpoint() const{ return m_systemEndpoint; }
    inline bool SystemEndpointHasBeenSet() const { return m_systemEndpointHasBeenSet; }
    inline void SetSystemEndpoint(const EndpointInfo& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = value; }
    inline void SetSystemEndpoint(EndpointInfo&& value) { m_systemEndpointHasBeenSet = true; m_systemEndpoint = std::move(value); }
    inline Contact& WithSystemEndpoint(const EndpointInfo& value) { SetSystemEndpoint(value); return *this;}
    inline Contact& WithSystemEndpoint(EndpointInfo&& value) { SetSystemEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that represents the queue time adjust to be applied to the
     * contact, in seconds (longer / larger queue time are routed preferentially).
     * Cannot be specified if the QueuePriority is specified. Must be statically
     * defined and a valid integer value.</p>
     */
    inline int GetQueueTimeAdjustmentSeconds() const{ return m_queueTimeAdjustmentSeconds; }
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
    inline long long GetQueuePriority() const{ return m_queuePriority; }
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }
    inline void SetQueuePriority(long long value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }
    inline Contact& WithQueuePriority(long long value) { SetQueuePriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Contact& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Contact& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Contact& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Contact& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Contact& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Contact& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Contact& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Contact& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Contact& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when customer endpoint connected to Amazon Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToSystemTimestamp() const{ return m_connectedToSystemTimestamp; }
    inline bool ConnectedToSystemTimestampHasBeenSet() const { return m_connectedToSystemTimestampHasBeenSet; }
    inline void SetConnectedToSystemTimestamp(const Aws::Utils::DateTime& value) { m_connectedToSystemTimestampHasBeenSet = true; m_connectedToSystemTimestamp = value; }
    inline void SetConnectedToSystemTimestamp(Aws::Utils::DateTime&& value) { m_connectedToSystemTimestampHasBeenSet = true; m_connectedToSystemTimestamp = std::move(value); }
    inline Contact& WithConnectedToSystemTimestamp(const Aws::Utils::DateTime& value) { SetConnectedToSystemTimestamp(value); return *this;}
    inline Contact& WithConnectedToSystemTimestamp(Aws::Utils::DateTime&& value) { SetConnectedToSystemTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest routing criteria on the contact.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const{ return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    inline void SetRoutingCriteria(const RoutingCriteria& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = value; }
    inline void SetRoutingCriteria(RoutingCriteria&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::move(value); }
    inline Contact& WithRoutingCriteria(const RoutingCriteria& value) { SetRoutingCriteria(value); return *this;}
    inline Contact& WithRoutingCriteria(RoutingCriteria&& value) { SetRoutingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Customer on the contact.</p>
     */
    inline const Customer& GetCustomer() const{ return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    inline void SetCustomer(const Customer& value) { m_customerHasBeenSet = true; m_customer = value; }
    inline void SetCustomer(Customer&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }
    inline Contact& WithCustomer(const Customer& value) { SetCustomer(value); return *this;}
    inline Contact& WithCustomer(Customer&& value) { SetCustomer(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Campaign& GetCampaign() const{ return m_campaign; }
    inline bool CampaignHasBeenSet() const { return m_campaignHasBeenSet; }
    inline void SetCampaign(const Campaign& value) { m_campaignHasBeenSet = true; m_campaign = value; }
    inline void SetCampaign(Campaign&& value) { m_campaignHasBeenSet = true; m_campaign = std::move(value); }
    inline Contact& WithCampaign(const Campaign& value) { SetCampaign(value); return *this;}
    inline Contact& WithCampaign(Campaign&& value) { SetCampaign(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how an <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/how-to-create-campaigns.html">outbound
     * campaign</a> call is actually disposed if the contact is connected to Amazon
     * Connect.</p>
     */
    inline const AnsweringMachineDetectionStatus& GetAnsweringMachineDetectionStatus() const{ return m_answeringMachineDetectionStatus; }
    inline bool AnsweringMachineDetectionStatusHasBeenSet() const { return m_answeringMachineDetectionStatusHasBeenSet; }
    inline void SetAnsweringMachineDetectionStatus(const AnsweringMachineDetectionStatus& value) { m_answeringMachineDetectionStatusHasBeenSet = true; m_answeringMachineDetectionStatus = value; }
    inline void SetAnsweringMachineDetectionStatus(AnsweringMachineDetectionStatus&& value) { m_answeringMachineDetectionStatusHasBeenSet = true; m_answeringMachineDetectionStatus = std::move(value); }
    inline Contact& WithAnsweringMachineDetectionStatus(const AnsweringMachineDetectionStatus& value) { SetAnsweringMachineDetectionStatus(value); return *this;}
    inline Contact& WithAnsweringMachineDetectionStatus(AnsweringMachineDetectionStatus&& value) { SetAnsweringMachineDetectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about customer’s voice activity.</p>
     */
    inline const CustomerVoiceActivity& GetCustomerVoiceActivity() const{ return m_customerVoiceActivity; }
    inline bool CustomerVoiceActivityHasBeenSet() const { return m_customerVoiceActivityHasBeenSet; }
    inline void SetCustomerVoiceActivity(const CustomerVoiceActivity& value) { m_customerVoiceActivityHasBeenSet = true; m_customerVoiceActivity = value; }
    inline void SetCustomerVoiceActivity(CustomerVoiceActivity&& value) { m_customerVoiceActivityHasBeenSet = true; m_customerVoiceActivity = std::move(value); }
    inline Contact& WithCustomerVoiceActivity(const CustomerVoiceActivity& value) { SetCustomerVoiceActivity(value); return *this;}
    inline Contact& WithCustomerVoiceActivity(CustomerVoiceActivity&& value) { SetCustomerVoiceActivity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the quality of the participant's media connection.</p>
     */
    inline const QualityMetrics& GetQualityMetrics() const{ return m_qualityMetrics; }
    inline bool QualityMetricsHasBeenSet() const { return m_qualityMetricsHasBeenSet; }
    inline void SetQualityMetrics(const QualityMetrics& value) { m_qualityMetricsHasBeenSet = true; m_qualityMetrics = value; }
    inline void SetQualityMetrics(QualityMetrics&& value) { m_qualityMetricsHasBeenSet = true; m_qualityMetrics = std::move(value); }
    inline Contact& WithQualityMetrics(const QualityMetrics& value) { SetQualityMetrics(value); return *this;}
    inline Contact& WithQualityMetrics(QualityMetrics&& value) { SetQualityMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the call disconnect experience.</p>
     */
    inline const DisconnectDetails& GetDisconnectDetails() const{ return m_disconnectDetails; }
    inline bool DisconnectDetailsHasBeenSet() const { return m_disconnectDetailsHasBeenSet; }
    inline void SetDisconnectDetails(const DisconnectDetails& value) { m_disconnectDetailsHasBeenSet = true; m_disconnectDetails = value; }
    inline void SetDisconnectDetails(DisconnectDetails&& value) { m_disconnectDetailsHasBeenSet = true; m_disconnectDetails = std::move(value); }
    inline Contact& WithDisconnectDetails(const DisconnectDetails& value) { SetDisconnectDetails(value); return *this;}
    inline Contact& WithDisconnectDetails(DisconnectDetails&& value) { SetDisconnectDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of additional email addresses for an email contact.</p>
     */
    inline const AdditionalEmailRecipients& GetAdditionalEmailRecipients() const{ return m_additionalEmailRecipients; }
    inline bool AdditionalEmailRecipientsHasBeenSet() const { return m_additionalEmailRecipientsHasBeenSet; }
    inline void SetAdditionalEmailRecipients(const AdditionalEmailRecipients& value) { m_additionalEmailRecipientsHasBeenSet = true; m_additionalEmailRecipients = value; }
    inline void SetAdditionalEmailRecipients(AdditionalEmailRecipients&& value) { m_additionalEmailRecipientsHasBeenSet = true; m_additionalEmailRecipients = std::move(value); }
    inline Contact& WithAdditionalEmailRecipients(const AdditionalEmailRecipients& value) { SetAdditionalEmailRecipients(value); return *this;}
    inline Contact& WithAdditionalEmailRecipients(AdditionalEmailRecipients&& value) { SetAdditionalEmailRecipients(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * using an attribute map. The attributes are standard Amazon Connect attributes
     * and can be accessed in flows. Attribute keys can include only alphanumeric, -,
     * and _ characters. This field can be used to show channel subtype. For example,
     * <code>connect:Guide</code> or <code>connect:SMS</code>.</p>
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }
    inline Contact& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}
    inline Contact& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}
    inline Contact& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    inline Contact& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }
    inline Contact& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline Contact& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Contact& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline Contact& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
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

    ContactInitiationMethod m_initiationMethod;
    bool m_initiationMethodHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    QueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    AgentInfo m_agentInfo;
    bool m_agentInfoHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTimestamp;
    bool m_initiationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_disconnectTimestamp;
    bool m_disconnectTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastPausedTimestamp;
    bool m_lastPausedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastResumedTimestamp;
    bool m_lastResumedTimestampHasBeenSet = false;

    int m_totalPauseCount;
    bool m_totalPauseCountHasBeenSet = false;

    int m_totalPauseDurationInSeconds;
    bool m_totalPauseDurationInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimestamp;
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

    int m_queueTimeAdjustmentSeconds;
    bool m_queueTimeAdjustmentSecondsHasBeenSet = false;

    long long m_queuePriority;
    bool m_queuePriorityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToSystemTimestamp;
    bool m_connectedToSystemTimestampHasBeenSet = false;

    RoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;

    Customer m_customer;
    bool m_customerHasBeenSet = false;

    Campaign m_campaign;
    bool m_campaignHasBeenSet = false;

    AnsweringMachineDetectionStatus m_answeringMachineDetectionStatus;
    bool m_answeringMachineDetectionStatusHasBeenSet = false;

    CustomerVoiceActivity m_customerVoiceActivity;
    bool m_customerVoiceActivityHasBeenSet = false;

    QualityMetrics m_qualityMetrics;
    bool m_qualityMetricsHasBeenSet = false;

    DisconnectDetails m_disconnectDetails;
    bool m_disconnectDetailsHasBeenSet = false;

    AdditionalEmailRecipients m_additionalEmailRecipients;
    bool m_additionalEmailRecipientsHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
