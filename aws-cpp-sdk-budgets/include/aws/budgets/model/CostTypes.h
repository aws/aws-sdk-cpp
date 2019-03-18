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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * <p>The types of cost that are included in a <code>COST</code> budget, such as
   * tax and subscriptions.</p> <p> <code>USAGE</code>, <code>RI_UTILIZATION</code>,
   * and <code>RI_COVERAGE</code> budgets do not have
   * <code>CostTypes</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CostTypes">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API CostTypes
  {
  public:
    CostTypes();
    CostTypes(Aws::Utils::Json::JsonView jsonValue);
    CostTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether a budget includes taxes.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool GetIncludeTax() const{ return m_includeTax; }

    /**
     * <p>Specifies whether a budget includes taxes.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool IncludeTaxHasBeenSet() const { return m_includeTaxHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes taxes.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline void SetIncludeTax(bool value) { m_includeTaxHasBeenSet = true; m_includeTax = value; }

    /**
     * <p>Specifies whether a budget includes taxes.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeTax(bool value) { SetIncludeTax(value); return *this;}


    /**
     * <p>Specifies whether a budget includes subscriptions.</p> <p>The default value
     * is <code>true</code>.</p>
     */
    inline bool GetIncludeSubscription() const{ return m_includeSubscription; }

    /**
     * <p>Specifies whether a budget includes subscriptions.</p> <p>The default value
     * is <code>true</code>.</p>
     */
    inline bool IncludeSubscriptionHasBeenSet() const { return m_includeSubscriptionHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes subscriptions.</p> <p>The default value
     * is <code>true</code>.</p>
     */
    inline void SetIncludeSubscription(bool value) { m_includeSubscriptionHasBeenSet = true; m_includeSubscription = value; }

    /**
     * <p>Specifies whether a budget includes subscriptions.</p> <p>The default value
     * is <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeSubscription(bool value) { SetIncludeSubscription(value); return *this;}


    /**
     * <p>Specifies whether a budget uses a blended rate.</p> <p>The default value is
     * <code>false</code>.</p>
     */
    inline bool GetUseBlended() const{ return m_useBlended; }

    /**
     * <p>Specifies whether a budget uses a blended rate.</p> <p>The default value is
     * <code>false</code>.</p>
     */
    inline bool UseBlendedHasBeenSet() const { return m_useBlendedHasBeenSet; }

    /**
     * <p>Specifies whether a budget uses a blended rate.</p> <p>The default value is
     * <code>false</code>.</p>
     */
    inline void SetUseBlended(bool value) { m_useBlendedHasBeenSet = true; m_useBlended = value; }

    /**
     * <p>Specifies whether a budget uses a blended rate.</p> <p>The default value is
     * <code>false</code>.</p>
     */
    inline CostTypes& WithUseBlended(bool value) { SetUseBlended(value); return *this;}


    /**
     * <p>Specifies whether a budget includes refunds.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool GetIncludeRefund() const{ return m_includeRefund; }

    /**
     * <p>Specifies whether a budget includes refunds.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool IncludeRefundHasBeenSet() const { return m_includeRefundHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes refunds.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline void SetIncludeRefund(bool value) { m_includeRefundHasBeenSet = true; m_includeRefund = value; }

    /**
     * <p>Specifies whether a budget includes refunds.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeRefund(bool value) { SetIncludeRefund(value); return *this;}


    /**
     * <p>Specifies whether a budget includes credits.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool GetIncludeCredit() const{ return m_includeCredit; }

    /**
     * <p>Specifies whether a budget includes credits.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool IncludeCreditHasBeenSet() const { return m_includeCreditHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes credits.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline void SetIncludeCredit(bool value) { m_includeCreditHasBeenSet = true; m_includeCredit = value; }

    /**
     * <p>Specifies whether a budget includes credits.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeCredit(bool value) { SetIncludeCredit(value); return *this;}


    /**
     * <p>Specifies whether a budget includes upfront RI costs.</p> <p>The default
     * value is <code>true</code>.</p>
     */
    inline bool GetIncludeUpfront() const{ return m_includeUpfront; }

    /**
     * <p>Specifies whether a budget includes upfront RI costs.</p> <p>The default
     * value is <code>true</code>.</p>
     */
    inline bool IncludeUpfrontHasBeenSet() const { return m_includeUpfrontHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes upfront RI costs.</p> <p>The default
     * value is <code>true</code>.</p>
     */
    inline void SetIncludeUpfront(bool value) { m_includeUpfrontHasBeenSet = true; m_includeUpfront = value; }

    /**
     * <p>Specifies whether a budget includes upfront RI costs.</p> <p>The default
     * value is <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeUpfront(bool value) { SetIncludeUpfront(value); return *this;}


    /**
     * <p>Specifies whether a budget includes recurring fees such as monthly RI
     * fees.</p> <p>The default value is <code>true</code>.</p>
     */
    inline bool GetIncludeRecurring() const{ return m_includeRecurring; }

    /**
     * <p>Specifies whether a budget includes recurring fees such as monthly RI
     * fees.</p> <p>The default value is <code>true</code>.</p>
     */
    inline bool IncludeRecurringHasBeenSet() const { return m_includeRecurringHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes recurring fees such as monthly RI
     * fees.</p> <p>The default value is <code>true</code>.</p>
     */
    inline void SetIncludeRecurring(bool value) { m_includeRecurringHasBeenSet = true; m_includeRecurring = value; }

    /**
     * <p>Specifies whether a budget includes recurring fees such as monthly RI
     * fees.</p> <p>The default value is <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeRecurring(bool value) { SetIncludeRecurring(value); return *this;}


    /**
     * <p>Specifies whether a budget includes non-RI subscription costs.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline bool GetIncludeOtherSubscription() const{ return m_includeOtherSubscription; }

    /**
     * <p>Specifies whether a budget includes non-RI subscription costs.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline bool IncludeOtherSubscriptionHasBeenSet() const { return m_includeOtherSubscriptionHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes non-RI subscription costs.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline void SetIncludeOtherSubscription(bool value) { m_includeOtherSubscriptionHasBeenSet = true; m_includeOtherSubscription = value; }

    /**
     * <p>Specifies whether a budget includes non-RI subscription costs.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeOtherSubscription(bool value) { SetIncludeOtherSubscription(value); return *this;}


    /**
     * <p>Specifies whether a budget includes support subscription fees.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline bool GetIncludeSupport() const{ return m_includeSupport; }

    /**
     * <p>Specifies whether a budget includes support subscription fees.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline bool IncludeSupportHasBeenSet() const { return m_includeSupportHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes support subscription fees.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline void SetIncludeSupport(bool value) { m_includeSupportHasBeenSet = true; m_includeSupport = value; }

    /**
     * <p>Specifies whether a budget includes support subscription fees.</p> <p>The
     * default value is <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeSupport(bool value) { SetIncludeSupport(value); return *this;}


    /**
     * <p>Specifies whether a budget includes discounts.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool GetIncludeDiscount() const{ return m_includeDiscount; }

    /**
     * <p>Specifies whether a budget includes discounts.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline bool IncludeDiscountHasBeenSet() const { return m_includeDiscountHasBeenSet; }

    /**
     * <p>Specifies whether a budget includes discounts.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline void SetIncludeDiscount(bool value) { m_includeDiscountHasBeenSet = true; m_includeDiscount = value; }

    /**
     * <p>Specifies whether a budget includes discounts.</p> <p>The default value is
     * <code>true</code>.</p>
     */
    inline CostTypes& WithIncludeDiscount(bool value) { SetIncludeDiscount(value); return *this;}


    /**
     * <p>Specifies whether a budget uses the amortized rate.</p> <p>The default value
     * is <code>false</code>.</p>
     */
    inline bool GetUseAmortized() const{ return m_useAmortized; }

    /**
     * <p>Specifies whether a budget uses the amortized rate.</p> <p>The default value
     * is <code>false</code>.</p>
     */
    inline bool UseAmortizedHasBeenSet() const { return m_useAmortizedHasBeenSet; }

    /**
     * <p>Specifies whether a budget uses the amortized rate.</p> <p>The default value
     * is <code>false</code>.</p>
     */
    inline void SetUseAmortized(bool value) { m_useAmortizedHasBeenSet = true; m_useAmortized = value; }

    /**
     * <p>Specifies whether a budget uses the amortized rate.</p> <p>The default value
     * is <code>false</code>.</p>
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
