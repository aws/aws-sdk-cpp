/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/FoundationModelLifecycle.h>
#include <aws/bedrock/model/ModelModality.h>
#include <aws/bedrock/model/ModelCustomization.h>
#include <aws/bedrock/model/InferenceType.h>
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
   * <p>Information about a foundation model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/FoundationModelDetails">AWS
   * API Reference</a></p>
   */
  class FoundationModelDetails
  {
  public:
    AWS_BEDROCK_API FoundationModelDetails() = default;
    AWS_BEDROCK_API FoundationModelDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API FoundationModelDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The model Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    FoundationModelDetails& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model identifier.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    FoundationModelDetails& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model name.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    FoundationModelDetails& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model's provider name.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    FoundationModelDetails& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline const Aws::Vector<ModelModality>& GetInputModalities() const { return m_inputModalities; }
    inline bool InputModalitiesHasBeenSet() const { return m_inputModalitiesHasBeenSet; }
    template<typename InputModalitiesT = Aws::Vector<ModelModality>>
    void SetInputModalities(InputModalitiesT&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = std::forward<InputModalitiesT>(value); }
    template<typename InputModalitiesT = Aws::Vector<ModelModality>>
    FoundationModelDetails& WithInputModalities(InputModalitiesT&& value) { SetInputModalities(std::forward<InputModalitiesT>(value)); return *this;}
    inline FoundationModelDetails& AddInputModalities(ModelModality value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline const Aws::Vector<ModelModality>& GetOutputModalities() const { return m_outputModalities; }
    inline bool OutputModalitiesHasBeenSet() const { return m_outputModalitiesHasBeenSet; }
    template<typename OutputModalitiesT = Aws::Vector<ModelModality>>
    void SetOutputModalities(OutputModalitiesT&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = std::forward<OutputModalitiesT>(value); }
    template<typename OutputModalitiesT = Aws::Vector<ModelModality>>
    FoundationModelDetails& WithOutputModalities(OutputModalitiesT&& value) { SetOutputModalities(std::forward<OutputModalitiesT>(value)); return *this;}
    inline FoundationModelDetails& AddOutputModalities(ModelModality value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the model supports streaming.</p>
     */
    inline bool GetResponseStreamingSupported() const { return m_responseStreamingSupported; }
    inline bool ResponseStreamingSupportedHasBeenSet() const { return m_responseStreamingSupportedHasBeenSet; }
    inline void SetResponseStreamingSupported(bool value) { m_responseStreamingSupportedHasBeenSet = true; m_responseStreamingSupported = value; }
    inline FoundationModelDetails& WithResponseStreamingSupported(bool value) { SetResponseStreamingSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization that the model supports.</p>
     */
    inline const Aws::Vector<ModelCustomization>& GetCustomizationsSupported() const { return m_customizationsSupported; }
    inline bool CustomizationsSupportedHasBeenSet() const { return m_customizationsSupportedHasBeenSet; }
    template<typename CustomizationsSupportedT = Aws::Vector<ModelCustomization>>
    void SetCustomizationsSupported(CustomizationsSupportedT&& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported = std::forward<CustomizationsSupportedT>(value); }
    template<typename CustomizationsSupportedT = Aws::Vector<ModelCustomization>>
    FoundationModelDetails& WithCustomizationsSupported(CustomizationsSupportedT&& value) { SetCustomizationsSupported(std::forward<CustomizationsSupportedT>(value)); return *this;}
    inline FoundationModelDetails& AddCustomizationsSupported(ModelCustomization value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inference types that the model supports.</p>
     */
    inline const Aws::Vector<InferenceType>& GetInferenceTypesSupported() const { return m_inferenceTypesSupported; }
    inline bool InferenceTypesSupportedHasBeenSet() const { return m_inferenceTypesSupportedHasBeenSet; }
    template<typename InferenceTypesSupportedT = Aws::Vector<InferenceType>>
    void SetInferenceTypesSupported(InferenceTypesSupportedT&& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported = std::forward<InferenceTypesSupportedT>(value); }
    template<typename InferenceTypesSupportedT = Aws::Vector<InferenceType>>
    FoundationModelDetails& WithInferenceTypesSupported(InferenceTypesSupportedT&& value) { SetInferenceTypesSupported(std::forward<InferenceTypesSupportedT>(value)); return *this;}
    inline FoundationModelDetails& AddInferenceTypesSupported(InferenceType value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains details about whether a model version is available or deprecated</p>
     */
    inline const FoundationModelLifecycle& GetModelLifecycle() const { return m_modelLifecycle; }
    inline bool ModelLifecycleHasBeenSet() const { return m_modelLifecycleHasBeenSet; }
    template<typename ModelLifecycleT = FoundationModelLifecycle>
    void SetModelLifecycle(ModelLifecycleT&& value) { m_modelLifecycleHasBeenSet = true; m_modelLifecycle = std::forward<ModelLifecycleT>(value); }
    template<typename ModelLifecycleT = FoundationModelLifecycle>
    FoundationModelDetails& WithModelLifecycle(ModelLifecycleT&& value) { SetModelLifecycle(std::forward<ModelLifecycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::Vector<ModelModality> m_inputModalities;
    bool m_inputModalitiesHasBeenSet = false;

    Aws::Vector<ModelModality> m_outputModalities;
    bool m_outputModalitiesHasBeenSet = false;

    bool m_responseStreamingSupported{false};
    bool m_responseStreamingSupportedHasBeenSet = false;

    Aws::Vector<ModelCustomization> m_customizationsSupported;
    bool m_customizationsSupportedHasBeenSet = false;

    Aws::Vector<InferenceType> m_inferenceTypesSupported;
    bool m_inferenceTypesSupportedHasBeenSet = false;

    FoundationModelLifecycle m_modelLifecycle;
    bool m_modelLifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
