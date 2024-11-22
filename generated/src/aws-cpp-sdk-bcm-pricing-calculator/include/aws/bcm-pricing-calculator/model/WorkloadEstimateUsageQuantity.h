/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Represents a usage quantity for a workload estimate. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/WorkloadEstimateUsageQuantity">AWS
   * API Reference</a></p>
   */
  class WorkloadEstimateUsageQuantity
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateUsageQuantity();
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateUsageQuantity(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateUsageQuantity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unit of measurement for the usage quantity. </p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline WorkloadEstimateUsageQuantity& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline WorkloadEstimateUsageQuantity& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline WorkloadEstimateUsageQuantity& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The numeric value of the usage quantity. </p>
     */
    inline double GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline WorkloadEstimateUsageQuantity& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}
  private:

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    double m_amount;
    bool m_amountHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
