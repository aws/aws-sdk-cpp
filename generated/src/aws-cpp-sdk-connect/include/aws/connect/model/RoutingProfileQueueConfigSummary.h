/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Channel.h>
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
   * <p>Contains summary information about a routing profile queue.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfileQueueConfigSummary">AWS
   * API Reference</a></p>
   */
  class RoutingProfileQueueConfigSummary
  {
  public:
    AWS_CONNECT_API RoutingProfileQueueConfigSummary();
    AWS_CONNECT_API RoutingProfileQueueConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileQueueConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline RoutingProfileQueueConfigSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline RoutingProfileQueueConfigSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline RoutingProfileQueueConfigSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetQueueArn() const{ return m_queueArn; }
    inline bool QueueArnHasBeenSet() const { return m_queueArnHasBeenSet; }
    inline void SetQueueArn(const Aws::String& value) { m_queueArnHasBeenSet = true; m_queueArn = value; }
    inline void SetQueueArn(Aws::String&& value) { m_queueArnHasBeenSet = true; m_queueArn = std::move(value); }
    inline void SetQueueArn(const char* value) { m_queueArnHasBeenSet = true; m_queueArn.assign(value); }
    inline RoutingProfileQueueConfigSummary& WithQueueArn(const Aws::String& value) { SetQueueArn(value); return *this;}
    inline RoutingProfileQueueConfigSummary& WithQueueArn(Aws::String&& value) { SetQueueArn(std::move(value)); return *this;}
    inline RoutingProfileQueueConfigSummary& WithQueueArn(const char* value) { SetQueueArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetQueueName() const{ return m_queueName; }
    inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
    inline void SetQueueName(const Aws::String& value) { m_queueNameHasBeenSet = true; m_queueName = value; }
    inline void SetQueueName(Aws::String&& value) { m_queueNameHasBeenSet = true; m_queueName = std::move(value); }
    inline void SetQueueName(const char* value) { m_queueNameHasBeenSet = true; m_queueName.assign(value); }
    inline RoutingProfileQueueConfigSummary& WithQueueName(const Aws::String& value) { SetQueueName(value); return *this;}
    inline RoutingProfileQueueConfigSummary& WithQueueName(Aws::String&& value) { SetQueueName(std::move(value)); return *this;}
    inline RoutingProfileQueueConfigSummary& WithQueueName(const char* value) { SetQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which contacts are to be handled for the queue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a>.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline RoutingProfileQueueConfigSummary& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delay, in seconds, that a contact should be in the queue before they are
     * routed to an available agent. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline int GetDelay() const{ return m_delay; }
    inline bool DelayHasBeenSet() const { return m_delayHasBeenSet; }
    inline void SetDelay(int value) { m_delayHasBeenSet = true; m_delay = value; }
    inline RoutingProfileQueueConfigSummary& WithDelay(int value) { SetDelay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels this queue supports.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline RoutingProfileQueueConfigSummary& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline RoutingProfileQueueConfigSummary& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_queueArn;
    bool m_queueArnHasBeenSet = false;

    Aws::String m_queueName;
    bool m_queueNameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    int m_delay;
    bool m_delayHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
