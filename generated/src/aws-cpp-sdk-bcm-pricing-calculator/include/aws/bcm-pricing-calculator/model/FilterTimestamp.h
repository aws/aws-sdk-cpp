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
    AWS_BCMPRICINGCALCULATOR_API FilterTimestamp() = default;
    AWS_BCMPRICINGCALCULATOR_API FilterTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API FilterTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Include results after this timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetAfterTimestamp() const { return m_afterTimestamp; }
    inline bool AfterTimestampHasBeenSet() const { return m_afterTimestampHasBeenSet; }
    template<typename AfterTimestampT = Aws::Utils::DateTime>
    void SetAfterTimestamp(AfterTimestampT&& value) { m_afterTimestampHasBeenSet = true; m_afterTimestamp = std::forward<AfterTimestampT>(value); }
    template<typename AfterTimestampT = Aws::Utils::DateTime>
    FilterTimestamp& WithAfterTimestamp(AfterTimestampT&& value) { SetAfterTimestamp(std::forward<AfterTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Include results before this timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetBeforeTimestamp() const { return m_beforeTimestamp; }
    inline bool BeforeTimestampHasBeenSet() const { return m_beforeTimestampHasBeenSet; }
    template<typename BeforeTimestampT = Aws::Utils::DateTime>
    void SetBeforeTimestamp(BeforeTimestampT&& value) { m_beforeTimestampHasBeenSet = true; m_beforeTimestamp = std::forward<BeforeTimestampT>(value); }
    template<typename BeforeTimestampT = Aws::Utils::DateTime>
    FilterTimestamp& WithBeforeTimestamp(BeforeTimestampT&& value) { SetBeforeTimestamp(std::forward<BeforeTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterTimestamp{};
    bool m_afterTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_beforeTimestamp{};
    bool m_beforeTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
