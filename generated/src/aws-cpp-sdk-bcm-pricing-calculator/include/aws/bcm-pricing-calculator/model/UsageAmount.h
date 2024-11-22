/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Represents a usage amount for a specific time period. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/UsageAmount">AWS
   * API Reference</a></p>
   */
  class UsageAmount
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API UsageAmount();
    AWS_BCMPRICINGCALCULATOR_API UsageAmount(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API UsageAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The start hour of the usage period. </p>
     */
    inline const Aws::Utils::DateTime& GetStartHour() const{ return m_startHour; }
    inline bool StartHourHasBeenSet() const { return m_startHourHasBeenSet; }
    inline void SetStartHour(const Aws::Utils::DateTime& value) { m_startHourHasBeenSet = true; m_startHour = value; }
    inline void SetStartHour(Aws::Utils::DateTime&& value) { m_startHourHasBeenSet = true; m_startHour = std::move(value); }
    inline UsageAmount& WithStartHour(const Aws::Utils::DateTime& value) { SetStartHour(value); return *this;}
    inline UsageAmount& WithStartHour(Aws::Utils::DateTime&& value) { SetStartHour(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The usage amount for the period. </p>
     */
    inline double GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline UsageAmount& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startHour;
    bool m_startHourHasBeenSet = false;

    double m_amount;
    bool m_amountHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
