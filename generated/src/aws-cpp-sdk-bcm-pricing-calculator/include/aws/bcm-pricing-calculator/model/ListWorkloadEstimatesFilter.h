/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesFilterName.h>
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
   * <p> Represents a filter for listing workload estimates. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ListWorkloadEstimatesFilter">AWS
   * API Reference</a></p>
   */
  class ListWorkloadEstimatesFilter
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListWorkloadEstimatesFilter();
    AWS_BCMPRICINGCALCULATOR_API ListWorkloadEstimatesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API ListWorkloadEstimatesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the filter attribute. </p>
     */
    inline const ListWorkloadEstimatesFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ListWorkloadEstimatesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ListWorkloadEstimatesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ListWorkloadEstimatesFilter& WithName(const ListWorkloadEstimatesFilterName& value) { SetName(value); return *this;}
    inline ListWorkloadEstimatesFilter& WithName(ListWorkloadEstimatesFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The values to filter by. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ListWorkloadEstimatesFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline ListWorkloadEstimatesFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline ListWorkloadEstimatesFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline ListWorkloadEstimatesFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline ListWorkloadEstimatesFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The match option for the filter (e.g., equals, contains). </p>
     */
    inline const MatchOption& GetMatchOption() const{ return m_matchOption; }
    inline bool MatchOptionHasBeenSet() const { return m_matchOptionHasBeenSet; }
    inline void SetMatchOption(const MatchOption& value) { m_matchOptionHasBeenSet = true; m_matchOption = value; }
    inline void SetMatchOption(MatchOption&& value) { m_matchOptionHasBeenSet = true; m_matchOption = std::move(value); }
    inline ListWorkloadEstimatesFilter& WithMatchOption(const MatchOption& value) { SetMatchOption(value); return *this;}
    inline ListWorkloadEstimatesFilter& WithMatchOption(MatchOption&& value) { SetMatchOption(std::move(value)); return *this;}
    ///@}
  private:

    ListWorkloadEstimatesFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    MatchOption m_matchOption;
    bool m_matchOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
