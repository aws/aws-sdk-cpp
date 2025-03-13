/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/UpdateCustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/UpdateCustomLineItemPercentageChargeDetails.h>
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
   * <p> A representation of the new charge details of a custom line item. This
   * should contain only one of <code>Flat</code> or <code>Percentage</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateCustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class UpdateCustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemChargeDetails() = default;
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API UpdateCustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An <code>UpdateCustomLineItemFlatChargeDetails</code> that describes the new
     * charge details of a flat custom line item. </p>
     */
    inline const UpdateCustomLineItemFlatChargeDetails& GetFlat() const { return m_flat; }
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }
    template<typename FlatT = UpdateCustomLineItemFlatChargeDetails>
    void SetFlat(FlatT&& value) { m_flatHasBeenSet = true; m_flat = std::forward<FlatT>(value); }
    template<typename FlatT = UpdateCustomLineItemFlatChargeDetails>
    UpdateCustomLineItemChargeDetails& WithFlat(FlatT&& value) { SetFlat(std::forward<FlatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An <code>UpdateCustomLineItemPercentageChargeDetails</code> that describes
     * the new charge details of a percentage custom line item. </p>
     */
    inline const UpdateCustomLineItemPercentageChargeDetails& GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    template<typename PercentageT = UpdateCustomLineItemPercentageChargeDetails>
    void SetPercentage(PercentageT&& value) { m_percentageHasBeenSet = true; m_percentage = std::forward<PercentageT>(value); }
    template<typename PercentageT = UpdateCustomLineItemPercentageChargeDetails>
    UpdateCustomLineItemChargeDetails& WithPercentage(PercentageT&& value) { SetPercentage(std::forward<PercentageT>(value)); return *this;}
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
    UpdateCustomLineItemChargeDetails& WithLineItemFilters(LineItemFiltersT&& value) { SetLineItemFilters(std::forward<LineItemFiltersT>(value)); return *this;}
    template<typename LineItemFiltersT = LineItemFilter>
    UpdateCustomLineItemChargeDetails& AddLineItemFilters(LineItemFiltersT&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.emplace_back(std::forward<LineItemFiltersT>(value)); return *this; }
    ///@}
  private:

    UpdateCustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    UpdateCustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;

    Aws::Vector<LineItemFilter> m_lineItemFilters;
    bool m_lineItemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
