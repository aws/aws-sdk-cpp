/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanStepConfiguration.h>

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
 * <p>A Recovery Plan Step resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanStep">AWS
 * API Reference</a></p>
 */
class RecoveryPlanStep {
 public:
  AWS_DRS_API RecoveryPlanStep() = default;
  AWS_DRS_API RecoveryPlanStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan step.</p>
   */
  inline const Aws::String& GetRecoveryPlanStepArn() const { return m_recoveryPlanStepArn; }
  inline bool RecoveryPlanStepArnHasBeenSet() const { return m_recoveryPlanStepArnHasBeenSet; }
  template <typename RecoveryPlanStepArnT = Aws::String>
  void SetRecoveryPlanStepArn(RecoveryPlanStepArnT&& value) {
    m_recoveryPlanStepArnHasBeenSet = true;
    m_recoveryPlanStepArn = std::forward<RecoveryPlanStepArnT>(value);
  }
  template <typename RecoveryPlanStepArnT = Aws::String>
  RecoveryPlanStep& WithRecoveryPlanStepArn(RecoveryPlanStepArnT&& value) {
    SetRecoveryPlanStepArn(std::forward<RecoveryPlanStepArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetStepOrder() const { return m_stepOrder; }
  inline bool StepOrderHasBeenSet() const { return m_stepOrderHasBeenSet; }
  inline void SetStepOrder(int value) {
    m_stepOrderHasBeenSet = true;
    m_stepOrder = value;
  }
  inline RecoveryPlanStep& WithStepOrder(int value) {
    SetStepOrder(value);
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
  RecoveryPlanStep& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecoveryPlanStepConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RecoveryPlanStepConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RecoveryPlanStepConfiguration>
  RecoveryPlanStep& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the step was created.</p>
   */
  inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::String>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::String>
  RecoveryPlanStep& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the step was last updated.</p>
   */
  inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::String>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::String>
  RecoveryPlanStep& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanStepArn;

  int m_stepOrder{0};

  Aws::String m_stepName;

  RecoveryPlanStepConfiguration m_configuration;

  Aws::String m_createdAt;

  Aws::String m_updatedAt;
  bool m_recoveryPlanStepArnHasBeenSet = false;
  bool m_stepOrderHasBeenSet = false;
  bool m_stepNameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
