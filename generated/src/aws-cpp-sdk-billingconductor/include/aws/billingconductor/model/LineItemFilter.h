/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/LineItemFilterAttributeName.h>
#include <aws/billingconductor/model/MatchOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/LineItemFilterValue.h>
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
   * <p>A representation of the line item filter for your custom line item. You can
   * use line item filters to include or exclude specific resource values from the
   * billing group's total cost. For example, if you create a custom line item and
   * you want to filter out a value, such as Savings Plan discounts, you can update
   * <code>LineItemFilter</code> to exclude it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/LineItemFilter">AWS
   * API Reference</a></p>
   */
  class LineItemFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API LineItemFilter() = default;
    AWS_BILLINGCONDUCTOR_API LineItemFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API LineItemFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute of the line item filter. This specifies what attribute that you
     * can filter on.</p>
     */
    inline LineItemFilterAttributeName GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(LineItemFilterAttributeName value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline LineItemFilter& WithAttribute(LineItemFilterAttributeName value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match criteria of the line item filter. This parameter specifies whether
     * not to include the resource value from the billing group total cost.</p>
     */
    inline MatchOption GetMatchOption() const { return m_matchOption; }
    inline bool MatchOptionHasBeenSet() const { return m_matchOptionHasBeenSet; }
    inline void SetMatchOption(MatchOption value) { m_matchOptionHasBeenSet = true; m_matchOption = value; }
    inline LineItemFilter& WithMatchOption(MatchOption value) { SetMatchOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the line item filter. This specifies the values to filter on.
     * Currently, you can only exclude Savings Plan discounts.</p>
     */
    inline const Aws::Vector<LineItemFilterValue>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<LineItemFilterValue>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<LineItemFilterValue>>
    LineItemFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline LineItemFilter& AddValues(LineItemFilterValue value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    LineItemFilterAttributeName m_attribute{LineItemFilterAttributeName::NOT_SET};
    bool m_attributeHasBeenSet = false;

    MatchOption m_matchOption{MatchOption::NOT_SET};
    bool m_matchOptionHasBeenSet = false;

    Aws::Vector<LineItemFilterValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
