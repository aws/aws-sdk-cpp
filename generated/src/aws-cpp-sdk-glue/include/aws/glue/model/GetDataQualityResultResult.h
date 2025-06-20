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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  /**
   * <p>The response for the data quality result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityResultResponse">AWS
   * API Reference</a></p>
   */
  class GetDataQualityResultResult
  {
  public:
    AWS_GLUE_API GetDataQualityResultResult() = default;
    AWS_GLUE_API GetDataQualityResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    GetDataQualityResultResult& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID for the data quality result.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    GetDataQualityResultResult& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline double GetScore() const { return m_score; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline GetDataQualityResultResult& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    GetDataQualityResultResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
    template<typename RulesetNameT = Aws::String>
    void SetRulesetName(RulesetNameT&& value) { m_rulesetNameHasBeenSet = true; m_rulesetName = std::forward<RulesetNameT>(value); }
    template<typename RulesetNameT = Aws::String>
    GetDataQualityResultResult& WithRulesetName(RulesetNameT&& value) { SetRulesetName(std::forward<RulesetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
    template<typename EvaluationContextT = Aws::String>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = Aws::String>
    GetDataQualityResultResult& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the run for this data quality result started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    GetDataQualityResultResult& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the run for this data quality result was
     * completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    GetDataQualityResultResult& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetDataQualityResultResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
    template<typename JobRunIdT = Aws::String>
    void SetJobRunId(JobRunIdT&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::forward<JobRunIdT>(value); }
    template<typename JobRunIdT = Aws::String>
    GetDataQualityResultResult& WithJobRunId(JobRunIdT&& value) { SetJobRunId(std::forward<JobRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline const Aws::String& GetRulesetEvaluationRunId() const { return m_rulesetEvaluationRunId; }
    template<typename RulesetEvaluationRunIdT = Aws::String>
    void SetRulesetEvaluationRunId(RulesetEvaluationRunIdT&& value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId = std::forward<RulesetEvaluationRunIdT>(value); }
    template<typename RulesetEvaluationRunIdT = Aws::String>
    GetDataQualityResultResult& WithRulesetEvaluationRunId(RulesetEvaluationRunIdT&& value) { SetRulesetEvaluationRunId(std::forward<RulesetEvaluationRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const { return m_ruleResults; }
    template<typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
    void SetRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = std::forward<RuleResultsT>(value); }
    template<typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
    GetDataQualityResultResult& WithRuleResults(RuleResultsT&& value) { SetRuleResults(std::forward<RuleResultsT>(value)); return *this;}
    template<typename RuleResultsT = DataQualityRuleResult>
    GetDataQualityResultResult& AddRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.emplace_back(std::forward<RuleResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityAnalyzerResult</code> objects representing the
     * results for each analyzer. </p>
     */
    inline const Aws::Vector<DataQualityAnalyzerResult>& GetAnalyzerResults() const { return m_analyzerResults; }
    template<typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
    void SetAnalyzerResults(AnalyzerResultsT&& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults = std::forward<AnalyzerResultsT>(value); }
    template<typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
    GetDataQualityResultResult& WithAnalyzerResults(AnalyzerResultsT&& value) { SetAnalyzerResults(std::forward<AnalyzerResultsT>(value)); return *this;}
    template<typename AnalyzerResultsT = DataQualityAnalyzerResult>
    GetDataQualityResultResult& AddAnalyzerResults(AnalyzerResultsT&& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults.emplace_back(std::forward<AnalyzerResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityObservation</code> objects representing the
     * observations generated after evaluating the rules and analyzers. </p>
     */
    inline const Aws::Vector<DataQualityObservation>& GetObservations() const { return m_observations; }
    template<typename ObservationsT = Aws::Vector<DataQualityObservation>>
    void SetObservations(ObservationsT&& value) { m_observationsHasBeenSet = true; m_observations = std::forward<ObservationsT>(value); }
    template<typename ObservationsT = Aws::Vector<DataQualityObservation>>
    GetDataQualityResultResult& WithObservations(ObservationsT&& value) { SetObservations(std::forward<ObservationsT>(value)); return *this;}
    template<typename ObservationsT = DataQualityObservation>
    GetDataQualityResultResult& AddObservations(ObservationsT&& value) { m_observationsHasBeenSet = true; m_observations.emplace_back(std::forward<ObservationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A summary of <code>DataQualityAggregatedMetrics</code> objects showing the
     * total counts of processed rows and rules, including their pass/fail statistics
     * based on row-level results. </p>
     */
    inline const DataQualityAggregatedMetrics& GetAggregatedMetrics() const { return m_aggregatedMetrics; }
    template<typename AggregatedMetricsT = DataQualityAggregatedMetrics>
    void SetAggregatedMetrics(AggregatedMetricsT&& value) { m_aggregatedMetricsHasBeenSet = true; m_aggregatedMetrics = std::forward<AggregatedMetricsT>(value); }
    template<typename AggregatedMetricsT = DataQualityAggregatedMetrics>
    GetDataQualityResultResult& WithAggregatedMetrics(AggregatedMetricsT&& value) { SetAggregatedMetrics(std::forward<AggregatedMetricsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataQualityResultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
