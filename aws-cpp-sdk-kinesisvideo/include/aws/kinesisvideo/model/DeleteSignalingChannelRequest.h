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
  class DeleteSignalingChannelRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API DeleteSignalingChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSignalingChannel"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline DeleteSignalingChannelRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline DeleteSignalingChannelRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * delete.</p>
     */
    inline DeleteSignalingChannelRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline DeleteSignalingChannelRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline DeleteSignalingChannelRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> API operations.</p>
     */
    inline DeleteSignalingChannelRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}

  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
