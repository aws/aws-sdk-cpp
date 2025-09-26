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
   * <p>Contains summary information about a routing profile manual assignment
   * queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfileManualAssignmentQueueConfigSummary">AWS
   * API Reference</a></p>
   */
  class RoutingProfileManualAssignmentQueueConfigSummary
  {
  public:
    AWS_CONNECT_API RoutingProfileManualAssignmentQueueConfigSummary() = default;
    AWS_CONNECT_API RoutingProfileManualAssignmentQueueConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileManualAssignmentQueueConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    RoutingProfileManualAssignmentQueueConfigSummary& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetQueueArn() const { return m_queueArn; }
    inline bool QueueArnHasBeenSet() const { return m_queueArnHasBeenSet; }
    template<typename QueueArnT = Aws::String>
    void SetQueueArn(QueueArnT&& value) { m_queueArnHasBeenSet = true; m_queueArn = std::forward<QueueArnT>(value); }
    template<typename QueueArnT = Aws::String>
    RoutingProfileManualAssignmentQueueConfigSummary& WithQueueArn(QueueArnT&& value) { SetQueueArn(std::forward<QueueArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetQueueName() const { return m_queueName; }
    inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
    template<typename QueueNameT = Aws::String>
    void SetQueueName(QueueNameT&& value) { m_queueNameHasBeenSet = true; m_queueName = std::forward<QueueNameT>(value); }
    template<typename QueueNameT = Aws::String>
    RoutingProfileManualAssignmentQueueConfigSummary& WithQueueName(QueueNameT&& value) { SetQueueName(std::forward<QueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels this queue supports. Valid Values: CHAT | TASK | EMAIL </p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline RoutingProfileManualAssignmentQueueConfigSummary& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_queueArn;
    bool m_queueArnHasBeenSet = false;

    Aws::String m_queueName;
    bool m_queueNameHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
