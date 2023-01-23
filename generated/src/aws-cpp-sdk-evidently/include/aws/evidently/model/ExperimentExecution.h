/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure contains the date and time that the experiment started and
   * ended.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ExperimentExecution">AWS
   * API Reference</a></p>
   */
  class ExperimentExecution
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentExecution();
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTime() const{ return m_endedTime; }

    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline bool EndedTimeHasBeenSet() const { return m_endedTimeHasBeenSet; }

    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline void SetEndedTime(const Aws::Utils::DateTime& value) { m_endedTimeHasBeenSet = true; m_endedTime = value; }

    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline void SetEndedTime(Aws::Utils::DateTime&& value) { m_endedTimeHasBeenSet = true; m_endedTime = std::move(value); }

    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline ExperimentExecution& WithEndedTime(const Aws::Utils::DateTime& value) { SetEndedTime(value); return *this;}

    /**
     * <p>The date and time that the experiment ended.</p>
     */
    inline ExperimentExecution& WithEndedTime(Aws::Utils::DateTime&& value) { SetEndedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTime() const{ return m_startedTime; }

    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline bool StartedTimeHasBeenSet() const { return m_startedTimeHasBeenSet; }

    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline void SetStartedTime(const Aws::Utils::DateTime& value) { m_startedTimeHasBeenSet = true; m_startedTime = value; }

    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline void SetStartedTime(Aws::Utils::DateTime&& value) { m_startedTimeHasBeenSet = true; m_startedTime = std::move(value); }

    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline ExperimentExecution& WithStartedTime(const Aws::Utils::DateTime& value) { SetStartedTime(value); return *this;}

    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline ExperimentExecution& WithStartedTime(Aws::Utils::DateTime&& value) { SetStartedTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endedTime;
    bool m_endedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startedTime;
    bool m_startedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
