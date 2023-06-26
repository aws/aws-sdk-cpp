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
    AWS_KINESISVIDEO_API UpdateMediaStorageConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMediaStorageConfiguration"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline UpdateMediaStorageConfigurationRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline UpdateMediaStorageConfigurationRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline UpdateMediaStorageConfigurationRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline const MediaStorageConfiguration& GetMediaStorageConfiguration() const{ return m_mediaStorageConfiguration; }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline bool MediaStorageConfigurationHasBeenSet() const { return m_mediaStorageConfigurationHasBeenSet; }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline void SetMediaStorageConfiguration(const MediaStorageConfiguration& value) { m_mediaStorageConfigurationHasBeenSet = true; m_mediaStorageConfiguration = value; }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline void SetMediaStorageConfiguration(MediaStorageConfiguration&& value) { m_mediaStorageConfigurationHasBeenSet = true; m_mediaStorageConfiguration = std::move(value); }

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline UpdateMediaStorageConfigurationRequest& WithMediaStorageConfiguration(const MediaStorageConfiguration& value) { SetMediaStorageConfiguration(value); return *this;}

    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline UpdateMediaStorageConfigurationRequest& WithMediaStorageConfiguration(MediaStorageConfiguration&& value) { SetMediaStorageConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    MediaStorageConfiguration m_mediaStorageConfiguration;
    bool m_mediaStorageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
