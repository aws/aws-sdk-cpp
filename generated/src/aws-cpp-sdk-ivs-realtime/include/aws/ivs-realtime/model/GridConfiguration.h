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
    AWS_IVSREALTIME_API GridConfiguration();
    AWS_IVSREALTIME_API GridConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API GridConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline const Aws::String& GetFeaturedParticipantAttribute() const{ return m_featuredParticipantAttribute; }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline bool FeaturedParticipantAttributeHasBeenSet() const { return m_featuredParticipantAttributeHasBeenSet; }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline void SetFeaturedParticipantAttribute(const Aws::String& value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute = value; }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline void SetFeaturedParticipantAttribute(Aws::String&& value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute = std::move(value); }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline void SetFeaturedParticipantAttribute(const char* value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute.assign(value); }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline GridConfiguration& WithFeaturedParticipantAttribute(const Aws::String& value) { SetFeaturedParticipantAttribute(value); return *this;}

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline GridConfiguration& WithFeaturedParticipantAttribute(Aws::String&& value) { SetFeaturedParticipantAttribute(std::move(value)); return *this;}

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline GridConfiguration& WithFeaturedParticipantAttribute(const char* value) { SetFeaturedParticipantAttribute(value); return *this;}


    /**
     * <p>Specifies the spacing between participant tiles in pixels. Default:
     * <code>2</code>.</p>
     */
    inline int GetGridGap() const{ return m_gridGap; }

    /**
     * <p>Specifies the spacing between participant tiles in pixels. Default:
     * <code>2</code>.</p>
     */
    inline bool GridGapHasBeenSet() const { return m_gridGapHasBeenSet; }

    /**
     * <p>Specifies the spacing between participant tiles in pixels. Default:
     * <code>2</code>.</p>
     */
    inline void SetGridGap(int value) { m_gridGapHasBeenSet = true; m_gridGap = value; }

    /**
     * <p>Specifies the spacing between participant tiles in pixels. Default:
     * <code>2</code>.</p>
     */
    inline GridConfiguration& WithGridGap(int value) { SetGridGap(value); return *this;}


    /**
     * <p>Determines whether to omit participants with stopped video in the
     * composition. Default: <code>false</code>.</p>
     */
    inline bool GetOmitStoppedVideo() const{ return m_omitStoppedVideo; }

    /**
     * <p>Determines whether to omit participants with stopped video in the
     * composition. Default: <code>false</code>.</p>
     */
    inline bool OmitStoppedVideoHasBeenSet() const { return m_omitStoppedVideoHasBeenSet; }

    /**
     * <p>Determines whether to omit participants with stopped video in the
     * composition. Default: <code>false</code>.</p>
     */
    inline void SetOmitStoppedVideo(bool value) { m_omitStoppedVideoHasBeenSet = true; m_omitStoppedVideo = value; }

    /**
     * <p>Determines whether to omit participants with stopped video in the
     * composition. Default: <code>false</code>.</p>
     */
    inline GridConfiguration& WithOmitStoppedVideo(bool value) { SetOmitStoppedVideo(value); return *this;}


    /**
     * <p>Sets the non-featured participant display mode. Default:
     * <code>VIDEO</code>.</p>
     */
    inline const VideoAspectRatio& GetVideoAspectRatio() const{ return m_videoAspectRatio; }

    /**
     * <p>Sets the non-featured participant display mode. Default:
     * <code>VIDEO</code>.</p>
     */
    inline bool VideoAspectRatioHasBeenSet() const { return m_videoAspectRatioHasBeenSet; }

    /**
     * <p>Sets the non-featured participant display mode. Default:
     * <code>VIDEO</code>.</p>
     */
    inline void SetVideoAspectRatio(const VideoAspectRatio& value) { m_videoAspectRatioHasBeenSet = true; m_videoAspectRatio = value; }

    /**
     * <p>Sets the non-featured participant display mode. Default:
     * <code>VIDEO</code>.</p>
     */
    inline void SetVideoAspectRatio(VideoAspectRatio&& value) { m_videoAspectRatioHasBeenSet = true; m_videoAspectRatio = std::move(value); }

    /**
     * <p>Sets the non-featured participant display mode. Default:
     * <code>VIDEO</code>.</p>
     */
    inline GridConfiguration& WithVideoAspectRatio(const VideoAspectRatio& value) { SetVideoAspectRatio(value); return *this;}

    /**
     * <p>Sets the non-featured participant display mode. Default:
     * <code>VIDEO</code>.</p>
     */
    inline GridConfiguration& WithVideoAspectRatio(VideoAspectRatio&& value) { SetVideoAspectRatio(std::move(value)); return *this;}


    /**
     * <p>Defines how video fits within the participant tile. When not set,
     * <code>videoFillMode</code> defaults to <code>COVER</code> fill mode for
     * participants in the grid and to <code>CONTAIN</code> fill mode for featured
     * participants.</p>
     */
    inline const VideoFillMode& GetVideoFillMode() const{ return m_videoFillMode; }

    /**
     * <p>Defines how video fits within the participant tile. When not set,
     * <code>videoFillMode</code> defaults to <code>COVER</code> fill mode for
     * participants in the grid and to <code>CONTAIN</code> fill mode for featured
     * participants.</p>
     */
    inline bool VideoFillModeHasBeenSet() const { return m_videoFillModeHasBeenSet; }

    /**
     * <p>Defines how video fits within the participant tile. When not set,
     * <code>videoFillMode</code> defaults to <code>COVER</code> fill mode for
     * participants in the grid and to <code>CONTAIN</code> fill mode for featured
     * participants.</p>
     */
    inline void SetVideoFillMode(const VideoFillMode& value) { m_videoFillModeHasBeenSet = true; m_videoFillMode = value; }

    /**
     * <p>Defines how video fits within the participant tile. When not set,
     * <code>videoFillMode</code> defaults to <code>COVER</code> fill mode for
     * participants in the grid and to <code>CONTAIN</code> fill mode for featured
     * participants.</p>
     */
    inline void SetVideoFillMode(VideoFillMode&& value) { m_videoFillModeHasBeenSet = true; m_videoFillMode = std::move(value); }

    /**
     * <p>Defines how video fits within the participant tile. When not set,
     * <code>videoFillMode</code> defaults to <code>COVER</code> fill mode for
     * participants in the grid and to <code>CONTAIN</code> fill mode for featured
     * participants.</p>
     */
    inline GridConfiguration& WithVideoFillMode(const VideoFillMode& value) { SetVideoFillMode(value); return *this;}

    /**
     * <p>Defines how video fits within the participant tile. When not set,
     * <code>videoFillMode</code> defaults to <code>COVER</code> fill mode for
     * participants in the grid and to <code>CONTAIN</code> fill mode for featured
     * participants.</p>
     */
    inline GridConfiguration& WithVideoFillMode(VideoFillMode&& value) { SetVideoFillMode(std::move(value)); return *this;}

  private:

    Aws::String m_featuredParticipantAttribute;
    bool m_featuredParticipantAttributeHasBeenSet = false;

    int m_gridGap;
    bool m_gridGapHasBeenSet = false;

    bool m_omitStoppedVideo;
    bool m_omitStoppedVideoHasBeenSet = false;

    VideoAspectRatio m_videoAspectRatio;
    bool m_videoAspectRatioHasBeenSet = false;

    VideoFillMode m_videoFillMode;
    bool m_videoFillModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
