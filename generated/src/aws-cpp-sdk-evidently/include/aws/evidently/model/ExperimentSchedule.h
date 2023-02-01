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
   * <p>This structure contains the time and date that Evidently completed the
   * analysis of the experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ExperimentSchedule">AWS
   * API Reference</a></p>
   */
  class ExperimentSchedule
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentSchedule();
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time and date that Evidently completed the analysis of the
     * experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisCompleteTime() const{ return m_analysisCompleteTime; }

    /**
     * <p>The time and date that Evidently completed the analysis of the
     * experiment.</p>
     */
    inline bool AnalysisCompleteTimeHasBeenSet() const { return m_analysisCompleteTimeHasBeenSet; }

    /**
     * <p>The time and date that Evidently completed the analysis of the
     * experiment.</p>
     */
    inline void SetAnalysisCompleteTime(const Aws::Utils::DateTime& value) { m_analysisCompleteTimeHasBeenSet = true; m_analysisCompleteTime = value; }

    /**
     * <p>The time and date that Evidently completed the analysis of the
     * experiment.</p>
     */
    inline void SetAnalysisCompleteTime(Aws::Utils::DateTime&& value) { m_analysisCompleteTimeHasBeenSet = true; m_analysisCompleteTime = std::move(value); }

    /**
     * <p>The time and date that Evidently completed the analysis of the
     * experiment.</p>
     */
    inline ExperimentSchedule& WithAnalysisCompleteTime(const Aws::Utils::DateTime& value) { SetAnalysisCompleteTime(value); return *this;}

    /**
     * <p>The time and date that Evidently completed the analysis of the
     * experiment.</p>
     */
    inline ExperimentSchedule& WithAnalysisCompleteTime(Aws::Utils::DateTime&& value) { SetAnalysisCompleteTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_analysisCompleteTime;
    bool m_analysisCompleteTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
