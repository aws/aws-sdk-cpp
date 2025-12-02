/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorLevel.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorStatus.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorType.h>
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
 * <p> The summary information about an evaluator, including basic metadata and
 * status information. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EvaluatorSummary">AWS
 * API Reference</a></p>
 */
class EvaluatorSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EvaluatorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  EvaluatorSummary& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  EvaluatorSummary& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorName() const { return m_evaluatorName; }
  inline bool EvaluatorNameHasBeenSet() const { return m_evaluatorNameHasBeenSet; }
  template <typename EvaluatorNameT = Aws::String>
  void SetEvaluatorName(EvaluatorNameT&& value) {
    m_evaluatorNameHasBeenSet = true;
    m_evaluatorName = std::forward<EvaluatorNameT>(value);
  }
  template <typename EvaluatorNameT = Aws::String>
  EvaluatorSummary& WithEvaluatorName(EvaluatorNameT&& value) {
    SetEvaluatorName(std::forward<EvaluatorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the evaluator. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  EvaluatorSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of evaluator, indicating whether it is a built-in evaluator
   * provided by the service or a custom evaluator created by the user. </p>
   */
  inline EvaluatorType GetEvaluatorType() const { return m_evaluatorType; }
  inline bool EvaluatorTypeHasBeenSet() const { return m_evaluatorTypeHasBeenSet; }
  inline void SetEvaluatorType(EvaluatorType value) {
    m_evaluatorTypeHasBeenSet = true;
    m_evaluatorType = value;
  }
  inline EvaluatorSummary& WithEvaluatorType(EvaluatorType value) {
    SetEvaluatorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The evaluation level (<code>TOOL_CALL</code>, <code>TRACE</code>, or
   * <code>SESSION</code>) that determines the scope of evaluation. </p>
   */
  inline EvaluatorLevel GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(EvaluatorLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline EvaluatorSummary& WithLevel(EvaluatorLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the evaluator. </p>
   */
  inline EvaluatorStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluatorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluatorSummary& WithStatus(EvaluatorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the evaluator was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EvaluatorSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the evaluator was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  EvaluatorSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Whether the evaluator is locked for modification due to being referenced by
   * active online evaluation configurations. </p>
   */
  inline bool GetLockedForModification() const { return m_lockedForModification; }
  inline bool LockedForModificationHasBeenSet() const { return m_lockedForModificationHasBeenSet; }
  inline void SetLockedForModification(bool value) {
    m_lockedForModificationHasBeenSet = true;
    m_lockedForModification = value;
  }
  inline EvaluatorSummary& WithLockedForModification(bool value) {
    SetLockedForModification(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorArn;
  bool m_evaluatorArnHasBeenSet = false;

  Aws::String m_evaluatorId;
  bool m_evaluatorIdHasBeenSet = false;

  Aws::String m_evaluatorName;
  bool m_evaluatorNameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  EvaluatorType m_evaluatorType{EvaluatorType::NOT_SET};
  bool m_evaluatorTypeHasBeenSet = false;

  EvaluatorLevel m_level{EvaluatorLevel::NOT_SET};
  bool m_levelHasBeenSet = false;

  EvaluatorStatus m_status{EvaluatorStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  bool m_lockedForModification{false};
  bool m_lockedForModificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
