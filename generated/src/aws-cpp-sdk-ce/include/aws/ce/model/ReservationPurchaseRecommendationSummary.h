/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>A summary about this recommendation, such as the currency code, the amount
   * that Amazon Web Services estimates that you could save, and the total amount of
   * reservation to purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendationSummary">AWS
   * API Reference</a></p>
   */
  class ReservationPurchaseRecommendationSummary
  {
  public:
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary() = default;
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline const Aws::String& GetTotalEstimatedMonthlySavingsAmount() const { return m_totalEstimatedMonthlySavingsAmount; }
    inline bool TotalEstimatedMonthlySavingsAmountHasBeenSet() const { return m_totalEstimatedMonthlySavingsAmountHasBeenSet; }
    template<typename TotalEstimatedMonthlySavingsAmountT = Aws::String>
    void SetTotalEstimatedMonthlySavingsAmount(TotalEstimatedMonthlySavingsAmountT&& value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount = std::forward<TotalEstimatedMonthlySavingsAmountT>(value); }
    template<typename TotalEstimatedMonthlySavingsAmountT = Aws::String>
    ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(TotalEstimatedMonthlySavingsAmountT&& value) { SetTotalEstimatedMonthlySavingsAmount(std::forward<TotalEstimatedMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline const Aws::String& GetTotalEstimatedMonthlySavingsPercentage() const { return m_totalEstimatedMonthlySavingsPercentage; }
    inline bool TotalEstimatedMonthlySavingsPercentageHasBeenSet() const { return m_totalEstimatedMonthlySavingsPercentageHasBeenSet; }
    template<typename TotalEstimatedMonthlySavingsPercentageT = Aws::String>
    void SetTotalEstimatedMonthlySavingsPercentage(TotalEstimatedMonthlySavingsPercentageT&& value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage = std::forward<TotalEstimatedMonthlySavingsPercentageT>(value); }
    template<typename TotalEstimatedMonthlySavingsPercentageT = Aws::String>
    ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsPercentage(TotalEstimatedMonthlySavingsPercentageT&& value) { SetTotalEstimatedMonthlySavingsPercentage(std::forward<TotalEstimatedMonthlySavingsPercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservationPurchaseRecommendationSummary& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_totalEstimatedMonthlySavingsAmount;
    bool m_totalEstimatedMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_totalEstimatedMonthlySavingsPercentage;
    bool m_totalEstimatedMonthlySavingsPercentageHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
