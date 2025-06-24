/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DataQualityAggregatedMetrics.h>
#include <aws/glue/model/DataQualityRuleResult.h>
#include <aws/glue/model/DataQualityAnalyzerResult.h>
#include <aws/glue/model/DataQualityObservation.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes a data quality result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResult">AWS
   * API Reference</a></p>
   */
  class DataQualityResult
  {
  public:
    AWS_GLUE_API DataQualityResult() = default;
    AWS_GLUE_API DataQualityResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    DataQualityResult& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID for the data quality result.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    DataQualityResult& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline DataQualityResult& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DataQualityResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
    inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }
    template<typename RulesetNameT = Aws::String>
    void SetRulesetName(RulesetNameT&& value) { m_rulesetNameHasBeenSet = true; m_rulesetName = std::forward<RulesetNameT>(value); }
    template<typename RulesetNameT = Aws::String>
    DataQualityResult& WithRulesetName(RulesetNameT&& value) { SetRulesetName(std::forward<RulesetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    template<typename EvaluationContextT = Aws::String>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = Aws::String>
    DataQualityResult& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    DataQualityResult& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    DataQualityResult& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DataQualityResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    template<typename JobRunIdT = Aws::String>
    void SetJobRunId(JobRunIdT&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::forward<JobRunIdT>(value); }
    template<typename JobRunIdT = Aws::String>
    DataQualityResult& WithJobRunId(JobRunIdT&& value) { SetJobRunId(std::forward<JobRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline const Aws::String& GetRulesetEvaluationRunId() const { return m_rulesetEvaluationRunId; }
    inline bool RulesetEvaluationRunIdHasBeenSet() const { return m_rulesetEvaluationRunIdHasBeenSet; }
    template<typename RulesetEvaluationRunIdT = Aws::String>
    void SetRulesetEvaluationRunId(RulesetEvaluationRunIdT&& value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId = std::forward<RulesetEvaluationRunIdT>(value); }
    template<typename RulesetEvaluationRunIdT = Aws::String>
    DataQualityResult& WithRulesetEvaluationRunId(RulesetEvaluationRunIdT&& value) { SetRulesetEvaluationRunId(std::forward<RulesetEvaluationRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const { return m_ruleResults; }
    inline bool RuleResultsHasBeenSet() const { return m_ruleResultsHasBeenSet; }
    template<typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
    void SetRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = std::forward<RuleResultsT>(value); }
    template<typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
    DataQualityResult& WithRuleResults(RuleResultsT&& value) { SetRuleResults(std::forward<RuleResultsT>(value)); return *this;}
    template<typename RuleResultsT = DataQualityRuleResult>
    DataQualityResult& AddRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.emplace_back(std::forward<RuleResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityAnalyzerResult</code> objects representing the
     * results for each analyzer. </p>
     */
    inline const Aws::Vector<DataQualityAnalyzerResult>& GetAnalyzerResults() const { return m_analyzerResults; }
    inline bool AnalyzerResultsHasBeenSet() const { return m_analyzerResultsHasBeenSet; }
    template<typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
    void SetAnalyzerResults(AnalyzerResultsT&& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults = std::forward<AnalyzerResultsT>(value); }
    template<typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
    DataQualityResult& WithAnalyzerResults(AnalyzerResultsT&& value) { SetAnalyzerResults(std::forward<AnalyzerResultsT>(value)); return *this;}
    template<typename AnalyzerResultsT = DataQualityAnalyzerResult>
    DataQualityResult& AddAnalyzerResults(AnalyzerResultsT&& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults.emplace_back(std::forward<AnalyzerResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityObservation</code> objects representing the
     * observations generated after evaluating the rules and analyzers. </p>
     */
    inline const Aws::Vector<DataQualityObservation>& GetObservations() const { return m_observations; }
    inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
    template<typename ObservationsT = Aws::Vector<DataQualityObservation>>
    void SetObservations(ObservationsT&& value) { m_observationsHasBeenSet = true; m_observations = std::forward<ObservationsT>(value); }
    template<typename ObservationsT = Aws::Vector<DataQualityObservation>>
    DataQualityResult& WithObservations(ObservationsT&& value) { SetObservations(std::forward<ObservationsT>(value)); return *this;}
    template<typename ObservationsT = DataQualityObservation>
    DataQualityResult& AddObservations(ObservationsT&& value) { m_observationsHasBeenSet = true; m_observations.emplace_back(std::forward<ObservationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A summary of <code>DataQualityAggregatedMetrics</code> objects showing the
     * total counts of processed rows and rules, including their pass/fail statistics
     * based on row-level results. </p>
     */
    inline const DataQualityAggregatedMetrics& GetAggregatedMetrics() const { return m_aggregatedMetrics; }
    inline bool AggregatedMetricsHasBeenSet() const { return m_aggregatedMetricsHasBeenSet; }
    template<typename AggregatedMetricsT = DataQualityAggregatedMetrics>
    void SetAggregatedMetrics(AggregatedMetricsT&& value) { m_aggregatedMetricsHasBeenSet = true; m_aggregatedMetrics = std::forward<AggregatedMetricsT>(value); }
    template<typename AggregatedMetricsT = DataQualityAggregatedMetrics>
    DataQualityResult& WithAggregatedMetrics(AggregatedMetricsT&& value) { SetAggregatedMetrics(std::forward<AggregatedMetricsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_rulesetName;
    bool m_rulesetNameHasBeenSet = false;

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
    bool m_completedOnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::String m_rulesetEvaluationRunId;
    bool m_rulesetEvaluationRunIdHasBeenSet = false;

    Aws::Vector<DataQualityRuleResult> m_ruleResults;
    bool m_ruleResultsHasBeenSet = false;

    Aws::Vector<DataQualityAnalyzerResult> m_analyzerResults;
    bool m_analyzerResultsHasBeenSet = false;

    Aws::Vector<DataQualityObservation> m_observations;
    bool m_observationsHasBeenSet = false;

    DataQualityAggregatedMetrics m_aggregatedMetrics;
    bool m_aggregatedMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
