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
#include <aws/chime-sdk-messaging/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class CreateChannelFlowRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannelFlow"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline CreateChannelFlowRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline CreateChannelFlowRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel flow request.</p>
     */
    inline CreateChannelFlowRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline const Aws::Vector<Processor>& GetProcessors() const{ return m_processors; }

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline void SetProcessors(const Aws::Vector<Processor>& value) { m_processorsHasBeenSet = true; m_processors = value; }

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline void SetProcessors(Aws::Vector<Processor>&& value) { m_processorsHasBeenSet = true; m_processors = std::move(value); }

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline CreateChannelFlowRequest& WithProcessors(const Aws::Vector<Processor>& value) { SetProcessors(value); return *this;}

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline CreateChannelFlowRequest& WithProcessors(Aws::Vector<Processor>&& value) { SetProcessors(std::move(value)); return *this;}

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline CreateChannelFlowRequest& AddProcessors(const Processor& value) { m_processorsHasBeenSet = true; m_processors.push_back(value); return *this; }

    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline CreateChannelFlowRequest& AddProcessors(Processor&& value) { m_processorsHasBeenSet = true; m_processors.push_back(std::move(value)); return *this; }


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
    inline CreateChannelFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the channel flow.</p>
     */
    inline CreateChannelFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel flow.</p>
     */
    inline CreateChannelFlowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags for the creation request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelFlowRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelFlowRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelFlowRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the creation request.</p>
     */
    inline CreateChannelFlowRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline CreateChannelFlowRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline CreateChannelFlowRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The client token for the request. An Idempotency token.</p>
     */
    inline CreateChannelFlowRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<Processor> m_processors;
    bool m_processorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
