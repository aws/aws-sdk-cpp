/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>The dimension filter, containing DimensionName and
   * DimensionValueList.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DimensionFilter">AWS
   * API Reference</a></p>
   */
  class DimensionFilter
  {
  public:
    AWS_LOOKOUTMETRICS_API DimensionFilter() = default;
    AWS_LOOKOUTMETRICS_API DimensionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DimensionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline const Aws::String& GetDimensionName() const { return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    template<typename DimensionNameT = Aws::String>
    void SetDimensionName(DimensionNameT&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::forward<DimensionNameT>(value); }
    template<typename DimensionNameT = Aws::String>
    DimensionFilter& WithDimensionName(DimensionNameT&& value) { SetDimensionName(std::forward<DimensionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionValueList() const { return m_dimensionValueList; }
    inline bool DimensionValueListHasBeenSet() const { return m_dimensionValueListHasBeenSet; }
    template<typename DimensionValueListT = Aws::Vector<Aws::String>>
    void SetDimensionValueList(DimensionValueListT&& value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList = std::forward<DimensionValueListT>(value); }
    template<typename DimensionValueListT = Aws::Vector<Aws::String>>
    DimensionFilter& WithDimensionValueList(DimensionValueListT&& value) { SetDimensionValueList(std::forward<DimensionValueListT>(value)); return *this;}
    template<typename DimensionValueListT = Aws::String>
    DimensionFilter& AddDimensionValueList(DimensionValueListT&& value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList.emplace_back(std::forward<DimensionValueListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionValueList;
    bool m_dimensionValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
