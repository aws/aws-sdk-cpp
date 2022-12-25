/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>

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
   * <p> A representation of the charge details that are associated with a flat
   * custom line item. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemFlatChargeDetails">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemFlatChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemFlatChargeDetails();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemFlatChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemFlatChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The custom line item's fixed charge value in USD. </p>
     */
    inline double GetChargeValue() const{ return m_chargeValue; }

    /**
     * <p> The custom line item's fixed charge value in USD. </p>
     */
    inline bool ChargeValueHasBeenSet() const { return m_chargeValueHasBeenSet; }

    /**
     * <p> The custom line item's fixed charge value in USD. </p>
     */
    inline void SetChargeValue(double value) { m_chargeValueHasBeenSet = true; m_chargeValue = value; }

    /**
     * <p> The custom line item's fixed charge value in USD. </p>
     */
    inline ListCustomLineItemFlatChargeDetails& WithChargeValue(double value) { SetChargeValue(value); return *this;}

  private:

    double m_chargeValue;
    bool m_chargeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
