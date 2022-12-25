/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/NumericRangeFilterValue.h>
#include <aws/quicksight/model/NumericFilterSelectAllOptions.h>
#include <aws/quicksight/model/AggregationFunction.h>
#include <aws/quicksight/model/FilterNullOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A <code>NumericRangeFilter</code> filters values that are within the value
   * range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericRangeFilter">AWS
   * API Reference</a></p>
   */
  class NumericRangeFilter
  {
  public:
    AWS_QUICKSIGHT_API NumericRangeFilter();
    AWS_QUICKSIGHT_API NumericRangeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline const Aws::String& GetFilterId() const{ return m_filterId; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline bool FilterIdHasBeenSet() const { return m_filterIdHasBeenSet; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(const Aws::String& value) { m_filterIdHasBeenSet = true; m_filterId = value; }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(Aws::String&& value) { m_filterIdHasBeenSet = true; m_filterId = std::move(value); }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline void SetFilterId(const char* value) { m_filterIdHasBeenSet = true; m_filterId.assign(value); }

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline NumericRangeFilter& WithFilterId(const Aws::String& value) { SetFilterId(value); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline NumericRangeFilter& WithFilterId(Aws::String&& value) { SetFilterId(std::move(value)); return *this;}

    /**
     * <p>An identifier that uniquely identifies a filter within a dashboard, analysis,
     * or template.</p>
     */
    inline NumericRangeFilter& WithFilterId(const char* value) { SetFilterId(value); return *this;}


    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline NumericRangeFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline NumericRangeFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMinimum() const{ return m_includeMinimum; }

    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool IncludeMinimumHasBeenSet() const { return m_includeMinimumHasBeenSet; }

    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline void SetIncludeMinimum(bool value) { m_includeMinimumHasBeenSet = true; m_includeMinimum = value; }

    /**
     * <p>Determines whether the minimum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline NumericRangeFilter& WithIncludeMinimum(bool value) { SetIncludeMinimum(value); return *this;}


    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool GetIncludeMaximum() const{ return m_includeMaximum; }

    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline bool IncludeMaximumHasBeenSet() const { return m_includeMaximumHasBeenSet; }

    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline void SetIncludeMaximum(bool value) { m_includeMaximumHasBeenSet = true; m_includeMaximum = value; }

    /**
     * <p>Determines whether the maximum value in the filter value range should be
     * included in the filtered results.</p>
     */
    inline NumericRangeFilter& WithIncludeMaximum(bool value) { SetIncludeMaximum(value); return *this;}


    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline const NumericRangeFilterValue& GetRangeMinimum() const{ return m_rangeMinimum; }

    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline bool RangeMinimumHasBeenSet() const { return m_rangeMinimumHasBeenSet; }

    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline void SetRangeMinimum(const NumericRangeFilterValue& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = value; }

    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline void SetRangeMinimum(NumericRangeFilterValue&& value) { m_rangeMinimumHasBeenSet = true; m_rangeMinimum = std::move(value); }

    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline NumericRangeFilter& WithRangeMinimum(const NumericRangeFilterValue& value) { SetRangeMinimum(value); return *this;}

    /**
     * <p>The minimum value for the filter value range.</p>
     */
    inline NumericRangeFilter& WithRangeMinimum(NumericRangeFilterValue&& value) { SetRangeMinimum(std::move(value)); return *this;}


    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline const NumericRangeFilterValue& GetRangeMaximum() const{ return m_rangeMaximum; }

    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline bool RangeMaximumHasBeenSet() const { return m_rangeMaximumHasBeenSet; }

    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline void SetRangeMaximum(const NumericRangeFilterValue& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = value; }

    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline void SetRangeMaximum(NumericRangeFilterValue&& value) { m_rangeMaximumHasBeenSet = true; m_rangeMaximum = std::move(value); }

    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline NumericRangeFilter& WithRangeMaximum(const NumericRangeFilterValue& value) { SetRangeMaximum(value); return *this;}

    /**
     * <p>The maximum value for the filter value range.</p>
     */
    inline NumericRangeFilter& WithRangeMaximum(NumericRangeFilterValue&& value) { SetRangeMaximum(std::move(value)); return *this;}


    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline const NumericFilterSelectAllOptions& GetSelectAllOptions() const{ return m_selectAllOptions; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline bool SelectAllOptionsHasBeenSet() const { return m_selectAllOptionsHasBeenSet; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline void SetSelectAllOptions(const NumericFilterSelectAllOptions& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = value; }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline void SetSelectAllOptions(NumericFilterSelectAllOptions&& value) { m_selectAllOptionsHasBeenSet = true; m_selectAllOptions = std::move(value); }

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline NumericRangeFilter& WithSelectAllOptions(const NumericFilterSelectAllOptions& value) { SetSelectAllOptions(value); return *this;}

    /**
     * <p>Select all of the values. Null is not the assigned value of select all.</p>
     * <ul> <li> <p> <code>FILTER_ALL_VALUES</code> </p> </li> </ul>
     */
    inline NumericRangeFilter& WithSelectAllOptions(NumericFilterSelectAllOptions&& value) { SetSelectAllOptions(std::move(value)); return *this;}


    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline void SetAggregationFunction(const AggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline void SetAggregationFunction(AggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline NumericRangeFilter& WithAggregationFunction(const AggregationFunction& value) { SetAggregationFunction(value); return *this;}

    /**
     * <p>The aggregation function of the filter.</p>
     */
    inline NumericRangeFilter& WithAggregationFunction(AggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline const FilterNullOption& GetNullOption() const{ return m_nullOption; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline bool NullOptionHasBeenSet() const { return m_nullOptionHasBeenSet; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline void SetNullOption(const FilterNullOption& value) { m_nullOptionHasBeenSet = true; m_nullOption = value; }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline void SetNullOption(FilterNullOption&& value) { m_nullOptionHasBeenSet = true; m_nullOption = std::move(value); }

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline NumericRangeFilter& WithNullOption(const FilterNullOption& value) { SetNullOption(value); return *this;}

    /**
     * <p>This option determines how null values should be treated when filtering
     * data.</p> <ul> <li> <p> <code>ALL_VALUES</code>: Include null values in filtered
     * results.</p> </li> <li> <p> <code>NULLS_ONLY</code>: Only include null values in
     * filtered results.</p> </li> <li> <p> <code>NON_NULLS_ONLY</code>: Exclude null
     * values from filtered results.</p> </li> </ul>
     */
    inline NumericRangeFilter& WithNullOption(FilterNullOption&& value) { SetNullOption(std::move(value)); return *this;}

  private:

    Aws::String m_filterId;
    bool m_filterIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    bool m_includeMinimum;
    bool m_includeMinimumHasBeenSet = false;

    bool m_includeMaximum;
    bool m_includeMaximumHasBeenSet = false;

    NumericRangeFilterValue m_rangeMinimum;
    bool m_rangeMinimumHasBeenSet = false;

    NumericRangeFilterValue m_rangeMaximum;
    bool m_rangeMaximumHasBeenSet = false;

    NumericFilterSelectAllOptions m_selectAllOptions;
    bool m_selectAllOptionsHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    FilterNullOption m_nullOption;
    bool m_nullOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
