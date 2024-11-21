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
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisConfiguration();
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseAnalysisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope that you want your analysis for.</p>
     */
    inline const AccountScope& GetAccountScope() const{ return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    inline void SetAccountScope(const AccountScope& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }
    inline void SetAccountScope(AccountScope&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAccountScope(const AccountScope& value) { SetAccountScope(value); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAccountScope(AccountScope&& value) { SetAccountScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that the analysis is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis.</p>
     */
    inline const AnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(const AnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline void SetAnalysisType(AnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAnalysisType(const AnalysisType& value) { SetAnalysisType(value); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithAnalysisType(AnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Savings Plans to include in the analysis.</p>
     */
    inline const Aws::Vector<SavingsPlans>& GetSavingsPlansToAdd() const{ return m_savingsPlansToAdd; }
    inline bool SavingsPlansToAddHasBeenSet() const { return m_savingsPlansToAddHasBeenSet; }
    inline void SetSavingsPlansToAdd(const Aws::Vector<SavingsPlans>& value) { m_savingsPlansToAddHasBeenSet = true; m_savingsPlansToAdd = value; }
    inline void SetSavingsPlansToAdd(Aws::Vector<SavingsPlans>&& value) { m_savingsPlansToAddHasBeenSet = true; m_savingsPlansToAdd = std::move(value); }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithSavingsPlansToAdd(const Aws::Vector<SavingsPlans>& value) { SetSavingsPlansToAdd(value); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithSavingsPlansToAdd(Aws::Vector<SavingsPlans>&& value) { SetSavingsPlansToAdd(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToAdd(const SavingsPlans& value) { m_savingsPlansToAddHasBeenSet = true; m_savingsPlansToAdd.push_back(value); return *this; }
    inline SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToAdd(SavingsPlans&& value) { m_savingsPlansToAddHasBeenSet = true; m_savingsPlansToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Savings Plans to exclude from the analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlansToExclude() const{ return m_savingsPlansToExclude; }
    inline bool SavingsPlansToExcludeHasBeenSet() const { return m_savingsPlansToExcludeHasBeenSet; }
    inline void SetSavingsPlansToExclude(const Aws::Vector<Aws::String>& value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude = value; }
    inline void SetSavingsPlansToExclude(Aws::Vector<Aws::String>&& value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude = std::move(value); }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithSavingsPlansToExclude(const Aws::Vector<Aws::String>& value) { SetSavingsPlansToExclude(value); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithSavingsPlansToExclude(Aws::Vector<Aws::String>&& value) { SetSavingsPlansToExclude(std::move(value)); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToExclude(const Aws::String& value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude.push_back(value); return *this; }
    inline SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToExclude(Aws::String&& value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude.push_back(std::move(value)); return *this; }
    inline SavingsPlansPurchaseAnalysisConfiguration& AddSavingsPlansToExclude(const char* value) { m_savingsPlansToExcludeHasBeenSet = true; m_savingsPlansToExclude.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period associated with the analysis.</p>
     */
    inline const DateInterval& GetLookBackTimePeriod() const{ return m_lookBackTimePeriod; }
    inline bool LookBackTimePeriodHasBeenSet() const { return m_lookBackTimePeriodHasBeenSet; }
    inline void SetLookBackTimePeriod(const DateInterval& value) { m_lookBackTimePeriodHasBeenSet = true; m_lookBackTimePeriod = value; }
    inline void SetLookBackTimePeriod(DateInterval&& value) { m_lookBackTimePeriodHasBeenSet = true; m_lookBackTimePeriod = std::move(value); }
    inline SavingsPlansPurchaseAnalysisConfiguration& WithLookBackTimePeriod(const DateInterval& value) { SetLookBackTimePeriod(value); return *this;}
    inline SavingsPlansPurchaseAnalysisConfiguration& WithLookBackTimePeriod(DateInterval&& value) { SetLookBackTimePeriod(std::move(value)); return *this;}
    ///@}
  private:

    AccountScope m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AnalysisType m_analysisType;
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
