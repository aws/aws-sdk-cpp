/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the S3 destination for the report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReportS3Report">AWS
   * API Reference</a></p>
   */
  class ExperimentReportS3Report
  {
  public:
    AWS_FIS_API ExperimentReportS3Report() = default;
    AWS_FIS_API ExperimentReportS3Report(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportS3Report& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the generated report.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ExperimentReportS3Report& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The report type for the experiment report.</p>
     */
    inline const Aws::String& GetReportType() const { return m_reportType; }
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
    template<typename ReportTypeT = Aws::String>
    void SetReportType(ReportTypeT&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::forward<ReportTypeT>(value); }
    template<typename ReportTypeT = Aws::String>
    ExperimentReportS3Report& WithReportType(ReportTypeT&& value) { SetReportType(std::forward<ReportTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_reportType;
    bool m_reportTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
