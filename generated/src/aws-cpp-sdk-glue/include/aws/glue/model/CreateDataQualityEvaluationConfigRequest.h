/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationConfigAdditionalRunOptions.h>
#include <aws/glue/model/DataQualityEvaluationConfigDataSource.h>
#include <aws/glue/model/DataQualityEvaluationConfigLevel.h>
#include <aws/glue/model/DataQualityEvaluationConfigManagedRuleset.h>
#include <aws/glue/model/DataQualityEvaluationConfigTrigger.h>
#include <aws/glue/model/DataSource.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class CreateDataQualityEvaluationConfigRequest : public GlueRequest {
 public:
  AWS_GLUE_API CreateDataQualityEvaluationConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataQualityEvaluationConfig"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A name for the data quality evaluation configuration. The name must be unique
   * within your account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDataQualityEvaluationConfigRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue Data Catalog hierarchical level that the configuration applies to.
   * Valid values are <code>CATALOG</code>, <code>DATABASE</code>, and
   * <code>TABLE</code>.</p>
   */
  inline DataQualityEvaluationConfigLevel GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(DataQualityEvaluationConfigLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline CreateDataQualityEvaluationConfigRequest& WithLevel(DataQualityEvaluationConfigLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog, database, or table that the configuration applies to, as
   * specified by <code>Level</code>.</p>
   */
  inline const DataQualityEvaluationConfigDataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataQualityEvaluationConfigDataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataQualityEvaluationConfigDataSource>
  CreateDataQualityEvaluationConfigRequest& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a Data Quality Definition Language (DQDL) ruleset, containing
   * analyzers, rules, or both, to evaluate tables with. You create the ruleset using
   * the <code>CreateDataQualityRuleset</code> API. Specify either
   * <code>RulesetName</code> or <code>ManagedRulesetName</code>, not both.</p>
   */
  inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
  inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }
  template <typename RulesetNameT = Aws::String>
  void SetRulesetName(RulesetNameT&& value) {
    m_rulesetNameHasBeenSet = true;
    m_rulesetName = std::forward<RulesetNameT>(value);
  }
  template <typename RulesetNameT = Aws::String>
  CreateDataQualityEvaluationConfigRequest& WithRulesetName(RulesetNameT&& value) {
    SetRulesetName(std::forward<RulesetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A built-in ruleset that profiles each table, used when
   * <code>RulesetName</code> is not set. The default is <code>SIMPLE</code>. Choose
   * from the following built-in rulesets:</p> <dl> <dt>SIMPLE</dt> <dd> <p>Row count
   * and column count, completeness, minimum, and maximum for every column, mean,
   * sum, and standard deviation for numeric columns, and column length for string
   * columns.</p> </dd> <dt>ADVANCED</dt> <dd> <p>Every statistic in
   * <code>SIMPLE</code>, plus distribution, uniqueness, and distinct values
   * count.</p> </dd> </dl>
   */
  inline DataQualityEvaluationConfigManagedRuleset GetManagedRulesetName() const { return m_managedRulesetName; }
  inline bool ManagedRulesetNameHasBeenSet() const { return m_managedRulesetNameHasBeenSet; }
  inline void SetManagedRulesetName(DataQualityEvaluationConfigManagedRuleset value) {
    m_managedRulesetNameHasBeenSet = true;
    m_managedRulesetName = value;
  }
  inline CreateDataQualityEvaluationConfigRequest& WithManagedRulesetName(DataQualityEvaluationConfigManagedRuleset value) {
    SetManagedRulesetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the configuration evaluates tables. You can choose one or more triggers,
   * and each table is evaluated at most once an hour. The default is
   * <code>ONCE</code>. Choose from the following triggers:</p> <dl> <dt>ONCE</dt>
   * <dd> <p>Evaluates each table one time, including when tables are added to a
   * database or catalog.</p> </dd> <dt>SCHEDULE</dt> <dd> <p>Evaluates each table on
   * the cron or rate expression in <code>ScheduleExpression</code>, between the
   * optional <code>StartAt</code> and <code>EndAt</code> times.</p> </dd>
   * <dt>METADATA_CHANGE</dt> <dd> <p>Evaluates a table whenever its Glue Data
   * Catalog metadata changes, such as a schema change or an Apache Iceberg
   * commit.</p> </dd> </dl>
   */
  inline const Aws::Vector<DataQualityEvaluationConfigTrigger>& GetTriggers() const { return m_triggers; }
  inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
  template <typename TriggersT = Aws::Vector<DataQualityEvaluationConfigTrigger>>
  void SetTriggers(TriggersT&& value) {
    m_triggersHasBeenSet = true;
    m_triggers = std::forward<TriggersT>(value);
  }
  template <typename TriggersT = Aws::Vector<DataQualityEvaluationConfigTrigger>>
  CreateDataQualityEvaluationConfigRequest& WithTriggers(TriggersT&& value) {
    SetTriggers(std::forward<TriggersT>(value));
    return *this;
  }
  inline CreateDataQualityEvaluationConfigRequest& AddTriggers(DataQualityEvaluationConfigTrigger value) {
    m_triggersHasBeenSet = true;
    m_triggers.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A cron or rate expression, in UTC, for the <code>SCHEDULE</code> trigger, for
   * example <code>cron(0 6 * * ? *)</code>. The schedule can run at most once an
   * hour.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  CreateDataQualityEvaluationConfigRequest& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time from which the schedule runs, inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetStartAt() const { return m_startAt; }
  inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }
  template <typename StartAtT = Aws::Utils::DateTime>
  void SetStartAt(StartAtT&& value) {
    m_startAtHasBeenSet = true;
    m_startAt = std::forward<StartAtT>(value);
  }
  template <typename StartAtT = Aws::Utils::DateTime>
  CreateDataQualityEvaluationConfigRequest& WithStartAt(StartAtT&& value) {
    SetStartAt(std::forward<StartAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the schedule stops running, exclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetEndAt() const { return m_endAt; }
  inline bool EndAtHasBeenSet() const { return m_endAtHasBeenSet; }
  template <typename EndAtT = Aws::Utils::DateTime>
  void SetEndAt(EndAtT&& value) {
    m_endAtHasBeenSet = true;
    m_endAt = std::forward<EndAtT>(value);
  }
  template <typename EndAtT = Aws::Utils::DateTime>
  CreateDataQualityEvaluationConfigRequest& WithEndAt(EndAtT&& value) {
    SetEndAt(std::forward<EndAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role that evaluations assume. You can specify the role name or the
   * role Amazon Resource Name (ARN).</p> <p>The role must allow the
   * <code>glue.amazonaws.com</code> service principal to assume it, and needs
   * permissions to read the catalog (<code>glue:GetCatalog</code>,
   * <code>glue:GetDatabase</code>, <code>glue:GetTable</code>,
   * <code>glue:SearchTables</code>, and <code>glue:GetPartitions</code>), read and
   * create rulesets (<code>glue:GetDataQualityRuleset</code> and
   * <code>glue:CreateDataQualityRuleset</code>), start evaluations
   * (<code>glue:StartDataQualityRulesetEvaluationRun</code>,
   * <code>glue:PublishDataQuality</code>, and <code>iam:PassRole</code> on the role
   * itself), read the tables' data in Amazon S3, and write logs to Amazon CloudWatch
   * Logs. If a catalog-level or database-level configuration applies to an Amazon S3
   * Tables catalog, the role also needs <code>s3tables:ListTableBuckets</code> and
   * <code>s3tables:ListTables</code>. If you use Lake Formation, the role needs the
   * <code>DESCRIBE</code> permission on the tables.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  CreateDataQualityEvaluationConfigRequest& WithRole(RoleT&& value) {
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
  inline CreateDataQualityEvaluationConfigRequest& WithNumberOfWorkers(int value) {
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
  inline CreateDataQualityEvaluationConfigRequest& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional run options you can specify for an evaluation run.</p>
   */
  inline const DataQualityEvaluationConfigAdditionalRunOptions& GetAdditionalRunOptions() const { return m_additionalRunOptions; }
  inline bool AdditionalRunOptionsHasBeenSet() const { return m_additionalRunOptionsHasBeenSet; }
  template <typename AdditionalRunOptionsT = DataQualityEvaluationConfigAdditionalRunOptions>
  void SetAdditionalRunOptions(AdditionalRunOptionsT&& value) {
    m_additionalRunOptionsHasBeenSet = true;
    m_additionalRunOptions = std::forward<AdditionalRunOptionsT>(value);
  }
  template <typename AdditionalRunOptionsT = DataQualityEvaluationConfigAdditionalRunOptions>
  CreateDataQualityEvaluationConfigRequest& WithAdditionalRunOptions(AdditionalRunOptionsT&& value) {
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
  inline bool AdditionalDataSourcesHasBeenSet() const { return m_additionalDataSourcesHasBeenSet; }
  template <typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
  void SetAdditionalDataSources(AdditionalDataSourcesT&& value) {
    m_additionalDataSourcesHasBeenSet = true;
    m_additionalDataSources = std::forward<AdditionalDataSourcesT>(value);
  }
  template <typename AdditionalDataSourcesT = Aws::Map<Aws::String, DataSource>>
  CreateDataQualityEvaluationConfigRequest& WithAdditionalDataSources(AdditionalDataSourcesT&& value) {
    SetAdditionalDataSources(std::forward<AdditionalDataSourcesT>(value));
    return *this;
  }
  template <typename AdditionalDataSourcesKeyT = Aws::String, typename AdditionalDataSourcesValueT = DataSource>
  CreateDataQualityEvaluationConfigRequest& AddAdditionalDataSources(AdditionalDataSourcesKeyT&& key, AdditionalDataSourcesValueT&& value) {
    m_additionalDataSourcesHasBeenSet = true;
    m_additionalDataSources.emplace(std::forward<AdditionalDataSourcesKeyT>(key), std::forward<AdditionalDataSourcesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags applied to the data quality evaluation configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDataQualityEvaluationConfigRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDataQualityEvaluationConfigRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the operation
   * completes no more than one time. If this token matches a previous request, the
   * service ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDataQualityEvaluationConfigRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  DataQualityEvaluationConfigLevel m_level{DataQualityEvaluationConfigLevel::NOT_SET};

  DataQualityEvaluationConfigDataSource m_dataSource;

  Aws::String m_rulesetName;

  DataQualityEvaluationConfigManagedRuleset m_managedRulesetName{DataQualityEvaluationConfigManagedRuleset::NOT_SET};

  Aws::Vector<DataQualityEvaluationConfigTrigger> m_triggers;

  Aws::String m_scheduleExpression;

  Aws::Utils::DateTime m_startAt{};

  Aws::Utils::DateTime m_endAt{};

  Aws::String m_role;

  int m_numberOfWorkers{0};

  int m_timeout{0};

  DataQualityEvaluationConfigAdditionalRunOptions m_additionalRunOptions;

  Aws::Map<Aws::String, DataSource> m_additionalDataSources;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_levelHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_rulesetNameHasBeenSet = false;
  bool m_managedRulesetNameHasBeenSet = false;
  bool m_triggersHasBeenSet = false;
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_startAtHasBeenSet = false;
  bool m_endAtHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_numberOfWorkersHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
  bool m_additionalRunOptionsHasBeenSet = false;
  bool m_additionalDataSourcesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
