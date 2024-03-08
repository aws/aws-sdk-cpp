/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/VideoCapability.h>
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
   * <p>The configuration for the allowed capabilities for participants present over
   * the call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantCapabilities">AWS
   * API Reference</a></p>
   */
  class ParticipantCapabilities
  {
  public:
    AWS_CONNECT_API ParticipantCapabilities();
    AWS_CONNECT_API ParticipantCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration having the video sharing capabilities for participants over
     * the call.</p>
     */
    inline const VideoCapability& GetVideo() const{ return m_video; }

    /**
     * <p>The configuration having the video sharing capabilities for participants over
     * the call.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The configuration having the video sharing capabilities for participants over
     * the call.</p>
     */
    inline void SetVideo(const VideoCapability& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The configuration having the video sharing capabilities for participants over
     * the call.</p>
     */
    inline void SetVideo(VideoCapability&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The configuration having the video sharing capabilities for participants over
     * the call.</p>
     */
    inline ParticipantCapabilities& WithVideo(const VideoCapability& value) { SetVideo(value); return *this;}

    /**
     * <p>The configuration having the video sharing capabilities for participants over
     * the call.</p>
     */
    inline ParticipantCapabilities& WithVideo(VideoCapability&& value) { SetVideo(std::move(value)); return *this;}

  private:

    VideoCapability m_video;
    bool m_videoHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
