/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigStatus.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The summary information about an online evaluation configuration, including
 * basic metadata and execution status. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OnlineEvaluationConfigSummary">AWS
 * API Reference</a></p>
 */
class OnlineEvaluationConfigSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OnlineEvaluationConfigSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OnlineEvaluationConfigSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OnlineEvaluationConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  inline bool OnlineEvaluationConfigArnHasBeenSet() const { return m_onlineEvaluationConfigArnHasBeenSet; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  OnlineEvaluationConfigSummary& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigId() const { return m_onlineEvaluationConfigId; }
  inline bool OnlineEvaluationConfigIdHasBeenSet() const { return m_onlineEvaluationConfigIdHasBeenSet; }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  void SetOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    m_onlineEvaluationConfigIdHasBeenSet = true;
    m_onlineEvaluationConfigId = std::forward<OnlineEvaluationConfigIdT>(value);
  }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  OnlineEvaluationConfigSummary& WithOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    SetOnlineEvaluationConfigId(std::forward<OnlineEvaluationConfigIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigName() const { return m_onlineEvaluationConfigName; }
  inline bool OnlineEvaluationConfigNameHasBeenSet() const { return m_onlineEvaluationConfigNameHasBeenSet; }
  template <typename OnlineEvaluationConfigNameT = Aws::String>
  void SetOnlineEvaluationConfigName(OnlineEvaluationConfigNameT&& value) {
    m_onlineEvaluationConfigNameHasBeenSet = true;
    m_onlineEvaluationConfigName = std::forward<OnlineEvaluationConfigNameT>(value);
  }
  template <typename OnlineEvaluationConfigNameT = Aws::String>
  OnlineEvaluationConfigSummary& WithOnlineEvaluationConfigName(OnlineEvaluationConfigNameT&& value) {
    SetOnlineEvaluationConfigName(std::forward<OnlineEvaluationConfigNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  OnlineEvaluationConfigSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the online evaluation configuration. </p>
   */
  inline OnlineEvaluationConfigStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(OnlineEvaluationConfigStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline OnlineEvaluationConfigSummary& WithStatus(OnlineEvaluationConfigStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The execution status indicating whether the online evaluation is currently
   * running. </p>
   */
  inline OnlineEvaluationExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
  inline void SetExecutionStatus(OnlineEvaluationExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline OnlineEvaluationConfigSummary& WithExecutionStatus(OnlineEvaluationExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the online evaluation configuration was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  OnlineEvaluationConfigSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the online evaluation configuration was last updated.
   * </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  OnlineEvaluationConfigSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The reason for failure if the online evaluation configuration execution
   * failed. </p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  OnlineEvaluationConfigSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;

  Aws::String m_onlineEvaluationConfigId;

  Aws::String m_onlineEvaluationConfigName;

  Aws::String m_description;

  OnlineEvaluationConfigStatus m_status{OnlineEvaluationConfigStatus::NOT_SET};

  OnlineEvaluationExecutionStatus m_executionStatus{OnlineEvaluationExecutionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_failureReason;
  bool m_onlineEvaluationConfigArnHasBeenSet = false;
  bool m_onlineEvaluationConfigIdHasBeenSet = false;
  bool m_onlineEvaluationConfigNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
