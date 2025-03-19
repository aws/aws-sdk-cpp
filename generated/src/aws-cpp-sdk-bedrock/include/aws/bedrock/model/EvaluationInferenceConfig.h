/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluationModelConfig.h>
#include <aws/bedrock/model/RAGConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The configuration details of the inference model for an evaluation job.</p>
   * <p>For automated model evaluation jobs, only a single model is supported.</p>
   * <p>For human-based model evaluation jobs, your annotator can compare the
   * responses for up to two different models.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationInferenceConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationInferenceConfig
  {
  public:
    AWS_BEDROCK_API EvaluationInferenceConfig() = default;
    AWS_BEDROCK_API EvaluationInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the inference models.</p>
     */
    inline const Aws::Vector<EvaluationModelConfig>& GetModels() const { return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    template<typename ModelsT = Aws::Vector<EvaluationModelConfig>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<EvaluationModelConfig>>
    EvaluationInferenceConfig& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = EvaluationModelConfig>
    EvaluationInferenceConfig& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the configuration details of the inference for a knowledge base
     * evaluation job, including either the retrieval only configuration or the
     * retrieval with response generation configuration.</p>
     */
    inline const Aws::Vector<RAGConfig>& GetRagConfigs() const { return m_ragConfigs; }
    inline bool RagConfigsHasBeenSet() const { return m_ragConfigsHasBeenSet; }
    template<typename RagConfigsT = Aws::Vector<RAGConfig>>
    void SetRagConfigs(RagConfigsT&& value) { m_ragConfigsHasBeenSet = true; m_ragConfigs = std::forward<RagConfigsT>(value); }
    template<typename RagConfigsT = Aws::Vector<RAGConfig>>
    EvaluationInferenceConfig& WithRagConfigs(RagConfigsT&& value) { SetRagConfigs(std::forward<RagConfigsT>(value)); return *this;}
    template<typename RagConfigsT = RAGConfig>
    EvaluationInferenceConfig& AddRagConfigs(RagConfigsT&& value) { m_ragConfigsHasBeenSet = true; m_ragConfigs.emplace_back(std::forward<RagConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EvaluationModelConfig> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::Vector<RAGConfig> m_ragConfigs;
    bool m_ragConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
