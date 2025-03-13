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
   * <p>Contains the channel and queue identifier for a routing
   * profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfileQueueReference">AWS
   * API Reference</a></p>
   */
  class RoutingProfileQueueReference
  {
  public:
    AWS_CONNECT_API RoutingProfileQueueReference() = default;
    AWS_CONNECT_API RoutingProfileQueueReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileQueueReference& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RoutingProfileQueueReference& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline Channel GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(Channel value) { m_channelHasBeenSet = true; m_channel = value; }
    inline RoutingProfileQueueReference& WithChannel(Channel value) { SetChannel(value); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Channel m_channel{Channel::NOT_SET};
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
