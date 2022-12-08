/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataSource.h>
#include <aws/glue/model/TaskStatusType.h>
#include <aws/core/utils/DateTime.h>
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
  class GetDataQualityRuleRecommendationRunResult
  {
  public:
    AWS_GLUE_API GetDataQualityRuleRecommendationRunResult();
    AWS_GLUE_API GetDataQualityRuleRecommendationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityRuleRecommendationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }

    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline void SetRole(const Aws::String& value) { m_role = value; }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline void SetRole(const char* value) { m_role.assign(value); }

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkers = value; }

    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline void SetTimeout(int value) { m_timeout = value; }

    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status for this run.</p>
     */
    inline void SetStatus(const TaskStatusType& value) { m_status = value; }

    /**
     * <p>The status for this run.</p>
     */
    inline void SetStatus(TaskStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The status for this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for this run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline const Aws::String& GetErrorString() const{ return m_errorString; }

    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline void SetErrorString(const Aws::String& value) { m_errorString = value; }

    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline void SetErrorString(Aws::String&& value) { m_errorString = std::move(value); }

    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline void SetErrorString(const char* value) { m_errorString.assign(value); }

    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}

    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}

    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithErrorString(const char* value) { SetErrorString(value); return *this;}


    /**
     * <p>The date and time when this run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when this run started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }

    /**
     * <p>The date and time when this run started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }

    /**
     * <p>The date and time when this run started.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when this run started.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }

    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }

    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }

    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }

    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}


    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline void SetExecutionTime(int value) { m_executionTime = value; }

    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}


    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline const Aws::String& GetRecommendedRuleset() const{ return m_recommendedRuleset; }

    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline void SetRecommendedRuleset(const Aws::String& value) { m_recommendedRuleset = value; }

    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline void SetRecommendedRuleset(Aws::String&& value) { m_recommendedRuleset = std::move(value); }

    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline void SetRecommendedRuleset(const char* value) { m_recommendedRuleset.assign(value); }

    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(const Aws::String& value) { SetRecommendedRuleset(value); return *this;}

    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(Aws::String&& value) { SetRecommendedRuleset(std::move(value)); return *this;}

    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(const char* value) { SetRecommendedRuleset(value); return *this;}


    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline const Aws::String& GetCreatedRulesetName() const{ return m_createdRulesetName; }

    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline void SetCreatedRulesetName(const Aws::String& value) { m_createdRulesetName = value; }

    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline void SetCreatedRulesetName(Aws::String&& value) { m_createdRulesetName = std::move(value); }

    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline void SetCreatedRulesetName(const char* value) { m_createdRulesetName.assign(value); }

    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(const Aws::String& value) { SetCreatedRulesetName(value); return *this;}

    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(Aws::String&& value) { SetCreatedRulesetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(const char* value) { SetCreatedRulesetName(value); return *this;}

  private:

    Aws::String m_runId;

    DataSource m_dataSource;

    Aws::String m_role;

    int m_numberOfWorkers;

    int m_timeout;

    TaskStatusType m_status;

    Aws::String m_errorString;

    Aws::Utils::DateTime m_startedOn;

    Aws::Utils::DateTime m_lastModifiedOn;

    Aws::Utils::DateTime m_completedOn;

    int m_executionTime;

    Aws::String m_recommendedRuleset;

    Aws::String m_createdRulesetName;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
