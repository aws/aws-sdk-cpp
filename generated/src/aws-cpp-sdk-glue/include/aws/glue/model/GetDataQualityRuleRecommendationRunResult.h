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
  /**
   * <p>The response for the Data Quality rule recommendation run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityRuleRecommendationRunResponse">AWS
   * API Reference</a></p>
   */
  class GetDataQualityRuleRecommendationRunResult
  {
  public:
    AWS_GLUE_API GetDataQualityRuleRecommendationRunResult() = default;
    AWS_GLUE_API GetDataQualityRuleRecommendationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityRuleRecommendationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source (an Glue table) associated with this run.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    GetDataQualityRuleRecommendationRunResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role supplied to encrypt the results of the run.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
     * 5.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for a run in minutes. This is the maximum time that a run can
     * consume resources before it is terminated and enters <code>TIMEOUT</code>
     * status. The default is 2,880 minutes (48 hours).</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline TaskStatusType GetStatus() const { return m_status; }
    inline void SetStatus(TaskStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithStatus(TaskStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error strings that are associated with the run.</p>
     */
    inline const Aws::String& GetErrorString() const { return m_errorString; }
    template<typename ErrorStringT = Aws::String>
    void SetErrorString(ErrorStringT&& value) { m_errorStringHasBeenSet = true; m_errorString = std::forward<ErrorStringT>(value); }
    template<typename ErrorStringT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithErrorString(ErrorStringT&& value) { SetErrorString(std::forward<ErrorStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    GetDataQualityRuleRecommendationRunResult& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
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
    GetDataQualityRuleRecommendationRunResult& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    GetDataQualityRuleRecommendationRunResult& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that the run consumed resources.</p>
     */
    inline int GetExecutionTime() const { return m_executionTime; }
    inline void SetExecutionTime(int value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline GetDataQualityRuleRecommendationRunResult& WithExecutionTime(int value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a start rule recommendation run completes, it creates a recommended
     * ruleset (a set of rules). This member has those rules in Data Quality Definition
     * Language (DQDL) format.</p>
     */
    inline const Aws::String& GetRecommendedRuleset() const { return m_recommendedRuleset; }
    template<typename RecommendedRulesetT = Aws::String>
    void SetRecommendedRuleset(RecommendedRulesetT&& value) { m_recommendedRulesetHasBeenSet = true; m_recommendedRuleset = std::forward<RecommendedRulesetT>(value); }
    template<typename RecommendedRulesetT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithRecommendedRuleset(RecommendedRulesetT&& value) { SetRecommendedRuleset(std::forward<RecommendedRulesetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ruleset that was created by the run.</p>
     */
    inline const Aws::String& GetCreatedRulesetName() const { return m_createdRulesetName; }
    template<typename CreatedRulesetNameT = Aws::String>
    void SetCreatedRulesetName(CreatedRulesetNameT&& value) { m_createdRulesetNameHasBeenSet = true; m_createdRulesetName = std::forward<CreatedRulesetNameT>(value); }
    template<typename CreatedRulesetNameT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithCreatedRulesetName(CreatedRulesetNameT&& value) { SetCreatedRulesetName(std::forward<CreatedRulesetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration created with the data quality
     * encryption option.</p>
     */
    inline const Aws::String& GetDataQualitySecurityConfiguration() const { return m_dataQualitySecurityConfiguration; }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    void SetDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration = std::forward<DataQualitySecurityConfigurationT>(value); }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { SetDataQualitySecurityConfiguration(std::forward<DataQualitySecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataQualityRuleRecommendationRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_recommendedRuleset;
    bool m_recommendedRulesetHasBeenSet = false;

    Aws::String m_createdRulesetName;
    bool m_createdRulesetNameHasBeenSet = false;

    Aws::String m_dataQualitySecurityConfiguration;
    bool m_dataQualitySecurityConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
