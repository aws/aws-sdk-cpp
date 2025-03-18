/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>

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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Settings for video.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/Video">AWS
   * API Reference</a></p>
   */
  class Video
  {
  public:
    AWS_IVSREALTIME_API Video() = default;
    AWS_IVSREALTIME_API Video(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Video& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Video-resolution width. This must be an even number. Note that the maximum
     * value is determined by <code>width</code> times <code>height</code>, such that
     * the maximum total pixels is 2073600 (1920x1080 or 1080x1920). Default: 1280.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline Video& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video-resolution height. This must be an even number. Note that the maximum
     * value is determined by <code>width</code> times <code>height</code>, such that
     * the maximum total pixels is 2073600 (1920x1080 or 1080x1920). Default: 720.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline Video& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video frame rate, in fps. Default: 30.</p>
     */
    inline double GetFramerate() const { return m_framerate; }
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }
    inline void SetFramerate(double value) { m_framerateHasBeenSet = true; m_framerate = value; }
    inline Video& WithFramerate(double value) { SetFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bitrate for generated output, in bps. Default: 2500000.</p>
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Video& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}
  private:

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    double m_framerate{0.0};
    bool m_framerateHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
