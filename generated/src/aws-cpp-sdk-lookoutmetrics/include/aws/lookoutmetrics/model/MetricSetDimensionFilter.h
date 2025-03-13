/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/Filter.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Describes a list of filters for choosing a subset of dimension values. Each
   * filter consists of the dimension and one of its values that you want to include.
   * When multiple dimensions or values are specified, the dimensions are joined with
   * an AND operation and the values are joined with an OR operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/MetricSetDimensionFilter">AWS
   * API Reference</a></p>
   */
  class MetricSetDimensionFilter
  {
  public:
    AWS_LOOKOUTMETRICS_API MetricSetDimensionFilter() = default;
    AWS_LOOKOUTMETRICS_API MetricSetDimensionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricSetDimensionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension that you want to filter on.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricSetDimensionFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filters that you are applying.</p>
     */
    inline const Aws::Vector<Filter>& GetFilterList() const { return m_filterList; }
    inline bool FilterListHasBeenSet() const { return m_filterListHasBeenSet; }
    template<typename FilterListT = Aws::Vector<Filter>>
    void SetFilterList(FilterListT&& value) { m_filterListHasBeenSet = true; m_filterList = std::forward<FilterListT>(value); }
    template<typename FilterListT = Aws::Vector<Filter>>
    MetricSetDimensionFilter& WithFilterList(FilterListT&& value) { SetFilterList(std::forward<FilterListT>(value)); return *this;}
    template<typename FilterListT = Filter>
    MetricSetDimensionFilter& AddFilterList(FilterListT&& value) { m_filterListHasBeenSet = true; m_filterList.emplace_back(std::forward<FilterListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Filter> m_filterList;
    bool m_filterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
