/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DeviceFarm {
namespace Model {

/**
 * <p>Contains aggregated metrics across all jobs in a run.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/JobReportMetrics">AWS
 * API Reference</a></p>
 */
class JobReportMetrics {
 public:
  AWS_DEVICEFARM_API JobReportMetrics() = default;
  AWS_DEVICEFARM_API JobReportMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API JobReportMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of jobs in the run.</p>
   */
  inline int GetJobsTotal() const { return m_jobsTotal; }
  inline bool JobsTotalHasBeenSet() const { return m_jobsTotalHasBeenSet; }
  inline void SetJobsTotal(int value) {
    m_jobsTotalHasBeenSet = true;
    m_jobsTotal = value;
  }
  inline JobReportMetrics& WithJobsTotal(int value) {
    SetJobsTotal(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of jobs that passed.</p>
   */
  inline int GetJobsPassed() const { return m_jobsPassed; }
  inline bool JobsPassedHasBeenSet() const { return m_jobsPassedHasBeenSet; }
  inline void SetJobsPassed(int value) {
    m_jobsPassedHasBeenSet = true;
    m_jobsPassed = value;
  }
  inline JobReportMetrics& WithJobsPassed(int value) {
    SetJobsPassed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of jobs that failed.</p>
   */
  inline int GetJobsFailed() const { return m_jobsFailed; }
  inline bool JobsFailedHasBeenSet() const { return m_jobsFailedHasBeenSet; }
  inline void SetJobsFailed(int value) {
    m_jobsFailedHasBeenSet = true;
    m_jobsFailed = value;
  }
  inline JobReportMetrics& WithJobsFailed(int value) {
    SetJobsFailed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of jobs that were skipped.</p>
   */
  inline int GetJobsSkipped() const { return m_jobsSkipped; }
  inline bool JobsSkippedHasBeenSet() const { return m_jobsSkippedHasBeenSet; }
  inline void SetJobsSkipped(int value) {
    m_jobsSkippedHasBeenSet = true;
    m_jobsSkipped = value;
  }
  inline JobReportMetrics& WithJobsSkipped(int value) {
    SetJobsSkipped(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of jobs that errored.</p>
   */
  inline int GetJobsErrored() const { return m_jobsErrored; }
  inline bool JobsErroredHasBeenSet() const { return m_jobsErroredHasBeenSet; }
  inline void SetJobsErrored(int value) {
    m_jobsErroredHasBeenSet = true;
    m_jobsErrored = value;
  }
  inline JobReportMetrics& WithJobsErrored(int value) {
    SetJobsErrored(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of jobs that were stopped.</p>
   */
  inline int GetJobsStopped() const { return m_jobsStopped; }
  inline bool JobsStoppedHasBeenSet() const { return m_jobsStoppedHasBeenSet; }
  inline void SetJobsStopped(int value) {
    m_jobsStoppedHasBeenSet = true;
    m_jobsStopped = value;
  }
  inline JobReportMetrics& WithJobsStopped(int value) {
    SetJobsStopped(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of jobs that passed.</p>
   */
  inline double GetJobsPassedPercentage() const { return m_jobsPassedPercentage; }
  inline bool JobsPassedPercentageHasBeenSet() const { return m_jobsPassedPercentageHasBeenSet; }
  inline void SetJobsPassedPercentage(double value) {
    m_jobsPassedPercentageHasBeenSet = true;
    m_jobsPassedPercentage = value;
  }
  inline JobReportMetrics& WithJobsPassedPercentage(double value) {
    SetJobsPassedPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total execution duration of all jobs in the run, in seconds.</p>
   */
  inline double GetTotalJobExecutionDurationSeconds() const { return m_totalJobExecutionDurationSeconds; }
  inline bool TotalJobExecutionDurationSecondsHasBeenSet() const { return m_totalJobExecutionDurationSecondsHasBeenSet; }
  inline void SetTotalJobExecutionDurationSeconds(double value) {
    m_totalJobExecutionDurationSecondsHasBeenSet = true;
    m_totalJobExecutionDurationSeconds = value;
  }
  inline JobReportMetrics& WithTotalJobExecutionDurationSeconds(double value) {
    SetTotalJobExecutionDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The average execution duration of jobs in the run, in seconds.</p>
   */
  inline double GetAverageJobExecutionDurationSeconds() const { return m_averageJobExecutionDurationSeconds; }
  inline bool AverageJobExecutionDurationSecondsHasBeenSet() const { return m_averageJobExecutionDurationSecondsHasBeenSet; }
  inline void SetAverageJobExecutionDurationSeconds(double value) {
    m_averageJobExecutionDurationSecondsHasBeenSet = true;
    m_averageJobExecutionDurationSeconds = value;
  }
  inline JobReportMetrics& WithAverageJobExecutionDurationSeconds(double value) {
    SetAverageJobExecutionDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The median execution duration of jobs in the run, in seconds.</p>
   */
  inline double GetMedianJobExecutionDurationSeconds() const { return m_medianJobExecutionDurationSeconds; }
  inline bool MedianJobExecutionDurationSecondsHasBeenSet() const { return m_medianJobExecutionDurationSecondsHasBeenSet; }
  inline void SetMedianJobExecutionDurationSeconds(double value) {
    m_medianJobExecutionDurationSecondsHasBeenSet = true;
    m_medianJobExecutionDurationSeconds = value;
  }
  inline JobReportMetrics& WithMedianJobExecutionDurationSeconds(double value) {
    SetMedianJobExecutionDurationSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_jobsTotal{0};

  int m_jobsPassed{0};

  int m_jobsFailed{0};

  int m_jobsSkipped{0};

  int m_jobsErrored{0};

  int m_jobsStopped{0};

  double m_jobsPassedPercentage{0.0};

  double m_totalJobExecutionDurationSeconds{0.0};

  double m_averageJobExecutionDurationSeconds{0.0};

  double m_medianJobExecutionDurationSeconds{0.0};
  bool m_jobsTotalHasBeenSet = false;
  bool m_jobsPassedHasBeenSet = false;
  bool m_jobsFailedHasBeenSet = false;
  bool m_jobsSkippedHasBeenSet = false;
  bool m_jobsErroredHasBeenSet = false;
  bool m_jobsStoppedHasBeenSet = false;
  bool m_jobsPassedPercentageHasBeenSet = false;
  bool m_totalJobExecutionDurationSecondsHasBeenSet = false;
  bool m_averageJobExecutionDurationSecondsHasBeenSet = false;
  bool m_medianJobExecutionDurationSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
