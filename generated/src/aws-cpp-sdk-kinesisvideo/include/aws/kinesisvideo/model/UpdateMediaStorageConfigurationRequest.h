/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/MediaStorageConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class UpdateMediaStorageConfigurationRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UpdateMediaStorageConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMediaStorageConfiguration"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    UpdateMediaStorageConfigurationRequest& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline const MediaStorageConfiguration& GetMediaStorageConfiguration() const { return m_mediaStorageConfiguration; }
    inline bool MediaStorageConfigurationHasBeenSet() const { return m_mediaStorageConfigurationHasBeenSet; }
    template<typename MediaStorageConfigurationT = MediaStorageConfiguration>
    void SetMediaStorageConfiguration(MediaStorageConfigurationT&& value) { m_mediaStorageConfigurationHasBeenSet = true; m_mediaStorageConfiguration = std::forward<MediaStorageConfigurationT>(value); }
    template<typename MediaStorageConfigurationT = MediaStorageConfiguration>
    UpdateMediaStorageConfigurationRequest& WithMediaStorageConfiguration(MediaStorageConfigurationT&& value) { SetMediaStorageConfiguration(std::forward<MediaStorageConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    MediaStorageConfiguration m_mediaStorageConfiguration;
    bool m_mediaStorageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
