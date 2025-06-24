/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreateFoundationModelAgreementRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateFoundationModelAgreementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFoundationModelAgreement"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An offer token encapsulates the information for an offer.</p>
     */
    inline const Aws::String& GetOfferToken() const { return m_offerToken; }
    inline bool OfferTokenHasBeenSet() const { return m_offerTokenHasBeenSet; }
    template<typename OfferTokenT = Aws::String>
    void SetOfferToken(OfferTokenT&& value) { m_offerTokenHasBeenSet = true; m_offerToken = std::forward<OfferTokenT>(value); }
    template<typename OfferTokenT = Aws::String>
    CreateFoundationModelAgreementRequest& WithOfferToken(OfferTokenT&& value) { SetOfferToken(std::forward<OfferTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model Id of the model for the access request.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    CreateFoundationModelAgreementRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_offerToken;
    bool m_offerTokenHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
