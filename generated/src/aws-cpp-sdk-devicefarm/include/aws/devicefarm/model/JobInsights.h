/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/ReportStatus.h>
#include <aws/devicefarm/model/TestReport.h>

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
 * <p>Contains insights for a job, including report status, and test-level
 * aggregated metrics such as per test execution time and median test execution
 * time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/JobInsights">AWS
 * API Reference</a></p>
 */
class JobInsights {
 public:
  AWS_DEVICEFARM_API JobInsights() = default;
  AWS_DEVICEFARM_API JobInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API JobInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the insights report for the job.</p>
   */
  inline ReportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline JobInsights& WithStatus(ReportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The test-level aggregated report for the job.</p>
   */
  inline const TestReport& GetTestReport() const { return m_testReport; }
  inline bool TestReportHasBeenSet() const { return m_testReportHasBeenSet; }
  template <typename TestReportT = TestReport>
  void SetTestReport(TestReportT&& value) {
    m_testReportHasBeenSet = true;
    m_testReport = std::forward<TestReportT>(value);
  }
  template <typename TestReportT = TestReport>
  JobInsights& WithTestReport(TestReportT&& value) {
    SetTestReport(std::forward<TestReportT>(value));
    return *this;
  }
  ///@}
 private:
  ReportStatus m_status{ReportStatus::NOT_SET};

  TestReport m_testReport;
  bool m_statusHasBeenSet = false;
  bool m_testReportHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
