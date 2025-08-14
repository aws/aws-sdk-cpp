/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/bcm-recommended-actions/model/FilterName.h>
#include <aws/bcm-recommended-actions/model/MatchOption.h>
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
namespace BCMRecommendedActions
{
namespace Model
{

  /**
   * <p>Describes a filter that returns a more specific list of recommended
   * actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-recommended-actions-2024-11-14/ActionFilter">AWS
   * API Reference</a></p>
   */
  class ActionFilter
  {
  public:
    AWS_BCMRECOMMENDEDACTIONS_API ActionFilter() = default;
    AWS_BCMRECOMMENDEDACTIONS_API ActionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMRECOMMENDEDACTIONS_API ActionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMRECOMMENDEDACTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category to filter on. Valid values are <code>FEATURE</code> for feature
     * type, <code>SEVERITY</code> for severity level, and <code>TYPE</code> for
     * recommendation type.</p>
     */
    inline FilterName GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(FilterName value) { m_keyHasBeenSet = true; m_key = value; }
    inline ActionFilter& WithKey(FilterName value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to apply the filter. Use <code>EQUALS</code> to include
     * matching results or <code>NOT_EQUALS</code> to exclude matching results.</p>
     */
    inline MatchOption GetMatchOption() const { return m_matchOption; }
    inline bool MatchOptionHasBeenSet() const { return m_matchOptionHasBeenSet; }
    inline void SetMatchOption(MatchOption value) { m_matchOptionHasBeenSet = true; m_matchOption = value; }
    inline ActionFilter& WithMatchOption(MatchOption value) { SetMatchOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more values to match against the specified key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ActionFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ActionFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    FilterName m_key{FilterName::NOT_SET};
    bool m_keyHasBeenSet = false;

    MatchOption m_matchOption{MatchOption::NOT_SET};
    bool m_matchOptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
