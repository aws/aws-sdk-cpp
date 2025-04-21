/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Dimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/MatchOption.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>Contains the specifications for the filters to use for your
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ExpressionDimensionValues">AWS
   * API Reference</a></p>
   */
  class ExpressionDimensionValues
  {
  public:
    AWS_BUDGETS_API ExpressionDimensionValues() = default;
    AWS_BUDGETS_API ExpressionDimensionValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API ExpressionDimensionValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dimension that you want to filter on.</p>
     */
    inline Dimension GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(Dimension value) { m_keyHasBeenSet = true; m_key = value; }
    inline ExpressionDimensionValues& WithKey(Dimension value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata values you can specify to filter upon, so that the results all
     * match at least one of the specified values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ExpressionDimensionValues& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ExpressionDimensionValues& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match options that you can use to filter your results. You can specify
     * only one of these values in the array.</p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const { return m_matchOptions; }
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }
    template<typename MatchOptionsT = Aws::Vector<MatchOption>>
    void SetMatchOptions(MatchOptionsT&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::forward<MatchOptionsT>(value); }
    template<typename MatchOptionsT = Aws::Vector<MatchOption>>
    ExpressionDimensionValues& WithMatchOptions(MatchOptionsT&& value) { SetMatchOptions(std::forward<MatchOptionsT>(value)); return *this;}
    inline ExpressionDimensionValues& AddMatchOptions(MatchOption value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }
    ///@}
  private:

    Dimension m_key{Dimension::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MatchOption> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
