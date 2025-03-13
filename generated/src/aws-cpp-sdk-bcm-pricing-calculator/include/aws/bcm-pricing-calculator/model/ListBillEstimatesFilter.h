/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimatesFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/MatchOption.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Represents a filter for listing bill estimates. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListBillEstimatesFilter">AWS
   * API Reference</a></p>
   */
  class ListBillEstimatesFilter
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimatesFilter() = default;
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimatesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API ListBillEstimatesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the filter attribute. </p>
     */
    inline ListBillEstimatesFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ListBillEstimatesFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ListBillEstimatesFilter& WithName(ListBillEstimatesFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The values to filter by. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ListBillEstimatesFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ListBillEstimatesFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The match option for the filter (e.g., equals, contains). </p>
     */
    inline MatchOption GetMatchOption() const { return m_matchOption; }
    inline bool MatchOptionHasBeenSet() const { return m_matchOptionHasBeenSet; }
    inline void SetMatchOption(MatchOption value) { m_matchOptionHasBeenSet = true; m_matchOption = value; }
    inline ListBillEstimatesFilter& WithMatchOption(MatchOption value) { SetMatchOption(value); return *this;}
    ///@}
  private:

    ListBillEstimatesFilterName m_name{ListBillEstimatesFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    MatchOption m_matchOption{MatchOption::NOT_SET};
    bool m_matchOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
