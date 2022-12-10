/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClarifyInferenceConfig.h>
#include <aws/sagemaker/model/ClarifyShapConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration parameters for the SageMaker Clarify
   * explainer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClarifyExplainerConfig">AWS
   * API Reference</a></p>
   */
  class ClarifyExplainerConfig
  {
  public:
    AWS_SAGEMAKER_API ClarifyExplainerConfig();
    AWS_SAGEMAKER_API ClarifyExplainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyExplainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline const Aws::String& GetEnableExplanations() const{ return m_enableExplanations; }

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline bool EnableExplanationsHasBeenSet() const { return m_enableExplanationsHasBeenSet; }

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline void SetEnableExplanations(const Aws::String& value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations = value; }

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline void SetEnableExplanations(Aws::String&& value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations = std::move(value); }

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline void SetEnableExplanations(const char* value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations.assign(value); }

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline ClarifyExplainerConfig& WithEnableExplanations(const Aws::String& value) { SetEnableExplanations(value); return *this;}

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline ClarifyExplainerConfig& WithEnableExplanations(Aws::String&& value) { SetEnableExplanations(std::move(value)); return *this;}

    /**
     * <p>A JMESPath boolean expression used to filter which records to explain.
     * Explanations are activated by default. See <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">
     * <code>EnableExplanations</code> </a>for additional information.</p>
     */
    inline ClarifyExplainerConfig& WithEnableExplanations(const char* value) { SetEnableExplanations(value); return *this;}


    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline const ClarifyInferenceConfig& GetInferenceConfig() const{ return m_inferenceConfig; }

    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }

    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline void SetInferenceConfig(const ClarifyInferenceConfig& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = value; }

    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline void SetInferenceConfig(ClarifyInferenceConfig&& value) { m_inferenceConfigHasBeenSet = true; m_inferenceConfig = std::move(value); }

    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline ClarifyExplainerConfig& WithInferenceConfig(const ClarifyInferenceConfig& value) { SetInferenceConfig(value); return *this;}

    /**
     * <p>The inference configuration parameter for the model container.</p>
     */
    inline ClarifyExplainerConfig& WithInferenceConfig(ClarifyInferenceConfig&& value) { SetInferenceConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline const ClarifyShapConfig& GetShapConfig() const{ return m_shapConfig; }

    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline bool ShapConfigHasBeenSet() const { return m_shapConfigHasBeenSet; }

    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline void SetShapConfig(const ClarifyShapConfig& value) { m_shapConfigHasBeenSet = true; m_shapConfig = value; }

    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline void SetShapConfig(ClarifyShapConfig&& value) { m_shapConfigHasBeenSet = true; m_shapConfig = std::move(value); }

    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline ClarifyExplainerConfig& WithShapConfig(const ClarifyShapConfig& value) { SetShapConfig(value); return *this;}

    /**
     * <p>The configuration for SHAP analysis.</p>
     */
    inline ClarifyExplainerConfig& WithShapConfig(ClarifyShapConfig&& value) { SetShapConfig(std::move(value)); return *this;}

  private:

    Aws::String m_enableExplanations;
    bool m_enableExplanationsHasBeenSet = false;

    ClarifyInferenceConfig m_inferenceConfig;
    bool m_inferenceConfigHasBeenSet = false;

    ClarifyShapConfig m_shapConfig;
    bool m_shapConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
