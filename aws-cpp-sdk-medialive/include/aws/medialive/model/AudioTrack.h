/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Audio Track<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioTrack">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AudioTrack
  {
  public:
    AudioTrack();
    AudioTrack(Aws::Utils::Json::JsonView jsonValue);
    AudioTrack& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 1-based integer value that maps to a specific audio track
     */
    inline int GetTrack() const{ return m_track; }

    /**
     * 1-based integer value that maps to a specific audio track
     */
    inline bool TrackHasBeenSet() const { return m_trackHasBeenSet; }

    /**
     * 1-based integer value that maps to a specific audio track
     */
    inline void SetTrack(int value) { m_trackHasBeenSet = true; m_track = value; }

    /**
     * 1-based integer value that maps to a specific audio track
     */
    inline AudioTrack& WithTrack(int value) { SetTrack(value); return *this;}

  private:

    int m_track;
    bool m_trackHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
