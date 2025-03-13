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
    AWS_GLUE_API GetDataQualityRulesetEvaluationRunResult() = default;
    AWS_GLUE_API GetDataQualityRulesetEvaluationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityRulesetEvaluationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    GetDataQualityRulesetEvaluationRunResult& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source (an Glue table) associated with this evaluation run.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    GetDataQualityRulesetEvaluationRunResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    GetDataQualityRulesetEvaluationRunResult& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional run options you can specify for an evaluation run.</p>
     */
    inline const DataQualityEvaluationRunAdditionalRunOptions& GetAdditionalRunOptions() const { return m_additionalRunOptions; }
    template<typename AdditionalRunOptionsT = DataQualityEvaluationRunAdditionalRunOptions>
    void SetAdditionalRunOptions(AdditionalRunOptionsT&& value) { m_additionalRunOptionsHasBeenSet = true; m_additionalRunOptions = std::forward<AdditionalRunOptionsT>(value); }
    template<typename AdditionalRunOptionsT = DataQualityEvaluationRunAdditionalRunOptions>
    GetDataQualityRulesetEvaluationRunResult& WithAdditionalRunOptions(AdditionalRunOptionsT&& value) { SetAdditionalRunOptions(std::forward<AdditionalRunOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline TaskStatusType GetStatus() const { return m_status; }
    inline void SetStatus(TaskStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithStatus(TaskStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline const Aws::String& GetErrorString() const { return m_errorString; }
    template<typename ErrorStringT = Aws::String>
    void SetErrorString(ErrorStringT&& value) { m_errorStringHasBeenSet = true; m_errorString = std::forward<ErrorStringT>(value); }
    template<typename ErrorStringT = Aws::String>
    GetDataQualityRulesetEvaluationRunResult& WithErrorString(ErrorStringT&& value) { SetErrorString(std::forward<ErrorStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    GetDataQualityRulesetEvaluationRunResult& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The last point in time when this data quality rule
     * recommendation run was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    GetDataQualityRulesetEvaluationRunResult& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    GetDataQualityRulesetEvaluationRunResult& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline int GetExecutionTime() const { return m_executionTime; }
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline GetDataQualityRulesetEvaluationRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ruleset names for the run. Currently, this parameter takes only one
     * Ruleset name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesetNames() const { return m_rulesetNames; }
    template<typename RulesetNamesT = Aws::Vector<Aws::String>>
    void SetRulesetNames(RulesetNamesT&& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames = std::forward<RulesetNamesT>(value); }
    template<typename RulesetNamesT = Aws::Vector<Aws::String>>
    GetDataQualityRulesetEvaluationRunResult& WithRulesetNames(RulesetNamesT&& value) { SetRulesetNames(std::forward<RulesetNamesT>(value)); return *this;}
    template<typename RulesetNamesT = Aws::String>
    GetDataQualityRulesetEvaluationRunResult& AddRulesetNames(RulesetNamesT&& value) { m_rulesetNamesHasBeenSet = true; m_rulesetNames.emplace_back(std::forward<RulesetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of result IDs for the data quality results for the run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResultIds() const { return m_resultIds; }
    template<typename ResultIdsT = Aws::Vector<Aws::String>>
    void SetResultIds(ResultIdsT&& value) { m_resultIdsHasBeenSet = true; m_resultIds = std::forward<ResultIdsT>(value); }
    template<typename ResultIdsT = Aws::Vector<Aws::String>>
    GetDataQualityRulesetEvaluationRunResult& WithResultIds(ResultIdsT&& value) { SetResultIds(std::forward<ResultIdsT>(value)); return *this;}
    template<typename ResultIdsT = Aws::String>
    GetDataQualityRulesetEvaluationRunResult& AddResultIds(ResultIdsT&& value) { m_resultIdsHasBeenSet = true; m_resultIds.emplace_back(std::forward<ResultIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of reference strings to additional data sources you can specify for an
     * evaluation run.</p>
     */
    inline const Aws::Map<Aws::String, DataSource>& GetAdditionalDataSources() const { return m_additionalDataSources; }
    template<typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
    void SetAdditionalDataSources(AdditionalDataSourcesT&& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources = std::forward<AdditionalDataSourcesT>(value); }
    template<typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
    GetDataQualityRulesetEvaluationRunResult& WithAdditionalDataSources(AdditionalDataSourcesT&& value) { SetAdditionalDataSources(std::forward<AdditionalDataSourcesT>(value)); return *this;}
    template<typename AdditionalDataSourcesKeyT = Aws::String, typename AdditionalDataSourcesValueT = DataSource>
    GetDataQualityRulesetEvaluationRunResult& AddAdditionalDataSources(AdditionalDataSourcesKeyT&& key, AdditionalDataSourcesValueT&& value) {
      m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(std::forward<AdditionalDataSourcesKeyT>(key), std::forward<AdditionalDataSourcesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataQualityRulesetEvaluationRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    DataQualityEvaluationRunAdditionalRunOptions m_additionalRunOptions;
    bool m_additionalRunOptionsHasBeenSet = false;

    TaskStatusType m_status{TaskStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorString;
    bool m_errorStringHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
    bool m_completedOnHasBeenSet = false;

    int m_executionTime{0};
    bool m_executionTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesetNames;
    bool m_rulesetNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resultIds;
    bool m_resultIdsHasBeenSet = false;

    Aws::Map<Aws::String, DataSource> m_additionalDataSources;
    bool m_additionalDataSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
