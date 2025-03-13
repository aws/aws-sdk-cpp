/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class DeleteChannelRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API DeleteChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteChannel"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel to delete.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    DeleteChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
