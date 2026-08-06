/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/JobReport.h>
#include <aws/devicefarm/model/ReportStatus.h>

#include <utility>

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
 * <p>Contains insights for a run, including report status, and job-level
 * aggregated metrics such as per job execution time and median job execution
 * time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RunInsights">AWS
 * API Reference</a></p>
 */
class RunInsights {
 public:
  AWS_DEVICEFARM_API RunInsights() = default;
  AWS_DEVICEFARM_API RunInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API RunInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the insights report for the run.</p>
   */
  inline ReportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RunInsights& WithStatus(ReportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job-level aggregated report for the run.</p>
   */
  inline const JobReport& GetJobReport() const { return m_jobReport; }
  inline bool JobReportHasBeenSet() const { return m_jobReportHasBeenSet; }
  template <typename JobReportT = JobReport>
  void SetJobReport(JobReportT&& value) {
    m_jobReportHasBeenSet = true;
    m_jobReport = std::forward<JobReportT>(value);
  }
  template <typename JobReportT = JobReport>
  RunInsights& WithJobReport(JobReportT&& value) {
    SetJobReport(std::forward<JobReportT>(value));
    return *this;
  }
  ///@}
 private:
  ReportStatus m_status{ReportStatus::NOT_SET};

  JobReport m_jobReport;
  bool m_statusHasBeenSet = false;
  bool m_jobReportHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
