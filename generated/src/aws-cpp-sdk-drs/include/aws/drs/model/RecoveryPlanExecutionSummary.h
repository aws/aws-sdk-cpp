/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ErrorDetail.h>
#include <aws/drs/model/RecoveryPlanExecutionMode.h>
#include <aws/drs/model/RecoveryPlanExecutionStatus.h>

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
 * <p>Summary information about a Recovery Plan execution.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecutionSummary">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecutionSummary {
 public:
  AWS_DRS_API RecoveryPlanExecutionSummary() = default;
  AWS_DRS_API RecoveryPlanExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan execution.</p>
   */
  inline const Aws::String& GetRecoveryPlanExecutionArn() const { return m_recoveryPlanExecutionArn; }
  inline bool RecoveryPlanExecutionArnHasBeenSet() const { return m_recoveryPlanExecutionArnHasBeenSet; }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  void SetRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    m_recoveryPlanExecutionArnHasBeenSet = true;
    m_recoveryPlanExecutionArn = std::forward<RecoveryPlanExecutionArnT>(value);
  }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  RecoveryPlanExecutionSummary& WithRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    SetRecoveryPlanExecutionArn(std::forward<RecoveryPlanExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Recovery Plan.</p>
   */
  inline const Aws::String& GetRecoveryPlanArn() const { return m_recoveryPlanArn; }
  inline bool RecoveryPlanArnHasBeenSet() const { return m_recoveryPlanArnHasBeenSet; }
  template <typename RecoveryPlanArnT = Aws::String>
  void SetRecoveryPlanArn(RecoveryPlanArnT&& value) {
    m_recoveryPlanArnHasBeenSet = true;
    m_recoveryPlanArn = std::forward<RecoveryPlanArnT>(value);
  }
  template <typename RecoveryPlanArnT = Aws::String>
  RecoveryPlanExecutionSummary& WithRecoveryPlanArn(RecoveryPlanArnT&& value) {
    SetRecoveryPlanArn(std::forward<RecoveryPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution mode.</p>
   */
  inline RecoveryPlanExecutionMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(RecoveryPlanExecutionMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline RecoveryPlanExecutionSummary& WithMode(RecoveryPlanExecutionMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution status.</p>
   */
  inline RecoveryPlanExecutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecoveryPlanExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecoveryPlanExecutionSummary& WithStatus(RecoveryPlanExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the execution started.</p>
   */
  inline const Aws::String& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::String>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::String>
  RecoveryPlanExecutionSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error details if the execution failed.</p>
   */
  inline const ErrorDetail& GetErrorDetail() const { return m_errorDetail; }
  inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
  template <typename ErrorDetailT = ErrorDetail>
  void SetErrorDetail(ErrorDetailT&& value) {
    m_errorDetailHasBeenSet = true;
    m_errorDetail = std::forward<ErrorDetailT>(value);
  }
  template <typename ErrorDetailT = ErrorDetail>
  RecoveryPlanExecutionSummary& WithErrorDetail(ErrorDetailT&& value) {
    SetErrorDetail(std::forward<ErrorDetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionArn;

  Aws::String m_recoveryPlanArn;

  RecoveryPlanExecutionMode m_mode{RecoveryPlanExecutionMode::NOT_SET};

  RecoveryPlanExecutionStatus m_status{RecoveryPlanExecutionStatus::NOT_SET};

  Aws::String m_startedAt;

  ErrorDetail m_errorDetail;
  bool m_recoveryPlanExecutionArnHasBeenSet = false;
  bool m_recoveryPlanArnHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_errorDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
