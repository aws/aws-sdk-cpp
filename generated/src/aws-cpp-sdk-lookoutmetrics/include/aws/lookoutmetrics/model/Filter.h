/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/FilterOperation.h>
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
   * <p>Describes a filter for choosing a subset of dimension values. Each filter
   * consists of the dimension that you want to include and the condition statement.
   * The condition statement is specified in the <code>FilterOperation</code>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_LOOKOUTMETRICS_API Filter() = default;
    AWS_LOOKOUTMETRICS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value that you want to include in the filter.</p>
     */
    inline const Aws::String& GetDimensionValue() const { return m_dimensionValue; }
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }
    template<typename DimensionValueT = Aws::String>
    void SetDimensionValue(DimensionValueT&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::forward<DimensionValueT>(value); }
    template<typename DimensionValueT = Aws::String>
    Filter& WithDimensionValue(DimensionValueT&& value) { SetDimensionValue(std::forward<DimensionValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition to apply.</p>
     */
    inline FilterOperation GetFilterOperation() const { return m_filterOperation; }
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }
    inline void SetFilterOperation(FilterOperation value) { m_filterOperationHasBeenSet = true; m_filterOperation = value; }
    inline Filter& WithFilterOperation(FilterOperation value) { SetFilterOperation(value); return *this;}
    ///@}
  private:

    Aws::String m_dimensionValue;
    bool m_dimensionValueHasBeenSet = false;

    FilterOperation m_filterOperation{FilterOperation::NOT_SET};
    bool m_filterOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
