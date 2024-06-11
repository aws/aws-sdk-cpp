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
   * <a>IngestConfiguration</a> object and used for monitoring stream
   * health.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/VideoConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoConfiguration
  {
  public:
    AWS_IVS_API VideoConfiguration();
    AWS_IVS_API VideoConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API VideoConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the degree of required decoder performance for a profile. Normally
     * this is set automatically by the encoder. For details, see the H.264
     * specification.</p>
     */
    inline const Aws::String& GetAvcLevel() const{ return m_avcLevel; }
    inline bool AvcLevelHasBeenSet() const { return m_avcLevelHasBeenSet; }
    inline void SetAvcLevel(const Aws::String& value) { m_avcLevelHasBeenSet = true; m_avcLevel = value; }
    inline void SetAvcLevel(Aws::String&& value) { m_avcLevelHasBeenSet = true; m_avcLevel = std::move(value); }
    inline void SetAvcLevel(const char* value) { m_avcLevelHasBeenSet = true; m_avcLevel.assign(value); }
    inline VideoConfiguration& WithAvcLevel(const Aws::String& value) { SetAvcLevel(value); return *this;}
    inline VideoConfiguration& WithAvcLevel(Aws::String&& value) { SetAvcLevel(std::move(value)); return *this;}
    inline VideoConfiguration& WithAvcLevel(const char* value) { SetAvcLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates to the decoder the requirements for decoding the stream. For
     * definitions of the valid values, see the H.264 specification.</p>
     */
    inline const Aws::String& GetAvcProfile() const{ return m_avcProfile; }
    inline bool AvcProfileHasBeenSet() const { return m_avcProfileHasBeenSet; }
    inline void SetAvcProfile(const Aws::String& value) { m_avcProfileHasBeenSet = true; m_avcProfile = value; }
    inline void SetAvcProfile(Aws::String&& value) { m_avcProfileHasBeenSet = true; m_avcProfile = std::move(value); }
    inline void SetAvcProfile(const char* value) { m_avcProfileHasBeenSet = true; m_avcProfile.assign(value); }
    inline VideoConfiguration& WithAvcProfile(const Aws::String& value) { SetAvcProfile(value); return *this;}
    inline VideoConfiguration& WithAvcProfile(Aws::String&& value) { SetAvcProfile(std::move(value)); return *this;}
    inline VideoConfiguration& WithAvcProfile(const char* value) { SetAvcProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Codec used for the video encoding.</p>
     */
    inline const Aws::String& GetCodec() const{ return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(const Aws::String& value) { m_codecHasBeenSet = true; m_codec = value; }
    inline void SetCodec(Aws::String&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }
    inline void SetCodec(const char* value) { m_codecHasBeenSet = true; m_codec.assign(value); }
    inline VideoConfiguration& WithCodec(const Aws::String& value) { SetCodec(value); return *this;}
    inline VideoConfiguration& WithCodec(Aws::String&& value) { SetCodec(std::move(value)); return *this;}
    inline VideoConfiguration& WithCodec(const char* value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Software or hardware used to encode the video.</p>
     */
    inline const Aws::String& GetEncoder() const{ return m_encoder; }
    inline bool EncoderHasBeenSet() const { return m_encoderHasBeenSet; }
    inline void SetEncoder(const Aws::String& value) { m_encoderHasBeenSet = true; m_encoder = value; }
    inline void SetEncoder(Aws::String&& value) { m_encoderHasBeenSet = true; m_encoder = std::move(value); }
    inline void SetEncoder(const char* value) { m_encoderHasBeenSet = true; m_encoder.assign(value); }
    inline VideoConfiguration& WithEncoder(const Aws::String& value) { SetEncoder(value); return *this;}
    inline VideoConfiguration& WithEncoder(Aws::String&& value) { SetEncoder(std::move(value)); return *this;}
    inline VideoConfiguration& WithEncoder(const char* value) { SetEncoder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected ingest bitrate (bits per second). This is configured in the
     * encoder.</p>
     */
    inline long long GetTargetBitrate() const{ return m_targetBitrate; }
    inline bool TargetBitrateHasBeenSet() const { return m_targetBitrateHasBeenSet; }
    inline void SetTargetBitrate(long long value) { m_targetBitrateHasBeenSet = true; m_targetBitrate = value; }
    inline VideoConfiguration& WithTargetBitrate(long long value) { SetTargetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected ingest framerate. This is configured in the encoder.</p>
     */
    inline long long GetTargetFramerate() const{ return m_targetFramerate; }
    inline bool TargetFramerateHasBeenSet() const { return m_targetFramerateHasBeenSet; }
    inline void SetTargetFramerate(long long value) { m_targetFramerateHasBeenSet = true; m_targetFramerate = value; }
    inline VideoConfiguration& WithTargetFramerate(long long value) { SetTargetFramerate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video-resolution height in pixels.</p>
     */
    inline long long GetVideoHeight() const{ return m_videoHeight; }
    inline bool VideoHeightHasBeenSet() const { return m_videoHeightHasBeenSet; }
    inline void SetVideoHeight(long long value) { m_videoHeightHasBeenSet = true; m_videoHeight = value; }
    inline VideoConfiguration& WithVideoHeight(long long value) { SetVideoHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Video-resolution width in pixels.</p>
     */
    inline long long GetVideoWidth() const{ return m_videoWidth; }
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

    long long m_targetBitrate;
    bool m_targetBitrateHasBeenSet = false;

    long long m_targetFramerate;
    bool m_targetFramerateHasBeenSet = false;

    long long m_videoHeight;
    bool m_videoHeightHasBeenSet = false;

    long long m_videoWidth;
    bool m_videoWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
