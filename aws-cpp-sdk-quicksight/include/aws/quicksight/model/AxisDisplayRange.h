/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisDisplayMinMaxRange.h>
#include <aws/quicksight/model/AxisDisplayDataDrivenRange.h>
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
   * <p>The range setup of a numeric axis display range.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisDisplayRange">AWS
   * API Reference</a></p>
   */
  class AxisDisplayRange
  {
  public:
    AWS_QUICKSIGHT_API AxisDisplayRange();
    AWS_QUICKSIGHT_API AxisDisplayRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDisplayRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline const AxisDisplayMinMaxRange& GetMinMax() const{ return m_minMax; }

    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline bool MinMaxHasBeenSet() const { return m_minMaxHasBeenSet; }

    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline void SetMinMax(const AxisDisplayMinMaxRange& value) { m_minMaxHasBeenSet = true; m_minMax = value; }

    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline void SetMinMax(AxisDisplayMinMaxRange&& value) { m_minMaxHasBeenSet = true; m_minMax = std::move(value); }

    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline AxisDisplayRange& WithMinMax(const AxisDisplayMinMaxRange& value) { SetMinMax(value); return *this;}

    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline AxisDisplayRange& WithMinMax(AxisDisplayMinMaxRange&& value) { SetMinMax(std::move(value)); return *this;}


    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline const AxisDisplayDataDrivenRange& GetDataDriven() const{ return m_dataDriven; }

    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline bool DataDrivenHasBeenSet() const { return m_dataDrivenHasBeenSet; }

    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline void SetDataDriven(const AxisDisplayDataDrivenRange& value) { m_dataDrivenHasBeenSet = true; m_dataDriven = value; }

    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline void SetDataDriven(AxisDisplayDataDrivenRange&& value) { m_dataDrivenHasBeenSet = true; m_dataDriven = std::move(value); }

    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline AxisDisplayRange& WithDataDriven(const AxisDisplayDataDrivenRange& value) { SetDataDriven(value); return *this;}

    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline AxisDisplayRange& WithDataDriven(AxisDisplayDataDrivenRange&& value) { SetDataDriven(std::move(value)); return *this;}

  private:

    AxisDisplayMinMaxRange m_minMax;
    bool m_minMaxHasBeenSet = false;

    AxisDisplayDataDrivenRange m_dataDriven;
    bool m_dataDrivenHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
