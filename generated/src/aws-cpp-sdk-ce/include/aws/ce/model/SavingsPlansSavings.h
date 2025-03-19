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
   * <p>The amount of savings that you're accumulating, against the public On-Demand
   * rate of the usage accrued in an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansSavings">AWS
   * API Reference</a></p>
   */
  class SavingsPlansSavings
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansSavings() = default;
    AWS_COSTEXPLORER_API SavingsPlansSavings(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansSavings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline const Aws::String& GetNetSavings() const { return m_netSavings; }
    inline bool NetSavingsHasBeenSet() const { return m_netSavingsHasBeenSet; }
    template<typename NetSavingsT = Aws::String>
    void SetNetSavings(NetSavingsT&& value) { m_netSavingsHasBeenSet = true; m_netSavings = std::forward<NetSavingsT>(value); }
    template<typename NetSavingsT = Aws::String>
    SavingsPlansSavings& WithNetSavings(NetSavingsT&& value) { SetNetSavings(std::forward<NetSavingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline const Aws::String& GetOnDemandCostEquivalent() const { return m_onDemandCostEquivalent; }
    inline bool OnDemandCostEquivalentHasBeenSet() const { return m_onDemandCostEquivalentHasBeenSet; }
    template<typename OnDemandCostEquivalentT = Aws::String>
    void SetOnDemandCostEquivalent(OnDemandCostEquivalentT&& value) { m_onDemandCostEquivalentHasBeenSet = true; m_onDemandCostEquivalent = std::forward<OnDemandCostEquivalentT>(value); }
    template<typename OnDemandCostEquivalentT = Aws::String>
    SavingsPlansSavings& WithOnDemandCostEquivalent(OnDemandCostEquivalentT&& value) { SetOnDemandCostEquivalent(std::forward<OnDemandCostEquivalentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_netSavings;
    bool m_netSavingsHasBeenSet = false;

    Aws::String m_onDemandCostEquivalent;
    bool m_onDemandCostEquivalentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
