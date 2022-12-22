/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/UpdateCustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/UpdateCustomLineItemPercentageChargeDetails.h>
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
   * <p> A representation of the new charge details of a custom line item. This
   * should contain only one of <code>Flat</code> or <code>Percentage</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateCustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class UpdateCustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemChargeDetails();
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline const UpdateCustomLineItemFlatChargeDetails& GetFlat() const{ return m_flat; }

    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }

    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline void SetFlat(const UpdateCustomLineItemFlatChargeDetails& value) { m_flatHasBeenSet = true; m_flat = value; }

    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline void SetFlat(UpdateCustomLineItemFlatChargeDetails&& value) { m_flatHasBeenSet = true; m_flat = std::move(value); }

    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline UpdateCustomLineItemChargeDetails& WithFlat(const UpdateCustomLineItemFlatChargeDetails& value) { SetFlat(value); return *this;}

    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline UpdateCustomLineItemChargeDetails& WithFlat(UpdateCustomLineItemFlatChargeDetails&& value) { SetFlat(std::move(value)); return *this;}


    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline const UpdateCustomLineItemPercentageChargeDetails& GetPercentage() const{ return m_percentage; }

    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }

    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline void SetPercentage(const UpdateCustomLineItemPercentageChargeDetails& value) { m_percentageHasBeenSet = true; m_percentage = value; }

    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline void SetPercentage(UpdateCustomLineItemPercentageChargeDetails&& value) { m_percentageHasBeenSet = true; m_percentage = std::move(value); }

    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline UpdateCustomLineItemChargeDetails& WithPercentage(const UpdateCustomLineItemPercentageChargeDetails& value) { SetPercentage(value); return *this;}

    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline UpdateCustomLineItemChargeDetails& WithPercentage(UpdateCustomLineItemPercentageChargeDetails&& value) { SetPercentage(std::move(value)); return *this;}

  private:

    UpdateCustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    UpdateCustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
