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
    AWS_COSTEXPLORER_API SavingsPlansSavings();
    AWS_COSTEXPLORER_API SavingsPlansSavings(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansSavings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline const Aws::String& GetNetSavings() const{ return m_netSavings; }

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline bool NetSavingsHasBeenSet() const { return m_netSavingsHasBeenSet; }

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline void SetNetSavings(const Aws::String& value) { m_netSavingsHasBeenSet = true; m_netSavings = value; }

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline void SetNetSavings(Aws::String&& value) { m_netSavingsHasBeenSet = true; m_netSavings = std::move(value); }

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline void SetNetSavings(const char* value) { m_netSavingsHasBeenSet = true; m_netSavings.assign(value); }

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline SavingsPlansSavings& WithNetSavings(const Aws::String& value) { SetNetSavings(value); return *this;}

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline SavingsPlansSavings& WithNetSavings(Aws::String&& value) { SetNetSavings(std::move(value)); return *this;}

    /**
     * <p>The savings amount that you're accumulating for the usage that's covered by a
     * Savings Plans, when compared to the On-Demand equivalent of the same usage.</p>
     */
    inline SavingsPlansSavings& WithNetSavings(const char* value) { SetNetSavings(value); return *this;}


    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline const Aws::String& GetOnDemandCostEquivalent() const{ return m_onDemandCostEquivalent; }

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline bool OnDemandCostEquivalentHasBeenSet() const { return m_onDemandCostEquivalentHasBeenSet; }

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline void SetOnDemandCostEquivalent(const Aws::String& value) { m_onDemandCostEquivalentHasBeenSet = true; m_onDemandCostEquivalent = value; }

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline void SetOnDemandCostEquivalent(Aws::String&& value) { m_onDemandCostEquivalentHasBeenSet = true; m_onDemandCostEquivalent = std::move(value); }

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline void SetOnDemandCostEquivalent(const char* value) { m_onDemandCostEquivalentHasBeenSet = true; m_onDemandCostEquivalent.assign(value); }

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline SavingsPlansSavings& WithOnDemandCostEquivalent(const Aws::String& value) { SetOnDemandCostEquivalent(value); return *this;}

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline SavingsPlansSavings& WithOnDemandCostEquivalent(Aws::String&& value) { SetOnDemandCostEquivalent(std::move(value)); return *this;}

    /**
     * <p>How much the amount that the usage would have cost if it was accrued at the
     * On-Demand rate.</p>
     */
    inline SavingsPlansSavings& WithOnDemandCostEquivalent(const char* value) { SetOnDemandCostEquivalent(value); return *this;}

  private:

    Aws::String m_netSavings;
    bool m_netSavingsHasBeenSet = false;

    Aws::String m_onDemandCostEquivalent;
    bool m_onDemandCostEquivalentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
