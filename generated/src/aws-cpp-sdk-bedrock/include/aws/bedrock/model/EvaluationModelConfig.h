/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/EvaluationBedrockModel.h>
#include <aws/bedrock/model/EvaluationPrecomputedInferenceSource.h>
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
   * <p>Defines the models used in the model evaluation job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationModelConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationModelConfig
  {
  public:
    AWS_BEDROCK_API EvaluationModelConfig() = default;
    AWS_BEDROCK_API EvaluationModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the Amazon Bedrock model or inference profile and inference
     * parameters you want used.</p>
     */
    inline const EvaluationBedrockModel& GetBedrockModel() const { return m_bedrockModel; }
    inline bool BedrockModelHasBeenSet() const { return m_bedrockModelHasBeenSet; }
    template<typename BedrockModelT = EvaluationBedrockModel>
    void SetBedrockModel(BedrockModelT&& value) { m_bedrockModelHasBeenSet = true; m_bedrockModel = std::forward<BedrockModelT>(value); }
    template<typename BedrockModelT = EvaluationBedrockModel>
    EvaluationModelConfig& WithBedrockModel(BedrockModelT&& value) { SetBedrockModel(std::forward<BedrockModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the model used to generate inference response data for a model
     * evaluation job where you provide your own inference response data.</p>
     */
    inline const EvaluationPrecomputedInferenceSource& GetPrecomputedInferenceSource() const { return m_precomputedInferenceSource; }
    inline bool PrecomputedInferenceSourceHasBeenSet() const { return m_precomputedInferenceSourceHasBeenSet; }
    template<typename PrecomputedInferenceSourceT = EvaluationPrecomputedInferenceSource>
    void SetPrecomputedInferenceSource(PrecomputedInferenceSourceT&& value) { m_precomputedInferenceSourceHasBeenSet = true; m_precomputedInferenceSource = std::forward<PrecomputedInferenceSourceT>(value); }
    template<typename PrecomputedInferenceSourceT = EvaluationPrecomputedInferenceSource>
    EvaluationModelConfig& WithPrecomputedInferenceSource(PrecomputedInferenceSourceT&& value) { SetPrecomputedInferenceSource(std::forward<PrecomputedInferenceSourceT>(value)); return *this;}
    ///@}
  private:

    EvaluationBedrockModel m_bedrockModel;
    bool m_bedrockModelHasBeenSet = false;

    EvaluationPrecomputedInferenceSource m_precomputedInferenceSource;
    bool m_precomputedInferenceSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
