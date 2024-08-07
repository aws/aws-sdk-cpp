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
    AWS_GLUE_API DataQualityResult();
    AWS_GLUE_API DataQualityResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }
    inline DataQualityResult& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}
    inline DataQualityResult& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}
    inline DataQualityResult& WithResultId(const char* value) { SetResultId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Profile ID for the data quality result.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline DataQualityResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline DataQualityResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline DataQualityResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline DataQualityResult& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline DataQualityResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline DataQualityResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline const Aws::String& GetRulesetName() const{ return m_rulesetName; }
    inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }
    inline void SetRulesetName(const Aws::String& value) { m_rulesetNameHasBeenSet = true; m_rulesetName = value; }
    inline void SetRulesetName(Aws::String&& value) { m_rulesetNameHasBeenSet = true; m_rulesetName = std::move(value); }
    inline void SetRulesetName(const char* value) { m_rulesetNameHasBeenSet = true; m_rulesetName.assign(value); }
    inline DataQualityResult& WithRulesetName(const Aws::String& value) { SetRulesetName(value); return *this;}
    inline DataQualityResult& WithRulesetName(Aws::String&& value) { SetRulesetName(std::move(value)); return *this;}
    inline DataQualityResult& WithRulesetName(const char* value) { SetRulesetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline const Aws::String& GetEvaluationContext() const{ return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    inline void SetEvaluationContext(const Aws::String& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = value; }
    inline void SetEvaluationContext(Aws::String&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::move(value); }
    inline void SetEvaluationContext(const char* value) { m_evaluationContextHasBeenSet = true; m_evaluationContext.assign(value); }
    inline DataQualityResult& WithEvaluationContext(const Aws::String& value) { SetEvaluationContext(value); return *this;}
    inline DataQualityResult& WithEvaluationContext(Aws::String&& value) { SetEvaluationContext(std::move(value)); return *this;}
    inline DataQualityResult& WithEvaluationContext(const char* value) { SetEvaluationContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }
    inline DataQualityResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline DataQualityResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }
    inline DataQualityResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline DataQualityResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline DataQualityResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline DataQualityResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline DataQualityResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }
    inline DataQualityResult& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}
    inline DataQualityResult& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}
    inline DataQualityResult& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline const Aws::String& GetRulesetEvaluationRunId() const{ return m_rulesetEvaluationRunId; }
    inline bool RulesetEvaluationRunIdHasBeenSet() const { return m_rulesetEvaluationRunIdHasBeenSet; }
    inline void SetRulesetEvaluationRunId(const Aws::String& value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId = value; }
    inline void SetRulesetEvaluationRunId(Aws::String&& value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId = std::move(value); }
    inline void SetRulesetEvaluationRunId(const char* value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId.assign(value); }
    inline DataQualityResult& WithRulesetEvaluationRunId(const Aws::String& value) { SetRulesetEvaluationRunId(value); return *this;}
    inline DataQualityResult& WithRulesetEvaluationRunId(Aws::String&& value) { SetRulesetEvaluationRunId(std::move(value)); return *this;}
    inline DataQualityResult& WithRulesetEvaluationRunId(const char* value) { SetRulesetEvaluationRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const{ return m_ruleResults; }
    inline bool RuleResultsHasBeenSet() const { return m_ruleResultsHasBeenSet; }
    inline void SetRuleResults(const Aws::Vector<DataQualityRuleResult>& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = value; }
    inline void SetRuleResults(Aws::Vector<DataQualityRuleResult>&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = std::move(value); }
    inline DataQualityResult& WithRuleResults(const Aws::Vector<DataQualityRuleResult>& value) { SetRuleResults(value); return *this;}
    inline DataQualityResult& WithRuleResults(Aws::Vector<DataQualityRuleResult>&& value) { SetRuleResults(std::move(value)); return *this;}
    inline DataQualityResult& AddRuleResults(const DataQualityRuleResult& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.push_back(value); return *this; }
    inline DataQualityResult& AddRuleResults(DataQualityRuleResult&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityAnalyzerResult</code> objects representing the
     * results for each analyzer. </p>
     */
    inline const Aws::Vector<DataQualityAnalyzerResult>& GetAnalyzerResults() const{ return m_analyzerResults; }
    inline bool AnalyzerResultsHasBeenSet() const { return m_analyzerResultsHasBeenSet; }
    inline void SetAnalyzerResults(const Aws::Vector<DataQualityAnalyzerResult>& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults = value; }
    inline void SetAnalyzerResults(Aws::Vector<DataQualityAnalyzerResult>&& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults = std::move(value); }
    inline DataQualityResult& WithAnalyzerResults(const Aws::Vector<DataQualityAnalyzerResult>& value) { SetAnalyzerResults(value); return *this;}
    inline DataQualityResult& WithAnalyzerResults(Aws::Vector<DataQualityAnalyzerResult>&& value) { SetAnalyzerResults(std::move(value)); return *this;}
    inline DataQualityResult& AddAnalyzerResults(const DataQualityAnalyzerResult& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults.push_back(value); return *this; }
    inline DataQualityResult& AddAnalyzerResults(DataQualityAnalyzerResult&& value) { m_analyzerResultsHasBeenSet = true; m_analyzerResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataQualityObservation</code> objects representing the
     * observations generated after evaluating the rules and analyzers. </p>
     */
    inline const Aws::Vector<DataQualityObservation>& GetObservations() const{ return m_observations; }
    inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
    inline void SetObservations(const Aws::Vector<DataQualityObservation>& value) { m_observationsHasBeenSet = true; m_observations = value; }
    inline void SetObservations(Aws::Vector<DataQualityObservation>&& value) { m_observationsHasBeenSet = true; m_observations = std::move(value); }
    inline DataQualityResult& WithObservations(const Aws::Vector<DataQualityObservation>& value) { SetObservations(value); return *this;}
    inline DataQualityResult& WithObservations(Aws::Vector<DataQualityObservation>&& value) { SetObservations(std::move(value)); return *this;}
    inline DataQualityResult& AddObservations(const DataQualityObservation& value) { m_observationsHasBeenSet = true; m_observations.push_back(value); return *this; }
    inline DataQualityResult& AddObservations(DataQualityObservation&& value) { m_observationsHasBeenSet = true; m_observations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_rulesetName;
    bool m_rulesetNameHasBeenSet = false;

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
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
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
