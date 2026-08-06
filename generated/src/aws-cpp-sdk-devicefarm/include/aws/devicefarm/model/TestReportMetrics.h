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
 * <p>Contains aggregated metrics across all tests in a job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TestReportMetrics">AWS
 * API Reference</a></p>
 */
class TestReportMetrics {
 public:
  AWS_DEVICEFARM_API TestReportMetrics() = default;
  AWS_DEVICEFARM_API TestReportMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API TestReportMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of tests in the job.</p>
   */
  inline int GetTestsTotal() const { return m_testsTotal; }
  inline bool TestsTotalHasBeenSet() const { return m_testsTotalHasBeenSet; }
  inline void SetTestsTotal(int value) {
    m_testsTotalHasBeenSet = true;
    m_testsTotal = value;
  }
  inline TestReportMetrics& WithTestsTotal(int value) {
    SetTestsTotal(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tests that passed.</p>
   */
  inline int GetTestsPassed() const { return m_testsPassed; }
  inline bool TestsPassedHasBeenSet() const { return m_testsPassedHasBeenSet; }
  inline void SetTestsPassed(int value) {
    m_testsPassedHasBeenSet = true;
    m_testsPassed = value;
  }
  inline TestReportMetrics& WithTestsPassed(int value) {
    SetTestsPassed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tests that failed.</p>
   */
  inline int GetTestsFailed() const { return m_testsFailed; }
  inline bool TestsFailedHasBeenSet() const { return m_testsFailedHasBeenSet; }
  inline void SetTestsFailed(int value) {
    m_testsFailedHasBeenSet = true;
    m_testsFailed = value;
  }
  inline TestReportMetrics& WithTestsFailed(int value) {
    SetTestsFailed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tests that were skipped.</p>
   */
  inline int GetTestsSkipped() const { return m_testsSkipped; }
  inline bool TestsSkippedHasBeenSet() const { return m_testsSkippedHasBeenSet; }
  inline void SetTestsSkipped(int value) {
    m_testsSkippedHasBeenSet = true;
    m_testsSkipped = value;
  }
  inline TestReportMetrics& WithTestsSkipped(int value) {
    SetTestsSkipped(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tests that errored.</p>
   */
  inline int GetTestsErrored() const { return m_testsErrored; }
  inline bool TestsErroredHasBeenSet() const { return m_testsErroredHasBeenSet; }
  inline void SetTestsErrored(int value) {
    m_testsErroredHasBeenSet = true;
    m_testsErrored = value;
  }
  inline TestReportMetrics& WithTestsErrored(int value) {
    SetTestsErrored(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of tests with other result types.</p>
   */
  inline int GetTestsOther() const { return m_testsOther; }
  inline bool TestsOtherHasBeenSet() const { return m_testsOtherHasBeenSet; }
  inline void SetTestsOther(int value) {
    m_testsOtherHasBeenSet = true;
    m_testsOther = value;
  }
  inline TestReportMetrics& WithTestsOther(int value) {
    SetTestsOther(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of tests that passed.</p>
   */
  inline double GetTestsPassedPercentage() const { return m_testsPassedPercentage; }
  inline bool TestsPassedPercentageHasBeenSet() const { return m_testsPassedPercentageHasBeenSet; }
  inline void SetTestsPassedPercentage(double value) {
    m_testsPassedPercentageHasBeenSet = true;
    m_testsPassedPercentage = value;
  }
  inline TestReportMetrics& WithTestsPassedPercentage(double value) {
    SetTestsPassedPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total execution duration of all tests in the job, in seconds.</p>
   */
  inline double GetTotalTestExecutionDurationSeconds() const { return m_totalTestExecutionDurationSeconds; }
  inline bool TotalTestExecutionDurationSecondsHasBeenSet() const { return m_totalTestExecutionDurationSecondsHasBeenSet; }
  inline void SetTotalTestExecutionDurationSeconds(double value) {
    m_totalTestExecutionDurationSecondsHasBeenSet = true;
    m_totalTestExecutionDurationSeconds = value;
  }
  inline TestReportMetrics& WithTotalTestExecutionDurationSeconds(double value) {
    SetTotalTestExecutionDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The median execution duration of tests in the job, in seconds.</p>
   */
  inline double GetMedianTestExecutionDurationSeconds() const { return m_medianTestExecutionDurationSeconds; }
  inline bool MedianTestExecutionDurationSecondsHasBeenSet() const { return m_medianTestExecutionDurationSecondsHasBeenSet; }
  inline void SetMedianTestExecutionDurationSeconds(double value) {
    m_medianTestExecutionDurationSecondsHasBeenSet = true;
    m_medianTestExecutionDurationSeconds = value;
  }
  inline TestReportMetrics& WithMedianTestExecutionDurationSeconds(double value) {
    SetMedianTestExecutionDurationSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_testsTotal{0};

  int m_testsPassed{0};

  int m_testsFailed{0};

  int m_testsSkipped{0};

  int m_testsErrored{0};

  int m_testsOther{0};

  double m_testsPassedPercentage{0.0};

  double m_totalTestExecutionDurationSeconds{0.0};

  double m_medianTestExecutionDurationSeconds{0.0};
  bool m_testsTotalHasBeenSet = false;
  bool m_testsPassedHasBeenSet = false;
  bool m_testsFailedHasBeenSet = false;
  bool m_testsSkippedHasBeenSet = false;
  bool m_testsErroredHasBeenSet = false;
  bool m_testsOtherHasBeenSet = false;
  bool m_testsPassedPercentageHasBeenSet = false;
  bool m_totalTestExecutionDurationSecondsHasBeenSet = false;
  bool m_medianTestExecutionDurationSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
