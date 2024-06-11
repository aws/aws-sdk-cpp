/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/ExperimentReportName.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains results of an experiment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ExperimentReport">AWS
   * API Reference</a></p>
   */
  class ExperimentReport
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentReport();
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the report.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ExperimentReport& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ExperimentReport& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ExperimentReport& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric that is analyzed in this experiment report.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline ExperimentReport& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline ExperimentReport& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline ExperimentReport& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis used for this report.</p>
     */
    inline const ExperimentReportName& GetReportName() const{ return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    inline void SetReportName(const ExperimentReportName& value) { m_reportNameHasBeenSet = true; m_reportName = value; }
    inline void SetReportName(ExperimentReportName&& value) { m_reportNameHasBeenSet = true; m_reportName = std::move(value); }
    inline ExperimentReport& WithReportName(const ExperimentReportName& value) { SetReportName(value); return *this;}
    inline ExperimentReport& WithReportName(ExperimentReportName&& value) { SetReportName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that this report pertains to.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }
    inline ExperimentReport& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}
    inline ExperimentReport& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}
    inline ExperimentReport& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    ExperimentReportName m_reportName;
    bool m_reportNameHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
