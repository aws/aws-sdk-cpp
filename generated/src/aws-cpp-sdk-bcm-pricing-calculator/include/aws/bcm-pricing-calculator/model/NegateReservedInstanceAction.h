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
   * <p> Represents an action to remove a Reserved Instance from a bill scenario.
   * </p> <p> This is the ID of an existing Reserved Instance in your account.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/NegateReservedInstanceAction">AWS
   * API Reference</a></p>
   */
  class NegateReservedInstanceAction
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API NegateReservedInstanceAction();
    AWS_BCMPRICINGCALCULATOR_API NegateReservedInstanceAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API NegateReservedInstanceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Reserved Instance to remove. </p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }
    inline NegateReservedInstanceAction& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}
    inline NegateReservedInstanceAction& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}
    inline NegateReservedInstanceAction& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
