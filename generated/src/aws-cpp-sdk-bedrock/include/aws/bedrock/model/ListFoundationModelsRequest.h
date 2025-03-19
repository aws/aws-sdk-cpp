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
    AWS_BEDROCK_API ListFoundationModelsRequest() = default;

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
    inline const Aws::String& GetByProvider() const { return m_byProvider; }
    inline bool ByProviderHasBeenSet() const { return m_byProviderHasBeenSet; }
    template<typename ByProviderT = Aws::String>
    void SetByProvider(ByProviderT&& value) { m_byProviderHasBeenSet = true; m_byProvider = std::forward<ByProviderT>(value); }
    template<typename ByProviderT = Aws::String>
    ListFoundationModelsRequest& WithByProvider(ByProviderT&& value) { SetByProvider(std::forward<ByProviderT>(value)); return *this;}
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
    inline ModelCustomization GetByCustomizationType() const { return m_byCustomizationType; }
    inline bool ByCustomizationTypeHasBeenSet() const { return m_byCustomizationTypeHasBeenSet; }
    inline void SetByCustomizationType(ModelCustomization value) { m_byCustomizationTypeHasBeenSet = true; m_byCustomizationType = value; }
    inline ListFoundationModelsRequest& WithByCustomizationType(ModelCustomization value) { SetByCustomizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return models that support the output modality that you specify.</p>
     */
    inline ModelModality GetByOutputModality() const { return m_byOutputModality; }
    inline bool ByOutputModalityHasBeenSet() const { return m_byOutputModalityHasBeenSet; }
    inline void SetByOutputModality(ModelModality value) { m_byOutputModalityHasBeenSet = true; m_byOutputModality = value; }
    inline ListFoundationModelsRequest& WithByOutputModality(ModelModality value) { SetByOutputModality(value); return *this;}
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
    inline InferenceType GetByInferenceType() const { return m_byInferenceType; }
    inline bool ByInferenceTypeHasBeenSet() const { return m_byInferenceTypeHasBeenSet; }
    inline void SetByInferenceType(InferenceType value) { m_byInferenceTypeHasBeenSet = true; m_byInferenceType = value; }
    inline ListFoundationModelsRequest& WithByInferenceType(InferenceType value) { SetByInferenceType(value); return *this;}
    ///@}
  private:

    Aws::String m_byProvider;
    bool m_byProviderHasBeenSet = false;

    ModelCustomization m_byCustomizationType{ModelCustomization::NOT_SET};
    bool m_byCustomizationTypeHasBeenSet = false;

    ModelModality m_byOutputModality{ModelModality::NOT_SET};
    bool m_byOutputModalityHasBeenSet = false;

    InferenceType m_byInferenceType{InferenceType::NOT_SET};
    bool m_byInferenceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
