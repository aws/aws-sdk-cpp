/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * that AWS estimates that you could save, and the total amount of reservation to
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ReservationPurchaseRecommendationSummary
  {
  public:
    ReservationPurchaseRecommendationSummary();
    ReservationPurchaseRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    ReservationPurchaseRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline const Aws::String& GetTotalEstimatedMonthlySavingsAmount() const{ return m_totalEstimatedMonthlySavingsAmount; }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline bool TotalEstimatedMonthlySavingsAmountHasBeenSet() const { return m_totalEstimatedMonthlySavingsAmountHasBeenSet; }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsAmount(const Aws::String& value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount = value; }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsAmount(Aws::String&& value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount = std::move(value); }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsAmount(const char* value) { m_totalEstimatedMonthlySavingsAmountHasBeenSet = true; m_totalEstimatedMonthlySavingsAmount.assign(value); }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(const Aws::String& value) { SetTotalEstimatedMonthlySavingsAmount(value); return *this;}

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(Aws::String&& value) { SetTotalEstimatedMonthlySavingsAmount(std::move(value)); return *this;}

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsAmount(const char* value) { SetTotalEstimatedMonthlySavingsAmount(value); return *this;}


    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline const Aws::String& GetTotalEstimatedMonthlySavingsPercentage() const{ return m_totalEstimatedMonthlySavingsPercentage; }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline bool TotalEstimatedMonthlySavingsPercentageHasBeenSet() const { return m_totalEstimatedMonthlySavingsPercentageHasBeenSet; }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsPercentage(const Aws::String& value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage = value; }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsPercentage(Aws::String&& value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage = std::move(value); }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline void SetTotalEstimatedMonthlySavingsPercentage(const char* value) { m_totalEstimatedMonthlySavingsPercentageHasBeenSet = true; m_totalEstimatedMonthlySavingsPercentage.assign(value); }

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsPercentage(const Aws::String& value) { SetTotalEstimatedMonthlySavingsPercentage(value); return *this;}

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
     */
    inline ReservationPurchaseRecommendationSummary& WithTotalEstimatedMonthlySavingsPercentage(Aws::String&& value) { SetTotalEstimatedMonthlySavingsPercentage(std::move(value)); return *this;}

    /**
     * <p>The total amount that AWS estimates that this recommendation could save you
     * in a month, as a percentage of your costs.</p>
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
    bool m_totalEstimatedMonthlySavingsAmountHasBeenSet;

    Aws::String m_totalEstimatedMonthlySavingsPercentage;
    bool m_totalEstimatedMonthlySavingsPercentageHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
