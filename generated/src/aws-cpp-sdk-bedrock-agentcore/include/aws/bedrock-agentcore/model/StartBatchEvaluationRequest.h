/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/DataSourceConfig.h>
#include <aws/bedrock-agentcore/model/EvaluationMetadata.h>
#include <aws/bedrock-agentcore/model/Evaluator.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class StartBatchEvaluationRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API StartBatchEvaluationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartBatchEvaluation"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the batch evaluation. Must be unique within your account.</p>
   */
  inline const Aws::String& GetBatchEvaluationName() const { return m_batchEvaluationName; }
  inline bool BatchEvaluationNameHasBeenSet() const { return m_batchEvaluationNameHasBeenSet; }
  template <typename BatchEvaluationNameT = Aws::String>
  void SetBatchEvaluationName(BatchEvaluationNameT&& value) {
    m_batchEvaluationNameHasBeenSet = true;
    m_batchEvaluationName = std::forward<BatchEvaluationNameT>(value);
  }
  template <typename BatchEvaluationNameT = Aws::String>
  StartBatchEvaluationRequest& WithBatchEvaluationName(BatchEvaluationNameT&& value) {
    SetBatchEvaluationName(std::forward<BatchEvaluationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of evaluators to apply during the batch evaluation. Can include both
   * built-in evaluators and custom evaluators. Maximum of 10 evaluators.</p>
   */
  inline const Aws::Vector<Evaluator>& GetEvaluators() const { return m_evaluators; }
  inline bool EvaluatorsHasBeenSet() const { return m_evaluatorsHasBeenSet; }
  template <typename EvaluatorsT = Aws::Vector<Evaluator>>
  void SetEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators = std::forward<EvaluatorsT>(value);
  }
  template <typename EvaluatorsT = Aws::Vector<Evaluator>>
  StartBatchEvaluationRequest& WithEvaluators(EvaluatorsT&& value) {
    SetEvaluators(std::forward<EvaluatorsT>(value));
    return *this;
  }
  template <typename EvaluatorsT = Evaluator>
  StartBatchEvaluationRequest& AddEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators.emplace_back(std::forward<EvaluatorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data source configuration that specifies where to pull agent session
   * traces from for evaluation.</p>
   */
  inline const DataSourceConfig& GetDataSourceConfig() const { return m_dataSourceConfig; }
  inline bool DataSourceConfigHasBeenSet() const { return m_dataSourceConfigHasBeenSet; }
  template <typename DataSourceConfigT = DataSourceConfig>
  void SetDataSourceConfig(DataSourceConfigT&& value) {
    m_dataSourceConfigHasBeenSet = true;
    m_dataSourceConfig = std::forward<DataSourceConfigT>(value);
  }
  template <typename DataSourceConfigT = DataSourceConfig>
  StartBatchEvaluationRequest& WithDataSourceConfig(DataSourceConfigT&& value) {
    SetDataSourceConfig(std::forward<DataSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If this token matches a previous request, the service
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartBatchEvaluationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional metadata for the evaluation, including session-specific ground truth
   * data and test scenario identifiers.</p>
   */
  inline const EvaluationMetadata& GetEvaluationMetadata() const { return m_evaluationMetadata; }
  inline bool EvaluationMetadataHasBeenSet() const { return m_evaluationMetadataHasBeenSet; }
  template <typename EvaluationMetadataT = EvaluationMetadata>
  void SetEvaluationMetadata(EvaluationMetadataT&& value) {
    m_evaluationMetadataHasBeenSet = true;
    m_evaluationMetadata = std::forward<EvaluationMetadataT>(value);
  }
  template <typename EvaluationMetadataT = EvaluationMetadata>
  StartBatchEvaluationRequest& WithEvaluationMetadata(EvaluationMetadataT&& value) {
    SetEvaluationMetadata(std::forward<EvaluationMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the batch evaluation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartBatchEvaluationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_batchEvaluationName;

  Aws::Vector<Evaluator> m_evaluators;

  DataSourceConfig m_dataSourceConfig;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  EvaluationMetadata m_evaluationMetadata;

  Aws::String m_description;
  bool m_batchEvaluationNameHasBeenSet = false;
  bool m_evaluatorsHasBeenSet = false;
  bool m_dataSourceConfigHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_evaluationMetadataHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
