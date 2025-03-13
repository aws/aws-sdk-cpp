/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Represents a filter used within an expression. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/ExpressionFilter">AWS
   * API Reference</a></p>
   */
  class ExpressionFilter
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ExpressionFilter() = default;
    AWS_BCMPRICINGCALCULATOR_API ExpressionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API ExpressionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The key or attribute to filter on. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ExpressionFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The match options for the filter (e.g., equals, contains). </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchOptions() const { return m_matchOptions; }
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }
    template<typename MatchOptionsT = Aws::Vector<Aws::String>>
    void SetMatchOptions(MatchOptionsT&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::forward<MatchOptionsT>(value); }
    template<typename MatchOptionsT = Aws::Vector<Aws::String>>
    ExpressionFilter& WithMatchOptions(MatchOptionsT&& value) { SetMatchOptions(std::forward<MatchOptionsT>(value)); return *this;}
    template<typename MatchOptionsT = Aws::String>
    ExpressionFilter& AddMatchOptions(MatchOptionsT&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.emplace_back(std::forward<MatchOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The values to match against. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ExpressionFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ExpressionFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
