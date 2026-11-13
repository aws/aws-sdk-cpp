/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationConfigAdditionalRunOptions.h>
#include <aws/glue/model/DataQualityEvaluationConfigDataSource.h>
#include <aws/glue/model/DataQualityEvaluationConfigLevel.h>
#include <aws/glue/model/DataQualityEvaluationConfigManagedRuleset.h>
#include <aws/glue/model/DataQualityEvaluationConfigTrigger.h>
#include <aws/glue/model/DataQualityEvaluationRunMode.h>
#include <aws/glue/model/DataSource.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class GetDataQualityEvaluationConfigResult {
 public:
  AWS_GLUE_API GetDataQualityEvaluationConfigResult() = default;
  AWS_GLUE_API GetDataQualityEvaluationConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetDataQualityEvaluationConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the data quality evaluation configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetDataQualityEvaluationConfigResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation run mode of the configuration's results, which is
   * <code>EVALUATION_CONFIG</code>.</p>
   */
  inline DataQualityEvaluationRunMode GetEvaluationRunMode() const { return m_evaluationRunMode; }
  inline void SetEvaluationRunMode(DataQualityEvaluationRunMode value) {
    m_evaluationRunModeHasBeenSet = true;
    m_evaluationRunMode = value;
  }
  inline GetDataQualityEvaluationConfigResult& WithEvaluationRunMode(DataQualityEvaluationRunMode value) {
    SetEvaluationRunMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
  template <typename CreatedOnT = Aws::Utils::DateTime>
  void SetCreatedOn(CreatedOnT&& value) {
    m_createdOnHasBeenSet = true;
    m_createdOn = std::forward<CreatedOnT>(value);
  }
  template <typename CreatedOnT = Aws::Utils::DateTime>
  GetDataQualityEvaluationConfigResult& WithCreatedOn(CreatedOnT&& value) {
    SetCreatedOn(std::forward<CreatedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the configuration was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
  template <typename LastModifiedOnT = Aws::Utils::DateTime>
  void SetLastModifiedOn(LastModifiedOnT&& value) {
    m_lastModifiedOnHasBeenSet = true;
    m_lastModifiedOn = std::forward<LastModifiedOnT>(value);
  }
  template <typename LastModifiedOnT = Aws::Utils::DateTime>
  GetDataQualityEvaluationConfigResult& WithLastModifiedOn(LastModifiedOnT&& value) {
    SetLastModifiedOn(std::forward<LastModifiedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog hierarchical level that the configuration applies
   * to.</p>
   */
  inline DataQualityEvaluationConfigLevel GetLevel() const { return m_level; }
  inline void SetLevel(DataQualityEvaluationConfigLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline GetDataQualityEvaluationConfigResult& WithLevel(DataQualityEvaluationConfigLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog, database, or table that the configuration applies to.</p>
   */
  inline const DataQualityEvaluationConfigDataSource& GetDataSource() const { return m_dataSource; }
  template <typename DataSourceT = DataQualityEvaluationConfigDataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataQualityEvaluationConfigDataSource>
  GetDataQualityEvaluationConfigResult& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data quality ruleset that tables are evaluated with.</p>
   */
  inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
  template <typename RulesetNameT = Aws::String>
  void SetRulesetName(RulesetNameT&& value) {
    m_rulesetNameHasBeenSet = true;
    m_rulesetName = std::forward<RulesetNameT>(value);
  }
  template <typename RulesetNameT = Aws::String>
  GetDataQualityEvaluationConfigResult& WithRulesetName(RulesetNameT&& value) {
    SetRulesetName(std::forward<RulesetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The built-in ruleset that tables are evaluated with.</p>
   */
  inline DataQualityEvaluationConfigManagedRuleset GetManagedRulesetName() const { return m_managedRulesetName; }
  inline void SetManagedRulesetName(DataQualityEvaluationConfigManagedRuleset value) {
    m_managedRulesetNameHasBeenSet = true;
    m_managedRulesetName = value;
  }
  inline GetDataQualityEvaluationConfigResult& WithManagedRulesetName(DataQualityEvaluationConfigManagedRuleset value) {
    SetManagedRulesetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the configuration evaluates tables:</p> <dl> <dt>ONCE</dt> <dd> <p>Each
   * table is evaluated one time, including when tables are added to a database or
   * catalog.</p> </dd> <dt>SCHEDULE</dt> <dd> <p>Each table is evaluated on the cron
   * or rate expression in <code>ScheduleExpression</code>.</p> </dd>
   * <dt>METADATA_CHANGE</dt> <dd> <p>A table is evaluated whenever its Glue Data
   * Catalog metadata changes.</p> </dd> </dl>
   */
  inline const Aws::Vector<DataQualityEvaluationConfigTrigger>& GetTriggers() const { return m_triggers; }
  template <typename TriggersT = Aws::Vector<DataQualityEvaluationConfigTrigger>>
  void SetTriggers(TriggersT&& value) {
    m_triggersHasBeenSet = true;
    m_triggers = std::forward<TriggersT>(value);
  }
  template <typename TriggersT = Aws::Vector<DataQualityEvaluationConfigTrigger>>
  GetDataQualityEvaluationConfigResult& WithTriggers(TriggersT&& value) {
    SetTriggers(std::forward<TriggersT>(value));
    return *this;
  }
  inline GetDataQualityEvaluationConfigResult& AddTriggers(DataQualityEvaluationConfigTrigger value) {
    m_triggersHasBeenSet = true;
    m_triggers.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cron or rate expression, in UTC, for the <code>SCHEDULE</code>
   * trigger.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  GetDataQualityEvaluationConfigResult& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time from which the schedule runs, inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetStartAt() const { return m_startAt; }
  template <typename StartAtT = Aws::Utils::DateTime>
  void SetStartAt(StartAtT&& value) {
    m_startAtHasBeenSet = true;
    m_startAt = std::forward<StartAtT>(value);
  }
  template <typename StartAtT = Aws::Utils::DateTime>
  GetDataQualityEvaluationConfigResult& WithStartAt(StartAtT&& value) {
    SetStartAt(std::forward<StartAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the schedule stops running, exclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetEndAt() const { return m_endAt; }
  template <typename EndAtT = Aws::Utils::DateTime>
  void SetEndAt(EndAtT&& value) {
    m_endAtHasBeenSet = true;
    m_endAt = std::forward<EndAtT>(value);
  }
  template <typename EndAtT = Aws::Utils::DateTime>
  GetDataQualityEvaluationConfigResult& WithEndAt(EndAtT&& value) {
    SetEndAt(std::forward<EndAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether evaluations are paused.</p>
   */
  inline bool GetPauseRuns() const { return m_pauseRuns; }
  inline void SetPauseRuns(bool value) {
    m_pauseRunsHasBeenSet = true;
    m_pauseRuns = value;
  }
  inline GetDataQualityEvaluationConfigResult& WithPauseRuns(bool value) {
    SetPauseRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that evaluation runs
   * assume.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  GetDataQualityEvaluationConfigResult& WithRole(RoleT&& value) {
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
  inline void SetNumberOfWorkers(int value) {
    m_numberOfWorkersHasBeenSet = true;
    m_numberOfWorkers = value;
  }
  inline GetDataQualityEvaluationConfigResult& WithNumberOfWorkers(int value) {
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
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline GetDataQualityEvaluationConfigResult& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional run options you can specify for an evaluation run.</p>
   */
  inline const DataQualityEvaluationConfigAdditionalRunOptions& GetAdditionalRunOptions() const { return m_additionalRunOptions; }
  template <typename AdditionalRunOptionsT = DataQualityEvaluationConfigAdditionalRunOptions>
  void SetAdditionalRunOptions(AdditionalRunOptionsT&& value) {
    m_additionalRunOptionsHasBeenSet = true;
    m_additionalRunOptions = std::forward<AdditionalRunOptionsT>(value);
  }
  template <typename AdditionalRunOptionsT = DataQualityEvaluationConfigAdditionalRunOptions>
  GetDataQualityEvaluationConfigResult& WithAdditionalRunOptions(AdditionalRunOptionsT&& value) {
    SetAdditionalRunOptions(std::forward<AdditionalRunOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of reference strings to additional data sources you can specify for an
   * evaluation run.</p>
   */
  inline const Aws::Map<Aws::String, DataSource>& GetAdditionalDataSources() const { return m_additionalDataSources; }
  template <typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
  void SetAdditionalDataSources(AdditionalDataSourcesT&& value) {
    m_additionalDataSourcesHasBeenSet = true;
    m_additionalDataSources = std::forward<AdditionalDataSourcesT>(value);
  }
  template <typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
  GetDataQualityEvaluationConfigResult& WithAdditionalDataSources(AdditionalDataSourcesT&& value) {
    SetAdditionalDataSources(std::forward<AdditionalDataSourcesT>(value));
    return *this;
  }
  template <typename AdditionalDataSourcesKeyT = Aws::String, typename AdditionalDataSourcesValueT = DataSource>
  GetDataQualityEvaluationConfigResult& AddAdditionalDataSources(AdditionalDataSourcesKeyT&& key, AdditionalDataSourcesValueT&& value) {
    m_additionalDataSourcesHasBeenSet = true;
    m_additionalDataSources.emplace(std::forward<AdditionalDataSourcesKeyT>(key), std::forward<AdditionalDataSourcesValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetDataQualityEvaluationConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  DataQualityEvaluationRunMode m_evaluationRunMode{DataQualityEvaluationRunMode::NOT_SET};

  Aws::Utils::DateTime m_createdOn{};

  Aws::Utils::DateTime m_lastModifiedOn{};

  DataQualityEvaluationConfigLevel m_level{DataQualityEvaluationConfigLevel::NOT_SET};

  DataQualityEvaluationConfigDataSource m_dataSource;

  Aws::String m_rulesetName;

  DataQualityEvaluationConfigManagedRuleset m_managedRulesetName{DataQualityEvaluationConfigManagedRuleset::NOT_SET};

  Aws::Vector<DataQualityEvaluationConfigTrigger> m_triggers;

  Aws::String m_scheduleExpression;

  Aws::Utils::DateTime m_startAt{};

  Aws::Utils::DateTime m_endAt{};

  bool m_pauseRuns{false};

  Aws::String m_role;

  int m_numberOfWorkers{0};

  int m_timeout{0};

  DataQualityEvaluationConfigAdditionalRunOptions m_additionalRunOptions;

  Aws::Map<Aws::String, DataSource> m_additionalDataSources;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_evaluationRunModeHasBeenSet = false;
  bool m_createdOnHasBeenSet = false;
  bool m_lastModifiedOnHasBeenSet = false;
  bool m_levelHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_rulesetNameHasBeenSet = false;
  bool m_managedRulesetNameHasBeenSet = false;
  bool m_triggersHasBeenSet = false;
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_startAtHasBeenSet = false;
  bool m_endAtHasBeenSet = false;
  bool m_pauseRunsHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_numberOfWorkersHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
  bool m_additionalRunOptionsHasBeenSet = false;
  bool m_additionalDataSourcesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
