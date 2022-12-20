/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/AudioDolbyEDecode.h>
#include <aws/medialive/model/AudioTrack.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Audio Track Selection<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioTrackSelection">AWS
   * API Reference</a></p>
   */
  class AudioTrackSelection
  {
  public:
    AWS_MEDIALIVE_API AudioTrackSelection();
    AWS_MEDIALIVE_API AudioTrackSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioTrackSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline const Aws::Vector<AudioTrack>& GetTracks() const{ return m_tracks; }

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline void SetTracks(const Aws::Vector<AudioTrack>& value) { m_tracksHasBeenSet = true; m_tracks = value; }

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline void SetTracks(Aws::Vector<AudioTrack>&& value) { m_tracksHasBeenSet = true; m_tracks = std::move(value); }

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline AudioTrackSelection& WithTracks(const Aws::Vector<AudioTrack>& value) { SetTracks(value); return *this;}

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline AudioTrackSelection& WithTracks(Aws::Vector<AudioTrack>&& value) { SetTracks(std::move(value)); return *this;}

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline AudioTrackSelection& AddTracks(const AudioTrack& value) { m_tracksHasBeenSet = true; m_tracks.push_back(value); return *this; }

    /**
     * Selects one or more unique audio tracks from within a source.
     */
    inline AudioTrackSelection& AddTracks(AudioTrack&& value) { m_tracksHasBeenSet = true; m_tracks.push_back(std::move(value)); return *this; }


    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline const AudioDolbyEDecode& GetDolbyEDecode() const{ return m_dolbyEDecode; }

    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline bool DolbyEDecodeHasBeenSet() const { return m_dolbyEDecodeHasBeenSet; }

    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline void SetDolbyEDecode(const AudioDolbyEDecode& value) { m_dolbyEDecodeHasBeenSet = true; m_dolbyEDecode = value; }

    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline void SetDolbyEDecode(AudioDolbyEDecode&& value) { m_dolbyEDecodeHasBeenSet = true; m_dolbyEDecode = std::move(value); }

    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline AudioTrackSelection& WithDolbyEDecode(const AudioDolbyEDecode& value) { SetDolbyEDecode(value); return *this;}

    /**
     * Configure decoding options for Dolby E streams - these should be Dolby E frames
     * carried in PCM streams tagged with SMPTE-337
     */
    inline AudioTrackSelection& WithDolbyEDecode(AudioDolbyEDecode&& value) { SetDolbyEDecode(std::move(value)); return *this;}

  private:

    Aws::Vector<AudioTrack> m_tracks;
    bool m_tracksHasBeenSet = false;

    AudioDolbyEDecode m_dolbyEDecode;
    bool m_dolbyEDecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
