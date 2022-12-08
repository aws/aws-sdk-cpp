/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> Information about potential recommendations that might be created from the
   * analysis of profiling data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/FindingsReportSummary">AWS
   * API Reference</a></p>
   */
  class FindingsReportSummary
  {
  public:
    AWS_CODEGURUPROFILER_API FindingsReportSummary();
    AWS_CODEGURUPROFILER_API FindingsReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API FindingsReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline FindingsReportSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline FindingsReportSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline FindingsReportSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetProfileEndTime() const{ return m_profileEndTime; }

    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline bool ProfileEndTimeHasBeenSet() const { return m_profileEndTimeHasBeenSet; }

    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline void SetProfileEndTime(const Aws::Utils::DateTime& value) { m_profileEndTimeHasBeenSet = true; m_profileEndTime = value; }

    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline void SetProfileEndTime(Aws::Utils::DateTime&& value) { m_profileEndTimeHasBeenSet = true; m_profileEndTime = std::move(value); }

    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline FindingsReportSummary& WithProfileEndTime(const Aws::Utils::DateTime& value) { SetProfileEndTime(value); return *this;}

    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline FindingsReportSummary& WithProfileEndTime(Aws::Utils::DateTime&& value) { SetProfileEndTime(std::move(value)); return *this;}


    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetProfileStartTime() const{ return m_profileStartTime; }

    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline bool ProfileStartTimeHasBeenSet() const { return m_profileStartTimeHasBeenSet; }

    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline void SetProfileStartTime(const Aws::Utils::DateTime& value) { m_profileStartTimeHasBeenSet = true; m_profileStartTime = value; }

    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline void SetProfileStartTime(Aws::Utils::DateTime&& value) { m_profileStartTimeHasBeenSet = true; m_profileStartTime = std::move(value); }

    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline FindingsReportSummary& WithProfileStartTime(const Aws::Utils::DateTime& value) { SetProfileStartTime(value); return *this;}

    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline FindingsReportSummary& WithProfileStartTime(Aws::Utils::DateTime&& value) { SetProfileStartTime(std::move(value)); return *this;}


    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline FindingsReportSummary& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline FindingsReportSummary& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline FindingsReportSummary& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>The total number of different recommendations that were found by the
     * analysis.</p>
     */
    inline int GetTotalNumberOfFindings() const{ return m_totalNumberOfFindings; }

    /**
     * <p>The total number of different recommendations that were found by the
     * analysis.</p>
     */
    inline bool TotalNumberOfFindingsHasBeenSet() const { return m_totalNumberOfFindingsHasBeenSet; }

    /**
     * <p>The total number of different recommendations that were found by the
     * analysis.</p>
     */
    inline void SetTotalNumberOfFindings(int value) { m_totalNumberOfFindingsHasBeenSet = true; m_totalNumberOfFindings = value; }

    /**
     * <p>The total number of different recommendations that were found by the
     * analysis.</p>
     */
    inline FindingsReportSummary& WithTotalNumberOfFindings(int value) { SetTotalNumberOfFindings(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_profileEndTime;
    bool m_profileEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_profileStartTime;
    bool m_profileStartTimeHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    int m_totalNumberOfFindings;
    bool m_totalNumberOfFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
