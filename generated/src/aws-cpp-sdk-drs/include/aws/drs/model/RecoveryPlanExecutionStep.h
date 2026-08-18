/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ErrorDetail.h>
#include <aws/drs/model/RecoveryPlanExecutionStepConfiguration.h>
#include <aws/drs/model/RecoveryPlanExecutionStepStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>A Recovery Plan Execution Step resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecutionStep">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecutionStep {
 public:
  AWS_DRS_API RecoveryPlanExecutionStep() = default;
  AWS_DRS_API RecoveryPlanExecutionStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecutionStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the execution step.</p>
   */
  inline const Aws::String& GetRecoveryPlanExecutionStepArn() const { return m_recoveryPlanExecutionStepArn; }
  inline bool RecoveryPlanExecutionStepArnHasBeenSet() const { return m_recoveryPlanExecutionStepArnHasBeenSet; }
  template <typename RecoveryPlanExecutionStepArnT = Aws::String>
  void SetRecoveryPlanExecutionStepArn(RecoveryPlanExecutionStepArnT&& value) {
    m_recoveryPlanExecutionStepArnHasBeenSet = true;
    m_recoveryPlanExecutionStepArn = std::forward<RecoveryPlanExecutionStepArnT>(value);
  }
  template <typename RecoveryPlanExecutionStepArnT = Aws::String>
  RecoveryPlanExecutionStep& WithRecoveryPlanExecutionStepArn(RecoveryPlanExecutionStepArnT&& value) {
    SetRecoveryPlanExecutionStepArn(std::forward<RecoveryPlanExecutionStepArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetStepIndex() const { return m_stepIndex; }
  inline bool StepIndexHasBeenSet() const { return m_stepIndexHasBeenSet; }
  inline void SetStepIndex(int value) {
    m_stepIndexHasBeenSet = true;
    m_stepIndex = value;
  }
  inline RecoveryPlanExecutionStep& WithStepIndex(int value) {
    SetStepIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the execution step.</p>
   */
  inline RecoveryPlanExecutionStepStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecoveryPlanExecutionStepStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecoveryPlanExecutionStep& WithStatus(RecoveryPlanExecutionStepStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStepName() const { return m_stepName; }
  inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
  template <typename StepNameT = Aws::String>
  void SetStepName(StepNameT&& value) {
    m_stepNameHasBeenSet = true;
    m_stepName = std::forward<StepNameT>(value);
  }
  template <typename StepNameT = Aws::String>
  RecoveryPlanExecutionStep& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecoveryPlanExecutionStepConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RecoveryPlanExecutionStepConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RecoveryPlanExecutionStepConfiguration>
  RecoveryPlanExecutionStep& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error details if the step failed.</p>
   */
  inline const ErrorDetail& GetErrorDetail() const { return m_errorDetail; }
  inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
  template <typename ErrorDetailT = ErrorDetail>
  void SetErrorDetail(ErrorDetailT&& value) {
    m_errorDetailHasBeenSet = true;
    m_errorDetail = std::forward<ErrorDetailT>(value);
  }
  template <typename ErrorDetailT = ErrorDetail>
  RecoveryPlanExecutionStep& WithErrorDetail(ErrorDetailT&& value) {
    SetErrorDetail(std::forward<ErrorDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times this step has been attempted.</p>
   */
  inline int GetAttempt() const { return m_attempt; }
  inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
  inline void SetAttempt(int value) {
    m_attemptHasBeenSet = true;
    m_attempt = value;
  }
  inline RecoveryPlanExecutionStep& WithAttempt(int value) {
    SetAttempt(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the execution step was created.</p>
   */
  inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::String>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::String>
  RecoveryPlanExecutionStep& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the execution step was last updated.</p>
   */
  inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::String>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::String>
  RecoveryPlanExecutionStep& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionStepArn;

  int m_stepIndex{0};

  RecoveryPlanExecutionStepStatus m_status{RecoveryPlanExecutionStepStatus::NOT_SET};

  Aws::String m_stepName;

  RecoveryPlanExecutionStepConfiguration m_configuration;

  ErrorDetail m_errorDetail;

  int m_attempt{0};

  Aws::String m_createdAt;

  Aws::String m_updatedAt;
  bool m_recoveryPlanExecutionStepArnHasBeenSet = false;
  bool m_stepIndexHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stepNameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_errorDetailHasBeenSet = false;
  bool m_attemptHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
