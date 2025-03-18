/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Settings that determine when a clip begins and how long it
   * lasts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/TimeSpan">AWS
   * API Reference</a></p>
   */
  class TimeSpan
  {
  public:
    AWS_ELASTICTRANSCODER_API TimeSpan() = default;
    AWS_ELASTICTRANSCODER_API TimeSpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API TimeSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    TimeSpan& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline const Aws::String& GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    template<typename DurationT = Aws::String>
    void SetDuration(DurationT&& value) { m_durationHasBeenSet = true; m_duration = std::forward<DurationT>(value); }
    template<typename DurationT = Aws::String>
    TimeSpan& WithDuration(DurationT&& value) { SetDuration(std::forward<DurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
