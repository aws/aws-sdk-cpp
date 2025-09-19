/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/VideoAspectRatio.h>
#include <aws/ivs-realtime/model/VideoFillMode.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Configuration information specific to Grid layout, for server-side
   * composition. See "Layouts" in <a
   * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/server-side-composition.html">Server-Side
   * Composition</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GridConfiguration">AWS
   * API Reference</a></p>
   */
  class GridConfiguration
  {
  public:
    AWS_IVSREALTIME_API GridConfiguration() = default;
    AWS_IVSREALTIME_API GridConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API GridConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot. Default:
     * <code>""</code> (no featured participant).</p>
     */
    inline const Aws::String& GetFeaturedParticipantAttribute() const { return m_featuredParticipantAttribute; }
    inline bool FeaturedParticipantAttributeHasBeenSet() const { return m_featuredParticipantAttributeHasBeenSet; }
    template<typename FeaturedParticipantAttributeT = Aws::String>
    void SetFeaturedParticipantAttribute(FeaturedParticipantAttributeT&& value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute = std::forward<FeaturedParticipantAttributeT>(value); }
    template<typename FeaturedParticipantAttributeT = Aws::String>
    GridConfiguration& WithFeaturedParticipantAttribute(FeaturedParticipantAttributeT&& value) { SetFeaturedParticipantAttribute(std::forward<FeaturedParticipantAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to omit participants with stopped video in the
     * composition. Default: <code>false</code>.</p>
     */
    inline bool GetOmitStoppedVideo() const { return m_omitStoppedVideo; }
    inline bool OmitStoppedVideoHasBeenSet() const { return m_omitStoppedVideoHasBeenSet; }
    inline void SetOmitStoppedVideo(bool value) { m_omitStoppedVideoHasBeenSet = true; m_omitStoppedVideo = value; }
    inline GridConfiguration& WithOmitStoppedVideo(bool value) { SetOmitStoppedVideo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the non-featured participant display mode, to control the aspect ratio
     * of video tiles. <code>VIDEO</code> is 16:9, <code>SQUARE</code> is 1:1, and
     * <code>PORTRAIT</code> is 3:4. Default: <code>VIDEO</code>.</p>
     */
    inline VideoAspectRatio GetVideoAspectRatio() const { return m_videoAspectRatio; }
    inline bool VideoAspectRatioHasBeenSet() const { return m_videoAspectRatioHasBeenSet; }
    inline void SetVideoAspectRatio(VideoAspectRatio value) { m_videoAspectRatioHasBeenSet = true; m_videoAspectRatio = value; }
    inline GridConfiguration& WithVideoAspectRatio(VideoAspectRatio value) { SetVideoAspectRatio(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how video content fits within the participant tile: <code>FILL</code>
     * (stretched), <code>COVER</code> (cropped), or <code>CONTAIN</code>
     * (letterboxed). When not set, <code>videoFillMode</code> defaults to
     * <code>COVER</code> fill mode for participants in the grid and to
     * <code>CONTAIN</code> fill mode for featured participants.</p>
     */
    inline VideoFillMode GetVideoFillMode() const { return m_videoFillMode; }
    inline bool VideoFillModeHasBeenSet() const { return m_videoFillModeHasBeenSet; }
    inline void SetVideoFillMode(VideoFillMode value) { m_videoFillModeHasBeenSet = true; m_videoFillMode = value; }
    inline GridConfiguration& WithVideoFillMode(VideoFillMode value) { SetVideoFillMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the spacing between participant tiles in pixels. Default:
     * <code>2</code>.</p>
     */
    inline int GetGridGap() const { return m_gridGap; }
    inline bool GridGapHasBeenSet() const { return m_gridGapHasBeenSet; }
    inline void SetGridGap(int value) { m_gridGapHasBeenSet = true; m_gridGap = value; }
    inline GridConfiguration& WithGridGap(int value) { SetGridGap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attribute name in <a>ParticipantTokenConfiguration</a> identifying the
     * participant ordering key. Participants with
     * <code>participantOrderAttribute</code> set to <code>""</code> or not specified
     * are ordered based on their arrival time into the stage.</p>
     */
    inline const Aws::String& GetParticipantOrderAttribute() const { return m_participantOrderAttribute; }
    inline bool ParticipantOrderAttributeHasBeenSet() const { return m_participantOrderAttributeHasBeenSet; }
    template<typename ParticipantOrderAttributeT = Aws::String>
    void SetParticipantOrderAttribute(ParticipantOrderAttributeT&& value) { m_participantOrderAttributeHasBeenSet = true; m_participantOrderAttribute = std::forward<ParticipantOrderAttributeT>(value); }
    template<typename ParticipantOrderAttributeT = Aws::String>
    GridConfiguration& WithParticipantOrderAttribute(ParticipantOrderAttributeT&& value) { SetParticipantOrderAttribute(std::forward<ParticipantOrderAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featuredParticipantAttribute;
    bool m_featuredParticipantAttributeHasBeenSet = false;

    bool m_omitStoppedVideo{false};
    bool m_omitStoppedVideoHasBeenSet = false;

    VideoAspectRatio m_videoAspectRatio{VideoAspectRatio::NOT_SET};
    bool m_videoAspectRatioHasBeenSet = false;

    VideoFillMode m_videoFillMode{VideoFillMode::NOT_SET};
    bool m_videoFillModeHasBeenSet = false;

    int m_gridGap{0};
    bool m_gridGapHasBeenSet = false;

    Aws::String m_participantOrderAttribute;
    bool m_participantOrderAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
