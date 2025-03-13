/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/BedrockEvaluatorModel.h>
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
   * <p>Specifies the model configuration for the evaluator model.
   * <code>EvaluatorModelConfig</code> is required for evaluation jobs that use a
   * knowledge base or in model evaluation job that use a model as judge. This model
   * computes all evaluation related metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluatorModelConfig">AWS
   * API Reference</a></p>
   */
  class EvaluatorModelConfig
  {
  public:
    AWS_BEDROCK_API EvaluatorModelConfig() = default;
    AWS_BEDROCK_API EvaluatorModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluatorModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The evaluator model used in knowledge base evaluation job or in model
     * evaluation job that use a model as judge. This model computes all evaluation
     * related metrics.</p>
     */
    inline const Aws::Vector<BedrockEvaluatorModel>& GetBedrockEvaluatorModels() const { return m_bedrockEvaluatorModels; }
    inline bool BedrockEvaluatorModelsHasBeenSet() const { return m_bedrockEvaluatorModelsHasBeenSet; }
    template<typename BedrockEvaluatorModelsT = Aws::Vector<BedrockEvaluatorModel>>
    void SetBedrockEvaluatorModels(BedrockEvaluatorModelsT&& value) { m_bedrockEvaluatorModelsHasBeenSet = true; m_bedrockEvaluatorModels = std::forward<BedrockEvaluatorModelsT>(value); }
    template<typename BedrockEvaluatorModelsT = Aws::Vector<BedrockEvaluatorModel>>
    EvaluatorModelConfig& WithBedrockEvaluatorModels(BedrockEvaluatorModelsT&& value) { SetBedrockEvaluatorModels(std::forward<BedrockEvaluatorModelsT>(value)); return *this;}
    template<typename BedrockEvaluatorModelsT = BedrockEvaluatorModel>
    EvaluatorModelConfig& AddBedrockEvaluatorModels(BedrockEvaluatorModelsT&& value) { m_bedrockEvaluatorModelsHasBeenSet = true; m_bedrockEvaluatorModels.emplace_back(std::forward<BedrockEvaluatorModelsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BedrockEvaluatorModel> m_bedrockEvaluatorModels;
    bool m_bedrockEvaluatorModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
