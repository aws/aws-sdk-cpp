/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Information about when jobs are submitted, started, and finished is specified in
   * Unix epoch format in seconds.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Timing">AWS
   * API Reference</a></p>
   */
  class Timing
  {
  public:
    AWS_MEDIACONVERT_API Timing();
    AWS_MEDIACONVERT_API Timing(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Timing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline const Aws::Utils::DateTime& GetFinishTime() const{ return m_finishTime; }

    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline bool FinishTimeHasBeenSet() const { return m_finishTimeHasBeenSet; }

    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline void SetFinishTime(const Aws::Utils::DateTime& value) { m_finishTimeHasBeenSet = true; m_finishTime = value; }

    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline void SetFinishTime(Aws::Utils::DateTime&& value) { m_finishTimeHasBeenSet = true; m_finishTime = std::move(value); }

    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline Timing& WithFinishTime(const Aws::Utils::DateTime& value) { SetFinishTime(value); return *this;}

    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline Timing& WithFinishTime(Aws::Utils::DateTime&& value) { SetFinishTime(std::move(value)); return *this;}


    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline Timing& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline Timing& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline Timing& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline Timing& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_finishTime;
    bool m_finishTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
