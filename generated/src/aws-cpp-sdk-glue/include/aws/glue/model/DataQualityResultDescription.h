/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEvaluationRunMode.h>
#include <aws/glue/model/DataSource.h>

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
 * <p>Describes a data quality result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResultDescription">AWS
 * API Reference</a></p>
 */
class DataQualityResultDescription {
 public:
  AWS_GLUE_API DataQualityResultDescription() = default;
  AWS_GLUE_API DataQualityResultDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityResultDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique result ID for this data quality result.</p>
   */
  inline const Aws::String& GetResultId() const { return m_resultId; }
  inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
  template <typename ResultIdT = Aws::String>
  void SetResultId(ResultIdT&& value) {
    m_resultIdHasBeenSet = true;
    m_resultId = std::forward<ResultIdT>(value);
  }
  template <typename ResultIdT = Aws::String>
  DataQualityResultDescription& WithResultId(ResultIdT&& value) {
    SetResultId(std::forward<ResultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the evaluation run that produced the result started:
   * <code>ON_DEMAND</code> for a run started by
   * <code>StartDataQualityRulesetEvaluationRun</code>, or
   * <code>EVALUATION_CONFIG</code> for a run started by a data quality evaluation
   * configuration. Not returned for results that no evaluation run produced, such as
   * results from any ETL job.</p>
   */
  inline DataQualityEvaluationRunMode GetEvaluationRunMode() const { return m_evaluationRunMode; }
  inline bool EvaluationRunModeHasBeenSet() const { return m_evaluationRunModeHasBeenSet; }
  inline void SetEvaluationRunMode(DataQualityEvaluationRunMode value) {
    m_evaluationRunModeHasBeenSet = true;
    m_evaluationRunMode = value;
  }
  inline DataQualityResultDescription& WithEvaluationRunMode(DataQualityEvaluationRunMode value) {
    SetEvaluationRunMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data quality evaluation configuration that started the
   * evaluation run, returned when <code>EvaluationRunMode</code> is
   * <code>EVALUATION_CONFIG</code>.</p>
   */
  inline const Aws::String& GetDataQualityEvaluationConfig() const { return m_dataQualityEvaluationConfig; }
  inline bool DataQualityEvaluationConfigHasBeenSet() const { return m_dataQualityEvaluationConfigHasBeenSet; }
  template <typename DataQualityEvaluationConfigT = Aws::String>
  void SetDataQualityEvaluationConfig(DataQualityEvaluationConfigT&& value) {
    m_dataQualityEvaluationConfigHasBeenSet = true;
    m_dataQualityEvaluationConfig = std::forward<DataQualityEvaluationConfigT>(value);
  }
  template <typename DataQualityEvaluationConfigT = Aws::String>
  DataQualityResultDescription& WithDataQualityEvaluationConfig(DataQualityEvaluationConfigT&& value) {
    SetDataQualityEvaluationConfig(std::forward<DataQualityEvaluationConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table name associated with the data quality result.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  DataQualityResultDescription& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job name associated with the data quality result.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  DataQualityResultDescription& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job run ID associated with the data quality result.</p>
   */
  inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
  inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
  template <typename JobRunIdT = Aws::String>
  void SetJobRunId(JobRunIdT&& value) {
    m_jobRunIdHasBeenSet = true;
    m_jobRunId = std::forward<JobRunIdT>(value);
  }
  template <typename JobRunIdT = Aws::String>
  DataQualityResultDescription& WithJobRunId(JobRunIdT&& value) {
    SetJobRunId(std::forward<JobRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the run started for this data quality result.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
  inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
  template <typename StartedOnT = Aws::Utils::DateTime>
  void SetStartedOn(StartedOnT&& value) {
    m_startedOnHasBeenSet = true;
    m_startedOn = std::forward<StartedOnT>(value);
  }
  template <typename StartedOnT = Aws::Utils::DateTime>
  DataQualityResultDescription& WithStartedOn(StartedOnT&& value) {
    SetStartedOn(std::forward<StartedOnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resultId;

  DataQualityEvaluationRunMode m_evaluationRunMode{DataQualityEvaluationRunMode::NOT_SET};

  Aws::String m_dataQualityEvaluationConfig;

  DataSource m_dataSource;

  Aws::String m_jobName;

  Aws::String m_jobRunId;

  Aws::Utils::DateTime m_startedOn{};
  bool m_resultIdHasBeenSet = false;
  bool m_evaluationRunModeHasBeenSet = false;
  bool m_dataQualityEvaluationConfigHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_jobRunIdHasBeenSet = false;
  bool m_startedOnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
