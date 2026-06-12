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
#include <aws/bedrock-agentcore/model/Insight.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The list of insight analyses to run against sessions during the batch
   * evaluation. Maximum of 10 insights.</p>
   */
  inline const Aws::Vector<Insight>& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = Aws::Vector<Insight>>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = Aws::Vector<Insight>>
  StartBatchEvaluationRequest& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  template <typename InsightsT = Insight>
  StartBatchEvaluationRequest& AddInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights.emplace_back(std::forward<InsightsT>(value));
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
   * <p>A map of tag keys and values to associate with the batch evaluation.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartBatchEvaluationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartBatchEvaluationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used to encrypt evaluation data. If provided, customer
   * data is encrypted at rest with the specified key.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  StartBatchEvaluationRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
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

  Aws::Vector<Insight> m_insights;

  DataSourceConfig m_dataSourceConfig;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  EvaluationMetadata m_evaluationMetadata;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_kmsKeyArn;

  Aws::String m_description;
  bool m_batchEvaluationNameHasBeenSet = false;
  bool m_evaluatorsHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
  bool m_dataSourceConfigHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_evaluationMetadataHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
