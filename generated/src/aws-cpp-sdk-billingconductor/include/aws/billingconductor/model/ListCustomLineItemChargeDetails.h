/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/ListCustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/ListCustomLineItemPercentageChargeDetails.h>
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
   * <p> A representation of the charge details of a custom line item. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemChargeDetails() = default;
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A <code>ListCustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline const ListCustomLineItemFlatChargeDetails& GetFlat() const { return m_flat; }
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }
    template<typename FlatT = ListCustomLineItemFlatChargeDetails>
    void SetFlat(FlatT&& value) { m_flatHasBeenSet = true; m_flat = std::forward<FlatT>(value); }
    template<typename FlatT = ListCustomLineItemFlatChargeDetails>
    ListCustomLineItemChargeDetails& WithFlat(FlatT&& value) { SetFlat(std::forward<FlatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListCustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline const ListCustomLineItemPercentageChargeDetails& GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    template<typename PercentageT = ListCustomLineItemPercentageChargeDetails>
    void SetPercentage(PercentageT&& value) { m_percentageHasBeenSet = true; m_percentage = std::forward<PercentageT>(value); }
    template<typename PercentageT = ListCustomLineItemPercentageChargeDetails>
    ListCustomLineItemChargeDetails& WithPercentage(PercentageT&& value) { SetPercentage(std::forward<PercentageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the custom line item that indicates whether the charge is a
     * <code>fee</code> or <code>credit</code>. </p>
     */
    inline CustomLineItemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CustomLineItemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListCustomLineItemChargeDetails& WithType(CustomLineItemType value) { SetType(value); return *this;}
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
    ListCustomLineItemChargeDetails& WithLineItemFilters(LineItemFiltersT&& value) { SetLineItemFilters(std::forward<LineItemFiltersT>(value)); return *this;}
    template<typename LineItemFiltersT = LineItemFilter>
    ListCustomLineItemChargeDetails& AddLineItemFilters(LineItemFiltersT&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.emplace_back(std::forward<LineItemFiltersT>(value)); return *this; }
    ///@}
  private:

    ListCustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    ListCustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;

    CustomLineItemType m_type{CustomLineItemType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<LineItemFilter> m_lineItemFilters;
    bool m_lineItemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
