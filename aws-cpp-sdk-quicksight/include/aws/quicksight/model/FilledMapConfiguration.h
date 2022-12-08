/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilledMapFieldWells.h>
#include <aws/quicksight/model/FilledMapSortConfiguration.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/GeospatialWindowOptions.h>
#include <aws/quicksight/model/GeospatialMapStyleOptions.h>
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
   * <p>The configuration for a <code>FilledMapVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapConfiguration">AWS
   * API Reference</a></p>
   */
  class FilledMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilledMapConfiguration();
    AWS_QUICKSIGHT_API FilledMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const FilledMapFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const FilledMapFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(FilledMapFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline FilledMapConfiguration& WithFieldWells(const FilledMapFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline FilledMapConfiguration& WithFieldWells(FilledMapFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a <code>FilledMapVisual</code>.</p>
     */
    inline const FilledMapSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a <code>FilledMapVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a <code>FilledMapVisual</code>.</p>
     */
    inline void SetSortConfiguration(const FilledMapSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a <code>FilledMapVisual</code>.</p>
     */
    inline void SetSortConfiguration(FilledMapSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a <code>FilledMapVisual</code>.</p>
     */
    inline FilledMapConfiguration& WithSortConfiguration(const FilledMapSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a <code>FilledMapVisual</code>.</p>
     */
    inline FilledMapConfiguration& WithSortConfiguration(FilledMapSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline FilledMapConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline FilledMapConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline FilledMapConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline FilledMapConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The window options of the filled map visual.</p>
     */
    inline const GeospatialWindowOptions& GetWindowOptions() const{ return m_windowOptions; }

    /**
     * <p>The window options of the filled map visual.</p>
     */
    inline bool WindowOptionsHasBeenSet() const { return m_windowOptionsHasBeenSet; }

    /**
     * <p>The window options of the filled map visual.</p>
     */
    inline void SetWindowOptions(const GeospatialWindowOptions& value) { m_windowOptionsHasBeenSet = true; m_windowOptions = value; }

    /**
     * <p>The window options of the filled map visual.</p>
     */
    inline void SetWindowOptions(GeospatialWindowOptions&& value) { m_windowOptionsHasBeenSet = true; m_windowOptions = std::move(value); }

    /**
     * <p>The window options of the filled map visual.</p>
     */
    inline FilledMapConfiguration& WithWindowOptions(const GeospatialWindowOptions& value) { SetWindowOptions(value); return *this;}

    /**
     * <p>The window options of the filled map visual.</p>
     */
    inline FilledMapConfiguration& WithWindowOptions(GeospatialWindowOptions&& value) { SetWindowOptions(std::move(value)); return *this;}


    /**
     * <p>The map style options of the filled map visual.</p>
     */
    inline const GeospatialMapStyleOptions& GetMapStyleOptions() const{ return m_mapStyleOptions; }

    /**
     * <p>The map style options of the filled map visual.</p>
     */
    inline bool MapStyleOptionsHasBeenSet() const { return m_mapStyleOptionsHasBeenSet; }

    /**
     * <p>The map style options of the filled map visual.</p>
     */
    inline void SetMapStyleOptions(const GeospatialMapStyleOptions& value) { m_mapStyleOptionsHasBeenSet = true; m_mapStyleOptions = value; }

    /**
     * <p>The map style options of the filled map visual.</p>
     */
    inline void SetMapStyleOptions(GeospatialMapStyleOptions&& value) { m_mapStyleOptionsHasBeenSet = true; m_mapStyleOptions = std::move(value); }

    /**
     * <p>The map style options of the filled map visual.</p>
     */
    inline FilledMapConfiguration& WithMapStyleOptions(const GeospatialMapStyleOptions& value) { SetMapStyleOptions(value); return *this;}

    /**
     * <p>The map style options of the filled map visual.</p>
     */
    inline FilledMapConfiguration& WithMapStyleOptions(GeospatialMapStyleOptions&& value) { SetMapStyleOptions(std::move(value)); return *this;}

  private:

    FilledMapFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    FilledMapSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    GeospatialWindowOptions m_windowOptions;
    bool m_windowOptionsHasBeenSet = false;

    GeospatialMapStyleOptions m_mapStyleOptions;
    bool m_mapStyleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
