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
    AWS_CODEGURUPROFILER_API FindingsReportSummary() = default;
    AWS_CODEGURUPROFILER_API FindingsReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API FindingsReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the recommendation report.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FindingsReportSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end time of the period during which the metric is flagged as anomalous.
     * This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetProfileEndTime() const { return m_profileEndTime; }
    inline bool ProfileEndTimeHasBeenSet() const { return m_profileEndTimeHasBeenSet; }
    template<typename ProfileEndTimeT = Aws::Utils::DateTime>
    void SetProfileEndTime(ProfileEndTimeT&& value) { m_profileEndTimeHasBeenSet = true; m_profileEndTime = std::forward<ProfileEndTimeT>(value); }
    template<typename ProfileEndTimeT = Aws::Utils::DateTime>
    FindingsReportSummary& WithProfileEndTime(ProfileEndTimeT&& value) { SetProfileEndTime(std::forward<ProfileEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetProfileStartTime() const { return m_profileStartTime; }
    inline bool ProfileStartTimeHasBeenSet() const { return m_profileStartTimeHasBeenSet; }
    template<typename ProfileStartTimeT = Aws::Utils::DateTime>
    void SetProfileStartTime(ProfileStartTimeT&& value) { m_profileStartTimeHasBeenSet = true; m_profileStartTime = std::forward<ProfileStartTimeT>(value); }
    template<typename ProfileStartTimeT = Aws::Utils::DateTime>
    FindingsReportSummary& WithProfileStartTime(ProfileStartTimeT&& value) { SetProfileStartTime(std::forward<ProfileStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group that is associated with the analysis
     * data.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    FindingsReportSummary& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of different recommendations that were found by the
     * analysis.</p>
     */
    inline int GetTotalNumberOfFindings() const { return m_totalNumberOfFindings; }
    inline bool TotalNumberOfFindingsHasBeenSet() const { return m_totalNumberOfFindingsHasBeenSet; }
    inline void SetTotalNumberOfFindings(int value) { m_totalNumberOfFindingsHasBeenSet = true; m_totalNumberOfFindings = value; }
    inline FindingsReportSummary& WithTotalNumberOfFindings(int value) { SetTotalNumberOfFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_profileEndTime{};
    bool m_profileEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_profileStartTime{};
    bool m_profileStartTimeHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    int m_totalNumberOfFindings{0};
    bool m_totalNumberOfFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
