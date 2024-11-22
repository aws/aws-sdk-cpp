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
   * <p> Represents a time interval for a bill or estimate. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillInterval">AWS
   * API Reference</a></p>
   */
  class BillInterval
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillInterval();
    AWS_BCMPRICINGCALCULATOR_API BillInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The start date and time of the interval. </p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline BillInterval& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}
    inline BillInterval& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end date and time of the interval. </p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }
    inline BillInterval& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}
    inline BillInterval& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
