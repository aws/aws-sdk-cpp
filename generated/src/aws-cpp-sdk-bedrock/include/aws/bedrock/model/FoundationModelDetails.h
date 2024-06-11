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
    AWS_BEDROCK_API FoundationModelDetails();
    AWS_BEDROCK_API FoundationModelDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API FoundationModelDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The model Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline FoundationModelDetails& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline FoundationModelDetails& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline FoundationModelDetails& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model identifier.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline FoundationModelDetails& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline FoundationModelDetails& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline FoundationModelDetails& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model name.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline FoundationModelDetails& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline FoundationModelDetails& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline FoundationModelDetails& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model's provider name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline FoundationModelDetails& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline FoundationModelDetails& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline FoundationModelDetails& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline const Aws::Vector<ModelModality>& GetInputModalities() const{ return m_inputModalities; }
    inline bool InputModalitiesHasBeenSet() const { return m_inputModalitiesHasBeenSet; }
    inline void SetInputModalities(const Aws::Vector<ModelModality>& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = value; }
    inline void SetInputModalities(Aws::Vector<ModelModality>&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = std::move(value); }
    inline FoundationModelDetails& WithInputModalities(const Aws::Vector<ModelModality>& value) { SetInputModalities(value); return *this;}
    inline FoundationModelDetails& WithInputModalities(Aws::Vector<ModelModality>&& value) { SetInputModalities(std::move(value)); return *this;}
    inline FoundationModelDetails& AddInputModalities(const ModelModality& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(value); return *this; }
    inline FoundationModelDetails& AddInputModalities(ModelModality&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline const Aws::Vector<ModelModality>& GetOutputModalities() const{ return m_outputModalities; }
    inline bool OutputModalitiesHasBeenSet() const { return m_outputModalitiesHasBeenSet; }
    inline void SetOutputModalities(const Aws::Vector<ModelModality>& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = value; }
    inline void SetOutputModalities(Aws::Vector<ModelModality>&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = std::move(value); }
    inline FoundationModelDetails& WithOutputModalities(const Aws::Vector<ModelModality>& value) { SetOutputModalities(value); return *this;}
    inline FoundationModelDetails& WithOutputModalities(Aws::Vector<ModelModality>&& value) { SetOutputModalities(std::move(value)); return *this;}
    inline FoundationModelDetails& AddOutputModalities(const ModelModality& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(value); return *this; }
    inline FoundationModelDetails& AddOutputModalities(ModelModality&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the model supports streaming.</p>
     */
    inline bool GetResponseStreamingSupported() const{ return m_responseStreamingSupported; }
    inline bool ResponseStreamingSupportedHasBeenSet() const { return m_responseStreamingSupportedHasBeenSet; }
    inline void SetResponseStreamingSupported(bool value) { m_responseStreamingSupportedHasBeenSet = true; m_responseStreamingSupported = value; }
    inline FoundationModelDetails& WithResponseStreamingSupported(bool value) { SetResponseStreamingSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customization that the model supports.</p>
     */
    inline const Aws::Vector<ModelCustomization>& GetCustomizationsSupported() const{ return m_customizationsSupported; }
    inline bool CustomizationsSupportedHasBeenSet() const { return m_customizationsSupportedHasBeenSet; }
    inline void SetCustomizationsSupported(const Aws::Vector<ModelCustomization>& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported = value; }
    inline void SetCustomizationsSupported(Aws::Vector<ModelCustomization>&& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported = std::move(value); }
    inline FoundationModelDetails& WithCustomizationsSupported(const Aws::Vector<ModelCustomization>& value) { SetCustomizationsSupported(value); return *this;}
    inline FoundationModelDetails& WithCustomizationsSupported(Aws::Vector<ModelCustomization>&& value) { SetCustomizationsSupported(std::move(value)); return *this;}
    inline FoundationModelDetails& AddCustomizationsSupported(const ModelCustomization& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported.push_back(value); return *this; }
    inline FoundationModelDetails& AddCustomizationsSupported(ModelCustomization&& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inference types that the model supports.</p>
     */
    inline const Aws::Vector<InferenceType>& GetInferenceTypesSupported() const{ return m_inferenceTypesSupported; }
    inline bool InferenceTypesSupportedHasBeenSet() const { return m_inferenceTypesSupportedHasBeenSet; }
    inline void SetInferenceTypesSupported(const Aws::Vector<InferenceType>& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported = value; }
    inline void SetInferenceTypesSupported(Aws::Vector<InferenceType>&& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported = std::move(value); }
    inline FoundationModelDetails& WithInferenceTypesSupported(const Aws::Vector<InferenceType>& value) { SetInferenceTypesSupported(value); return *this;}
    inline FoundationModelDetails& WithInferenceTypesSupported(Aws::Vector<InferenceType>&& value) { SetInferenceTypesSupported(std::move(value)); return *this;}
    inline FoundationModelDetails& AddInferenceTypesSupported(const InferenceType& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported.push_back(value); return *this; }
    inline FoundationModelDetails& AddInferenceTypesSupported(InferenceType&& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains details about whether a model version is available or deprecated</p>
     */
    inline const FoundationModelLifecycle& GetModelLifecycle() const{ return m_modelLifecycle; }
    inline bool ModelLifecycleHasBeenSet() const { return m_modelLifecycleHasBeenSet; }
    inline void SetModelLifecycle(const FoundationModelLifecycle& value) { m_modelLifecycleHasBeenSet = true; m_modelLifecycle = value; }
    inline void SetModelLifecycle(FoundationModelLifecycle&& value) { m_modelLifecycleHasBeenSet = true; m_modelLifecycle = std::move(value); }
    inline FoundationModelDetails& WithModelLifecycle(const FoundationModelLifecycle& value) { SetModelLifecycle(value); return *this;}
    inline FoundationModelDetails& WithModelLifecycle(FoundationModelLifecycle&& value) { SetModelLifecycle(std::move(value)); return *this;}
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

    bool m_responseStreamingSupported;
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
