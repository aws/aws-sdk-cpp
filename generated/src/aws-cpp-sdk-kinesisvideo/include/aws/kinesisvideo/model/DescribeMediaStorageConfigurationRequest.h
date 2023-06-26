/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class DescribeMediaStorageConfigurationRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API DescribeMediaStorageConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMediaStorageConfiguration"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline DescribeMediaStorageConfigurationRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline DescribeMediaStorageConfigurationRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline DescribeMediaStorageConfigurationRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


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
    inline DescribeMediaStorageConfigurationRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline DescribeMediaStorageConfigurationRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the channel.</p>
     */
    inline DescribeMediaStorageConfigurationRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
