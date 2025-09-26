/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactInitiationMethod.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/ContactSearchSummaryQueueInfo.h>
#include <aws/connect/model/ContactSearchSummaryAgentInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/RoutingCriteria.h>
#include <aws/connect/model/ContactSearchSummarySegmentAttributeValue.h>
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
   * <p>Information of returned contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactSearchSummary">AWS
   * API Reference</a></p>
   */
  class ContactSearchSummary
  {
  public:
    AWS_CONNECT_API ContactSearchSummary() = default;
    AWS_CONNECT_API ContactSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ContactSearchSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ContactSearchSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    ContactSearchSummary& WithInitialContactId(InitialContactIdT&& value) { SetInitialContactId(std::forward<InitialContactIdT>(value)); return *this;}
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
    ContactSearchSummary& WithPreviousContactId(PreviousContactIdT&& value) { SetPreviousContactId(std::forward<PreviousContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline ContactInitiationMethod GetInitiationMethod() const { return m_initiationMethod; }
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }
    inline void SetInitiationMethod(ContactInitiationMethod value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }
    inline ContactSearchSummary& WithInitiationMethod(ContactInitiationMethod value) { SetInitiationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline ContactSearchSummary& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline const ContactSearchSummaryQueueInfo& GetQueueInfo() const { return m_queueInfo; }
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }
    template<typename QueueInfoT = ContactSearchSummaryQueueInfo>
    void SetQueueInfo(QueueInfoT&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::forward<QueueInfoT>(value); }
    template<typename QueueInfoT = ContactSearchSummaryQueueInfo>
    ContactSearchSummary& WithQueueInfo(QueueInfoT&& value) { SetQueueInfo(std::forward<QueueInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline const ContactSearchSummaryAgentInfo& GetAgentInfo() const { return m_agentInfo; }
    inline bool AgentInfoHasBeenSet() const { return m_agentInfoHasBeenSet; }
    template<typename AgentInfoT = ContactSearchSummaryAgentInfo>
    void SetAgentInfo(AgentInfoT&& value) { m_agentInfoHasBeenSet = true; m_agentInfo = std::forward<AgentInfoT>(value); }
    template<typename AgentInfoT = ContactSearchSummaryAgentInfo>
    ContactSearchSummary& WithAgentInfo(AgentInfoT&& value) { SetAgentInfo(std::forward<AgentInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time this contact was initiated, in UTC time. For
     * <code>INBOUND</code>, this is when the contact arrived. For
     * <code>OUTBOUND</code>, this is when the agent began dialing. For
     * <code>CALLBACK</code>, this is when the callback contact was created. For
     * <code>TRANSFER</code> and <code>QUEUE_TRANSFER</code>, this is when the transfer
     * was initiated. For API, this is when the request arrived. For
     * <code>EXTERNAL_OUTBOUND</code>, this is when the agent started dialing the
     * external participant. For <code>MONITOR</code>, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTimestamp() const { return m_initiationTimestamp; }
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }
    template<typename InitiationTimestampT = Aws::Utils::DateTime>
    void SetInitiationTimestamp(InitiationTimestampT&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::forward<InitiationTimestampT>(value); }
    template<typename InitiationTimestampT = Aws::Utils::DateTime>
    ContactSearchSummary& WithInitiationTimestamp(InitiationTimestampT&& value) { SetInitiationTimestamp(std::forward<InitiationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetDisconnectTimestamp() const { return m_disconnectTimestamp; }
    inline bool DisconnectTimestampHasBeenSet() const { return m_disconnectTimestampHasBeenSet; }
    template<typename DisconnectTimestampT = Aws::Utils::DateTime>
    void SetDisconnectTimestamp(DisconnectTimestampT&& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = std::forward<DisconnectTimestampT>(value); }
    template<typename DisconnectTimestampT = Aws::Utils::DateTime>
    ContactSearchSummary& WithDisconnectTimestamp(DisconnectTimestampT&& value) { SetDisconnectTimestamp(std::forward<DisconnectTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimestamp() const { return m_scheduledTimestamp; }
    inline bool ScheduledTimestampHasBeenSet() const { return m_scheduledTimestampHasBeenSet; }
    template<typename ScheduledTimestampT = Aws::Utils::DateTime>
    void SetScheduledTimestamp(ScheduledTimestampT&& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = std::forward<ScheduledTimestampT>(value); }
    template<typename ScheduledTimestampT = Aws::Utils::DateTime>
    ContactSearchSummary& WithScheduledTimestamp(ScheduledTimestampT&& value) { SetScheduledTimestamp(std::forward<ScheduledTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set of segment attributes for a contact.</p>
     */
    inline const Aws::Map<Aws::String, ContactSearchSummarySegmentAttributeValue>& GetSegmentAttributes() const { return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, ContactSearchSummarySegmentAttributeValue>>
    void SetSegmentAttributes(SegmentAttributesT&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::forward<SegmentAttributesT>(value); }
    template<typename SegmentAttributesT = Aws::Map<Aws::String, ContactSearchSummarySegmentAttributeValue>>
    ContactSearchSummary& WithSegmentAttributes(SegmentAttributesT&& value) { SetSegmentAttributes(std::forward<SegmentAttributesT>(value)); return *this;}
    template<typename SegmentAttributesKeyT = Aws::String, typename SegmentAttributesValueT = ContactSearchSummarySegmentAttributeValue>
    ContactSearchSummary& AddSegmentAttributes(SegmentAttributesKeyT&& key, SegmentAttributesValueT&& value) {
      m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::forward<SegmentAttributesKeyT>(key), std::forward<SegmentAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates name of the contact.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContactSearchSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RoutingCriteria& GetRoutingCriteria() const { return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    template<typename RoutingCriteriaT = RoutingCriteria>
    void SetRoutingCriteria(RoutingCriteriaT&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::forward<RoutingCriteriaT>(value); }
    template<typename RoutingCriteriaT = RoutingCriteria>
    ContactSearchSummary& WithRoutingCriteria(RoutingCriteriaT&& value) { SetRoutingCriteria(std::forward<RoutingCriteriaT>(value)); return *this;}
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

    ContactInitiationMethod m_initiationMethod{ContactInitiationMethod::NOT_SET};
    bool m_initiationMethodHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;

    ContactSearchSummaryQueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    ContactSearchSummaryAgentInfo m_agentInfo;
    bool m_agentInfoHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTimestamp{};
    bool m_initiationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_disconnectTimestamp{};
    bool m_disconnectTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimestamp{};
    bool m_scheduledTimestampHasBeenSet = false;

    Aws::Map<Aws::String, ContactSearchSummarySegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
