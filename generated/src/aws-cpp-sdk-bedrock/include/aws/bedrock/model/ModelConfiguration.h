/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/InferenceConfiguration.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Configuration for a model used in advanced prompt optimization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelConfiguration">AWS
 * API Reference</a></p>
 */
class ModelConfiguration {
 public:
  AWS_BEDROCK_API ModelConfiguration() = default;
  AWS_BEDROCK_API ModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API ModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The model ID.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  ModelConfiguration& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inference configuration for the model.</p>
   */
  inline const InferenceConfiguration& GetInferenceConfig() const { return m_inferenceConfig; }
  inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
  template <typename InferenceConfigT = InferenceConfiguration>
  void SetInferenceConfig(InferenceConfigT&& value) {
    m_inferenceConfigHasBeenSet = true;
    m_inferenceConfig = std::forward<InferenceConfigT>(value);
  }
  template <typename InferenceConfigT = InferenceConfiguration>
  ModelConfiguration& WithInferenceConfig(InferenceConfigT&& value) {
    SetInferenceConfig(std::forward<InferenceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional model request fields.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const {
    return m_additionalModelRequestFields;
  }
  inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
  template <typename AdditionalModelRequestFieldsT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) {
    m_additionalModelRequestFieldsHasBeenSet = true;
    m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value);
  }
  template <typename AdditionalModelRequestFieldsT = Aws::Map<Aws::String, Aws::Utils::Document>>
  ModelConfiguration& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) {
    SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value));
    return *this;
  }
  template <typename AdditionalModelRequestFieldsKeyT = Aws::String, typename AdditionalModelRequestFieldsValueT = Aws::Utils::Document>
  ModelConfiguration& AddAdditionalModelRequestFields(AdditionalModelRequestFieldsKeyT&& key, AdditionalModelRequestFieldsValueT&& value) {
    m_additionalModelRequestFieldsHasBeenSet = true;
    m_additionalModelRequestFields.emplace(std::forward<AdditionalModelRequestFieldsKeyT>(key),
                                           std::forward<AdditionalModelRequestFieldsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  InferenceConfiguration m_inferenceConfig;

  Aws::Map<Aws::String, Aws::Utils::Document> m_additionalModelRequestFields;
  bool m_modelIdHasBeenSet = false;
  bool m_inferenceConfigHasBeenSet = false;
  bool m_additionalModelRequestFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
