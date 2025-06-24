/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/TermDetails.h>
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
   * <p>An offer dictates usage terms for the model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/Offer">AWS API
   * Reference</a></p>
   */
  class Offer
  {
  public:
    AWS_BEDROCK_API Offer() = default;
    AWS_BEDROCK_API Offer(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Offer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Offer Id for a model offer.</p>
     */
    inline const Aws::String& GetOfferId() const { return m_offerId; }
    inline bool OfferIdHasBeenSet() const { return m_offerIdHasBeenSet; }
    template<typename OfferIdT = Aws::String>
    void SetOfferId(OfferIdT&& value) { m_offerIdHasBeenSet = true; m_offerId = std::forward<OfferIdT>(value); }
    template<typename OfferIdT = Aws::String>
    Offer& WithOfferId(OfferIdT&& value) { SetOfferId(std::forward<OfferIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offer token.</p>
     */
    inline const Aws::String& GetOfferToken() const { return m_offerToken; }
    inline bool OfferTokenHasBeenSet() const { return m_offerTokenHasBeenSet; }
    template<typename OfferTokenT = Aws::String>
    void SetOfferToken(OfferTokenT&& value) { m_offerTokenHasBeenSet = true; m_offerToken = std::forward<OfferTokenT>(value); }
    template<typename OfferTokenT = Aws::String>
    Offer& WithOfferToken(OfferTokenT&& value) { SetOfferToken(std::forward<OfferTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the terms of the offer.</p>
     */
    inline const TermDetails& GetTermDetails() const { return m_termDetails; }
    inline bool TermDetailsHasBeenSet() const { return m_termDetailsHasBeenSet; }
    template<typename TermDetailsT = TermDetails>
    void SetTermDetails(TermDetailsT&& value) { m_termDetailsHasBeenSet = true; m_termDetails = std::forward<TermDetailsT>(value); }
    template<typename TermDetailsT = TermDetails>
    Offer& WithTermDetails(TermDetailsT&& value) { SetTermDetails(std::forward<TermDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_offerId;
    bool m_offerIdHasBeenSet = false;

    Aws::String m_offerToken;
    bool m_offerTokenHasBeenSet = false;

    TermDetails m_termDetails;
    bool m_termDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
