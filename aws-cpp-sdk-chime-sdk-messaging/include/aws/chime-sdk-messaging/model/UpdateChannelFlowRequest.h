/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/Processor.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class UpdateChannelFlowRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API UpdateChannelFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannelFlow"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const{ return m_channelFlowArn; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline bool ChannelFlowArnHasBeenSet() const { return m_channelFlowArnHasBeenSet; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(const Aws::String& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = value; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(Aws::String&& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = std::move(value); }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(const char* value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn.assign(value); }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline UpdateChannelFlowRequest& WithChannelFlowArn(const Aws::String& value) { SetChannelFlowArn(value); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline UpdateChannelFlowRequest& WithChannelFlowArn(Aws::String&& value) { SetChannelFlowArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline UpdateChannelFlowRequest& WithChannelFlowArn(const char* value) { SetChannelFlowArn(value); return *this;}


    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline const Aws::Vector<Processor>& GetProcessors() const{ return m_processors; }

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline void SetProcessors(const Aws::Vector<Processor>& value) { m_processorsHasBeenSet = true; m_processors = value; }

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline void SetProcessors(Aws::Vector<Processor>&& value) { m_processorsHasBeenSet = true; m_processors = std::move(value); }

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline UpdateChannelFlowRequest& WithProcessors(const Aws::Vector<Processor>& value) { SetProcessors(value); return *this;}

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline UpdateChannelFlowRequest& WithProcessors(Aws::Vector<Processor>&& value) { SetProcessors(std::move(value)); return *this;}

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline UpdateChannelFlowRequest& AddProcessors(const Processor& value) { m_processorsHasBeenSet = true; m_processors.push_back(value); return *this; }

    /**
     * <p>Information about the processor Lambda functions </p>
     */
    inline UpdateChannelFlowRequest& AddProcessors(Processor&& value) { m_processorsHasBeenSet = true; m_processors.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the channel flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the channel flow.</p>
     */
    inline UpdateChannelFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel flow.</p>
     */
    inline UpdateChannelFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel flow.</p>
     */
    inline UpdateChannelFlowRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    Aws::Vector<Processor> m_processors;
    bool m_processorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
