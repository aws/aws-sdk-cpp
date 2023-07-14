﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_MEDIALIVE_API AudioTrackSelection
  {
  public:
    AudioTrackSelection();
    AudioTrackSelection(Aws::Utils::Json::JsonView jsonValue);
    AudioTrackSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Vector<AudioTrack> m_tracks;
    bool m_tracksHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
