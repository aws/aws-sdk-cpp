/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InferenceConfiguration.h>
#include <aws/core/utils/Document.h>
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
 * <p> The configuration for using Amazon Bedrock models in evaluator assessments,
 * including model selection and inference parameters. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/BedrockEvaluatorModelConfig">AWS
 * API Reference</a></p>
 */
class BedrockEvaluatorModelConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BedrockEvaluatorModelConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API BedrockEvaluatorModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API BedrockEvaluatorModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The identifier of the Amazon Bedrock model to use for evaluation. Must be a
   * supported foundation model available in your region. </p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  BedrockEvaluatorModelConfig& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The inference configuration parameters that control model behavior during
   * evaluation, including temperature, token limits, and sampling settings. </p>
   */
  inline const InferenceConfiguration& GetInferenceConfig() const { return m_inferenceConfig; }
  inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
  template <typename InferenceConfigT = InferenceConfiguration>
  void SetInferenceConfig(InferenceConfigT&& value) {
    m_inferenceConfigHasBeenSet = true;
    m_inferenceConfig = std::forward<InferenceConfigT>(value);
  }
  template <typename InferenceConfigT = InferenceConfiguration>
  BedrockEvaluatorModelConfig& WithInferenceConfig(InferenceConfigT&& value) {
    SetInferenceConfig(std::forward<InferenceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Additional model-specific request fields to customize model behavior beyond
   * the standard inference configuration. </p>
   */
  inline Aws::Utils::DocumentView GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
  inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
  template <typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
  void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) {
    m_additionalModelRequestFieldsHasBeenSet = true;
    m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value);
  }
  template <typename AdditionalModelRequestFieldsT = Aws::Utils::Document>
  BedrockEvaluatorModelConfig& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) {
    SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  InferenceConfiguration m_inferenceConfig;

  Aws::Utils::Document m_additionalModelRequestFields;
  bool m_modelIdHasBeenSet = false;
  bool m_inferenceConfigHasBeenSet = false;
  bool m_additionalModelRequestFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
