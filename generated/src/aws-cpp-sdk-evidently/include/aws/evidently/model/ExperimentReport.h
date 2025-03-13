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
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentReport() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ExperimentReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the report.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    ExperimentReport& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric that is analyzed in this experiment report.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    ExperimentReport& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis used for this report.</p>
     */
    inline ExperimentReportName GetReportName() const { return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    inline void SetReportName(ExperimentReportName value) { m_reportNameHasBeenSet = true; m_reportName = value; }
    inline ExperimentReport& WithReportName(ExperimentReportName value) { SetReportName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variation that this report pertains to.</p>
     */
    inline const Aws::String& GetTreatmentName() const { return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    template<typename TreatmentNameT = Aws::String>
    void SetTreatmentName(TreatmentNameT&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::forward<TreatmentNameT>(value); }
    template<typename TreatmentNameT = Aws::String>
    ExperimentReport& WithTreatmentName(TreatmentNameT&& value) { SetTreatmentName(std::forward<TreatmentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    ExperimentReportName m_reportName{ExperimentReportName::NOT_SET};
    bool m_reportNameHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
