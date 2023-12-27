﻿/**
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
    AWS_CONNECT_API ContactSearchSummary();
    AWS_CONNECT_API ContactSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline ContactSearchSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline ContactSearchSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact</p>
     */
    inline ContactSearchSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline ContactSearchSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline ContactSearchSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact summary.</p>
     */
    inline ContactSearchSummary& WithId(const char* value) { SetId(value); return *this;}


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
    inline ContactSearchSummary& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline ContactSearchSummary& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>If this contact is related to other contacts, this is the ID of the initial
     * contact.</p>
     */
    inline ContactSearchSummary& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}


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
    inline ContactSearchSummary& WithPreviousContactId(const Aws::String& value) { SetPreviousContactId(value); return *this;}

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline ContactSearchSummary& WithPreviousContactId(Aws::String&& value) { SetPreviousContactId(std::move(value)); return *this;}

    /**
     * <p>If this contact is not the first contact, this is the ID of the previous
     * contact.</p>
     */
    inline ContactSearchSummary& WithPreviousContactId(const char* value) { SetPreviousContactId(value); return *this;}


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
    inline ContactSearchSummary& WithInitiationMethod(const ContactInitiationMethod& value) { SetInitiationMethod(value); return *this;}

    /**
     * <p>Indicates how the contact was initiated.</p>
     */
    inline ContactSearchSummary& WithInitiationMethod(ContactInitiationMethod&& value) { SetInitiationMethod(std::move(value)); return *this;}


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
    inline ContactSearchSummary& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>How the contact reached your contact center.</p>
     */
    inline ContactSearchSummary& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline const ContactSearchSummaryQueueInfo& GetQueueInfo() const{ return m_queueInfo; }

    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline bool QueueInfoHasBeenSet() const { return m_queueInfoHasBeenSet; }

    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline void SetQueueInfo(const ContactSearchSummaryQueueInfo& value) { m_queueInfoHasBeenSet = true; m_queueInfo = value; }

    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline void SetQueueInfo(ContactSearchSummaryQueueInfo&& value) { m_queueInfoHasBeenSet = true; m_queueInfo = std::move(value); }

    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline ContactSearchSummary& WithQueueInfo(const ContactSearchSummaryQueueInfo& value) { SetQueueInfo(value); return *this;}

    /**
     * <p>If this contact was queued, this contains information about the queue.</p>
     */
    inline ContactSearchSummary& WithQueueInfo(ContactSearchSummaryQueueInfo&& value) { SetQueueInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline const ContactSearchSummaryAgentInfo& GetAgentInfo() const{ return m_agentInfo; }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline bool AgentInfoHasBeenSet() const { return m_agentInfoHasBeenSet; }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline void SetAgentInfo(const ContactSearchSummaryAgentInfo& value) { m_agentInfoHasBeenSet = true; m_agentInfo = value; }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline void SetAgentInfo(ContactSearchSummaryAgentInfo&& value) { m_agentInfoHasBeenSet = true; m_agentInfo = std::move(value); }

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline ContactSearchSummary& WithAgentInfo(const ContactSearchSummaryAgentInfo& value) { SetAgentInfo(value); return *this;}

    /**
     * <p>Information about the agent who accepted the contact.</p>
     */
    inline ContactSearchSummary& WithAgentInfo(ContactSearchSummaryAgentInfo&& value) { SetAgentInfo(std::move(value)); return *this;}


    /**
     * <p>The date and time this contact was initiated, in UTC time. For INBOUND, this
     * is when the contact arrived. For OUTBOUND, this is when the agent began dialing.
     * For CALLBACK, this is when the callback contact was created. For TRANSFER and
     * QUEUE_TRANSFER, this is when the transfer was initiated. For API, this is when
     * the request arrived. For EXTERNAL_OUTBOUND, this is when the agent started
     * dialing the external participant. For MONITOR, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTimestamp() const{ return m_initiationTimestamp; }

    /**
     * <p>The date and time this contact was initiated, in UTC time. For INBOUND, this
     * is when the contact arrived. For OUTBOUND, this is when the agent began dialing.
     * For CALLBACK, this is when the callback contact was created. For TRANSFER and
     * QUEUE_TRANSFER, this is when the transfer was initiated. For API, this is when
     * the request arrived. For EXTERNAL_OUTBOUND, this is when the agent started
     * dialing the external participant. For MONITOR, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline bool InitiationTimestampHasBeenSet() const { return m_initiationTimestampHasBeenSet; }

    /**
     * <p>The date and time this contact was initiated, in UTC time. For INBOUND, this
     * is when the contact arrived. For OUTBOUND, this is when the agent began dialing.
     * For CALLBACK, this is when the callback contact was created. For TRANSFER and
     * QUEUE_TRANSFER, this is when the transfer was initiated. For API, this is when
     * the request arrived. For EXTERNAL_OUTBOUND, this is when the agent started
     * dialing the external participant. For MONITOR, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline void SetInitiationTimestamp(const Aws::Utils::DateTime& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = value; }

    /**
     * <p>The date and time this contact was initiated, in UTC time. For INBOUND, this
     * is when the contact arrived. For OUTBOUND, this is when the agent began dialing.
     * For CALLBACK, this is when the callback contact was created. For TRANSFER and
     * QUEUE_TRANSFER, this is when the transfer was initiated. For API, this is when
     * the request arrived. For EXTERNAL_OUTBOUND, this is when the agent started
     * dialing the external participant. For MONITOR, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline void SetInitiationTimestamp(Aws::Utils::DateTime&& value) { m_initiationTimestampHasBeenSet = true; m_initiationTimestamp = std::move(value); }

    /**
     * <p>The date and time this contact was initiated, in UTC time. For INBOUND, this
     * is when the contact arrived. For OUTBOUND, this is when the agent began dialing.
     * For CALLBACK, this is when the callback contact was created. For TRANSFER and
     * QUEUE_TRANSFER, this is when the transfer was initiated. For API, this is when
     * the request arrived. For EXTERNAL_OUTBOUND, this is when the agent started
     * dialing the external participant. For MONITOR, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline ContactSearchSummary& WithInitiationTimestamp(const Aws::Utils::DateTime& value) { SetInitiationTimestamp(value); return *this;}

    /**
     * <p>The date and time this contact was initiated, in UTC time. For INBOUND, this
     * is when the contact arrived. For OUTBOUND, this is when the agent began dialing.
     * For CALLBACK, this is when the callback contact was created. For TRANSFER and
     * QUEUE_TRANSFER, this is when the transfer was initiated. For API, this is when
     * the request arrived. For EXTERNAL_OUTBOUND, this is when the agent started
     * dialing the external participant. For MONITOR, this is when the supervisor
     * started listening to a contact.</p>
     */
    inline ContactSearchSummary& WithInitiationTimestamp(Aws::Utils::DateTime&& value) { SetInitiationTimestamp(std::move(value)); return *this;}


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
    inline ContactSearchSummary& WithDisconnectTimestamp(const Aws::Utils::DateTime& value) { SetDisconnectTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the customer endpoint disconnected from Amazon
     * Connect.</p>
     */
    inline ContactSearchSummary& WithDisconnectTimestamp(Aws::Utils::DateTime&& value) { SetDisconnectTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTimestamp() const{ return m_scheduledTimestamp; }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline bool ScheduledTimestampHasBeenSet() const { return m_scheduledTimestampHasBeenSet; }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline void SetScheduledTimestamp(const Aws::Utils::DateTime& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = value; }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline void SetScheduledTimestamp(Aws::Utils::DateTime&& value) { m_scheduledTimestampHasBeenSet = true; m_scheduledTimestamp = std::move(value); }

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline ContactSearchSummary& WithScheduledTimestamp(const Aws::Utils::DateTime& value) { SetScheduledTimestamp(value); return *this;}

    /**
     * <p>The timestamp, in Unix epoch time format, at which to start running the
     * inbound flow.</p>
     */
    inline ContactSearchSummary& WithScheduledTimestamp(Aws::Utils::DateTime&& value) { SetScheduledTimestamp(std::move(value)); return *this;}

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

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    ContactSearchSummaryQueueInfo m_queueInfo;
    bool m_queueInfoHasBeenSet = false;

    ContactSearchSummaryAgentInfo m_agentInfo;
    bool m_agentInfoHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTimestamp;
    bool m_initiationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_disconnectTimestamp;
    bool m_disconnectTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTimestamp;
    bool m_scheduledTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
