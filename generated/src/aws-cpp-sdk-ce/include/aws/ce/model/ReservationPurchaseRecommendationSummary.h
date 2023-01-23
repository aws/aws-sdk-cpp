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
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary();
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline const Aws::String& GetTotalEstimatedMonthlySavingsAmount() const{ return m_totalEstimatedMonthlySavingsAmount; }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline bool TotalEstimatedMonthlySavingsAmountHasBeenSet() const { return m_totalEstimatedMonthlySavingsAmountHasBeenSet; }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsAmount(const Aws::String& value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount = value; }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsAmount(Aws::String&& value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount = std::move(value); }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsAmount(const char* value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount.assign(value); }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(const Aws::String& value) { SetTotalEstimatedMonthlySavingsAmount(value); return *this;}

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(Aws::String&& value) { SetTotalEstimatedMonthlySavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(const char* value) { SetTotalEstimatedMonthlySavingsAmount(value); return *this;}


    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline const Aws::String& GetTotalEstimatedMonthlySavingsPercentage() const{ return m_totalEstimatedMonthlySavingsPercentage; }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline bool TotalEstimatedMonthlySavingsPercentageHasBeenSet() const { return m_totalEstimatedMonthlySavingsPercentageHasBeenSet; }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsPercentage(const Aws::String& value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage = value; }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsPercentage(Aws::String&& value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage = std::move(value); }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsPercentage(const char* value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage.assign(value); }

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsPercentage(const Aws::String& value) { SetTotalEstimatedMonthlySavingsPercentage(value); return *this;}

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsPercentage(Aws::String&& value) { SetTotalEstimatedMonthlySavingsPercentage(std::move(value)); return *this;}

    /**
     * <p>The total amount that Amazon Web Services estimates that this recommendation
     * could save you in a month, as a percentage of your costs.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsPercentage(const char* value) { SetTotalEstimatedMonthlySavingsPercentage(value); return *this;}


    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code used for this recommendation.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}

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
