/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/ReportOutput.h>
#include <aws/core/utils/DateTime.h>

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
 * <p>Information about a generated execution report.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GeneratedReport">AWS
 * API Reference</a></p>
 */
class GeneratedReport {
 public:
  AWS_ARCREGIONSWITCH_API GeneratedReport() = default;
  AWS_ARCREGIONSWITCH_API GeneratedReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API GeneratedReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the report was generated.</p>
   */
  inline const Aws::Utils::DateTime& GetReportGenerationTime() const { return m_reportGenerationTime; }
  inline bool ReportGenerationTimeHasBeenSet() const { return m_reportGenerationTimeHasBeenSet; }
  template <typename ReportGenerationTimeT = Aws::Utils::DateTime>
  void SetReportGenerationTime(ReportGenerationTimeT&& value) {
    m_reportGenerationTimeHasBeenSet = true;
    m_reportGenerationTime = std::forward<ReportGenerationTimeT>(value);
  }
  template <typename ReportGenerationTimeT = Aws::Utils::DateTime>
  GeneratedReport& WithReportGenerationTime(ReportGenerationTimeT&& value) {
    SetReportGenerationTime(std::forward<ReportGenerationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output location or cause of a failure in report generation.</p>
   */
  inline const ReportOutput& GetReportOutput() const { return m_reportOutput; }
  inline bool ReportOutputHasBeenSet() const { return m_reportOutputHasBeenSet; }
  template <typename ReportOutputT = ReportOutput>
  void SetReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput = std::forward<ReportOutputT>(value);
  }
  template <typename ReportOutputT = ReportOutput>
  GeneratedReport& WithReportOutput(ReportOutputT&& value) {
    SetReportOutput(std::forward<ReportOutputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_reportGenerationTime{};

  ReportOutput m_reportOutput;
  bool m_reportGenerationTimeHasBeenSet = false;
  bool m_reportOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
