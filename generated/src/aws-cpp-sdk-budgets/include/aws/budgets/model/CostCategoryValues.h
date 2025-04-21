/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The cost category values used for filtering the costs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CostCategoryValues">AWS
   * API Reference</a></p>
   */
  class CostCategoryValues
  {
  public:
    AWS_BUDGETS_API CostCategoryValues() = default;
    AWS_BUDGETS_API CostCategoryValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API CostCategoryValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the cost category.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CostCategoryValues& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific value of the cost category.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    CostCategoryValues& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    CostCategoryValues& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match options that you can use to filter your results. </p>
     */
    inline const Aws::Vector<MatchOption>& GetMatchOptions() const { return m_matchOptions; }
    inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }
    template<typename MatchOptionsT = Aws::Vector<MatchOption>>
    void SetMatchOptions(MatchOptionsT&& value) { m_matchOptionsHasBeenSet = true; m_matchOptions = std::forward<MatchOptionsT>(value); }
    template<typename MatchOptionsT = Aws::Vector<MatchOption>>
    CostCategoryValues& WithMatchOptions(MatchOptionsT&& value) { SetMatchOptions(std::forward<MatchOptionsT>(value)); return *this;}
    inline CostCategoryValues& AddMatchOptions(MatchOption value) { m_matchOptionsHasBeenSet = true; m_matchOptions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MatchOption> m_matchOptions;
    bool m_matchOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
