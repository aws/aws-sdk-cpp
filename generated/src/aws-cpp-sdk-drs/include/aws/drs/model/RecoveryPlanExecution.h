/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>A Recovery Plan execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecution">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecution {
 public:
  AWS_DRS_API RecoveryPlanExecution() = default;
  AWS_DRS_API RecoveryPlanExecution(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RecoveryPlanExecution& WithRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    SetRecoveryPlanExecutionArn(std::forward<RecoveryPlanExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Recovery Plan being executed.</p>
   */
  inline const Aws::String& GetRecoveryPlanArn() const { return m_recoveryPlanArn; }
  inline bool RecoveryPlanArnHasBeenSet() const { return m_recoveryPlanArnHasBeenSet; }
  template <typename RecoveryPlanArnT = Aws::String>
  void SetRecoveryPlanArn(RecoveryPlanArnT&& value) {
    m_recoveryPlanArnHasBeenSet = true;
    m_recoveryPlanArn = std::forward<RecoveryPlanArnT>(value);
  }
  template <typename RecoveryPlanArnT = Aws::String>
  RecoveryPlanExecution& WithRecoveryPlanArn(RecoveryPlanArnT&& value) {
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
  inline RecoveryPlanExecution& WithMode(RecoveryPlanExecutionMode value) {
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
  inline RecoveryPlanExecution& WithStatus(RecoveryPlanExecutionStatus value) {
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
  RecoveryPlanExecution& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the execution completed.</p>
   */
  inline const Aws::String& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::String>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::String>
  RecoveryPlanExecution& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
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
  RecoveryPlanExecution& WithErrorDetail(ErrorDetailT&& value) {
    SetErrorDetail(std::forward<ErrorDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the Recovery Plan execution.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RecoveryPlanExecution& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RecoveryPlanExecution& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionArn;

  Aws::String m_recoveryPlanArn;

  RecoveryPlanExecutionMode m_mode{RecoveryPlanExecutionMode::NOT_SET};

  RecoveryPlanExecutionStatus m_status{RecoveryPlanExecutionStatus::NOT_SET};

  Aws::String m_startedAt;

  Aws::String m_completedAt;

  ErrorDetail m_errorDetail;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_recoveryPlanExecutionArnHasBeenSet = false;
  bool m_recoveryPlanArnHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_errorDetailHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
