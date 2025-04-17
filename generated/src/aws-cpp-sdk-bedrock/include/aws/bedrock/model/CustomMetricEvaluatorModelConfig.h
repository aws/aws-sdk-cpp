/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/CustomMetricBedrockEvaluatorModel.h>
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
   * <p>Configuration of the evaluator model you want to use to evaluate custom
   * metrics in an Amazon Bedrock evaluation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomMetricEvaluatorModelConfig">AWS
   * API Reference</a></p>
   */
  class CustomMetricEvaluatorModelConfig
  {
  public:
    AWS_BEDROCK_API CustomMetricEvaluatorModelConfig() = default;
    AWS_BEDROCK_API CustomMetricEvaluatorModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomMetricEvaluatorModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the model you want to evaluate custom metrics in an Amazon Bedrock
     * evaluation job.</p>
     */
    inline const Aws::Vector<CustomMetricBedrockEvaluatorModel>& GetBedrockEvaluatorModels() const { return m_bedrockEvaluatorModels; }
    inline bool BedrockEvaluatorModelsHasBeenSet() const { return m_bedrockEvaluatorModelsHasBeenSet; }
    template<typename BedrockEvaluatorModelsT = Aws::Vector<CustomMetricBedrockEvaluatorModel>>
    void SetBedrockEvaluatorModels(BedrockEvaluatorModelsT&& value) { m_bedrockEvaluatorModelsHasBeenSet = true; m_bedrockEvaluatorModels = std::forward<BedrockEvaluatorModelsT>(value); }
    template<typename BedrockEvaluatorModelsT = Aws::Vector<CustomMetricBedrockEvaluatorModel>>
    CustomMetricEvaluatorModelConfig& WithBedrockEvaluatorModels(BedrockEvaluatorModelsT&& value) { SetBedrockEvaluatorModels(std::forward<BedrockEvaluatorModelsT>(value)); return *this;}
    template<typename BedrockEvaluatorModelsT = CustomMetricBedrockEvaluatorModel>
    CustomMetricEvaluatorModelConfig& AddBedrockEvaluatorModels(BedrockEvaluatorModelsT&& value) { m_bedrockEvaluatorModelsHasBeenSet = true; m_bedrockEvaluatorModels.emplace_back(std::forward<BedrockEvaluatorModelsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CustomMetricBedrockEvaluatorModel> m_bedrockEvaluatorModels;
    bool m_bedrockEvaluatorModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
