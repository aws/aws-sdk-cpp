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
   * <p>The summary of rightsizing recommendations </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RightsizingRecommendationSummary">AWS
   * API Reference</a></p>
   */
  class RightsizingRecommendationSummary
  {
  public:
    AWS_COSTEXPLORER_API RightsizingRecommendationSummary();
    AWS_COSTEXPLORER_API RightsizingRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RightsizingRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of instance recommendations.</p>
     */
    inline const Aws::String& GetTotalRecommendationCount() const{ return m_totalRecommendationCount; }
    inline bool TotalRecommendationCountHasBeenSet() const { return m_totalRecommendationCountHasBeenSet; }
    inline void SetTotalRecommendationCount(const Aws::String& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = value; }
    inline void SetTotalRecommendationCount(Aws::String&& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = std::move(value); }
    inline void SetTotalRecommendationCount(const char* value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount.assign(value); }
    inline RightsizingRecommendationSummary& WithTotalRecommendationCount(const Aws::String& value) { SetTotalRecommendationCount(value); return *this;}
    inline RightsizingRecommendationSummary& WithTotalRecommendationCount(Aws::String&& value) { SetTotalRecommendationCount(std::move(value)); return *this;}
    inline RightsizingRecommendationSummary& WithTotalRecommendationCount(const char* value) { SetTotalRecommendationCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total savings resulting from modifications, on a monthly
     * basis.</p>
     */
    inline const Aws::String& GetEstimatedTotalMonthlySavingsAmount() const{ return m_estimatedTotalMonthlySavingsAmount; }
    inline bool EstimatedTotalMonthlySavingsAmountHasBeenSet() const { return m_estimatedTotalMonthlySavingsAmountHasBeenSet; }
    inline void SetEstimatedTotalMonthlySavingsAmount(const Aws::String& value) { m_estimatedTotalMonthlySavingsAmountHasBeenSet = true; m_estimatedTotalMonthlySavingsAmount = value; }
    inline void SetEstimatedTotalMonthlySavingsAmount(Aws::String&& value) { m_estimatedTotalMonthlySavingsAmountHasBeenSet = true; m_estimatedTotalMonthlySavingsAmount = std::move(value); }
    inline void SetEstimatedTotalMonthlySavingsAmount(const char* value) { m_estimatedTotalMonthlySavingsAmountHasBeenSet = true; m_estimatedTotalMonthlySavingsAmount.assign(value); }
    inline RightsizingRecommendationSummary& WithEstimatedTotalMonthlySavingsAmount(const Aws::String& value) { SetEstimatedTotalMonthlySavingsAmount(value); return *this;}
    inline RightsizingRecommendationSummary& WithEstimatedTotalMonthlySavingsAmount(Aws::String&& value) { SetEstimatedTotalMonthlySavingsAmount(std::move(value)); return *this;}
    inline RightsizingRecommendationSummary& WithEstimatedTotalMonthlySavingsAmount(const char* value) { SetEstimatedTotalMonthlySavingsAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the savings.</p>
     */
    inline const Aws::String& GetSavingsCurrencyCode() const{ return m_savingsCurrencyCode; }
    inline bool SavingsCurrencyCodeHasBeenSet() const { return m_savingsCurrencyCodeHasBeenSet; }
    inline void SetSavingsCurrencyCode(const Aws::String& value) { m_savingsCurrencyCodeHasBeenSet = true; m_savingsCurrencyCode = value; }
    inline void SetSavingsCurrencyCode(Aws::String&& value) { m_savingsCurrencyCodeHasBeenSet = true; m_savingsCurrencyCode = std::move(value); }
    inline void SetSavingsCurrencyCode(const char* value) { m_savingsCurrencyCodeHasBeenSet = true; m_savingsCurrencyCode.assign(value); }
    inline RightsizingRecommendationSummary& WithSavingsCurrencyCode(const Aws::String& value) { SetSavingsCurrencyCode(value); return *this;}
    inline RightsizingRecommendationSummary& WithSavingsCurrencyCode(Aws::String&& value) { SetSavingsCurrencyCode(std::move(value)); return *this;}
    inline RightsizingRecommendationSummary& WithSavingsCurrencyCode(const char* value) { SetSavingsCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The savings percentage based on the recommended modifications. It's relative
     * to the total On-Demand costs that are associated with these instances.</p>
     */
    inline const Aws::String& GetSavingsPercentage() const{ return m_savingsPercentage; }
    inline bool SavingsPercentageHasBeenSet() const { return m_savingsPercentageHasBeenSet; }
    inline void SetSavingsPercentage(const Aws::String& value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = value; }
    inline void SetSavingsPercentage(Aws::String&& value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = std::move(value); }
    inline void SetSavingsPercentage(const char* value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage.assign(value); }
    inline RightsizingRecommendationSummary& WithSavingsPercentage(const Aws::String& value) { SetSavingsPercentage(value); return *this;}
    inline RightsizingRecommendationSummary& WithSavingsPercentage(Aws::String&& value) { SetSavingsPercentage(std::move(value)); return *this;}
    inline RightsizingRecommendationSummary& WithSavingsPercentage(const char* value) { SetSavingsPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_totalRecommendationCount;
    bool m_totalRecommendationCountHasBeenSet = false;

    Aws::String m_estimatedTotalMonthlySavingsAmount;
    bool m_estimatedTotalMonthlySavingsAmountHasBeenSet = false;

    Aws::String m_savingsCurrencyCode;
    bool m_savingsCurrencyCodeHasBeenSet = false;

    Aws::String m_savingsPercentage;
    bool m_savingsPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
