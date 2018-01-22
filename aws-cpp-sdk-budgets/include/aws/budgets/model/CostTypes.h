/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * This includes the options for getting the cost of a budget.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CostTypes">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API CostTypes
  {
  public:
    CostTypes();
    CostTypes(const Aws::Utils::Json::JsonValue& jsonValue);
    CostTypes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A boolean value whether to include tax in the cost budget.
     */
    inline bool GetIncludeTax() const{ return m_includeTax; }

    /**
     * A boolean value whether to include tax in the cost budget.
     */
    inline void SetIncludeTax(bool value) { m_includeTaxHasBeenSet = true; m_includeTax = value; }

    /**
     * A boolean value whether to include tax in the cost budget.
     */
    inline CostTypes& WithIncludeTax(bool value) { SetIncludeTax(value); return *this;}


    /**
     * A boolean value whether to include subscriptions in the cost budget.
     */
    inline bool GetIncludeSubscription() const{ return m_includeSubscription; }

    /**
     * A boolean value whether to include subscriptions in the cost budget.
     */
    inline void SetIncludeSubscription(bool value) { m_includeSubscriptionHasBeenSet = true; m_includeSubscription = value; }

    /**
     * A boolean value whether to include subscriptions in the cost budget.
     */
    inline CostTypes& WithIncludeSubscription(bool value) { SetIncludeSubscription(value); return *this;}


    /**
     * A boolean value whether to use blended costs in the cost budget.
     */
    inline bool GetUseBlended() const{ return m_useBlended; }

    /**
     * A boolean value whether to use blended costs in the cost budget.
     */
    inline void SetUseBlended(bool value) { m_useBlendedHasBeenSet = true; m_useBlended = value; }

    /**
     * A boolean value whether to use blended costs in the cost budget.
     */
    inline CostTypes& WithUseBlended(bool value) { SetUseBlended(value); return *this;}


    /**
     * A boolean value whether to include refunds in the cost budget.
     */
    inline bool GetIncludeRefund() const{ return m_includeRefund; }

    /**
     * A boolean value whether to include refunds in the cost budget.
     */
    inline void SetIncludeRefund(bool value) { m_includeRefundHasBeenSet = true; m_includeRefund = value; }

    /**
     * A boolean value whether to include refunds in the cost budget.
     */
    inline CostTypes& WithIncludeRefund(bool value) { SetIncludeRefund(value); return *this;}


    /**
     * A boolean value whether to include credits in the cost budget.
     */
    inline bool GetIncludeCredit() const{ return m_includeCredit; }

    /**
     * A boolean value whether to include credits in the cost budget.
     */
    inline void SetIncludeCredit(bool value) { m_includeCreditHasBeenSet = true; m_includeCredit = value; }

    /**
     * A boolean value whether to include credits in the cost budget.
     */
    inline CostTypes& WithIncludeCredit(bool value) { SetIncludeCredit(value); return *this;}


    /**
     * A boolean value whether to include upfront costs in the cost budget.
     */
    inline bool GetIncludeUpfront() const{ return m_includeUpfront; }

    /**
     * A boolean value whether to include upfront costs in the cost budget.
     */
    inline void SetIncludeUpfront(bool value) { m_includeUpfrontHasBeenSet = true; m_includeUpfront = value; }

    /**
     * A boolean value whether to include upfront costs in the cost budget.
     */
    inline CostTypes& WithIncludeUpfront(bool value) { SetIncludeUpfront(value); return *this;}


    /**
     * A boolean value whether to include recurring costs in the cost budget.
     */
    inline bool GetIncludeRecurring() const{ return m_includeRecurring; }

    /**
     * A boolean value whether to include recurring costs in the cost budget.
     */
    inline void SetIncludeRecurring(bool value) { m_includeRecurringHasBeenSet = true; m_includeRecurring = value; }

    /**
     * A boolean value whether to include recurring costs in the cost budget.
     */
    inline CostTypes& WithIncludeRecurring(bool value) { SetIncludeRecurring(value); return *this;}


    /**
     * A boolean value whether to include other subscription costs in the cost budget.
     */
    inline bool GetIncludeOtherSubscription() const{ return m_includeOtherSubscription; }

    /**
     * A boolean value whether to include other subscription costs in the cost budget.
     */
    inline void SetIncludeOtherSubscription(bool value) { m_includeOtherSubscriptionHasBeenSet = true; m_includeOtherSubscription = value; }

    /**
     * A boolean value whether to include other subscription costs in the cost budget.
     */
    inline CostTypes& WithIncludeOtherSubscription(bool value) { SetIncludeOtherSubscription(value); return *this;}


    /**
     * A boolean value whether to include support costs in the cost budget.
     */
    inline bool GetIncludeSupport() const{ return m_includeSupport; }

    /**
     * A boolean value whether to include support costs in the cost budget.
     */
    inline void SetIncludeSupport(bool value) { m_includeSupportHasBeenSet = true; m_includeSupport = value; }

    /**
     * A boolean value whether to include support costs in the cost budget.
     */
    inline CostTypes& WithIncludeSupport(bool value) { SetIncludeSupport(value); return *this;}


    /**
     * A boolean value whether to include discounts in the cost budget.
     */
    inline bool GetIncludeDiscount() const{ return m_includeDiscount; }

    /**
     * A boolean value whether to include discounts in the cost budget.
     */
    inline void SetIncludeDiscount(bool value) { m_includeDiscountHasBeenSet = true; m_includeDiscount = value; }

    /**
     * A boolean value whether to include discounts in the cost budget.
     */
    inline CostTypes& WithIncludeDiscount(bool value) { SetIncludeDiscount(value); return *this;}


    /**
     * A boolean value whether to include amortized costs in the cost budget.
     */
    inline bool GetUseAmortized() const{ return m_useAmortized; }

    /**
     * A boolean value whether to include amortized costs in the cost budget.
     */
    inline void SetUseAmortized(bool value) { m_useAmortizedHasBeenSet = true; m_useAmortized = value; }

    /**
     * A boolean value whether to include amortized costs in the cost budget.
     */
    inline CostTypes& WithUseAmortized(bool value) { SetUseAmortized(value); return *this;}

  private:

    bool m_includeTax;
    bool m_includeTaxHasBeenSet;

    bool m_includeSubscription;
    bool m_includeSubscriptionHasBeenSet;

    bool m_useBlended;
    bool m_useBlendedHasBeenSet;

    bool m_includeRefund;
    bool m_includeRefundHasBeenSet;

    bool m_includeCredit;
    bool m_includeCreditHasBeenSet;

    bool m_includeUpfront;
    bool m_includeUpfrontHasBeenSet;

    bool m_includeRecurring;
    bool m_includeRecurringHasBeenSet;

    bool m_includeOtherSubscription;
    bool m_includeOtherSubscriptionHasBeenSet;

    bool m_includeSupport;
    bool m_includeSupportHasBeenSet;

    bool m_includeDiscount;
    bool m_includeDiscountHasBeenSet;

    bool m_useAmortized;
    bool m_useAmortizedHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
