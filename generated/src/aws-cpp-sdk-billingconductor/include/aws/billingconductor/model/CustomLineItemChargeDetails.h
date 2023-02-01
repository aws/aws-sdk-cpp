/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/CustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemPercentageChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemType.h>
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
   * <p> The charge details of a custom line item. It should contain only one of
   * <code>Flat</code> or <code>Percentage</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class CustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails();
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline const CustomLineItemFlatChargeDetails& GetFlat() const{ return m_flat; }

    /**
     * <p> A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }

    /**
     * <p> A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline void SetFlat(const CustomLineItemFlatChargeDetails& value) { m_flatHasBeenSet = true; m_flat = value; }

    /**
     * <p> A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline void SetFlat(CustomLineItemFlatChargeDetails&& value) { m_flatHasBeenSet = true; m_flat = std::move(value); }

    /**
     * <p> A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline CustomLineItemChargeDetails& WithFlat(const CustomLineItemFlatChargeDetails& value) { SetFlat(value); return *this;}

    /**
     * <p> A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline CustomLineItemChargeDetails& WithFlat(CustomLineItemFlatChargeDetails&& value) { SetFlat(std::move(value)); return *this;}


    /**
     * <p> A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline const CustomLineItemPercentageChargeDetails& GetPercentage() const{ return m_percentage; }

    /**
     * <p> A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }

    /**
     * <p> A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline void SetPercentage(const CustomLineItemPercentageChargeDetails& value) { m_percentageHasBeenSet = true; m_percentage = value; }

    /**
     * <p> A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline void SetPercentage(CustomLineItemPercentageChargeDetails&& value) { m_percentageHasBeenSet = true; m_percentage = std::move(value); }

    /**
     * <p> A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline CustomLineItemChargeDetails& WithPercentage(const CustomLineItemPercentageChargeDetails& value) { SetPercentage(value); return *this;}

    /**
     * <p> A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline CustomLineItemChargeDetails& WithPercentage(CustomLineItemPercentageChargeDetails&& value) { SetPercentage(std::move(value)); return *this;}


    /**
     * <p> The type of the custom line item that indicates whether the charge is a fee
     * or credit. </p>
     */
    inline const CustomLineItemType& GetType() const{ return m_type; }

    /**
     * <p> The type of the custom line item that indicates whether the charge is a fee
     * or credit. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the custom line item that indicates whether the charge is a fee
     * or credit. </p>
     */
    inline void SetType(const CustomLineItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the custom line item that indicates whether the charge is a fee
     * or credit. </p>
     */
    inline void SetType(CustomLineItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the custom line item that indicates whether the charge is a fee
     * or credit. </p>
     */
    inline CustomLineItemChargeDetails& WithType(const CustomLineItemType& value) { SetType(value); return *this;}

    /**
     * <p> The type of the custom line item that indicates whether the charge is a fee
     * or credit. </p>
     */
    inline CustomLineItemChargeDetails& WithType(CustomLineItemType&& value) { SetType(std::move(value)); return *this;}

  private:

    CustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    CustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;

    CustomLineItemType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
