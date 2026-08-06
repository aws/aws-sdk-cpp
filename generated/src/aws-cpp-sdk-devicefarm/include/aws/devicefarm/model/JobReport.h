/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/JobReportMetrics.h>

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
 * <p>Contains aggregated job-level metrics for a run.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/JobReport">AWS
 * API Reference</a></p>
 */
class JobReport {
 public:
  AWS_DEVICEFARM_API JobReport() = default;
  AWS_DEVICEFARM_API JobReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API JobReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message associated with the job report.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  JobReport& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregated job-level metrics for the run.</p>
   */
  inline const JobReportMetrics& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = JobReportMetrics>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = JobReportMetrics>
  JobReport& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A URL to the detailed job results.</p>
   */
  inline const Aws::String& GetJobDetailsUrl() const { return m_jobDetailsUrl; }
  inline bool JobDetailsUrlHasBeenSet() const { return m_jobDetailsUrlHasBeenSet; }
  template <typename JobDetailsUrlT = Aws::String>
  void SetJobDetailsUrl(JobDetailsUrlT&& value) {
    m_jobDetailsUrlHasBeenSet = true;
    m_jobDetailsUrl = std::forward<JobDetailsUrlT>(value);
  }
  template <typename JobDetailsUrlT = Aws::String>
  JobReport& WithJobDetailsUrl(JobDetailsUrlT&& value) {
    SetJobDetailsUrl(std::forward<JobDetailsUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  JobReportMetrics m_metrics;

  Aws::String m_jobDetailsUrl;
  bool m_messageHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
  bool m_jobDetailsUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
