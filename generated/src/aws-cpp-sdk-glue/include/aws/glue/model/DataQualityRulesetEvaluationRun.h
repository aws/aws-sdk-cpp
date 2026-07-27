/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationRunAdditionalRunOptions.h>
#include <aws/glue/model/DataSource.h>
#include <aws/glue/model/TaskStatusType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The details of a data quality ruleset evaluation run.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRulesetEvaluationRun">AWS
 * API Reference</a></p>
 */
class DataQualityRulesetEvaluationRun {
 public:
  AWS_GLUE_API DataQualityRulesetEvaluationRun() = default;
  AWS_GLUE_API DataQualityRulesetEvaluationRun(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityRulesetEvaluationRun& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique run identifier associated with this run.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  DataQualityRulesetEvaluationRun& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  DataQualityRulesetEvaluationRun& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An IAM role supplied to encrypt the results of the run.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  DataQualityRulesetEvaluationRun& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of <code>G.1X</code> workers to be used in the run. The default is
   * 5.</p>
   */
  inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
  inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
  inline void SetNumberOfWorkers(int value) {
    m_numberOfWorkersHasBeenSet = true;
    m_numberOfWorkers = value;
  }
  inline DataQualityRulesetEvaluationRun& WithNumberOfWorkers(int value) {
    SetNumberOfWorkers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout for a run in minutes. This is the maximum time that a run can
   * consume resources before it is terminated and enters <code>TIMEOUT</code>
   * status. The default is 2,880 minutes (48 hours).</p>
   */
  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline DataQualityRulesetEvaluationRun& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}

  ///@{

  inline const DataQualityEvaluationRunAdditionalRunOptions& GetAdditionalRunOptions() const { return m_additionalRunOptions; }
  inline bool AdditionalRunOptionsHasBeenSet() const { return m_additionalRunOptionsHasBeenSet; }
  template <typename AdditionalRunOptionsT = DataQualityEvaluationRunAdditionalRunOptions>
  void SetAdditionalRunOptions(AdditionalRunOptionsT&& value) {
    m_additionalRunOptionsHasBeenSet = true;
    m_additionalRunOptions = std::forward<AdditionalRunOptionsT>(value);
  }
  template <typename AdditionalRunOptionsT = DataQualityEvaluationRunAdditionalRunOptions>
  DataQualityRulesetEvaluationRun& WithAdditionalRunOptions(AdditionalRunOptionsT&& value) {
    SetAdditionalRunOptions(std::forward<AdditionalRunOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status for this run.</p>
   */
  inline TaskStatusType GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TaskStatusType value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DataQualityRulesetEvaluationRun& WithStatus(TaskStatusType value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error strings that are associated with the run.</p>
   */
  inline const Aws::String& GetErrorString() const { return m_errorString; }
  inline bool ErrorStringHasBeenSet() const { return m_errorStringHasBeenSet; }
  template <typename ErrorStringT = Aws::String>
  void SetErrorString(ErrorStringT&& value) {
    m_errorStringHasBeenSet = true;
    m_errorString = std::forward<ErrorStringT>(value);
  }
  template <typename ErrorStringT = Aws::String>
  DataQualityRulesetEvaluationRun& WithErrorString(ErrorStringT&& value) {
    SetErrorString(std::forward<ErrorStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this run started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
  inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
  template <typename StartedOnT = Aws::Utils::DateTime>
  void SetStartedOn(StartedOnT&& value) {
    m_startedOnHasBeenSet = true;
    m_startedOn = std::forward<StartedOnT>(value);
  }
  template <typename StartedOnT = Aws::Utils::DateTime>
  DataQualityRulesetEvaluationRun& WithStartedOn(StartedOnT&& value) {
    SetStartedOn(std::forward<StartedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp. The last point in time when this run was modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
  inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
  template <typename LastModifiedOnT = Aws::Utils::DateTime>
  void SetLastModifiedOn(LastModifiedOnT&& value) {
    m_lastModifiedOnHasBeenSet = true;
    m_lastModifiedOn = std::forward<LastModifiedOnT>(value);
  }
  template <typename LastModifiedOnT = Aws::Utils::DateTime>
  DataQualityRulesetEvaluationRun& WithLastModifiedOn(LastModifiedOnT&& value) {
    SetLastModifiedOn(std::forward<LastModifiedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this run was completed.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
  inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
  template <typename CompletedOnT = Aws::Utils::DateTime>
  void SetCompletedOn(CompletedOnT&& value) {
    m_completedOnHasBeenSet = true;
    m_completedOn = std::forward<CompletedOnT>(value);
  }
  template <typename CompletedOnT = Aws::Utils::DateTime>
  DataQualityRulesetEvaluationRun& WithCompletedOn(CompletedOnT&& value) {
    SetCompletedOn(std::forward<CompletedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time (in seconds) that the run consumed resources.</p>
   */
  inline int GetExecutionTime() const { return m_executionTime; }
  inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
  inline void SetExecutionTime(int value) {
    m_executionTimeHasBeenSet = true;
    m_executionTime = value;
  }
  inline DataQualityRulesetEvaluationRun& WithExecutionTime(int value) {
    SetExecutionTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of ruleset names for the run.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRulesetNames() const { return m_rulesetNames; }
  inline bool RulesetNamesHasBeenSet() const { return m_rulesetNamesHasBeenSet; }
  template <typename RulesetNamesT = Aws::Vector<Aws::String>>
  void SetRulesetNames(RulesetNamesT&& value) {
    m_rulesetNamesHasBeenSet = true;
    m_rulesetNames = std::forward<RulesetNamesT>(value);
  }
  template <typename RulesetNamesT = Aws::Vector<Aws::String>>
  DataQualityRulesetEvaluationRun& WithRulesetNames(RulesetNamesT&& value) {
    SetRulesetNames(std::forward<RulesetNamesT>(value));
    return *this;
  }
  template <typename RulesetNamesT = Aws::String>
  DataQualityRulesetEvaluationRun& AddRulesetNames(RulesetNamesT&& value) {
    m_rulesetNamesHasBeenSet = true;
    m_rulesetNames.emplace_back(std::forward<RulesetNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of result IDs for the data quality results for the run.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResultIds() const { return m_resultIds; }
  inline bool ResultIdsHasBeenSet() const { return m_resultIdsHasBeenSet; }
  template <typename ResultIdsT = Aws::Vector<Aws::String>>
  void SetResultIds(ResultIdsT&& value) {
    m_resultIdsHasBeenSet = true;
    m_resultIds = std::forward<ResultIdsT>(value);
  }
  template <typename ResultIdsT = Aws::Vector<Aws::String>>
  DataQualityRulesetEvaluationRun& WithResultIds(ResultIdsT&& value) {
    SetResultIds(std::forward<ResultIdsT>(value));
    return *this;
  }
  template <typename ResultIdsT = Aws::String>
  DataQualityRulesetEvaluationRun& AddResultIds(ResultIdsT&& value) {
    m_resultIdsHasBeenSet = true;
    m_resultIds.emplace_back(std::forward<ResultIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of reference strings to additional data sources you can specify for an
   * evaluation run.</p>
   */
  inline const Aws::Map<Aws::String, DataSource>& GetAdditionalDataSources() const { return m_additionalDataSources; }
  inline bool AdditionalDataSourcesHasBeenSet() const { return m_additionalDataSourcesHasBeenSet; }
  template <typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
  void SetAdditionalDataSources(AdditionalDataSourcesT&& value) {
    m_additionalDataSourcesHasBeenSet = true;
    m_additionalDataSources = std::forward<AdditionalDataSourcesT>(value);
  }
  template <typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
  DataQualityRulesetEvaluationRun& WithAdditionalDataSources(AdditionalDataSourcesT&& value) {
    SetAdditionalDataSources(std::forward<AdditionalDataSourcesT>(value));
    return *this;
  }
  template <typename AdditionalDataSourcesKeyT = Aws::String, typename AdditionalDataSourcesValueT = DataSource>
  DataQualityRulesetEvaluationRun& AddAdditionalDataSources(AdditionalDataSourcesKeyT&& key, AdditionalDataSourcesValueT&& value) {
    m_additionalDataSourcesHasBeenSet = true;
    m_additionalDataSources.emplace(std::forward<AdditionalDataSourcesKeyT>(key), std::forward<AdditionalDataSourcesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runId;

  DataSource m_dataSource;

  Aws::String m_role;

  int m_numberOfWorkers{0};

  int m_timeout{0};

  DataQualityEvaluationRunAdditionalRunOptions m_additionalRunOptions;

  TaskStatusType m_status{TaskStatusType::NOT_SET};

  Aws::String m_errorString;

  Aws::Utils::DateTime m_startedOn{};

  Aws::Utils::DateTime m_lastModifiedOn{};

  Aws::Utils::DateTime m_completedOn{};

  int m_executionTime{0};

  Aws::Vector<Aws::String> m_rulesetNames;

  Aws::Vector<Aws::String> m_resultIds;

  Aws::Map<Aws::String, DataSource> m_additionalDataSources;
  bool m_runIdHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_numberOfWorkersHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
  bool m_additionalRunOptionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorStringHasBeenSet = false;
  bool m_startedOnHasBeenSet = false;
  bool m_lastModifiedOnHasBeenSet = false;
  bool m_completedOnHasBeenSet = false;
  bool m_executionTimeHasBeenSet = false;
  bool m_rulesetNamesHasBeenSet = false;
  bool m_resultIdsHasBeenSet = false;
  bool m_additionalDataSourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
