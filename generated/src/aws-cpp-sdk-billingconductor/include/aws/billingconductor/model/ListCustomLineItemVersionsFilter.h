/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/ListCustomLineItemVersionsBillingPeriodRangeFilter.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>A filter that specifies the billing period range where the custom line item
   * versions reside.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemVersionsFilter">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemVersionsFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsFilter();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The billing period range in which the custom line item version is
     * applied.</p>
     */
    inline const ListCustomLineItemVersionsBillingPeriodRangeFilter& GetBillingPeriodRange() const{ return m_billingPeriodRange; }

    /**
     * <p>The billing period range in which the custom line item version is
     * applied.</p>
     */
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }

    /**
     * <p>The billing period range in which the custom line item version is
     * applied.</p>
     */
    inline void SetBillingPeriodRange(const ListCustomLineItemVersionsBillingPeriodRangeFilter& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = value; }

    /**
     * <p>The billing period range in which the custom line item version is
     * applied.</p>
     */
    inline void SetBillingPeriodRange(ListCustomLineItemVersionsBillingPeriodRangeFilter&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::move(value); }

    /**
     * <p>The billing period range in which the custom line item version is
     * applied.</p>
     */
    inline ListCustomLineItemVersionsFilter& WithBillingPeriodRange(const ListCustomLineItemVersionsBillingPeriodRangeFilter& value) { SetBillingPeriodRange(value); return *this;}

    /**
     * <p>The billing period range in which the custom line item version is
     * applied.</p>
     */
    inline ListCustomLineItemVersionsFilter& WithBillingPeriodRange(ListCustomLineItemVersionsBillingPeriodRangeFilter&& value) { SetBillingPeriodRange(std::move(value)); return *this;}

  private:

    ListCustomLineItemVersionsBillingPeriodRangeFilter m_billingPeriodRange;
    bool m_billingPeriodRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
