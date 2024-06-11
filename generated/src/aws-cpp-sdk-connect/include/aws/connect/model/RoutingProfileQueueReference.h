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
    AWS_CONNECT_API RoutingProfileQueueReference();
    AWS_CONNECT_API RoutingProfileQueueReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileQueueReference& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RoutingProfileQueueReference& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline RoutingProfileQueueReference& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline RoutingProfileQueueReference& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline RoutingProfileQueueReference& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline RoutingProfileQueueReference& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
