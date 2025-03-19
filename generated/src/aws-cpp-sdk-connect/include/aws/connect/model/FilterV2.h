/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains the filter to apply when retrieving metrics with the <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_GetMetricDataV2.html">GetMetricDataV2</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FilterV2">AWS
   * API Reference</a></p>
   */
  class FilterV2
  {
  public:
    AWS_CONNECT_API FilterV2() = default;
    AWS_CONNECT_API FilterV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API FilterV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key to use for filtering data. For example, <code>QUEUE</code>,
     * <code>ROUTING_PROFILE, AGENT</code>, <code>CHANNEL</code>,
     * <code>AGENT_HIERARCHY_LEVEL_ONE</code>, <code>AGENT_HIERARCHY_LEVEL_TWO</code>,
     * <code>AGENT_HIERARCHY_LEVEL_THREE</code>,
     * <code>AGENT_HIERARCHY_LEVEL_FOUR</code>,
     * <code>AGENT_HIERARCHY_LEVEL_FIVE</code>. There must be at least 1 key and a
     * maximum 5 keys. </p>
     */
    inline const Aws::String& GetFilterKey() const { return m_filterKey; }
    inline bool FilterKeyHasBeenSet() const { return m_filterKeyHasBeenSet; }
    template<typename FilterKeyT = Aws::String>
    void SetFilterKey(FilterKeyT&& value) { m_filterKeyHasBeenSet = true; m_filterKey = std::forward<FilterKeyT>(value); }
    template<typename FilterKeyT = Aws::String>
    FilterV2& WithFilterKey(FilterKeyT&& value) { SetFilterKey(std::forward<FilterKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers to use for filtering data. For example, if you have a filter
     * key of <code>QUEUE</code>, you would add queue IDs or ARNs in
     * <code>FilterValues</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterValues() const { return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    template<typename FilterValuesT = Aws::Vector<Aws::String>>
    void SetFilterValues(FilterValuesT&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::forward<FilterValuesT>(value); }
    template<typename FilterValuesT = Aws::Vector<Aws::String>>
    FilterV2& WithFilterValues(FilterValuesT&& value) { SetFilterValues(std::forward<FilterValuesT>(value)); return *this;}
    template<typename FilterValuesT = Aws::String>
    FilterV2& AddFilterValues(FilterValuesT&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace_back(std::forward<FilterValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_filterKey;
    bool m_filterKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
