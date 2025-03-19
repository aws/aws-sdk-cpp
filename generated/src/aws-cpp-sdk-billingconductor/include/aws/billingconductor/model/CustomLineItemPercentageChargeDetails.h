/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A representation of the charge details that are associated with a percentage
   * custom line item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemPercentageChargeDetails">AWS
   * API Reference</a></p>
   */
  class CustomLineItemPercentageChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemPercentageChargeDetails() = default;
    AWS_BILLINGCONDUCTOR_API CustomLineItemPercentageChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemPercentageChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom line item's percentage value. This will be multiplied against the
     * combined value of its associated resources to determine its charge value. </p>
     */
    inline double GetPercentageValue() const { return m_percentageValue; }
    inline bool PercentageValueHasBeenSet() const { return m_percentageValueHasBeenSet; }
    inline void SetPercentageValue(double value) { m_percentageValueHasBeenSet = true; m_percentageValue = value; }
    inline CustomLineItemPercentageChargeDetails& WithPercentageValue(double value) { SetPercentageValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource ARNs to associate to the percentage custom line item.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedValues() const { return m_associatedValues; }
    inline bool AssociatedValuesHasBeenSet() const { return m_associatedValuesHasBeenSet; }
    template<typename AssociatedValuesT = Aws::Vector<Aws::String>>
    void SetAssociatedValues(AssociatedValuesT&& value) { m_associatedValuesHasBeenSet = true; m_associatedValues = std::forward<AssociatedValuesT>(value); }
    template<typename AssociatedValuesT = Aws::Vector<Aws::String>>
    CustomLineItemPercentageChargeDetails& WithAssociatedValues(AssociatedValuesT&& value) { SetAssociatedValues(std::forward<AssociatedValuesT>(value)); return *this;}
    template<typename AssociatedValuesT = Aws::String>
    CustomLineItemPercentageChargeDetails& AddAssociatedValues(AssociatedValuesT&& value) { m_associatedValuesHasBeenSet = true; m_associatedValues.emplace_back(std::forward<AssociatedValuesT>(value)); return *this; }
    ///@}
  private:

    double m_percentageValue{0.0};
    bool m_percentageValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedValues;
    bool m_associatedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
