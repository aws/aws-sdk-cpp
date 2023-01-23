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


    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline RoutingProfileQueueReference& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline RoutingProfileQueueReference& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline RoutingProfileQueueReference& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline RoutingProfileQueueReference& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline RoutingProfileQueueReference& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}

  private:

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Channel m_channel;
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
