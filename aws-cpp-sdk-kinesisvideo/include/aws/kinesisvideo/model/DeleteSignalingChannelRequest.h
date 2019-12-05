/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEO_API DeleteSignalingChannelRequest : public KinesisVideoRequest
  {
  public:
    DeleteSignalingChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSignalingChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline DeleteSignalingChannelRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline DeleteSignalingChannelRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signaling channel that you want to delete.</p>
     */
    inline DeleteSignalingChannelRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline DeleteSignalingChannelRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline DeleteSignalingChannelRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the signaling channel that you want to delete. You can
     * obtain the current version by invoking the <code>DescribeSignalingChannel</code>
     * or <code>ListSignalingChannels</code> APIs.</p>
     */
    inline DeleteSignalingChannelRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}

  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
