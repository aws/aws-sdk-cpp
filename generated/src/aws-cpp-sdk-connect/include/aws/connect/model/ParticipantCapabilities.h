/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/VideoCapability.h>
#include <aws/connect/model/ScreenShareCapability.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>The configuration for the allowed video and screen sharing capabilities for
   * participants present over the call. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/inapp-calling.html">Set
   * up in-app, web, video calling, and screen sharing capabilities</a> in the
   * <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantCapabilities">AWS
   * API Reference</a></p>
   */
  class ParticipantCapabilities
  {
  public:
    AWS_CONNECT_API ParticipantCapabilities() = default;
    AWS_CONNECT_API ParticipantCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration having the video and screen sharing capabilities for
     * participants over the call.</p>
     */
    inline VideoCapability GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(VideoCapability value) { m_videoHasBeenSet = true; m_video = value; }
    inline ParticipantCapabilities& WithVideo(VideoCapability value) { SetVideo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen sharing capability that is enabled for the participant.
     * <code>SEND</code> indicates the participant can share their screen.</p>
     */
    inline ScreenShareCapability GetScreenShare() const { return m_screenShare; }
    inline bool ScreenShareHasBeenSet() const { return m_screenShareHasBeenSet; }
    inline void SetScreenShare(ScreenShareCapability value) { m_screenShareHasBeenSet = true; m_screenShare = value; }
    inline ParticipantCapabilities& WithScreenShare(ScreenShareCapability value) { SetScreenShare(value); return *this;}
    ///@}
  private:

    VideoCapability m_video{VideoCapability::NOT_SET};
    bool m_videoHasBeenSet = false;

    ScreenShareCapability m_screenShare{ScreenShareCapability::NOT_SET};
    bool m_screenShareHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
