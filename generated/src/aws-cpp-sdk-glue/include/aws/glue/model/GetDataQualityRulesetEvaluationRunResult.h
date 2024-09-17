/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataSource.h>
#include <aws/glue/model/DataQualityEvaluationRunAdditionalRunOptions.h>
#include <aws/glue/model/TaskStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetDataQualityRulesetEvaluationRunResult
  {
  public:
    AWS_GLUE_API GetDataQualityRulesetEvaluationRunResult();
    AWS_GLUE_API GetDataQualityRulesetEvaluationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityRulesetEvaluationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline void SetRunId(const Aws::String& value) { m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runId.assign(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source (an Glue table) associated with this evaluation run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline void SetRole(const Aws::String& value) { m_role = value; }
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }
    inline void SetRole(const char* value) { m_role.assign(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkers = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline void SetTimeout(int value) { m_timeout = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline const DataQualityEvaluationRunAdditionalRunOptions& GetAdditionalRunOptions() const{ return m_additionalRunOptions; }
    inline void SetAdditionalRunOptions(const DataQualityEvaluationRunAdditionalRunOptions& value) { m_additionalRunOptions = value; }
    inline void SetAdditionalRunOptions(DataQualityEvaluationRunAdditionalRunOptions&& value) { m_additionalRunOptions = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithAdditionalRunOptions(const DataQualityEvaluationRunAdditionalRunOptions& value) { SetAdditionalRunOptions(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithAdditionalRunOptions(DataQualityEvaluationRunAdditionalRunOptions&& value) { SetAdditionalRunOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskStatusType& value) { m_status = value; }
    inline void SetStatus(TaskStatusType&& value) { m_status = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline const Aws::String& GetErrorString() const{ return m_errorString; }
    inline void SetErrorString(const Aws::String& value) { m_errorString = value; }
    inline void SetErrorString(Aws::String&& value) { m_errorString = std::move(value); }
    inline void SetErrorString(const char* value) { m_errorString.assign(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithErrorString(const Aws::String& value) { SetErrorString(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithErrorString(Aws::String&& value) { SetErrorString(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithErrorString(const char* value) { SetErrorString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline int GetExecutionTime() const{ return m_executionTime; }
    inline void SetExecutionTime(int value) { m_executionTime = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ruleset names for the run. Currently, this parameter takes only one
     * Ruleset name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesetNames() const{ return m_rulesetNames; }
    inline void SetRulesetNames(const Aws::Vector<Aws::String>& value) { m_rulesetNames = value; }
    inline void SetRulesetNames(Aws::Vector<Aws::String>&& value) { m_rulesetNames = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithRulesetNames(const Aws::Vector<Aws::String>& value) { SetRulesetNames(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRulesetNames(Aws::Vector<Aws::String>&& value) { SetRulesetNames(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& AddRulesetNames(const Aws::String& value) { m_rulesetNames.push_back(value); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddRulesetNames(Aws::String&& value) { m_rulesetNames.push_back(std::move(value)); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddRulesetNames(const char* value) { m_rulesetNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of result IDs for the data quality results for the run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResultIds() const{ return m_resultIds; }
    inline void SetResultIds(const Aws::Vector<Aws::String>& value) { m_resultIds = value; }
    inline void SetResultIds(Aws::Vector<Aws::String>&& value) { m_resultIds = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithResultIds(const Aws::Vector<Aws::String>& value) { SetResultIds(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithResultIds(Aws::Vector<Aws::String>&& value) { SetResultIds(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& AddResultIds(const Aws::String& value) { m_resultIds.push_back(value); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddResultIds(Aws::String&& value) { m_resultIds.push_back(std::move(value)); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddResultIds(const char* value) { m_resultIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of reference strings to additional data sources you can specify for an
     * evaluation run.</p>
     */
    inline const Aws::Map<Aws::String, DataSource>& GetAdditionalDataSources() const{ return m_additionalDataSources; }
    inline void SetAdditionalDataSources(const Aws::Map<Aws::String, DataSource>& value) { m_additionalDataSources = value; }
    inline void SetAdditionalDataSources(Aws::Map<Aws::String, DataSource>&& value) { m_additionalDataSources = std::move(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithAdditionalDataSources(const Aws::Map<Aws::String, DataSource>& value) { SetAdditionalDataSources(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithAdditionalDataSources(Aws::Map<Aws::String, DataSource>&& value) { SetAdditionalDataSources(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(const Aws::String& key, const DataSource& value) { m_additionalDataSources.emplace(key, value); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(Aws::String&& key, const DataSource& value) { m_additionalDataSources.emplace(std::move(key), value); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(const Aws::String& key, DataSource&& value) { m_additionalDataSources.emplace(key, std::move(value)); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(Aws::String&& key, DataSource&& value) { m_additionalDataSources.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(const char* key, DataSource&& value) { m_additionalDataSources.emplace(key, std::move(value)); return *this; }
    inline GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(const char* key, const DataSource& value) { m_additionalDataSources.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataQualityRulesetEvaluationRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataQualityRulesetEvaluationRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_runId;

    DataSource m_dataSource;

    Aws::String m_role;

    int m_numberOfWorkers;

    int m_timeout;

    DataQualityEvaluationRunAdditionalRunOptions m_additionalRunOptions;

    TaskStatusType m_status;

    Aws::String m_errorString;

    Aws::Utils::DateTime m_startedOn;

    Aws::Utils::DateTime m_lastModifiedOn;

    Aws::Utils::DateTime m_completedOn;

    int m_executionTime;

    Aws::Vector<Aws::String> m_rulesetNames;

    Aws::Vector<Aws::String> m_resultIds;

    Aws::Map<Aws::String, DataSource> m_additionalDataSources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
