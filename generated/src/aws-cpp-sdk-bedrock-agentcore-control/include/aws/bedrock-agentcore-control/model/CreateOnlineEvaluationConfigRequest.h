/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DataSourceConfig.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorReference.h>
#include <aws/bedrock-agentcore-control/model/Rule.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateOnlineEvaluationConfigRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateOnlineEvaluationConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateOnlineEvaluationConfig"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateOnlineEvaluationConfigRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the online evaluation configuration. Must be unique within your
   * account. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigName() const { return m_onlineEvaluationConfigName; }
  inline bool OnlineEvaluationConfigNameHasBeenSet() const { return m_onlineEvaluationConfigNameHasBeenSet; }
  template <typename OnlineEvaluationConfigNameT = Aws::String>
  void SetOnlineEvaluationConfigName(OnlineEvaluationConfigNameT&& value) {
    m_onlineEvaluationConfigNameHasBeenSet = true;
    m_onlineEvaluationConfigName = std::forward<OnlineEvaluationConfigNameT>(value);
  }
  template <typename OnlineEvaluationConfigNameT = Aws::String>
  CreateOnlineEvaluationConfigRequest& WithOnlineEvaluationConfigName(OnlineEvaluationConfigNameT&& value) {
    SetOnlineEvaluationConfigName(std::forward<OnlineEvaluationConfigNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the online evaluation configuration that explains its
   * monitoring purpose and scope. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateOnlineEvaluationConfigRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The evaluation rule that defines sampling configuration, filters, and
   * session detection settings for the online evaluation. </p>
   */
  inline const Rule& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = Rule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Rule>
  CreateOnlineEvaluationConfigRequest& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The data source configuration that specifies CloudWatch log groups and
   * service names to monitor for agent traces. </p>
   */
  inline const DataSourceConfig& GetDataSourceConfig() const { return m_dataSourceConfig; }
  inline bool DataSourceConfigHasBeenSet() const { return m_dataSourceConfigHasBeenSet; }
  template <typename DataSourceConfigT = DataSourceConfig>
  void SetDataSourceConfig(DataSourceConfigT&& value) {
    m_dataSourceConfigHasBeenSet = true;
    m_dataSourceConfig = std::forward<DataSourceConfigT>(value);
  }
  template <typename DataSourceConfigT = DataSourceConfig>
  CreateOnlineEvaluationConfigRequest& WithDataSourceConfig(DataSourceConfigT&& value) {
    SetDataSourceConfig(std::forward<DataSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of evaluators to apply during online evaluation. Can include both
   * built-in evaluators and custom evaluators created with
   * <code>CreateEvaluator</code>. </p>
   */
  inline const Aws::Vector<EvaluatorReference>& GetEvaluators() const { return m_evaluators; }
  inline bool EvaluatorsHasBeenSet() const { return m_evaluatorsHasBeenSet; }
  template <typename EvaluatorsT = Aws::Vector<EvaluatorReference>>
  void SetEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators = std::forward<EvaluatorsT>(value);
  }
  template <typename EvaluatorsT = Aws::Vector<EvaluatorReference>>
  CreateOnlineEvaluationConfigRequest& WithEvaluators(EvaluatorsT&& value) {
    SetEvaluators(std::forward<EvaluatorsT>(value));
    return *this;
  }
  template <typename EvaluatorsT = EvaluatorReference>
  CreateOnlineEvaluationConfigRequest& AddEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators.emplace_back(std::forward<EvaluatorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the IAM role that grants permissions to
   * read from CloudWatch logs, write evaluation results, and invoke Amazon Bedrock
   * models for evaluation. </p>
   */
  inline const Aws::String& GetEvaluationExecutionRoleArn() const { return m_evaluationExecutionRoleArn; }
  inline bool EvaluationExecutionRoleArnHasBeenSet() const { return m_evaluationExecutionRoleArnHasBeenSet; }
  template <typename EvaluationExecutionRoleArnT = Aws::String>
  void SetEvaluationExecutionRoleArn(EvaluationExecutionRoleArnT&& value) {
    m_evaluationExecutionRoleArnHasBeenSet = true;
    m_evaluationExecutionRoleArn = std::forward<EvaluationExecutionRoleArnT>(value);
  }
  template <typename EvaluationExecutionRoleArnT = Aws::String>
  CreateOnlineEvaluationConfigRequest& WithEvaluationExecutionRoleArn(EvaluationExecutionRoleArnT&& value) {
    SetEvaluationExecutionRoleArn(std::forward<EvaluationExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Whether to enable the online evaluation configuration immediately upon
   * creation. If true, evaluation begins automatically. </p>
   */
  inline bool GetEnableOnCreate() const { return m_enableOnCreate; }
  inline bool EnableOnCreateHasBeenSet() const { return m_enableOnCreateHasBeenSet; }
  inline void SetEnableOnCreate(bool value) {
    m_enableOnCreateHasBeenSet = true;
    m_enableOnCreate = value;
  }
  inline CreateOnlineEvaluationConfigRequest& WithEnableOnCreate(bool value) {
    SetEnableOnCreate(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_onlineEvaluationConfigName;

  Aws::String m_description;

  Rule m_rule;

  DataSourceConfig m_dataSourceConfig;

  Aws::Vector<EvaluatorReference> m_evaluators;

  Aws::String m_evaluationExecutionRoleArn;

  bool m_enableOnCreate{false};
  bool m_clientTokenHasBeenSet = true;
  bool m_onlineEvaluationConfigNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_dataSourceConfigHasBeenSet = false;
  bool m_evaluatorsHasBeenSet = false;
  bool m_evaluationExecutionRoleArnHasBeenSet = false;
  bool m_enableOnCreateHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
