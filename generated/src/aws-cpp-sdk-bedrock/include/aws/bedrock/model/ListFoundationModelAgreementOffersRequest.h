/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/OfferType.h>
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
  class ListFoundationModelAgreementOffersRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListFoundationModelAgreementOffersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFoundationModelAgreementOffers"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Model Id of the foundation model.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    ListFoundationModelAgreementOffersRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of offer associated with the model.</p>
     */
    inline OfferType GetOfferType() const { return m_offerType; }
    inline bool OfferTypeHasBeenSet() const { return m_offerTypeHasBeenSet; }
    inline void SetOfferType(OfferType value) { m_offerTypeHasBeenSet = true; m_offerType = value; }
    inline ListFoundationModelAgreementOffersRequest& WithOfferType(OfferType value) { SetOfferType(value); return *this;}
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    OfferType m_offerType{OfferType::NOT_SET};
    bool m_offerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
