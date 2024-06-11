﻿/**
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


    ///@{
    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline void SetRunId(const Aws::String& value) { m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runId.assign(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline void SetRole(const Aws::String& value) { m_role = value; }
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }
    inline void SetRole(const char* value) { m_role.assign(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkers = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline void SetTimeout(int value) { m_timeout = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskStatusType& value) { m_status = value; }
    inline void SetStatus(TaskStatusType&& value) { m_status = std::move(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline const Aws::String& GetErrorString() const{ return m_errorString; }
    inline void SetErrorString(const Aws::String& value) { m_errorString = value; }
    inline void SetErrorString(Aws::String&& value) { m_errorString = std::move(value); }
    inline void SetErrorString(const char* value) { m_errorString.assign(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithErrorString(const char* value) { SetErrorString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }
    inline void SetExecutionTime(int value) { m_executionTime = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline const Aws::String& GetRecommendedRuleset() const{ return m_recommendedRuleset; }
    inline void SetRecommendedRuleset(const Aws::String& value) { m_recommendedRuleset = value; }
    inline void SetRecommendedRuleset(Aws::String&& value) { m_recommendedRuleset = std::move(value); }
    inline void SetRecommendedRuleset(const char* value) { m_recommendedRuleset.assign(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(const Aws::String& value) { SetRecommendedRuleset(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(Aws::String&& value) { SetRecommendedRuleset(std::move(value)); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(const char* value) { SetRecommendedRuleset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline const Aws::String& GetCreatedRulesetName() const{ return m_createdRulesetName; }
    inline void SetCreatedRulesetName(const Aws::String& value) { m_createdRulesetName = value; }
    inline void SetCreatedRulesetName(Aws::String&& value) { m_createdRulesetName = std::move(value); }
    inline void SetCreatedRulesetName(const char* value) { m_createdRulesetName.assign(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(const Aws::String& value) { SetCreatedRulesetName(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(Aws::String&& value) { SetCreatedRulesetName(std::move(value)); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(const char* value) { SetCreatedRulesetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataQualityRuleRecommendationRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataQualityRuleRecommendationRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
