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
   * <p> Represents a time-based filter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/FilterTimestamp">AWS
   * API Reference</a></p>
   */
  class FilterTimestamp
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API FilterTimestamp();
    AWS_BCMPRICINGCALCULATOR_API FilterTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API FilterTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Include results after this timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetAfterTimestamp() const{ return m_afterTimestamp; }
    inline bool AfterTimestampHasBeenSet() const { return m_afterTimestampHasBeenSet; }
    inline void SetAfterTimestamp(const Aws::Utils::DateTime& value) { m_afterTimestampHasBeenSet = true; m_afterTimestamp = value; }
    inline void SetAfterTimestamp(Aws::Utils::DateTime&& value) { m_afterTimestampHasBeenSet = true; m_afterTimestamp = std::move(value); }
    inline FilterTimestamp& WithAfterTimestamp(const Aws::Utils::DateTime& value) { SetAfterTimestamp(value); return *this;}
    inline FilterTimestamp& WithAfterTimestamp(Aws::Utils::DateTime&& value) { SetAfterTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Include results before this timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetBeforeTimestamp() const{ return m_beforeTimestamp; }
    inline bool BeforeTimestampHasBeenSet() const { return m_beforeTimestampHasBeenSet; }
    inline void SetBeforeTimestamp(const Aws::Utils::DateTime& value) { m_beforeTimestampHasBeenSet = true; m_beforeTimestamp = value; }
    inline void SetBeforeTimestamp(Aws::Utils::DateTime&& value) { m_beforeTimestampHasBeenSet = true; m_beforeTimestamp = std::move(value); }
    inline FilterTimestamp& WithBeforeTimestamp(const Aws::Utils::DateTime& value) { SetBeforeTimestamp(value); return *this;}
    inline FilterTimestamp& WithBeforeTimestamp(Aws::Utils::DateTime&& value) { SetBeforeTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterTimestamp;
    bool m_afterTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_beforeTimestamp;
    bool m_beforeTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
