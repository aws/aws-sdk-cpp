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
    AWS_COSTEXPLORER_API RightsizingRecommendationSummary() = default;
    AWS_COSTEXPLORER_API RightsizingRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RightsizingRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of instance recommendations.</p>
     */
    inline const Aws::String& GetTotalRecommendationCount() const { return m_totalRecommendationCount; }
    inline bool TotalRecommendationCountHasBeenSet() const { return m_totalRecommendationCountHasBeenSet; }
    template<typename TotalRecommendationCountT = Aws::String>
    void SetTotalRecommendationCount(TotalRecommendationCountT&& value) { m_totalRecommendationCountHasBeenSet = true; m_totalRecommendationCount = std::forward<TotalRecommendationCountT>(value); }
    template<typename TotalRecommendationCountT = Aws::String>
    RightsizingRecommendationSummary& WithTotalRecommendationCount(TotalRecommendationCountT&& value) { SetTotalRecommendationCount(std::forward<TotalRecommendationCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total savings resulting from modifications, on a monthly
     * basis.</p>
     */
    inline const Aws::String& GetEstimatedTotalMonthlySavingsAmount() const { return m_estimatedTotalMonthlySavingsAmount; }
    inline bool EstimatedTotalMonthlySavingsAmountHasBeenSet() const { return m_estimatedTotalMonthlySavingsAmountHasBeenSet; }
    template<typename EstimatedTotalMonthlySavingsAmountT = Aws::String>
    void SetEstimatedTotalMonthlySavingsAmount(EstimatedTotalMonthlySavingsAmountT&& value) { m_estimatedTotalMonthlySavingsAmountHasBeenSet = true; m_estimatedTotalMonthlySavingsAmount = std::forward<EstimatedTotalMonthlySavingsAmountT>(value); }
    template<typename EstimatedTotalMonthlySavingsAmountT = Aws::String>
    RightsizingRecommendationSummary& WithEstimatedTotalMonthlySavingsAmount(EstimatedTotalMonthlySavingsAmountT&& value) { SetEstimatedTotalMonthlySavingsAmount(std::forward<EstimatedTotalMonthlySavingsAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the savings.</p>
     */
    inline const Aws::String& GetSavingsCurrencyCode() const { return m_savingsCurrencyCode; }
    inline bool SavingsCurrencyCodeHasBeenSet() const { return m_savingsCurrencyCodeHasBeenSet; }
    template<typename SavingsCurrencyCodeT = Aws::String>
    void SetSavingsCurrencyCode(SavingsCurrencyCodeT&& value) { m_savingsCurrencyCodeHasBeenSet = true; m_savingsCurrencyCode = std::forward<SavingsCurrencyCodeT>(value); }
    template<typename SavingsCurrencyCodeT = Aws::String>
    RightsizingRecommendationSummary& WithSavingsCurrencyCode(SavingsCurrencyCodeT&& value) { SetSavingsCurrencyCode(std::forward<SavingsCurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The savings percentage based on the recommended modifications. It's relative
     * to the total On-Demand costs that are associated with these instances.</p>
     */
    inline const Aws::String& GetSavingsPercentage() const { return m_savingsPercentage; }
    inline bool SavingsPercentageHasBeenSet() const { return m_savingsPercentageHasBeenSet; }
    template<typename SavingsPercentageT = Aws::String>
    void SetSavingsPercentage(SavingsPercentageT&& value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = std::forward<SavingsPercentageT>(value); }
    template<typename SavingsPercentageT = Aws::String>
    RightsizingRecommendationSummary& WithSavingsPercentage(SavingsPercentageT&& value) { SetSavingsPercentage(std::forward<SavingsPercentageT>(value)); return *this;}
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
