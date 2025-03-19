/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/CustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemPercentageChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/LineItemFilter.h>
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
   * <p>The charge details of a custom line item. It should contain only one of
   * <code>Flat</code> or <code>Percentage</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class CustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails() = default;
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>CustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item.</p>
     */
    inline const CustomLineItemFlatChargeDetails& GetFlat() const { return m_flat; }
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }
    template<typename FlatT = CustomLineItemFlatChargeDetails>
    void SetFlat(FlatT&& value) { m_flatHasBeenSet = true; m_flat = std::forward<FlatT>(value); }
    template<typename FlatT = CustomLineItemFlatChargeDetails>
    CustomLineItemChargeDetails& WithFlat(FlatT&& value) { SetFlat(std::forward<FlatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item.</p>
     */
    inline const CustomLineItemPercentageChargeDetails& GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    template<typename PercentageT = CustomLineItemPercentageChargeDetails>
    void SetPercentage(PercentageT&& value) { m_percentageHasBeenSet = true; m_percentage = std::forward<PercentageT>(value); }
    template<typename PercentageT = CustomLineItemPercentageChargeDetails>
    CustomLineItemChargeDetails& WithPercentage(PercentageT&& value) { SetPercentage(std::forward<PercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the custom line item that indicates whether the charge is a fee
     * or credit.</p>
     */
    inline CustomLineItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CustomLineItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CustomLineItemChargeDetails& WithType(CustomLineItemType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A representation of the line item filter.</p>
     */
    inline const Aws::Vector<LineItemFilter>& GetLineItemFilters() const { return m_lineItemFilters; }
    inline bool LineItemFiltersHasBeenSet() const { return m_lineItemFiltersHasBeenSet; }
    template<typename LineItemFiltersT = Aws::Vector<LineItemFilter>>
    void SetLineItemFilters(LineItemFiltersT&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters = std::forward<LineItemFiltersT>(value); }
    template<typename LineItemFiltersT = Aws::Vector<LineItemFilter>>
    CustomLineItemChargeDetails& WithLineItemFilters(LineItemFiltersT&& value) { SetLineItemFilters(std::forward<LineItemFiltersT>(value)); return *this;}
    template<typename LineItemFiltersT = LineItemFilter>
    CustomLineItemChargeDetails& AddLineItemFilters(LineItemFiltersT&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.emplace_back(std::forward<LineItemFiltersT>(value)); return *this; }
    ///@}
  private:

    CustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    CustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;

    CustomLineItemType m_type{CustomLineItemType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<LineItemFilter> m_lineItemFilters;
    bool m_lineItemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
