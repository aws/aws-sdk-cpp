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
    AWS_LOOKOUTMETRICS_API DimensionFilter();
    AWS_LOOKOUTMETRICS_API DimensionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DimensionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline DimensionFilter& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline DimensionFilter& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension to filter on.</p>
     */
    inline DimensionFilter& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}


    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionValueList() const{ return m_dimensionValueList; }

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline bool DimensionValueListHasBeenSet() const { return m_dimensionValueListHasBeenSet; }

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline void SetDimensionValueList(const Aws::Vector<Aws::String>& value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList = value; }

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline void SetDimensionValueList(Aws::Vector<Aws::String>&& value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList = std::move(value); }

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline DimensionFilter& WithDimensionValueList(const Aws::Vector<Aws::String>& value) { SetDimensionValueList(value); return *this;}

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline DimensionFilter& WithDimensionValueList(Aws::Vector<Aws::String>&& value) { SetDimensionValueList(std::move(value)); return *this;}

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline DimensionFilter& AddDimensionValueList(const Aws::String& value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList.push_back(value); return *this; }

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline DimensionFilter& AddDimensionValueList(Aws::String&& value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values for the dimension specified in DimensionName that you want
     * to filter on.</p>
     */
    inline DimensionFilter& AddDimensionValueList(const char* value) { m_dimensionValueListHasBeenSet = true; m_dimensionValueList.push_back(value); return *this; }

  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionValueList;
    bool m_dimensionValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
