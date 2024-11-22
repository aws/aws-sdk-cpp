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
    AWS_BCMPRICINGCALCULATOR_API ExpressionFilter();
    AWS_BCMPRICINGCALCULATOR_API ExpressionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API ExpressionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The key or attribute to filter on. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ExpressionFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ExpressionFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ExpressionFilter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The match options for the filter (e.g., equals, contains). </p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchOptions() const{ return m_matchOptions; }
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }
    inline void SetMatchOptions(const Aws::Vector<Aws::String>& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = value; }
    inline void SetMatchOptions(Aws::Vector<Aws::String>&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::move(value); }
    inline ExpressionFilter& WithMatchOptions(const Aws::Vector<Aws::String>& value) { SetMatchOptions(value); return *this;}
    inline ExpressionFilter& WithMatchOptions(Aws::Vector<Aws::String>&& value) { SetMatchOptions(std::move(value)); return *this;}
    inline ExpressionFilter& AddMatchOptions(const Aws::String& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }
    inline ExpressionFilter& AddMatchOptions(Aws::String&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(std::move(value)); return *this; }
    inline ExpressionFilter& AddMatchOptions(const char* value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The values to match against. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ExpressionFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline ExpressionFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline ExpressionFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline ExpressionFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline ExpressionFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
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
