/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/DimensionalPriceRate.h>
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
   * <p>Describes the usage-based pricing term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PricingTerm">AWS
   * API Reference</a></p>
   */
  class PricingTerm
  {
  public:
    AWS_BEDROCK_API PricingTerm() = default;
    AWS_BEDROCK_API PricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API PricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes a usage price for each dimension.</p>
     */
    inline const Aws::Vector<DimensionalPriceRate>& GetRateCard() const { return m_rateCard; }
    inline bool RateCardHasBeenSet() const { return m_rateCardHasBeenSet; }
    template<typename RateCardT = Aws::Vector<DimensionalPriceRate>>
    void SetRateCard(RateCardT&& value) { m_rateCardHasBeenSet = true; m_rateCard = std::forward<RateCardT>(value); }
    template<typename RateCardT = Aws::Vector<DimensionalPriceRate>>
    PricingTerm& WithRateCard(RateCardT&& value) { SetRateCard(std::forward<RateCardT>(value)); return *this;}
    template<typename RateCardT = DimensionalPriceRate>
    PricingTerm& AddRateCard(RateCardT&& value) { m_rateCardHasBeenSet = true; m_rateCard.emplace_back(std::forward<RateCardT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionalPriceRate> m_rateCard;
    bool m_rateCardHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
