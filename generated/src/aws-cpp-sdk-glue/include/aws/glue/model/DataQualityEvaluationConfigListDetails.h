/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationConfigLevel.h>
#include <aws/glue/model/DataQualityEvaluationConfigListDataSource.h>
#include <aws/glue/model/DataQualityEvaluationConfigManagedRuleset.h>
#include <aws/glue/model/DataQualityEvaluationRunMode.h>

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
 * <p>Describes a data quality evaluation configuration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityEvaluationConfigListDetails">AWS
 * API Reference</a></p>
 */
class DataQualityEvaluationConfigListDetails {
 public:
  AWS_GLUE_API DataQualityEvaluationConfigListDetails() = default;
  AWS_GLUE_API DataQualityEvaluationConfigListDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityEvaluationConfigListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the data quality evaluation configuration.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DataQualityEvaluationConfigListDetails& WithName(NameT&& value) {
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
  inline bool EvaluationRunModeHasBeenSet() const { return m_evaluationRunModeHasBeenSet; }
  inline void SetEvaluationRunMode(DataQualityEvaluationRunMode value) {
    m_evaluationRunModeHasBeenSet = true;
    m_evaluationRunMode = value;
  }
  inline DataQualityEvaluationConfigListDetails& WithEvaluationRunMode(DataQualityEvaluationRunMode value) {
    SetEvaluationRunMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
  inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
  template <typename CreatedOnT = Aws::Utils::DateTime>
  void SetCreatedOn(CreatedOnT&& value) {
    m_createdOnHasBeenSet = true;
    m_createdOn = std::forward<CreatedOnT>(value);
  }
  template <typename CreatedOnT = Aws::Utils::DateTime>
  DataQualityEvaluationConfigListDetails& WithCreatedOn(CreatedOnT&& value) {
    SetCreatedOn(std::forward<CreatedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the configuration was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
  inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
  template <typename LastModifiedOnT = Aws::Utils::DateTime>
  void SetLastModifiedOn(LastModifiedOnT&& value) {
    m_lastModifiedOnHasBeenSet = true;
    m_lastModifiedOn = std::forward<LastModifiedOnT>(value);
  }
  template <typename LastModifiedOnT = Aws::Utils::DateTime>
  DataQualityEvaluationConfigListDetails& WithLastModifiedOn(LastModifiedOnT&& value) {
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
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(DataQualityEvaluationConfigLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline DataQualityEvaluationConfigListDetails& WithLevel(DataQualityEvaluationConfigLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog, database, or table that the configuration applies to.</p>
   */
  inline const DataQualityEvaluationConfigListDataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataQualityEvaluationConfigListDataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataQualityEvaluationConfigListDataSource>
  DataQualityEvaluationConfigListDetails& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data quality ruleset that tables are evaluated with.</p>
   */
  inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
  inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }
  template <typename RulesetNameT = Aws::String>
  void SetRulesetName(RulesetNameT&& value) {
    m_rulesetNameHasBeenSet = true;
    m_rulesetName = std::forward<RulesetNameT>(value);
  }
  template <typename RulesetNameT = Aws::String>
  DataQualityEvaluationConfigListDetails& WithRulesetName(RulesetNameT&& value) {
    SetRulesetName(std::forward<RulesetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The built-in ruleset that tables are evaluated with.</p>
   */
  inline DataQualityEvaluationConfigManagedRuleset GetManagedRulesetName() const { return m_managedRulesetName; }
  inline bool ManagedRulesetNameHasBeenSet() const { return m_managedRulesetNameHasBeenSet; }
  inline void SetManagedRulesetName(DataQualityEvaluationConfigManagedRuleset value) {
    m_managedRulesetNameHasBeenSet = true;
    m_managedRulesetName = value;
  }
  inline DataQualityEvaluationConfigListDetails& WithManagedRulesetName(DataQualityEvaluationConfigManagedRuleset value) {
    SetManagedRulesetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether evaluations are paused.</p>
   */
  inline bool GetPauseRuns() const { return m_pauseRuns; }
  inline bool PauseRunsHasBeenSet() const { return m_pauseRunsHasBeenSet; }
  inline void SetPauseRuns(bool value) {
    m_pauseRunsHasBeenSet = true;
    m_pauseRuns = value;
  }
  inline DataQualityEvaluationConfigListDetails& WithPauseRuns(bool value) {
    SetPauseRuns(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  DataQualityEvaluationRunMode m_evaluationRunMode{DataQualityEvaluationRunMode::NOT_SET};

  Aws::Utils::DateTime m_createdOn{};

  Aws::Utils::DateTime m_lastModifiedOn{};

  DataQualityEvaluationConfigLevel m_level{DataQualityEvaluationConfigLevel::NOT_SET};

  DataQualityEvaluationConfigListDataSource m_dataSource;

  Aws::String m_rulesetName;

  DataQualityEvaluationConfigManagedRuleset m_managedRulesetName{DataQualityEvaluationConfigManagedRuleset::NOT_SET};

  bool m_pauseRuns{false};
  bool m_nameHasBeenSet = false;
  bool m_evaluationRunModeHasBeenSet = false;
  bool m_createdOnHasBeenSet = false;
  bool m_lastModifiedOnHasBeenSet = false;
  bool m_levelHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_rulesetNameHasBeenSet = false;
  bool m_managedRulesetNameHasBeenSet = false;
  bool m_pauseRunsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
