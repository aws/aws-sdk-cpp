/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Represents a usage quantity with associated unit and time period.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UsageQuantity">AWS
   * API Reference</a></p>
   */
  class UsageQuantity
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API UsageQuantity() = default;
    AWS_BCMPRICINGCALCULATOR_API UsageQuantity(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API UsageQuantity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The start hour of the usage period. </p>
     */
    inline const Aws::Utils::DateTime& GetStartHour() const { return m_startHour; }
    inline bool StartHourHasBeenSet() const { return m_startHourHasBeenSet; }
    template<typename StartHourT = Aws::Utils::DateTime>
    void SetStartHour(StartHourT&& value) { m_startHourHasBeenSet = true; m_startHour = std::forward<StartHourT>(value); }
    template<typename StartHourT = Aws::Utils::DateTime>
    UsageQuantity& WithStartHour(StartHourT&& value) { SetStartHour(std::forward<StartHourT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measurement for the usage quantity. </p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    UsageQuantity& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The numeric value of the usage quantity. </p>
     */
    inline double GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline UsageQuantity& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startHour{};
    bool m_startHourHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    double m_amount{0.0};
    bool m_amountHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
