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


    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline DataQualityResult& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline DataQualityResult& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline DataQualityResult& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline DataQualityResult& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline const Aws::String& GetRulesetName() const{ return m_rulesetName; }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline void SetRulesetName(const Aws::String& value) { m_rulesetNameHasBeenSet = true; m_rulesetName = value; }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline void SetRulesetName(Aws::String&& value) { m_rulesetNameHasBeenSet = true; m_rulesetName = std::move(value); }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline void SetRulesetName(const char* value) { m_rulesetNameHasBeenSet = true; m_rulesetName.assign(value); }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline DataQualityResult& WithRulesetName(const Aws::String& value) { SetRulesetName(value); return *this;}

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline DataQualityResult& WithRulesetName(Aws::String&& value) { SetRulesetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline DataQualityResult& WithRulesetName(const char* value) { SetRulesetName(value); return *this;}


    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline const Aws::String& GetEvaluationContext() const{ return m_evaluationContext; }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline void SetEvaluationContext(const Aws::String& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = value; }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline void SetEvaluationContext(Aws::String&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::move(value); }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline void SetEvaluationContext(const char* value) { m_evaluationContextHasBeenSet = true; m_evaluationContext.assign(value); }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline DataQualityResult& WithEvaluationContext(const Aws::String& value) { SetEvaluationContext(value); return *this;}

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline DataQualityResult& WithEvaluationContext(Aws::String&& value) { SetEvaluationContext(std::move(value)); return *this;}

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline DataQualityResult& WithEvaluationContext(const char* value) { SetEvaluationContext(value); return *this;}


    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline DataQualityResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when this data quality run started.</p>
     */
    inline DataQualityResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline DataQualityResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time when this data quality run completed.</p>
     */
    inline DataQualityResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline DataQualityResult& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline const Aws::String& GetRulesetEvaluationRunId() const{ return m_rulesetEvaluationRunId; }

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline bool RulesetEvaluationRunIdHasBeenSet() const { return m_rulesetEvaluationRunIdHasBeenSet; }

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline void SetRulesetEvaluationRunId(const Aws::String& value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId = value; }

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline void SetRulesetEvaluationRunId(Aws::String&& value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId = std::move(value); }

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline void SetRulesetEvaluationRunId(const char* value) { m_rulesetEvaluationRunIdHasBeenSet = true; m_rulesetEvaluationRunId.assign(value); }

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline DataQualityResult& WithRulesetEvaluationRunId(const Aws::String& value) { SetRulesetEvaluationRunId(value); return *this;}

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline DataQualityResult& WithRulesetEvaluationRunId(Aws::String&& value) { SetRulesetEvaluationRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run ID for the ruleset evaluation for this data quality
     * result.</p>
     */
    inline DataQualityResult& WithRulesetEvaluationRunId(const char* value) { SetRulesetEvaluationRunId(value); return *this;}


    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const{ return m_ruleResults; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline bool RuleResultsHasBeenSet() const { return m_ruleResultsHasBeenSet; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline void SetRuleResults(const Aws::Vector<DataQualityRuleResult>& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = value; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline void SetRuleResults(Aws::Vector<DataQualityRuleResult>&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = std::move(value); }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline DataQualityResult& WithRuleResults(const Aws::Vector<DataQualityRuleResult>& value) { SetRuleResults(value); return *this;}

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline DataQualityResult& WithRuleResults(Aws::Vector<DataQualityRuleResult>&& value) { SetRuleResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline DataQualityResult& AddRuleResults(const DataQualityRuleResult& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline DataQualityResult& AddRuleResults(DataQualityRuleResult&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
