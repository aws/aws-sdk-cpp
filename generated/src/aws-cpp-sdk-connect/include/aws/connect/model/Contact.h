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
#include <aws/core/utils/memory/stl/AWSMap.h>
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


    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline Contact& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline Contact& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contact.</p>
     */
    inline Contact& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The identifier for the contact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the contact.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the contact.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the contact.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the contact.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the contact.</p>
     */
    inline Contact& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the contact.</p>
     */
    inline Contact& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the contact.</p>
     */
    inline Contact& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline Contact& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline Contact& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline Contact& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}


    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline const Aws::String& GetPreviousContactId() const{ return m_previousContactId; }

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline void SetPreviousContactId(const Aws::String& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = value; }

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline void SetPreviousContactId(Aws::String&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::move(value); }

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline void SetPreviousContactId(const char* value) { m_previousContactIdHasBeenSet = true; m_previousContactId.assign(value); }

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline Contact& WithPreviousContactId(const Aws::String& value) { SetPreviousContactId(value); return *this;}

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline Contact& WithPreviousContactId(Aws::String&& value) { SetPreviousContactId(std::move(value)); return *this;}

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline Contact& WithPreviousContactId(const char* value) { SetPreviousContactId(value); return *this;}


    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline const ContactInitiationMethod& GetInitiationMethod() const{ return m_initiationMethod; }

    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline bool InitiationMethodHasBeenSet() const { return m_initiationMethodHasBeenSet; }

    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline void SetInitiationMethod(const ContactInitiationMethod& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = value; }

    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline void SetInitiationMethod(ContactInitiationMethod&& value) { m_initiationMethodHasBeenSet = true; m_initiationMethod = std::move(value); }

    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline Contact& WithInitiationMethod(const ContactInitiationMethod& value) { SetInitiationMethod(value); return *this;}

    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline Contact& WithInitiationMethod(ContactInitiationMethod&& value) { SetInitiationMethod(std::move(value)); return *this;}


    /**
     * <p>The name of the contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contact.</p>
     */
    inline Contact& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact.</p>
     */
    inline Contact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact.</p>
     */
    inline Contact& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the contact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the contact.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the contact.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the contact.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the contact.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the contact.</p>
     */
    inline Contact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the contact.</p>
     */
    inline Contact& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the contact.</p>
     */
    inline Contact& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline Contact& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline Contact& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline const QueueInfo& GetQueueInfo() const{ return m_queueInfo; }

    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }

    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline void SetQueueInfo(const QueueInfo& value) { m_queueInfoHasBeenSet = true; m_queueInfo = value; }

    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline void SetQueueInfo(QueueInfo&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::move(value); }

    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline Contact& WithQueueInfo(const QueueInfo& value) { SetQueueInfo(value); return *this;}

    /**
     * <p>If this contact was queued, this contains information about the queue. </p>
     */
    inline Contact& WithQueueInfo(QueueInfo&& value) { SetQueueInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline const AgentInfo& GetAgentInfo() const{ return m_agentInfo; }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline bool AgentInfoHasBeenSet() const { return m_agentInfoHasBeenSet; }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline void SetAgentInfo(const AgentInfo& value) { m_agentInfoHasBeenSet = true; m_agentInfo = value; }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline void SetAgentInfo(AgentInfo&& value) { m_agentInfoHasBeenSet = true; m_agentInfo = std::move(value); }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline Contact& WithAgentInfo(const AgentInfo& value) { SetAgentInfo(value); return *this;}

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline Contact& WithAgentInfo(AgentInfo&& value) { SetAgentInfo(std::move(value)); return *this;}


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
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }

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
    inline void SetInitiationTimestamp(const Aws::Utils::DateTime& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = value; }

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
    inline void SetInitiationTimestamp(Aws::Utils::DateTime&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::move(value); }

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
    inline Contact& WithInitiationTimestamp(const Aws::Utils::DateTime& value) { SetInitiationTimestamp(value); return *this;}

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
    inline Contact& WithInitiationTimestamp(Aws::Utils::DateTime&& value) { SetInitiationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline const Aws::Utils::DateTime& GetDisconnectTimestamp() const{ return m_disconnectTimestamp; }

    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline bool DisconnectTimestampHasBeenSet() const { return m_disconnectTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline void SetDisconnectTimestamp(const Aws::Utils::DateTime& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = value; }

    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline void SetDisconnectTimestamp(Aws::Utils::DateTime&& value) { m_disconnectTimestampHasBeenSet = true; m_disconnectTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline Contact& WithDisconnectTimestamp(const Aws::Utils::DateTime& value) { SetDisconnectTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline Contact& WithDisconnectTimestamp(Aws::Utils::DateTime&& value) { SetDisconnectTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }

    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }

    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }

    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }

    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline Contact& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}

    /**
     * <p>The timestamp when contact was last updated.</p>
     */
    inline Contact& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPausedTimestamp() const{ return m_lastPausedTimestamp; }

    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline bool LastPausedTimestampHasBeenSet() const { return m_lastPausedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline void SetLastPausedTimestamp(const Aws::Utils::DateTime& value) { m_lastPausedTimestampHasBeenSet = true; m_lastPausedTimestamp = value; }

    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline void SetLastPausedTimestamp(Aws::Utils::DateTime&& value) { m_lastPausedTimestampHasBeenSet = true; m_lastPausedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline Contact& WithLastPausedTimestamp(const Aws::Utils::DateTime& value) { SetLastPausedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the contact was last paused.</p>
     */
    inline Contact& WithLastPausedTimestamp(Aws::Utils::DateTime&& value) { SetLastPausedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastResumedTimestamp() const{ return m_lastResumedTimestamp; }

    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline bool LastResumedTimestampHasBeenSet() const { return m_lastResumedTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline void SetLastResumedTimestamp(const Aws::Utils::DateTime& value) { m_lastResumedTimestampHasBeenSet = true; m_lastResumedTimestamp = value; }

    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline void SetLastResumedTimestamp(Aws::Utils::DateTime&& value) { m_lastResumedTimestampHasBeenSet = true; m_lastResumedTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline Contact& WithLastResumedTimestamp(const Aws::Utils::DateTime& value) { SetLastResumedTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the contact was last resumed.</p>
     */
    inline Contact& WithLastResumedTimestamp(Aws::Utils::DateTime&& value) { SetLastResumedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Total pause count for a contact.</p>
     */
    inline int GetTotalPauseCount() const{ return m_totalPauseCount; }

    /**
     * <p>Total pause count for a contact.</p>
     */
    inline bool TotalPauseCountHasBeenSet() const { return m_totalPauseCountHasBeenSet; }

    /**
     * <p>Total pause count for a contact.</p>
     */
    inline void SetTotalPauseCount(int value) { m_totalPauseCountHasBeenSet = true; m_totalPauseCount = value; }

    /**
     * <p>Total pause count for a contact.</p>
     */
    inline Contact& WithTotalPauseCount(int value) { SetTotalPauseCount(value); return *this;}


    /**
     * <p>Total pause duration for a contact in seconds.</p>
     */
    inline int GetTotalPauseDurationInSeconds() const{ return m_totalPauseDurationInSeconds; }

    /**
     * <p>Total pause duration for a contact in seconds.</p>
     */
    inline bool TotalPauseDurationInSecondsHasBeenSet() const { return m_totalPauseDurationInSecondsHasBeenSet; }

    /**
     * <p>Total pause duration for a contact in seconds.</p>
     */
    inline void SetTotalPauseDurationInSeconds(int value) { m_totalPauseDurationInSecondsHasBeenSet = true; m_totalPauseDurationInSeconds = value; }

    /**
     * <p>Total pause duration for a contact in seconds.</p>
     */
    inline Contact& WithTotalPauseDurationInSeconds(int value) { SetTotalPauseDurationInSeconds(value); return *this;}


    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimestamp() const{ return m_scheduledTimestamp; }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline bool ScheduledTimestampHasBeenSet() const { return m_scheduledTimestampHasBeenSet; }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline void SetScheduledTimestamp(const Aws::Utils::DateTime& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = value; }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline void SetScheduledTimestamp(Aws::Utils::DateTime&& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = std::move(value); }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline Contact& WithScheduledTimestamp(const Aws::Utils::DateTime& value) { SetScheduledTimestamp(value); return *this;}

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow. </p>
     */
    inline Contact& WithScheduledTimestamp(Aws::Utils::DateTime&& value) { SetScheduledTimestamp(std::move(value)); return *this;}


    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline Contact& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline Contact& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}

    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html#relatedcontactid">related</a>
     * to this contact.</p>
     */
    inline Contact& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}


    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline const WisdomInfo& GetWisdomInfo() const{ return m_wisdomInfo; }

    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline bool WisdomInfoHasBeenSet() const { return m_wisdomInfoHasBeenSet; }

    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline void SetWisdomInfo(const WisdomInfo& value) { m_wisdomInfoHasBeenSet = true; m_wisdomInfo = value; }

    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline void SetWisdomInfo(WisdomInfo&& value) { m_wisdomInfoHasBeenSet = true; m_wisdomInfo = std::move(value); }

    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline Contact& WithWisdomInfo(const WisdomInfo& value) { SetWisdomInfo(value); return *this;}

    /**
     * <p>Information about Amazon Connect Wisdom.</p>
     */
    inline Contact& WithWisdomInfo(WisdomInfo&& value) { SetWisdomInfo(std::move(value)); return *this;}


    /**
     * <p>An integer that represents the queue time adjust to be applied to the
     * contact, in seconds (longer / larger queue time are routed preferentially).
     * Cannot be specified if the QueuePriority is specified. Must be statically
     * defined and a valid integer value.</p>
     */
    inline int GetQueueTimeAdjustmentSeconds() const{ return m_queueTimeAdjustmentSeconds; }

    /**
     * <p>An integer that represents the queue time adjust to be applied to the
     * contact, in seconds (longer / larger queue time are routed preferentially).
     * Cannot be specified if the QueuePriority is specified. Must be statically
     * defined and a valid integer value.</p>
     */
    inline bool QueueTimeAdjustmentSecondsHasBeenSet() const { return m_queueTimeAdjustmentSecondsHasBeenSet; }

    /**
     * <p>An integer that represents the queue time adjust to be applied to the
     * contact, in seconds (longer / larger queue time are routed preferentially).
     * Cannot be specified if the QueuePriority is specified. Must be statically
     * defined and a valid integer value.</p>
     */
    inline void SetQueueTimeAdjustmentSeconds(int value) { m_queueTimeAdjustmentSecondsHasBeenSet = true; m_queueTimeAdjustmentSeconds = value; }

    /**
     * <p>An integer that represents the queue time adjust to be applied to the
     * contact, in seconds (longer / larger queue time are routed preferentially).
     * Cannot be specified if the QueuePriority is specified. Must be statically
     * defined and a valid integer value.</p>
     */
    inline Contact& WithQueueTimeAdjustmentSeconds(int value) { SetQueueTimeAdjustmentSeconds(value); return *this;}


    /**
     * <p>An integer that represents the queue priority to be applied to the contact
     * (lower priorities are routed preferentially). Cannot be specified if the
     * QueueTimeAdjustmentSeconds is specified. Must be statically defined, must be
     * larger than zero, and a valid integer value. Default Value is 5.</p>
     */
    inline long long GetQueuePriority() const{ return m_queuePriority; }

    /**
     * <p>An integer that represents the queue priority to be applied to the contact
     * (lower priorities are routed preferentially). Cannot be specified if the
     * QueueTimeAdjustmentSeconds is specified. Must be statically defined, must be
     * larger than zero, and a valid integer value. Default Value is 5.</p>
     */
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }

    /**
     * <p>An integer that represents the queue priority to be applied to the contact
     * (lower priorities are routed preferentially). Cannot be specified if the
     * QueueTimeAdjustmentSeconds is specified. Must be statically defined, must be
     * larger than zero, and a valid integer value. Default Value is 5.</p>
     */
    inline void SetQueuePriority(long long value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }

    /**
     * <p>An integer that represents the queue priority to be applied to the contact
     * (lower priorities are routed preferentially). Cannot be specified if the
     * QueueTimeAdjustmentSeconds is specified. Must be statically defined, must be
     * larger than zero, and a valid integer value. Default Value is 5.</p>
     */
    inline Contact& WithQueuePriority(long long value) { SetQueuePriority(value); return *this;}


    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the contact. This contains both Amazon Web Services
     * generated and user-defined tags.</p>
     */
    inline Contact& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet = false;

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

    int m_queueTimeAdjustmentSeconds;
    bool m_queueTimeAdjustmentSecondsHasBeenSet = false;

    long long m_queuePriority;
    bool m_queuePriorityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
