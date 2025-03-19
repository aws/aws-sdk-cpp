/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentReportState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fis/model/ExperimentReportS3Report.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the experiment report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReport">AWS
   * API Reference</a></p>
   */
  class ExperimentReport
  {
  public:
    AWS_FIS_API ExperimentReport() = default;
    AWS_FIS_API ExperimentReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the experiment report.</p>
     */
    inline const ExperimentReportState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = ExperimentReportState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = ExperimentReportState>
    ExperimentReport& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 destination of the experiment report.</p>
     */
    inline const Aws::Vector<ExperimentReportS3Report>& GetS3Reports() const { return m_s3Reports; }
    inline bool S3ReportsHasBeenSet() const { return m_s3ReportsHasBeenSet; }
    template<typename S3ReportsT = Aws::Vector<ExperimentReportS3Report>>
    void SetS3Reports(S3ReportsT&& value) { m_s3ReportsHasBeenSet = true; m_s3Reports = std::forward<S3ReportsT>(value); }
    template<typename S3ReportsT = Aws::Vector<ExperimentReportS3Report>>
    ExperimentReport& WithS3Reports(S3ReportsT&& value) { SetS3Reports(std::forward<S3ReportsT>(value)); return *this;}
    template<typename S3ReportsT = ExperimentReportS3Report>
    ExperimentReport& AddS3Reports(S3ReportsT&& value) { m_s3ReportsHasBeenSet = true; m_s3Reports.emplace_back(std::forward<S3ReportsT>(value)); return *this; }
    ///@}
  private:

    ExperimentReportState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<ExperimentReportS3Report> m_s3Reports;
    bool m_s3ReportsHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
