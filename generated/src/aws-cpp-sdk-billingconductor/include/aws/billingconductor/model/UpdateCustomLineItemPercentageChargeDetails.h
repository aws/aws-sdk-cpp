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
   * <p> A representation of the new charge details that are associated with a
   * percentage custom line item. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateCustomLineItemPercentageChargeDetails">AWS
   * API Reference</a></p>
   */
  class UpdateCustomLineItemPercentageChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemPercentageChargeDetails();
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemPercentageChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemPercentageChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The custom line item's new percentage value. This will be multiplied against
     * the combined value of its associated resources to determine its charge value.
     * </p>
     */
    inline double GetPercentageValue() const{ return m_percentageValue; }

    /**
     * <p> The custom line item's new percentage value. This will be multiplied against
     * the combined value of its associated resources to determine its charge value.
     * </p>
     */
    inline bool PercentageValueHasBeenSet() const { return m_percentageValueHasBeenSet; }

    /**
     * <p> The custom line item's new percentage value. This will be multiplied against
     * the combined value of its associated resources to determine its charge value.
     * </p>
     */
    inline void SetPercentageValue(double value) { m_percentageValueHasBeenSet = true; m_percentageValue = value; }

    /**
     * <p> The custom line item's new percentage value. This will be multiplied against
     * the combined value of its associated resources to determine its charge value.
     * </p>
     */
    inline UpdateCustomLineItemPercentageChargeDetails& WithPercentageValue(double value) { SetPercentageValue(value); return *this;}

  private:

    double m_percentageValue;
    bool m_percentageValueHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
