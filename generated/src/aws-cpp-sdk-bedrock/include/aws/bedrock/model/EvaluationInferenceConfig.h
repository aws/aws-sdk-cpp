/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluationModelConfig.h>
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
   * <p>Used to define the models you want used in your model evaluation job.
   * Automated model evaluation jobs support only a single model. In a human-based
   * model evaluation job, your annotator can compare the responses for up to two
   * different models.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationInferenceConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationInferenceConfig
  {
  public:
    AWS_BEDROCK_API EvaluationInferenceConfig();
    AWS_BEDROCK_API EvaluationInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to specify the models.</p>
     */
    inline const Aws::Vector<EvaluationModelConfig>& GetModels() const{ return m_models; }

    /**
     * <p>Used to specify the models.</p>
     */
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }

    /**
     * <p>Used to specify the models.</p>
     */
    inline void SetModels(const Aws::Vector<EvaluationModelConfig>& value) { m_modelsHasBeenSet = true; m_models = value; }

    /**
     * <p>Used to specify the models.</p>
     */
    inline void SetModels(Aws::Vector<EvaluationModelConfig>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }

    /**
     * <p>Used to specify the models.</p>
     */
    inline EvaluationInferenceConfig& WithModels(const Aws::Vector<EvaluationModelConfig>& value) { SetModels(value); return *this;}

    /**
     * <p>Used to specify the models.</p>
     */
    inline EvaluationInferenceConfig& WithModels(Aws::Vector<EvaluationModelConfig>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>Used to specify the models.</p>
     */
    inline EvaluationInferenceConfig& AddModels(const EvaluationModelConfig& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }

    /**
     * <p>Used to specify the models.</p>
     */
    inline EvaluationInferenceConfig& AddModels(EvaluationModelConfig&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EvaluationModelConfig> m_models;
    bool m_modelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
