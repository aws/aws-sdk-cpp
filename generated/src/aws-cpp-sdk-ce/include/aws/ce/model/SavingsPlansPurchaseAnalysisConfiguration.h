/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/AccountScope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnalysisType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/SavingsPlans.h>
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
   * <p>The configuration for the Savings Plans purchase analysis.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansPurchaseAnalysisConfiguration">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPurchaseAnalysisConfiguration
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisConfiguration() = default;
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your analysis for.</p>
     */
    inline AccountScope GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(AccountScope value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAccountScope(AccountScope value) { SetAccountScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that the analysis is for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    SavingsPlansPurchaseAnalysisConfiguration& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis.</p>
     */
    inline AnalysisType GetAnalysisType() const { return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(AnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAnalysisType(AnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Savings Plans to include in the analysis.</p>
     */
    inline const Aws::Vector<SavingsPlans>& GetSavingsPlansToAdd() const { return m_savingsPlansToAdd; }
    inline bool SavingsPlansToAddHasBeenSet() const { return m_savingsPlansToAddHasBeenSet; }
    template<typename SavingsPlansToAddT = Aws::Vector<SavingsPlans>>
    void SetSavingsPlansToAdd(SavingsPlansToAddT&& value) { m_savingsPlansToAddHasBeenSet = true; m_savingsPlansToAdd = std::forward<SavingsPlansToAddT>(value); }
    template<typename SavingsPlansToAddT = Aws::Vector<SavingsPlans>>
    SavingsPlansPurchaseAnalysisConfiguration& WithSavingsPlansToAdd(SavingsPlansToAddT&& value) { SetSavingsPlansToAdd(std::forward<SavingsPlansToAddT>(value)); return *this;}
    template<typename SavingsPlansToAddT = SavingsPlans>
    SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToAdd(SavingsPlansToAddT&& value) { m_savingsPlansToAddHasBeenSet = true; m_savingsPlansToAdd.emplace_back(std::forward<SavingsPlansToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Savings Plans to exclude from the analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlansToExclude() const { return m_savingsPlansToExclude; }
    inline bool SavingsPlansToExcludeHasBeenSet() const { return m_savingsPlansToExcludeHasBeenSet; }
    template<typename SavingsPlansToExcludeT = Aws::Vector<Aws::String>>
    void SetSavingsPlansToExclude(SavingsPlansToExcludeT&& value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude = std::forward<SavingsPlansToExcludeT>(value); }
    template<typename SavingsPlansToExcludeT = Aws::Vector<Aws::String>>
    SavingsPlansPurchaseAnalysisConfiguration& WithSavingsPlansToExclude(SavingsPlansToExcludeT&& value) { SetSavingsPlansToExclude(std::forward<SavingsPlansToExcludeT>(value)); return *this;}
    template<typename SavingsPlansToExcludeT = Aws::String>
    SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToExclude(SavingsPlansToExcludeT&& value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude.emplace_back(std::forward<SavingsPlansToExcludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period associated with the analysis.</p>
     */
    inline const DateInterval& GetLookBackTimePeriod() const { return m_lookBackTimePeriod; }
    inline bool LookBackTimePeriodHasBeenSet() const { return m_lookBackTimePeriodHasBeenSet; }
    template<typename LookBackTimePeriodT = DateInterval>
    void SetLookBackTimePeriod(LookBackTimePeriodT&& value) { m_lookBackTimePeriodHasBeenSet = true; m_lookBackTimePeriod = std::forward<LookBackTimePeriodT>(value); }
    template<typename LookBackTimePeriodT = DateInterval>
    SavingsPlansPurchaseAnalysisConfiguration& WithLookBackTimePeriod(LookBackTimePeriodT&& value) { SetLookBackTimePeriod(std::forward<LookBackTimePeriodT>(value)); return *this;}
    ///@}
  private:

    AccountScope m_accountScope{AccountScope::NOT_SET};
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AnalysisType m_analysisType{AnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    Aws::Vector<SavingsPlans> m_savingsPlansToAdd;
    bool m_savingsPlansToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_savingsPlansToExclude;
    bool m_savingsPlansToExcludeHasBeenSet = false;

    DateInterval m_lookBackTimePeriod;
    bool m_lookBackTimePeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
