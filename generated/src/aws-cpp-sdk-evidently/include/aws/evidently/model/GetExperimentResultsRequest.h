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
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResultsRequest();

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
    inline const ExperimentBaseStat& GetBaseStat() const{ return m_baseStat; }
    inline bool BaseStatHasBeenSet() const { return m_baseStatHasBeenSet; }
    inline void SetBaseStat(const ExperimentBaseStat& value) { m_baseStatHasBeenSet = true; m_baseStat = value; }
    inline void SetBaseStat(ExperimentBaseStat&& value) { m_baseStatHasBeenSet = true; m_baseStat = std::move(value); }
    inline GetExperimentResultsRequest& WithBaseStat(const ExperimentBaseStat& value) { SetBaseStat(value); return *this;}
    inline GetExperimentResultsRequest& WithBaseStat(ExperimentBaseStat&& value) { SetBaseStat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment ended, if it is completed. This must be
     * no longer than 30 days after the experiment start time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetExperimentResultsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetExperimentResultsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment to retrieve the results of.</p>
     */
    inline const Aws::String& GetExperiment() const{ return m_experiment; }
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }
    inline void SetExperiment(const Aws::String& value) { m_experimentHasBeenSet = true; m_experiment = value; }
    inline void SetExperiment(Aws::String&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }
    inline void SetExperiment(const char* value) { m_experimentHasBeenSet = true; m_experiment.assign(value); }
    inline GetExperimentResultsRequest& WithExperiment(const Aws::String& value) { SetExperiment(value); return *this;}
    inline GetExperimentResultsRequest& WithExperiment(Aws::String&& value) { SetExperiment(std::move(value)); return *this;}
    inline GetExperimentResultsRequest& WithExperiment(const char* value) { SetExperiment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the experiment metrics that you want to see the results of.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricNames() const{ return m_metricNames; }
    inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
    inline void SetMetricNames(const Aws::Vector<Aws::String>& value) { m_metricNamesHasBeenSet = true; m_metricNames = value; }
    inline void SetMetricNames(Aws::Vector<Aws::String>&& value) { m_metricNamesHasBeenSet = true; m_metricNames = std::move(value); }
    inline GetExperimentResultsRequest& WithMetricNames(const Aws::Vector<Aws::String>& value) { SetMetricNames(value); return *this;}
    inline GetExperimentResultsRequest& WithMetricNames(Aws::Vector<Aws::String>&& value) { SetMetricNames(std::move(value)); return *this;}
    inline GetExperimentResultsRequest& AddMetricNames(const Aws::String& value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(value); return *this; }
    inline GetExperimentResultsRequest& AddMetricNames(Aws::String&& value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(std::move(value)); return *this; }
    inline GetExperimentResultsRequest& AddMetricNames(const char* value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>In seconds, the amount of time to aggregate results together. </p>
     */
    inline long long GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(long long value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetExperimentResultsRequest& WithPeriod(long long value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the experiment that you want to
     * see the results of.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline GetExperimentResultsRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline GetExperimentResultsRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline GetExperimentResultsRequest& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the report types that you want to see. Currently,
     * <code>BayesianInference</code> is the only valid value.</p>
     */
    inline const Aws::Vector<ExperimentReportName>& GetReportNames() const{ return m_reportNames; }
    inline bool ReportNamesHasBeenSet() const { return m_reportNamesHasBeenSet; }
    inline void SetReportNames(const Aws::Vector<ExperimentReportName>& value) { m_reportNamesHasBeenSet = true; m_reportNames = value; }
    inline void SetReportNames(Aws::Vector<ExperimentReportName>&& value) { m_reportNamesHasBeenSet = true; m_reportNames = std::move(value); }
    inline GetExperimentResultsRequest& WithReportNames(const Aws::Vector<ExperimentReportName>& value) { SetReportNames(value); return *this;}
    inline GetExperimentResultsRequest& WithReportNames(Aws::Vector<ExperimentReportName>&& value) { SetReportNames(std::move(value)); return *this;}
    inline GetExperimentResultsRequest& AddReportNames(const ExperimentReportName& value) { m_reportNamesHasBeenSet = true; m_reportNames.push_back(value); return *this; }
    inline GetExperimentResultsRequest& AddReportNames(ExperimentReportName&& value) { m_reportNamesHasBeenSet = true; m_reportNames.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<ExperimentResultRequestType>& GetResultStats() const{ return m_resultStats; }
    inline bool ResultStatsHasBeenSet() const { return m_resultStatsHasBeenSet; }
    inline void SetResultStats(const Aws::Vector<ExperimentResultRequestType>& value) { m_resultStatsHasBeenSet = true; m_resultStats = value; }
    inline void SetResultStats(Aws::Vector<ExperimentResultRequestType>&& value) { m_resultStatsHasBeenSet = true; m_resultStats = std::move(value); }
    inline GetExperimentResultsRequest& WithResultStats(const Aws::Vector<ExperimentResultRequestType>& value) { SetResultStats(value); return *this;}
    inline GetExperimentResultsRequest& WithResultStats(Aws::Vector<ExperimentResultRequestType>&& value) { SetResultStats(std::move(value)); return *this;}
    inline GetExperimentResultsRequest& AddResultStats(const ExperimentResultRequestType& value) { m_resultStatsHasBeenSet = true; m_resultStats.push_back(value); return *this; }
    inline GetExperimentResultsRequest& AddResultStats(ExperimentResultRequestType&& value) { m_resultStatsHasBeenSet = true; m_resultStats.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetExperimentResultsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetExperimentResultsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the experiment treatments that you want to see the results
     * for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTreatmentNames() const{ return m_treatmentNames; }
    inline bool TreatmentNamesHasBeenSet() const { return m_treatmentNamesHasBeenSet; }
    inline void SetTreatmentNames(const Aws::Vector<Aws::String>& value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames = value; }
    inline void SetTreatmentNames(Aws::Vector<Aws::String>&& value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames = std::move(value); }
    inline GetExperimentResultsRequest& WithTreatmentNames(const Aws::Vector<Aws::String>& value) { SetTreatmentNames(value); return *this;}
    inline GetExperimentResultsRequest& WithTreatmentNames(Aws::Vector<Aws::String>&& value) { SetTreatmentNames(std::move(value)); return *this;}
    inline GetExperimentResultsRequest& AddTreatmentNames(const Aws::String& value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames.push_back(value); return *this; }
    inline GetExperimentResultsRequest& AddTreatmentNames(Aws::String&& value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames.push_back(std::move(value)); return *this; }
    inline GetExperimentResultsRequest& AddTreatmentNames(const char* value) { m_treatmentNamesHasBeenSet = true; m_treatmentNames.push_back(value); return *this; }
    ///@}
  private:

    ExperimentBaseStat m_baseStat;
    bool m_baseStatHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricNames;
    bool m_metricNamesHasBeenSet = false;

    long long m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<ExperimentReportName> m_reportNames;
    bool m_reportNamesHasBeenSet = false;

    Aws::Vector<ExperimentResultRequestType> m_resultStats;
    bool m_resultStatsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_treatmentNames;
    bool m_treatmentNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
