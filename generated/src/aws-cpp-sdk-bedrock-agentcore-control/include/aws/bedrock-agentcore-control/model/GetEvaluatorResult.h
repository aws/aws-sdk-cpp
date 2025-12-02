/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorConfig.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorLevel.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetEvaluatorResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetEvaluatorResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetEvaluatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetEvaluatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  GetEvaluatorResult& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  GetEvaluatorResult& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the evaluator. </p>
   */
  inline const Aws::String& GetEvaluatorName() const { return m_evaluatorName; }
  template <typename EvaluatorNameT = Aws::String>
  void SetEvaluatorName(EvaluatorNameT&& value) {
    m_evaluatorNameHasBeenSet = true;
    m_evaluatorName = std::forward<EvaluatorNameT>(value);
  }
  template <typename EvaluatorNameT = Aws::String>
  GetEvaluatorResult& WithEvaluatorName(EvaluatorNameT&& value) {
    SetEvaluatorName(std::forward<EvaluatorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the evaluator. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetEvaluatorResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The configuration of the evaluator, including LLM-as-a-Judge settings for
   * custom evaluators. </p>
   */
  inline const EvaluatorConfig& GetEvaluatorConfig() const { return m_evaluatorConfig; }
  template <typename EvaluatorConfigT = EvaluatorConfig>
  void SetEvaluatorConfig(EvaluatorConfigT&& value) {
    m_evaluatorConfigHasBeenSet = true;
    m_evaluatorConfig = std::forward<EvaluatorConfigT>(value);
  }
  template <typename EvaluatorConfigT = EvaluatorConfig>
  GetEvaluatorResult& WithEvaluatorConfig(EvaluatorConfigT&& value) {
    SetEvaluatorConfig(std::forward<EvaluatorConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The evaluation level (<code>TOOL_CALL</code>, <code>TRACE</code>, or
   * <code>SESSION</code>) that determines the scope of evaluation. </p>
   */
  inline EvaluatorLevel GetLevel() const { return m_level; }
  inline void SetLevel(EvaluatorLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline GetEvaluatorResult& WithLevel(EvaluatorLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the evaluator. </p>
   */
  inline EvaluatorStatus GetStatus() const { return m_status; }
  inline void SetStatus(EvaluatorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetEvaluatorResult& WithStatus(EvaluatorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the evaluator was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetEvaluatorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the evaluator was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetEvaluatorResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline void SetLockedForModification(bool value) {
    m_lockedForModificationHasBeenSet = true;
    m_lockedForModification = value;
  }
  inline GetEvaluatorResult& WithLockedForModification(bool value) {
    SetLockedForModification(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetEvaluatorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  EvaluatorConfig m_evaluatorConfig;
  bool m_evaluatorConfigHasBeenSet = false;

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

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
