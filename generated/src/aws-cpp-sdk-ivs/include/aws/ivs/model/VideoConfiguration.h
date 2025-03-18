/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying a stream’s video configuration, as set up by the
   * broadcaster (usually in an encoder). This is part of the
   * <a>IngestConfigurations</a> object and the deprecated <a>IngestConfiguration</a>
   * object. It is used for monitoring stream health. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/VideoConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoConfiguration
  {
  public:
    AWS_IVS_API VideoConfiguration() = default;
    AWS_IVS_API VideoConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API VideoConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the degree of required decoder performance for a profile. Normally
     * this is set automatically by the encoder. For details, see the H.264
     * specification.</p>
     */
    inline const Aws::String& GetAvcLevel() const { return m_avcLevel; }
    inline bool AvcLevelHasBeenSet() const { return m_avcLevelHasBeenSet; }
    template<typename AvcLevelT = Aws::String>
    void SetAvcLevel(AvcLevelT&& value) { m_avcLevelHasBeenSet = true; m_avcLevel = std::forward<AvcLevelT>(value); }
    template<typename AvcLevelT = Aws::String>
    VideoConfiguration& WithAvcLevel(AvcLevelT&& value) { SetAvcLevel(std::forward<AvcLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates to the decoder the requirements for decoding the stream. For
     * definitions of the valid values, see the H.264 specification.</p>
     */
    inline const Aws::String& GetAvcProfile() const { return m_avcProfile; }
    inline bool AvcProfileHasBeenSet() const { return m_avcProfileHasBeenSet; }
    template<typename AvcProfileT = Aws::String>
    void SetAvcProfile(AvcProfileT&& value) { m_avcProfileHasBeenSet = true; m_avcProfile = std::forward<AvcProfileT>(value); }
    template<typename AvcProfileT = Aws::String>
    VideoConfiguration& WithAvcProfile(AvcProfileT&& value) { SetAvcProfile(std::forward<AvcProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Codec used for the video encoding.</p>
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    VideoConfiguration& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Software or hardware used to encode the video.</p>
     */
    inline const Aws::String& GetEncoder() const { return m_encoder; }
    inline bool EncoderHasBeenSet() const { return m_encoderHasBeenSet; }
    template<typename EncoderT = Aws::String>
    void SetEncoder(EncoderT&& value) { m_encoderHasBeenSet = true; m_encoder = std::forward<EncoderT>(value); }
    template<typename EncoderT = Aws::String>
    VideoConfiguration& WithEncoder(EncoderT&& value) { SetEncoder(std::forward<EncoderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the degree of required decoder performance for a profile. Normally
     * this is set automatically by the encoder. When an AVC codec is used, this field
     * has the same value as <code>avcLevel</code>.</p>
     */
    inline const Aws::String& GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    template<typename LevelT = Aws::String>
    void SetLevel(LevelT&& value) { m_levelHasBeenSet = true; m_level = std::forward<LevelT>(value); }
    template<typename LevelT = Aws::String>
    VideoConfiguration& WithLevel(LevelT&& value) { SetLevel(std::forward<LevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates to the decoder the requirements for decoding the stream. When an
     * AVC codec is used, this field has the same value as <code>avcProfile</code>.</p>
     */
    inline const Aws::String& GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    template<typename ProfileT = Aws::String>
    void SetProfile(ProfileT&& value) { m_profileHasBeenSet = true; m_profile = std::forward<ProfileT>(value); }
    template<typename ProfileT = Aws::String>
    VideoConfiguration& WithProfile(ProfileT&& value) { SetProfile(std::forward<ProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected ingest bitrate (bits per second). This is configured in the
     * encoder.</p>
     */
    inline long long GetTargetBitrate() const { return m_targetBitrate; }
    inline bool TargetBitrateHasBeenSet() const { return m_targetBitrateHasBeenSet; }
    inline void SetTargetBitrate(long long value) { m_targetBitrateHasBeenSet = true; m_targetBitrate = value; }
    inline VideoConfiguration& WithTargetBitrate(long long value) { SetTargetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected ingest framerate. This is configured in the encoder.</p>
     */
    inline long long GetTargetFramerate() const { return m_targetFramerate; }
    inline bool TargetFramerateHasBeenSet() const { return m_targetFramerateHasBeenSet; }
    inline void SetTargetFramerate(long long value) { m_targetFramerateHasBeenSet = true; m_targetFramerate = value; }
    inline VideoConfiguration& WithTargetFramerate(long long value) { SetTargetFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the video track. If multitrack is not enabled, this is track0 (the
     * sole track).</p>
     */
    inline const Aws::String& GetTrack() const { return m_track; }
    inline bool TrackHasBeenSet() const { return m_trackHasBeenSet; }
    template<typename TrackT = Aws::String>
    void SetTrack(TrackT&& value) { m_trackHasBeenSet = true; m_track = std::forward<TrackT>(value); }
    template<typename TrackT = Aws::String>
    VideoConfiguration& WithTrack(TrackT&& value) { SetTrack(std::forward<TrackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video-resolution height in pixels.</p>
     */
    inline long long GetVideoHeight() const { return m_videoHeight; }
    inline bool VideoHeightHasBeenSet() const { return m_videoHeightHasBeenSet; }
    inline void SetVideoHeight(long long value) { m_videoHeightHasBeenSet = true; m_videoHeight = value; }
    inline VideoConfiguration& WithVideoHeight(long long value) { SetVideoHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video-resolution width in pixels.</p>
     */
    inline long long GetVideoWidth() const { return m_videoWidth; }
    inline bool VideoWidthHasBeenSet() const { return m_videoWidthHasBeenSet; }
    inline void SetVideoWidth(long long value) { m_videoWidthHasBeenSet = true; m_videoWidth = value; }
    inline VideoConfiguration& WithVideoWidth(long long value) { SetVideoWidth(value); return *this;}
    ///@}
  private:

    Aws::String m_avcLevel;
    bool m_avcLevelHasBeenSet = false;

    Aws::String m_avcProfile;
    bool m_avcProfileHasBeenSet = false;

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    Aws::String m_encoder;
    bool m_encoderHasBeenSet = false;

    Aws::String m_level;
    bool m_levelHasBeenSet = false;

    Aws::String m_profile;
    bool m_profileHasBeenSet = false;

    long long m_targetBitrate{0};
    bool m_targetBitrateHasBeenSet = false;

    long long m_targetFramerate{0};
    bool m_targetFramerateHasBeenSet = false;

    Aws::String m_track;
    bool m_trackHasBeenSet = false;

    long long m_videoHeight{0};
    bool m_videoHeightHasBeenSet = false;

    long long m_videoWidth{0};
    bool m_videoWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
