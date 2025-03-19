/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/model/ExperimentBaseStat.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ExperimentReportName.h>
#include <aws/evidently/model/ExperimentResultRequestType.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class GetExperimentResultsRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResultsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExperimentResults"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The statistic used to calculate experiment results. Currently the only valid
     * value is <code>mean</code>, which uses the mean of the collected values as the
     * statistic.</p>
     */
    inline ExperimentBaseStat GetBaseStat() const { return m_baseStat; }
    inline bool BaseStatHasBeenSet() const { return m_baseStatHasBeenSet; }
    inline void SetBaseStat(ExperimentBaseStat value) { m_baseStatHasBeenSet = true; m_baseStat = value; }
    inline GetExperimentResultsRequest& WithBaseStat(ExperimentBaseStat value) { SetBaseStat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment ended, if it is completed. This must be
     * no longer than 30 days after the experiment start time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetExperimentResultsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment to retrieve the results of.</p>
     */
    inline const Aws::String& GetExperiment() const { return m_experiment; }
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }
    template<typename ExperimentT = Aws::String>
    void SetExperiment(ExperimentT&& value) { m_experimentHasBeenSet = true; m_experiment = std::forward<ExperimentT>(value); }
    template<typename ExperimentT = Aws::String>
    GetExperimentResultsRequest& WithExperiment(ExperimentT&& value) { SetExperiment(std::forward<ExperimentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the experiment metrics that you want to see the results of.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricNames() const { return m_metricNames; }
    inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
    template<typename MetricNamesT = Aws::Vector<Aws::String>>
    void SetMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames = std::forward<MetricNamesT>(value); }
    template<typename MetricNamesT = Aws::Vector<Aws::String>>
    GetExperimentResultsRequest& WithMetricNames(MetricNamesT&& value) { SetMetricNames(std::forward<MetricNamesT>(value)); return *this;}
    template<typename MetricNamesT = Aws::String>
    GetExperimentResultsRequest& AddMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames.emplace_back(std::forward<MetricNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In seconds, the amount of time to aggregate results together. </p>
     */
    inline long long GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(long long value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetExperimentResultsRequest& WithPeriod(long long value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * see the results of.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    GetExperimentResultsRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the report types that you want to see. Currently,
     * <code>BayesianInference</code> is the only valid value.</p>
     */
    inline const Aws::Vector<ExperimentReportName>& GetReportNames() const { return m_reportNames; }
    inline bool ReportNamesHasBeenSet() const { return m_reportNamesHasBeenSet; }
    template<typename ReportNamesT = Aws::Vector<ExperimentReportName>>
    void SetReportNames(ReportNamesT&& value) { m_reportNamesHasBeenSet = true; m_reportNames = std::forward<ReportNamesT>(value); }
    template<typename ReportNamesT = Aws::Vector<ExperimentReportName>>
    GetExperimentResultsRequest& WithReportNames(ReportNamesT&& value) { SetReportNames(std::forward<ReportNamesT>(value)); return *this;}
    inline GetExperimentResultsRequest& AddReportNames(ExperimentReportName value) { m_reportNamesHasBeenSet = true; m_reportNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The statistics that you want to see in the returned results.</p> <ul> <li>
     * <p> <code>PValue</code> specifies to use p-values for the results. A p-value is
     * used in hypothesis testing to measure how often you are willing to make a
     * mistake in rejecting the null hypothesis. A general practice is to reject the
     * null hypothesis and declare that the results are statistically significant when
     * the p-value is less than 0.05.</p> </li> <li> <p>
     * <code>ConfidenceInterval</code> specifies a confidence interval for the results.
     * The confidence interval represents the range of values for the chosen metric
     * that is likely to contain the true difference between the <code>baseStat</code>
     * of a variation and the baseline. Evidently returns the 95% confidence interval.
     * </p> </li> <li> <p> <code>TreatmentEffect</code> is the difference in the
     * statistic specified by the <code>baseStat</code> parameter between each
     * variation and the default variation. </p> </li> <li> <p> <code>BaseStat</code>
     * returns the statistical values collected for the metric for each variation. The
     * statistic uses the same statistic specified in the <code>baseStat</code>
     * parameter. Therefore, if <code>baseStat</code> is <code>mean</code>, this
     * returns the mean of the values collected for each variation.</p> </li> </ul>
     */
    inline const Aws::Vector<ExperimentResultRequestType>& GetResultStats() const { return m_resultStats; }
    inline bool ResultStatsHasBeenSet() const { return m_resultStatsHasBeenSet; }
    template<typename ResultStatsT = Aws::Vector<ExperimentResultRequestType>>
    void SetResultStats(ResultStatsT&& value) { m_resultStatsHasBeenSet = true; m_resultStats = std::forward<ResultStatsT>(value); }
    template<typename ResultStatsT = Aws::Vector<ExperimentResultRequestType>>
    GetExperimentResultsRequest& WithResultStats(ResultStatsT&& value) { SetResultStats(std::forward<ResultStatsT>(value)); return *this;}
    inline GetExperimentResultsRequest& AddResultStats(ExperimentResultRequestType value) { m_resultStatsHasBeenSet = true; m_resultStats.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetExperimentResultsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the experiment treatments that you want to see the results
     * for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTreatmentNames() const { return m_treatmentNames; }
    inline bool TreatmentNamesHasBeenSet() const { return m_treatmentNamesHasBeenSet; }
    template<typename TreatmentNamesT = Aws::Vector<Aws::String>>
    void SetTreatmentNames(TreatmentNamesT&& value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames = std::forward<TreatmentNamesT>(value); }
    template<typename TreatmentNamesT = Aws::Vector<Aws::String>>
    GetExperimentResultsRequest& WithTreatmentNames(TreatmentNamesT&& value) { SetTreatmentNames(std::forward<TreatmentNamesT>(value)); return *this;}
    template<typename TreatmentNamesT = Aws::String>
    GetExperimentResultsRequest& AddTreatmentNames(TreatmentNamesT&& value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames.emplace_back(std::forward<TreatmentNamesT>(value)); return *this; }
    ///@}
  private:

    ExperimentBaseStat m_baseStat{ExperimentBaseStat::NOT_SET};
    bool m_baseStatHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricNames;
    bool m_metricNamesHasBeenSet = false;

    long long m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<ExperimentReportName> m_reportNames;
    bool m_reportNamesHasBeenSet = false;

    Aws::Vector<ExperimentResultRequestType> m_resultStats;
    bool m_resultStatsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_treatmentNames;
    bool m_treatmentNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
