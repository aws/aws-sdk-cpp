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
   * <p>An object representing a configuration of participant HLS recordings for
   * individual participant recording.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ParticipantRecordingHlsConfiguration">AWS
   * API Reference</a></p>
   */
  class ParticipantRecordingHlsConfiguration
  {
  public:
    AWS_IVSREALTIME_API ParticipantRecordingHlsConfiguration() = default;
    AWS_IVSREALTIME_API ParticipantRecordingHlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantRecordingHlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the target duration for recorded segments generated when recording a
     * stage participant. Segments may have durations longer than the specified value
     * when needed to ensure each segment begins with a keyframe. Default: 6.</p>
     */
    inline int GetTargetSegmentDurationSeconds() const { return m_targetSegmentDurationSeconds; }
    inline bool TargetSegmentDurationSecondsHasBeenSet() const { return m_targetSegmentDurationSecondsHasBeenSet; }
    inline void SetTargetSegmentDurationSeconds(int value) { m_targetSegmentDurationSecondsHasBeenSet = true; m_targetSegmentDurationSeconds = value; }
    inline ParticipantRecordingHlsConfiguration& WithTargetSegmentDurationSeconds(int value) { SetTargetSegmentDurationSeconds(value); return *this;}
    ///@}
  private:

    int m_targetSegmentDurationSeconds{0};
    bool m_targetSegmentDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
