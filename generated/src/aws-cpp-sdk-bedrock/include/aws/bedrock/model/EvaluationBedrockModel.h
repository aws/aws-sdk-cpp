/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/PerformanceConfiguration.h>
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
   * <p>Contains the ARN of the Amazon Bedrock model or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
   * profile</a> specified in your evaluation job. Each Amazon Bedrock model supports
   * different <code>inferenceParams</code>. To learn more about supported inference
   * parameters for Amazon Bedrock models, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Inference
   * parameters for foundation models</a>.</p> <p>The <code>inferenceParams</code>
   * are specified using JSON. To successfully insert JSON as string make sure that
   * all quotations are properly escaped. For example,
   * <code>"temperature":"0.25"</code> key value pair would need to be formatted as
   * <code>\"temperature\":\"0.25\"</code> to successfully accepted in the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationBedrockModel">AWS
   * API Reference</a></p>
   */
  class EvaluationBedrockModel
  {
  public:
    AWS_BEDROCK_API EvaluationBedrockModel();
    AWS_BEDROCK_API EvaluationBedrockModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationBedrockModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Bedrock model or inference profile specified.</p>
     */
    inline const Aws::String& GetModelIdentifier() const{ return m_modelIdentifier; }
    inline bool ModelIdentifierHasBeenSet() const { return m_modelIdentifierHasBeenSet; }
    inline void SetModelIdentifier(const Aws::String& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = value; }
    inline void SetModelIdentifier(Aws::String&& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = std::move(value); }
    inline void SetModelIdentifier(const char* value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier.assign(value); }
    inline EvaluationBedrockModel& WithModelIdentifier(const Aws::String& value) { SetModelIdentifier(value); return *this;}
    inline EvaluationBedrockModel& WithModelIdentifier(Aws::String&& value) { SetModelIdentifier(std::move(value)); return *this;}
    inline EvaluationBedrockModel& WithModelIdentifier(const char* value) { SetModelIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each Amazon Bedrock support different inference parameters that change how
     * the model behaves during inference.</p>
     */
    inline const Aws::String& GetInferenceParams() const{ return m_inferenceParams; }
    inline bool InferenceParamsHasBeenSet() const { return m_inferenceParamsHasBeenSet; }
    inline void SetInferenceParams(const Aws::String& value) { m_inferenceParamsHasBeenSet = true; m_inferenceParams = value; }
    inline void SetInferenceParams(Aws::String&& value) { m_inferenceParamsHasBeenSet = true; m_inferenceParams = std::move(value); }
    inline void SetInferenceParams(const char* value) { m_inferenceParamsHasBeenSet = true; m_inferenceParams.assign(value); }
    inline EvaluationBedrockModel& WithInferenceParams(const Aws::String& value) { SetInferenceParams(value); return *this;}
    inline EvaluationBedrockModel& WithInferenceParams(Aws::String&& value) { SetInferenceParams(std::move(value)); return *this;}
    inline EvaluationBedrockModel& WithInferenceParams(const char* value) { SetInferenceParams(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies performance settings for the model or inference profile.</p>
     */
    inline const PerformanceConfiguration& GetPerformanceConfig() const{ return m_performanceConfig; }
    inline bool PerformanceConfigHasBeenSet() const { return m_performanceConfigHasBeenSet; }
    inline void SetPerformanceConfig(const PerformanceConfiguration& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = value; }
    inline void SetPerformanceConfig(PerformanceConfiguration&& value) { m_performanceConfigHasBeenSet = true; m_performanceConfig = std::move(value); }
    inline EvaluationBedrockModel& WithPerformanceConfig(const PerformanceConfiguration& value) { SetPerformanceConfig(value); return *this;}
    inline EvaluationBedrockModel& WithPerformanceConfig(PerformanceConfiguration&& value) { SetPerformanceConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelIdentifier;
    bool m_modelIdentifierHasBeenSet = false;

    Aws::String m_inferenceParams;
    bool m_inferenceParamsHasBeenSet = false;

    PerformanceConfiguration m_performanceConfig;
    bool m_performanceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
