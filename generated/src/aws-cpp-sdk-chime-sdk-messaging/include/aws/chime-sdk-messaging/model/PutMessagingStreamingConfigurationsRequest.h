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
    AWS_CHIMESDKMESSAGING_API PutMessagingStreamingConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMessagingStreamingConfigurations"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the streaming configuration.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const { return m_appInstanceArn; }
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }
    template<typename AppInstanceArnT = Aws::String>
    void SetAppInstanceArn(AppInstanceArnT&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::forward<AppInstanceArnT>(value); }
    template<typename AppInstanceArnT = Aws::String>
    PutMessagingStreamingConfigurationsRequest& WithAppInstanceArn(AppInstanceArnT&& value) { SetAppInstanceArn(std::forward<AppInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming configurations.</p>
     */
    inline const Aws::Vector<StreamingConfiguration>& GetStreamingConfigurations() const { return m_streamingConfigurations; }
    inline bool StreamingConfigurationsHasBeenSet() const { return m_streamingConfigurationsHasBeenSet; }
    template<typename StreamingConfigurationsT = Aws::Vector<StreamingConfiguration>>
    void SetStreamingConfigurations(StreamingConfigurationsT&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations = std::forward<StreamingConfigurationsT>(value); }
    template<typename StreamingConfigurationsT = Aws::Vector<StreamingConfiguration>>
    PutMessagingStreamingConfigurationsRequest& WithStreamingConfigurations(StreamingConfigurationsT&& value) { SetStreamingConfigurations(std::forward<StreamingConfigurationsT>(value)); return *this;}
    template<typename StreamingConfigurationsT = StreamingConfiguration>
    PutMessagingStreamingConfigurationsRequest& AddStreamingConfigurations(StreamingConfigurationsT&& value) { m_streamingConfigurationsHasBeenSet = true; m_streamingConfigurations.emplace_back(std::forward<StreamingConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::Vector<StreamingConfiguration> m_streamingConfigurations;
    bool m_streamingConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
