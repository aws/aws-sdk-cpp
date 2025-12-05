/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorConfig.h>
#include <aws/bedrock-agentcore-control/model/EvaluatorLevel.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateEvaluatorRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateEvaluatorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateEvaluator"; }

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
  UpdateEvaluatorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the evaluator to update. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  UpdateEvaluatorRequest& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The updated description of the evaluator. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateEvaluatorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The updated configuration for the evaluator, including LLM-as-a-Judge
   * settings with instructions, rating scale, and model configuration. </p>
   */
  inline const EvaluatorConfig& GetEvaluatorConfig() const { return m_evaluatorConfig; }
  inline bool EvaluatorConfigHasBeenSet() const { return m_evaluatorConfigHasBeenSet; }
  template <typename EvaluatorConfigT = EvaluatorConfig>
  void SetEvaluatorConfig(EvaluatorConfigT&& value) {
    m_evaluatorConfigHasBeenSet = true;
    m_evaluatorConfig = std::forward<EvaluatorConfigT>(value);
  }
  template <typename EvaluatorConfigT = EvaluatorConfig>
  UpdateEvaluatorRequest& WithEvaluatorConfig(EvaluatorConfigT&& value) {
    SetEvaluatorConfig(std::forward<EvaluatorConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The updated evaluation level (<code>TOOL_CALL</code>, <code>TRACE</code>, or
   * <code>SESSION</code>) that determines the scope of evaluation. </p>
   */
  inline EvaluatorLevel GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(EvaluatorLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline UpdateEvaluatorRequest& WithLevel(EvaluatorLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_evaluatorId;

  Aws::String m_description;

  EvaluatorConfig m_evaluatorConfig;

  EvaluatorLevel m_level{EvaluatorLevel::NOT_SET};
  bool m_clientTokenHasBeenSet = true;
  bool m_evaluatorIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_evaluatorConfigHasBeenSet = false;
  bool m_levelHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
