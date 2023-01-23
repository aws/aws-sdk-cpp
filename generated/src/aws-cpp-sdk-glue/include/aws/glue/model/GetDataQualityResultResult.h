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
  class GetDataQualityResultResult
  {
  public:
    AWS_GLUE_API GetDataQualityResultResult();
    AWS_GLUE_API GetDataQualityResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultId = value; }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultId = std::move(value); }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline void SetResultId(const char* value) { m_resultId.assign(value); }

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline GetDataQualityResultResult& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline GetDataQualityResultResult& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>A unique result ID for the data quality result.</p>
     */
    inline GetDataQualityResultResult& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline void SetScore(double value) { m_score = value; }

    /**
     * <p>An aggregate data quality score. Represents the ratio of rules that passed to
     * the total number of rules.</p>
     */
    inline GetDataQualityResultResult& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The table associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline const Aws::String& GetRulesetName() const{ return m_rulesetName; }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline void SetRulesetName(const Aws::String& value) { m_rulesetName = value; }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline void SetRulesetName(Aws::String&& value) { m_rulesetName = std::move(value); }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline void SetRulesetName(const char* value) { m_rulesetName.assign(value); }

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline GetDataQualityResultResult& WithRulesetName(const Aws::String& value) { SetRulesetName(value); return *this;}

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline GetDataQualityResultResult& WithRulesetName(Aws::String&& value) { SetRulesetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset associated with the data quality result.</p>
     */
    inline GetDataQualityResultResult& WithRulesetName(const char* value) { SetRulesetName(value); return *this;}


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
    inline void SetEvaluationContext(const Aws::String& value) { m_evaluationContext = value; }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline void SetEvaluationContext(Aws::String&& value) { m_evaluationContext = std::move(value); }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline void SetEvaluationContext(const char* value) { m_evaluationContext.assign(value); }

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline GetDataQualityResultResult& WithEvaluationContext(const Aws::String& value) { SetEvaluationContext(value); return *this;}

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline GetDataQualityResultResult& WithEvaluationContext(Aws::String&& value) { SetEvaluationContext(std::move(value)); return *this;}

    /**
     * <p>In the context of a job in Glue Studio, each node in the canvas is typically
     * assigned some sort of name and data quality nodes will have names. In the case
     * of multiple nodes, the <code>evaluationContext</code> can differentiate the
     * nodes.</p>
     */
    inline GetDataQualityResultResult& WithEvaluationContext(const char* value) { SetEvaluationContext(value); return *this;}


    /**
     * <p>The date and time when the run for this data quality result started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when the run for this data quality result started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }

    /**
     * <p>The date and time when the run for this data quality result started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }

    /**
     * <p>The date and time when the run for this data quality result started.</p>
     */
    inline GetDataQualityResultResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when the run for this data quality result started.</p>
     */
    inline GetDataQualityResultResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when the run for this data quality result was
     * completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time when the run for this data quality result was
     * completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }

    /**
     * <p>The date and time when the run for this data quality result was
     * completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }

    /**
     * <p>The date and time when the run for this data quality result was
     * completed.</p>
     */
    inline GetDataQualityResultResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time when the run for this data quality result was
     * completed.</p>
     */
    inline GetDataQualityResultResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The job name associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunId = value; }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunId = std::move(value); }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunId.assign(value); }

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The job run ID associated with the data quality result, if any.</p>
     */
    inline GetDataQualityResultResult& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline const Aws::String& GetRulesetEvaluationRunId() const{ return m_rulesetEvaluationRunId; }

    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline void SetRulesetEvaluationRunId(const Aws::String& value) { m_rulesetEvaluationRunId = value; }

    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline void SetRulesetEvaluationRunId(Aws::String&& value) { m_rulesetEvaluationRunId = std::move(value); }

    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline void SetRulesetEvaluationRunId(const char* value) { m_rulesetEvaluationRunId.assign(value); }

    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline GetDataQualityResultResult& WithRulesetEvaluationRunId(const Aws::String& value) { SetRulesetEvaluationRunId(value); return *this;}

    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline GetDataQualityResultResult& WithRulesetEvaluationRunId(Aws::String&& value) { SetRulesetEvaluationRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run ID associated with the ruleset evaluation.</p>
     */
    inline GetDataQualityResultResult& WithRulesetEvaluationRunId(const char* value) { SetRulesetEvaluationRunId(value); return *this;}


    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const{ return m_ruleResults; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline void SetRuleResults(const Aws::Vector<DataQualityRuleResult>& value) { m_ruleResults = value; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline void SetRuleResults(Aws::Vector<DataQualityRuleResult>&& value) { m_ruleResults = std::move(value); }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline GetDataQualityResultResult& WithRuleResults(const Aws::Vector<DataQualityRuleResult>& value) { SetRuleResults(value); return *this;}

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline GetDataQualityResultResult& WithRuleResults(Aws::Vector<DataQualityRuleResult>&& value) { SetRuleResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline GetDataQualityResultResult& AddRuleResults(const DataQualityRuleResult& value) { m_ruleResults.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
     * for each rule. </p>
     */
    inline GetDataQualityResultResult& AddRuleResults(DataQualityRuleResult&& value) { m_ruleResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resultId;

    double m_score;

    DataSource m_dataSource;

    Aws::String m_rulesetName;

    Aws::String m_evaluationContext;

    Aws::Utils::DateTime m_startedOn;

    Aws::Utils::DateTime m_completedOn;

    Aws::String m_jobName;

    Aws::String m_jobRunId;

    Aws::String m_rulesetEvaluationRunId;

    Aws::Vector<DataQualityRuleResult> m_ruleResults;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
