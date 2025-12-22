/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ReportOutputConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Configuration for automatic report generation for plan executions. When
 * configured, Region switch automatically generates a report after each plan
 * execution that includes execution events, plan configuration, and CloudWatch
 * alarm states.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ReportConfiguration">AWS
 * API Reference</a></p>
 */
class ReportConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API ReportConfiguration() = default;
  AWS_ARCREGIONSWITCH_API ReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API ReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The output configuration for the report.</p>
   */
  inline const Aws::Vector<ReportOutputConfiguration>& GetReportOutput() const { return m_reportOutput; }
  inline bool ReportOutputHasBeenSet() const { return m_reportOutputHasBeenSet; }
  template <typename ReportOutputT = Aws::Vector<ReportOutputConfiguration>>
  void SetReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput = std::forward<ReportOutputT>(value);
  }
  template <typename ReportOutputT = Aws::Vector<ReportOutputConfiguration>>
  ReportConfiguration& WithReportOutput(ReportOutputT&& value) {
    SetReportOutput(std::forward<ReportOutputT>(value));
    return *this;
  }
  template <typename ReportOutputT = ReportOutputConfiguration>
  ReportConfiguration& AddReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput.emplace_back(std::forward<ReportOutputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ReportOutputConfiguration> m_reportOutput;
  bool m_reportOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
