/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/FailedReportOutput.h>
#include <aws/arc-region-switch/model/S3ReportOutput.h>

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
 * <p>The output location or cause of a failure in report generation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ReportOutput">AWS
 * API Reference</a></p>
 */
class ReportOutput {
 public:
  AWS_ARCREGIONSWITCH_API ReportOutput() = default;
  AWS_ARCREGIONSWITCH_API ReportOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API ReportOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about a report delivered to Amazon S3.</p>
   */
  inline const S3ReportOutput& GetS3ReportOutput() const { return m_s3ReportOutput; }
  inline bool S3ReportOutputHasBeenSet() const { return m_s3ReportOutputHasBeenSet; }
  template <typename S3ReportOutputT = S3ReportOutput>
  void SetS3ReportOutput(S3ReportOutputT&& value) {
    m_s3ReportOutputHasBeenSet = true;
    m_s3ReportOutput = std::forward<S3ReportOutputT>(value);
  }
  template <typename S3ReportOutputT = S3ReportOutput>
  ReportOutput& WithS3ReportOutput(S3ReportOutputT&& value) {
    SetS3ReportOutput(std::forward<S3ReportOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details about a failed report generation.</p>
   */
  inline const FailedReportOutput& GetFailedReportOutput() const { return m_failedReportOutput; }
  inline bool FailedReportOutputHasBeenSet() const { return m_failedReportOutputHasBeenSet; }
  template <typename FailedReportOutputT = FailedReportOutput>
  void SetFailedReportOutput(FailedReportOutputT&& value) {
    m_failedReportOutputHasBeenSet = true;
    m_failedReportOutput = std::forward<FailedReportOutputT>(value);
  }
  template <typename FailedReportOutputT = FailedReportOutput>
  ReportOutput& WithFailedReportOutput(FailedReportOutputT&& value) {
    SetFailedReportOutput(std::forward<FailedReportOutputT>(value));
    return *this;
  }
  ///@}
 private:
  S3ReportOutput m_s3ReportOutput;

  FailedReportOutput m_failedReportOutput;
  bool m_s3ReportOutputHasBeenSet = false;
  bool m_failedReportOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
