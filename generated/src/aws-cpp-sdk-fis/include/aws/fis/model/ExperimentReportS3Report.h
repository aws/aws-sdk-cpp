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
    AWS_FIS_API ExperimentReportS3Report();
    AWS_FIS_API ExperimentReportS3Report(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportS3Report& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the generated report.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ExperimentReportS3Report& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExperimentReportS3Report& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExperimentReportS3Report& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The report type for the experiment report.</p>
     */
    inline const Aws::String& GetReportType() const{ return m_reportType; }
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
    inline void SetReportType(const Aws::String& value) { m_reportTypeHasBeenSet = true; m_reportType = value; }
    inline void SetReportType(Aws::String&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::move(value); }
    inline void SetReportType(const char* value) { m_reportTypeHasBeenSet = true; m_reportType.assign(value); }
    inline ExperimentReportS3Report& WithReportType(const Aws::String& value) { SetReportType(value); return *this;}
    inline ExperimentReportS3Report& WithReportType(Aws::String&& value) { SetReportType(std::move(value)); return *this;}
    inline ExperimentReportS3Report& WithReportType(const char* value) { SetReportType(value); return *this;}
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
