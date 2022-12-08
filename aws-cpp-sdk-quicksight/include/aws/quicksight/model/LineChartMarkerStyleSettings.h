/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/LineChartMarkerShape.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Marker styles options for a line series in
   * <code>LineChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartMarkerStyleSettings">AWS
   * API Reference</a></p>
   */
  class LineChartMarkerStyleSettings
  {
  public:
    AWS_QUICKSIGHT_API LineChartMarkerStyleSettings();
    AWS_QUICKSIGHT_API LineChartMarkerStyleSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartMarkerStyleSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline const Visibility& GetMarkerVisibility() const{ return m_markerVisibility; }

    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline bool MarkerVisibilityHasBeenSet() const { return m_markerVisibilityHasBeenSet; }

    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline void SetMarkerVisibility(const Visibility& value) { m_markerVisibilityHasBeenSet = true; m_markerVisibility = value; }

    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline void SetMarkerVisibility(Visibility&& value) { m_markerVisibilityHasBeenSet = true; m_markerVisibility = std::move(value); }

    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerVisibility(const Visibility& value) { SetMarkerVisibility(value); return *this;}

    /**
     * <p>Configuration option that determines whether to show the markers in the
     * series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerVisibility(Visibility&& value) { SetMarkerVisibility(std::move(value)); return *this;}


    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline const LineChartMarkerShape& GetMarkerShape() const{ return m_markerShape; }

    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline bool MarkerShapeHasBeenSet() const { return m_markerShapeHasBeenSet; }

    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline void SetMarkerShape(const LineChartMarkerShape& value) { m_markerShapeHasBeenSet = true; m_markerShape = value; }

    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline void SetMarkerShape(LineChartMarkerShape&& value) { m_markerShapeHasBeenSet = true; m_markerShape = std::move(value); }

    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline LineChartMarkerStyleSettings& WithMarkerShape(const LineChartMarkerShape& value) { SetMarkerShape(value); return *this;}

    /**
     * <p>Shape option for markers in the series.</p> <ul> <li> <p>
     * <code>CIRCLE</code>: Show marker as a circle.</p> </li> <li> <p>
     * <code>TRIANGLE</code>: Show marker as a triangle.</p> </li> <li> <p>
     * <code>SQUARE</code>: Show marker as a square.</p> </li> <li> <p>
     * <code>DIAMOND</code>: Show marker as a diamond.</p> </li> <li> <p>
     * <code>ROUNDED_SQUARE</code>: Show marker as a rounded square.</p> </li> </ul>
     */
    inline LineChartMarkerStyleSettings& WithMarkerShape(LineChartMarkerShape&& value) { SetMarkerShape(std::move(value)); return *this;}


    /**
     * <p>Size of marker in the series.</p>
     */
    inline const Aws::String& GetMarkerSize() const{ return m_markerSize; }

    /**
     * <p>Size of marker in the series.</p>
     */
    inline bool MarkerSizeHasBeenSet() const { return m_markerSizeHasBeenSet; }

    /**
     * <p>Size of marker in the series.</p>
     */
    inline void SetMarkerSize(const Aws::String& value) { m_markerSizeHasBeenSet = true; m_markerSize = value; }

    /**
     * <p>Size of marker in the series.</p>
     */
    inline void SetMarkerSize(Aws::String&& value) { m_markerSizeHasBeenSet = true; m_markerSize = std::move(value); }

    /**
     * <p>Size of marker in the series.</p>
     */
    inline void SetMarkerSize(const char* value) { m_markerSizeHasBeenSet = true; m_markerSize.assign(value); }

    /**
     * <p>Size of marker in the series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerSize(const Aws::String& value) { SetMarkerSize(value); return *this;}

    /**
     * <p>Size of marker in the series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerSize(Aws::String&& value) { SetMarkerSize(std::move(value)); return *this;}

    /**
     * <p>Size of marker in the series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerSize(const char* value) { SetMarkerSize(value); return *this;}


    /**
     * <p>Color of marker in the series.</p>
     */
    inline const Aws::String& GetMarkerColor() const{ return m_markerColor; }

    /**
     * <p>Color of marker in the series.</p>
     */
    inline bool MarkerColorHasBeenSet() const { return m_markerColorHasBeenSet; }

    /**
     * <p>Color of marker in the series.</p>
     */
    inline void SetMarkerColor(const Aws::String& value) { m_markerColorHasBeenSet = true; m_markerColor = value; }

    /**
     * <p>Color of marker in the series.</p>
     */
    inline void SetMarkerColor(Aws::String&& value) { m_markerColorHasBeenSet = true; m_markerColor = std::move(value); }

    /**
     * <p>Color of marker in the series.</p>
     */
    inline void SetMarkerColor(const char* value) { m_markerColorHasBeenSet = true; m_markerColor.assign(value); }

    /**
     * <p>Color of marker in the series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerColor(const Aws::String& value) { SetMarkerColor(value); return *this;}

    /**
     * <p>Color of marker in the series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerColor(Aws::String&& value) { SetMarkerColor(std::move(value)); return *this;}

    /**
     * <p>Color of marker in the series.</p>
     */
    inline LineChartMarkerStyleSettings& WithMarkerColor(const char* value) { SetMarkerColor(value); return *this;}

  private:

    Visibility m_markerVisibility;
    bool m_markerVisibilityHasBeenSet = false;

    LineChartMarkerShape m_markerShape;
    bool m_markerShapeHasBeenSet = false;

    Aws::String m_markerSize;
    bool m_markerSizeHasBeenSet = false;

    Aws::String m_markerColor;
    bool m_markerColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
