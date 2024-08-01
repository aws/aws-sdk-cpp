/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelCustomization.h>
#include <aws/bedrock/model/ModelModality.h>
#include <aws/bedrock/model/InferenceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListFoundationModelsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListFoundationModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFoundationModels"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Return models belonging to the model provider that you specify.</p>
     */
    inline const Aws::String& GetByProvider() const{ return m_byProvider; }
    inline bool ByProviderHasBeenSet() const { return m_byProviderHasBeenSet; }
    inline void SetByProvider(const Aws::String& value) { m_byProviderHasBeenSet = true; m_byProvider = value; }
    inline void SetByProvider(Aws::String&& value) { m_byProviderHasBeenSet = true; m_byProvider = std::move(value); }
    inline void SetByProvider(const char* value) { m_byProviderHasBeenSet = true; m_byProvider.assign(value); }
    inline ListFoundationModelsRequest& WithByProvider(const Aws::String& value) { SetByProvider(value); return *this;}
    inline ListFoundationModelsRequest& WithByProvider(Aws::String&& value) { SetByProvider(std::move(value)); return *this;}
    inline ListFoundationModelsRequest& WithByProvider(const char* value) { SetByProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return models that support the customization type that you specify. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/custom-models.html">Custom
     * models</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const ModelCustomization& GetByCustomizationType() const{ return m_byCustomizationType; }
    inline bool ByCustomizationTypeHasBeenSet() const { return m_byCustomizationTypeHasBeenSet; }
    inline void SetByCustomizationType(const ModelCustomization& value) { m_byCustomizationTypeHasBeenSet = true; m_byCustomizationType = value; }
    inline void SetByCustomizationType(ModelCustomization&& value) { m_byCustomizationTypeHasBeenSet = true; m_byCustomizationType = std::move(value); }
    inline ListFoundationModelsRequest& WithByCustomizationType(const ModelCustomization& value) { SetByCustomizationType(value); return *this;}
    inline ListFoundationModelsRequest& WithByCustomizationType(ModelCustomization&& value) { SetByCustomizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return models that support the output modality that you specify.</p>
     */
    inline const ModelModality& GetByOutputModality() const{ return m_byOutputModality; }
    inline bool ByOutputModalityHasBeenSet() const { return m_byOutputModalityHasBeenSet; }
    inline void SetByOutputModality(const ModelModality& value) { m_byOutputModalityHasBeenSet = true; m_byOutputModality = value; }
    inline void SetByOutputModality(ModelModality&& value) { m_byOutputModalityHasBeenSet = true; m_byOutputModality = std::move(value); }
    inline ListFoundationModelsRequest& WithByOutputModality(const ModelModality& value) { SetByOutputModality(value); return *this;}
    inline ListFoundationModelsRequest& WithByOutputModality(ModelModality&& value) { SetByOutputModality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return models that support the inference type that you specify. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prov-throughput.html">Provisioned
     * Throughput</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const InferenceType& GetByInferenceType() const{ return m_byInferenceType; }
    inline bool ByInferenceTypeHasBeenSet() const { return m_byInferenceTypeHasBeenSet; }
    inline void SetByInferenceType(const InferenceType& value) { m_byInferenceTypeHasBeenSet = true; m_byInferenceType = value; }
    inline void SetByInferenceType(InferenceType&& value) { m_byInferenceTypeHasBeenSet = true; m_byInferenceType = std::move(value); }
    inline ListFoundationModelsRequest& WithByInferenceType(const InferenceType& value) { SetByInferenceType(value); return *this;}
    inline ListFoundationModelsRequest& WithByInferenceType(InferenceType&& value) { SetByInferenceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_byProvider;
    bool m_byProviderHasBeenSet = false;

    ModelCustomization m_byCustomizationType;
    bool m_byCustomizationTypeHasBeenSet = false;

    ModelModality m_byOutputModality;
    bool m_byOutputModalityHasBeenSet = false;

    InferenceType m_byInferenceType;
    bool m_byInferenceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
