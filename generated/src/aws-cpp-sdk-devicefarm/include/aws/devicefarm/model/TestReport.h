/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestReportMetrics.h>

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
 * <p>Contains aggregated test-level metrics for a job.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TestReport">AWS
 * API Reference</a></p>
 */
class TestReport {
 public:
  AWS_DEVICEFARM_API TestReport() = default;
  AWS_DEVICEFARM_API TestReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API TestReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message associated with the test report.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TestReport& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregated test-level metrics for the job.</p>
   */
  inline const TestReportMetrics& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = TestReportMetrics>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = TestReportMetrics>
  TestReport& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A URL to the detailed test results.</p>
   */
  inline const Aws::String& GetTestDetailsUrl() const { return m_testDetailsUrl; }
  inline bool TestDetailsUrlHasBeenSet() const { return m_testDetailsUrlHasBeenSet; }
  template <typename TestDetailsUrlT = Aws::String>
  void SetTestDetailsUrl(TestDetailsUrlT&& value) {
    m_testDetailsUrlHasBeenSet = true;
    m_testDetailsUrl = std::forward<TestDetailsUrlT>(value);
  }
  template <typename TestDetailsUrlT = Aws::String>
  TestReport& WithTestDetailsUrl(TestDetailsUrlT&& value) {
    SetTestDetailsUrl(std::forward<TestDetailsUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  TestReportMetrics m_metrics;

  Aws::String m_testDetailsUrl;
  bool m_messageHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
  bool m_testDetailsUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
