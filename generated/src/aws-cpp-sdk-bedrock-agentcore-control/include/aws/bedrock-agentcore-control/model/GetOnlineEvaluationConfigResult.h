/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DataSourceConfig.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorReference.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigStatus.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationExecutionStatus.h>
#include <aws/bedrock-agentcore-control/model/OutputConfig.h>
#include <aws/bedrock-agentcore-control/model/Rule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class GetOnlineEvaluationConfigResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetOnlineEvaluationConfigResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetOnlineEvaluationConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetOnlineEvaluationConfigResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  GetOnlineEvaluationConfigResult& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigId() const { return m_onlineEvaluationConfigId; }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  void SetOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    m_onlineEvaluationConfigIdHasBeenSet = true;
    m_onlineEvaluationConfigId = std::forward<OnlineEvaluationConfigIdT>(value);
  }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  GetOnlineEvaluationConfigResult& WithOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    SetOnlineEvaluationConfigId(std::forward<OnlineEvaluationConfigIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigName() const { return m_onlineEvaluationConfigName; }
  template <typename OnlineEvaluationConfigNameT = Aws::String>
  void SetOnlineEvaluationConfigName(OnlineEvaluationConfigNameT&& value) {
    m_onlineEvaluationConfigNameHasBeenSet = true;
    m_onlineEvaluationConfigName = std::forward<OnlineEvaluationConfigNameT>(value);
  }
  template <typename OnlineEvaluationConfigNameT = Aws::String>
  GetOnlineEvaluationConfigResult& WithOnlineEvaluationConfigName(OnlineEvaluationConfigNameT&& value) {
    SetOnlineEvaluationConfigName(std::forward<OnlineEvaluationConfigNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the online evaluation configuration. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetOnlineEvaluationConfigResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The evaluation rule containing sampling configuration, filters, and session
   * settings. </p>
   */
  inline const Rule& GetRule() const { return m_rule; }
  template <typename RuleT = Rule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Rule>
  GetOnlineEvaluationConfigResult& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The data source configuration specifying CloudWatch log groups and service
   * names to monitor. </p>
   */
  inline const DataSourceConfig& GetDataSourceConfig() const { return m_dataSourceConfig; }
  template <typename DataSourceConfigT = DataSourceConfig>
  void SetDataSourceConfig(DataSourceConfigT&& value) {
    m_dataSourceConfigHasBeenSet = true;
    m_dataSourceConfig = std::forward<DataSourceConfigT>(value);
  }
  template <typename DataSourceConfigT = DataSourceConfig>
  GetOnlineEvaluationConfigResult& WithDataSourceConfig(DataSourceConfigT&& value) {
    SetDataSourceConfig(std::forward<DataSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of evaluators applied during online evaluation. </p>
   */
  inline const Aws::Vector<EvaluatorReference>& GetEvaluators() const { return m_evaluators; }
  template <typename EvaluatorsT = Aws::Vector<EvaluatorReference>>
  void SetEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators = std::forward<EvaluatorsT>(value);
  }
  template <typename EvaluatorsT = Aws::Vector<EvaluatorReference>>
  GetOnlineEvaluationConfigResult& WithEvaluators(EvaluatorsT&& value) {
    SetEvaluators(std::forward<EvaluatorsT>(value));
    return *this;
  }
  template <typename EvaluatorsT = EvaluatorReference>
  GetOnlineEvaluationConfigResult& AddEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators.emplace_back(std::forward<EvaluatorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The output configuration specifying where evaluation results are written.
   * </p>
   */
  inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
  template <typename OutputConfigT = OutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = OutputConfig>
  GetOnlineEvaluationConfigResult& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the IAM role used for evaluation
   * execution. </p>
   */
  inline const Aws::String& GetEvaluationExecutionRoleArn() const { return m_evaluationExecutionRoleArn; }
  template <typename EvaluationExecutionRoleArnT = Aws::String>
  void SetEvaluationExecutionRoleArn(EvaluationExecutionRoleArnT&& value) {
    m_evaluationExecutionRoleArnHasBeenSet = true;
    m_evaluationExecutionRoleArn = std::forward<EvaluationExecutionRoleArnT>(value);
  }
  template <typename EvaluationExecutionRoleArnT = Aws::String>
  GetOnlineEvaluationConfigResult& WithEvaluationExecutionRoleArn(EvaluationExecutionRoleArnT&& value) {
    SetEvaluationExecutionRoleArn(std::forward<EvaluationExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the online evaluation configuration. </p>
   */
  inline OnlineEvaluationConfigStatus GetStatus() const { return m_status; }
  inline void SetStatus(OnlineEvaluationConfigStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetOnlineEvaluationConfigResult& WithStatus(OnlineEvaluationConfigStatus value) {
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
  inline void SetExecutionStatus(OnlineEvaluationExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline GetOnlineEvaluationConfigResult& WithExecutionStatus(OnlineEvaluationExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the online evaluation configuration was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetOnlineEvaluationConfigResult& WithCreatedAt(CreatedAtT&& value) {
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
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetOnlineEvaluationConfigResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetOnlineEvaluationConfigResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  GetOnlineEvaluationConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;

  Aws::String m_onlineEvaluationConfigId;

  Aws::String m_onlineEvaluationConfigName;

  Aws::String m_description;

  Rule m_rule;

  DataSourceConfig m_dataSourceConfig;

  Aws::Vector<EvaluatorReference> m_evaluators;

  OutputConfig m_outputConfig;

  Aws::String m_evaluationExecutionRoleArn;

  OnlineEvaluationConfigStatus m_status{OnlineEvaluationConfigStatus::NOT_SET};

  OnlineEvaluationExecutionStatus m_executionStatus{OnlineEvaluationExecutionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  bool m_onlineEvaluationConfigArnHasBeenSet = false;
  bool m_onlineEvaluationConfigIdHasBeenSet = false;
  bool m_onlineEvaluationConfigNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_dataSourceConfigHasBeenSet = false;
  bool m_evaluatorsHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_evaluationExecutionRoleArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
