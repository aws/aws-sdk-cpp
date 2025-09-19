/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/VideoFillMode.h>
#include <aws/ivs-realtime/model/PipBehavior.h>
#include <aws/ivs-realtime/model/PipPosition.h>
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
   * <p>Configuration information specific to Picture-in-Picture (PiP) layout, for <a
   * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/server-side-composition.html">server-side
   * composition</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/PipConfiguration">AWS
   * API Reference</a></p>
   */
  class PipConfiguration
  {
  public:
    AWS_IVSREALTIME_API PipConfiguration() = default;
    AWS_IVSREALTIME_API PipConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API PipConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PipConfiguration& WithFeaturedParticipantAttribute(FeaturedParticipantAttributeT&& value) { SetFeaturedParticipantAttribute(std::forward<FeaturedParticipantAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to omit participants with stopped video in the
     * composition. Default: <code>false</code>.</p>
     */
    inline bool GetOmitStoppedVideo() const { return m_omitStoppedVideo; }
    inline bool OmitStoppedVideoHasBeenSet() const { return m_omitStoppedVideoHasBeenSet; }
    inline void SetOmitStoppedVideo(bool value) { m_omitStoppedVideoHasBeenSet = true; m_omitStoppedVideo = value; }
    inline PipConfiguration& WithOmitStoppedVideo(bool value) { SetOmitStoppedVideo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how video content fits within the participant tile: <code>FILL</code>
     * (stretched), <code>COVER</code> (cropped), or <code>CONTAIN</code>
     * (letterboxed). Default: <code>COVER</code>.</p>
     */
    inline VideoFillMode GetVideoFillMode() const { return m_videoFillMode; }
    inline bool VideoFillModeHasBeenSet() const { return m_videoFillModeHasBeenSet; }
    inline void SetVideoFillMode(VideoFillMode value) { m_videoFillModeHasBeenSet = true; m_videoFillMode = value; }
    inline PipConfiguration& WithVideoFillMode(VideoFillMode value) { SetVideoFillMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the spacing between participant tiles in pixels. Default:
     * <code>0</code>.</p>
     */
    inline int GetGridGap() const { return m_gridGap; }
    inline bool GridGapHasBeenSet() const { return m_gridGapHasBeenSet; }
    inline void SetGridGap(int value) { m_gridGapHasBeenSet = true; m_gridGap = value; }
    inline PipConfiguration& WithGridGap(int value) { SetGridGap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the participant for the PiP window. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the PiP slot. Default:
     * <code>""</code> (no PiP participant).</p>
     */
    inline const Aws::String& GetPipParticipantAttribute() const { return m_pipParticipantAttribute; }
    inline bool PipParticipantAttributeHasBeenSet() const { return m_pipParticipantAttributeHasBeenSet; }
    template<typename PipParticipantAttributeT = Aws::String>
    void SetPipParticipantAttribute(PipParticipantAttributeT&& value) { m_pipParticipantAttributeHasBeenSet = true; m_pipParticipantAttribute = std::forward<PipParticipantAttributeT>(value); }
    template<typename PipParticipantAttributeT = Aws::String>
    PipConfiguration& WithPipParticipantAttribute(PipParticipantAttributeT&& value) { SetPipParticipantAttribute(std::forward<PipParticipantAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines PiP behavior when all participants have left: <code>STATIC</code>
     * (maintains original position/size) or <code>DYNAMIC</code> (expands to full
     * composition). Default: <code>STATIC</code>.</p>
     */
    inline PipBehavior GetPipBehavior() const { return m_pipBehavior; }
    inline bool PipBehaviorHasBeenSet() const { return m_pipBehaviorHasBeenSet; }
    inline void SetPipBehavior(PipBehavior value) { m_pipBehaviorHasBeenSet = true; m_pipBehavior = value; }
    inline PipConfiguration& WithPipBehavior(PipBehavior value) { SetPipBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the PiP window’s offset position in pixels from the closest edges
     * determined by <code>PipPosition</code>. Default: <code>0</code>.</p>
     */
    inline int GetPipOffset() const { return m_pipOffset; }
    inline bool PipOffsetHasBeenSet() const { return m_pipOffsetHasBeenSet; }
    inline void SetPipOffset(int value) { m_pipOffsetHasBeenSet = true; m_pipOffset = value; }
    inline PipConfiguration& WithPipOffset(int value) { SetPipOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the corner position of the PiP window. Default:
     * <code>BOTTOM_RIGHT</code>.</p>
     */
    inline PipPosition GetPipPosition() const { return m_pipPosition; }
    inline bool PipPositionHasBeenSet() const { return m_pipPositionHasBeenSet; }
    inline void SetPipPosition(PipPosition value) { m_pipPositionHasBeenSet = true; m_pipPosition = value; }
    inline PipConfiguration& WithPipPosition(PipPosition value) { SetPipPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the width of the PiP window in pixels. When this is not set
     * explicitly, <code>pipWidth</code>’s value will be based on the size of the
     * composition and the aspect ratio of the participant’s video.</p>
     */
    inline int GetPipWidth() const { return m_pipWidth; }
    inline bool PipWidthHasBeenSet() const { return m_pipWidthHasBeenSet; }
    inline void SetPipWidth(int value) { m_pipWidthHasBeenSet = true; m_pipWidth = value; }
    inline PipConfiguration& WithPipWidth(int value) { SetPipWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the height of the PiP window in pixels. When this is not set
     * explicitly, <code>pipHeight</code>’s value will be based on the size of the
     * composition and the aspect ratio of the participant’s video.</p>
     */
    inline int GetPipHeight() const { return m_pipHeight; }
    inline bool PipHeightHasBeenSet() const { return m_pipHeightHasBeenSet; }
    inline void SetPipHeight(int value) { m_pipHeightHasBeenSet = true; m_pipHeight = value; }
    inline PipConfiguration& WithPipHeight(int value) { SetPipHeight(value); return *this;}
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
    PipConfiguration& WithParticipantOrderAttribute(ParticipantOrderAttributeT&& value) { SetParticipantOrderAttribute(std::forward<ParticipantOrderAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featuredParticipantAttribute;
    bool m_featuredParticipantAttributeHasBeenSet = false;

    bool m_omitStoppedVideo{false};
    bool m_omitStoppedVideoHasBeenSet = false;

    VideoFillMode m_videoFillMode{VideoFillMode::NOT_SET};
    bool m_videoFillModeHasBeenSet = false;

    int m_gridGap{0};
    bool m_gridGapHasBeenSet = false;

    Aws::String m_pipParticipantAttribute;
    bool m_pipParticipantAttributeHasBeenSet = false;

    PipBehavior m_pipBehavior{PipBehavior::NOT_SET};
    bool m_pipBehaviorHasBeenSet = false;

    int m_pipOffset{0};
    bool m_pipOffsetHasBeenSet = false;

    PipPosition m_pipPosition{PipPosition::NOT_SET};
    bool m_pipPositionHasBeenSet = false;

    int m_pipWidth{0};
    bool m_pipWidthHasBeenSet = false;

    int m_pipHeight{0};
    bool m_pipHeightHasBeenSet = false;

    Aws::String m_participantOrderAttribute;
    bool m_participantOrderAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
