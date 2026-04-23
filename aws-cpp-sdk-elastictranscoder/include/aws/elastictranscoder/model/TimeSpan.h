/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICTRANSCODER_API TimeSpan
  {
  public:
    TimeSpan();
    TimeSpan(Aws::Utils::Json::JsonView jsonValue);
    TimeSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline TimeSpan& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline TimeSpan& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The place in the input file where you want a clip to start. The format can be
     * either HH:mm:ss.SSS (maximum value: 23:59:59.999; SSS is thousandths of a
     * second) or sssss.SSS (maximum value: 86399.999). If you don't specify a value,
     * Elastic Transcoder starts at the beginning of the input file.</p>
     */
    inline TimeSpan& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline TimeSpan& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline TimeSpan& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}

    /**
     * <p>The duration of the clip. The format can be either HH:mm:ss.SSS (maximum
     * value: 23:59:59.999; SSS is thousandths of a second) or sssss.SSS (maximum
     * value: 86399.999). If you don't specify a value, Elastic Transcoder creates an
     * output file from StartTime to the end of the file.</p> <p>If you specify a value
     * longer than the duration of the input file, Elastic Transcoder transcodes the
     * file and returns a warning message.</p>
     */
    inline TimeSpan& WithDuration(const char* value) { SetDuration(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::String m_duration;
    bool m_durationHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
