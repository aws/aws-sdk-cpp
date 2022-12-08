/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LineChartLineStyleSettings.h>
#include <aws/quicksight/model/LineChartMarkerStyleSettings.h>
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
   * <p>The options that determine the presentation of a line series in the
   * visual</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartSeriesSettings">AWS
   * API Reference</a></p>
   */
  class LineChartSeriesSettings
  {
  public:
    AWS_QUICKSIGHT_API LineChartSeriesSettings();
    AWS_QUICKSIGHT_API LineChartSeriesSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartSeriesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline const LineChartLineStyleSettings& GetLineStyleSettings() const{ return m_lineStyleSettings; }

    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline bool LineStyleSettingsHasBeenSet() const { return m_lineStyleSettingsHasBeenSet; }

    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline void SetLineStyleSettings(const LineChartLineStyleSettings& value) { m_lineStyleSettingsHasBeenSet = true; m_lineStyleSettings = value; }

    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline void SetLineStyleSettings(LineChartLineStyleSettings&& value) { m_lineStyleSettingsHasBeenSet = true; m_lineStyleSettings = std::move(value); }

    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline LineChartSeriesSettings& WithLineStyleSettings(const LineChartLineStyleSettings& value) { SetLineStyleSettings(value); return *this;}

    /**
     * <p>Line styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline LineChartSeriesSettings& WithLineStyleSettings(LineChartLineStyleSettings&& value) { SetLineStyleSettings(std::move(value)); return *this;}


    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline const LineChartMarkerStyleSettings& GetMarkerStyleSettings() const{ return m_markerStyleSettings; }

    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline bool MarkerStyleSettingsHasBeenSet() const { return m_markerStyleSettingsHasBeenSet; }

    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline void SetMarkerStyleSettings(const LineChartMarkerStyleSettings& value) { m_markerStyleSettingsHasBeenSet = true; m_markerStyleSettings = value; }

    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline void SetMarkerStyleSettings(LineChartMarkerStyleSettings&& value) { m_markerStyleSettingsHasBeenSet = true; m_markerStyleSettings = std::move(value); }

    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline LineChartSeriesSettings& WithMarkerStyleSettings(const LineChartMarkerStyleSettings& value) { SetMarkerStyleSettings(value); return *this;}

    /**
     * <p>Marker styles options for a line series in <code>LineChartVisual</code>.</p>
     */
    inline LineChartSeriesSettings& WithMarkerStyleSettings(LineChartMarkerStyleSettings&& value) { SetMarkerStyleSettings(std::move(value)); return *this;}

  private:

    LineChartLineStyleSettings m_lineStyleSettings;
    bool m_lineStyleSettingsHasBeenSet = false;

    LineChartMarkerStyleSettings m_markerStyleSettings;
    bool m_markerStyleSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
