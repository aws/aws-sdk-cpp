/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/StreamingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class PutMessagingStreamingConfigurationsRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API PutMessagingStreamingConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMessagingStreamingConfigurations"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The streaming configurations.</p>
     */
    inline const Aws::Vector<StreamingConfiguration>& GetStreamingConfigurations() const{ return m_streamingConfigurations; }

    /**
     * <p>The streaming configurations.</p>
     */
    inline bool StreamingConfigurationsHasBeenSet() const { return m_streamingConfigurationsHasBeenSet; }

    /**
     * <p>The streaming configurations.</p>
     */
    inline void SetStreamingConfigurations(const Aws::Vector<StreamingConfiguration>& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = value; }

    /**
     * <p>The streaming configurations.</p>
     */
    inline void SetStreamingConfigurations(Aws::Vector<StreamingConfiguration>&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = std::move(value); }

    /**
     * <p>The streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& WithStreamingConfigurations(const Aws::Vector<StreamingConfiguration>& value) { SetStreamingConfigurations(value); return *this;}

    /**
     * <p>The streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& WithStreamingConfigurations(Aws::Vector<StreamingConfiguration>&& value) { SetStreamingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& AddStreamingConfigurations(const StreamingConfiguration& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations.push_back(value); return *this; }

    /**
     * <p>The streaming configurations.</p>
     */
    inline PutMessagingStreamingConfigurationsRequest& AddStreamingConfigurations(StreamingConfiguration&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<StreamingConfiguration> m_streamingConfigurations;
    bool m_streamingConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
