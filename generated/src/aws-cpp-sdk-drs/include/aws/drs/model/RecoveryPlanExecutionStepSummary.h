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
 * <p>Summary information about a Recovery Plan execution step.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecutionStepSummary">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecutionStepSummary {
 public:
  AWS_DRS_API RecoveryPlanExecutionStepSummary() = default;
  AWS_DRS_API RecoveryPlanExecutionStepSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecutionStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RecoveryPlanExecutionStepSummary& WithRecoveryPlanExecutionStepArn(RecoveryPlanExecutionStepArnT&& value) {
    SetRecoveryPlanExecutionStepArn(std::forward<RecoveryPlanExecutionStepArnT>(value));
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
  RecoveryPlanExecutionStepSummary& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
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
  inline RecoveryPlanExecutionStepSummary& WithStepIndex(int value) {
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
  inline RecoveryPlanExecutionStepSummary& WithStatus(RecoveryPlanExecutionStepStatus value) {
    SetStatus(value);
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
  RecoveryPlanExecutionStepSummary& WithConfiguration(ConfigurationT&& value) {
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
  RecoveryPlanExecutionStepSummary& WithErrorDetail(ErrorDetailT&& value) {
    SetErrorDetail(std::forward<ErrorDetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionStepArn;

  Aws::String m_stepName;

  int m_stepIndex{0};

  RecoveryPlanExecutionStepStatus m_status{RecoveryPlanExecutionStepStatus::NOT_SET};

  RecoveryPlanExecutionStepConfiguration m_configuration;

  ErrorDetail m_errorDetail;
  bool m_recoveryPlanExecutionStepArnHasBeenSet = false;
  bool m_stepNameHasBeenSet = false;
  bool m_stepIndexHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_errorDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
