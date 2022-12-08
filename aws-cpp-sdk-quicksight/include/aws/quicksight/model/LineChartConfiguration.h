/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LineChartFieldWells.h>
#include <aws/quicksight/model/LineChartSortConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LineChartType.h>
#include <aws/quicksight/model/SmallMultiplesOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LineSeriesAxisDisplayOptions.h>
#include <aws/quicksight/model/LineChartDefaultSeriesSettings.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/ForecastConfiguration.h>
#include <aws/quicksight/model/SeriesItem.h>
#include <aws/quicksight/model/ReferenceLine.h>
#include <aws/quicksight/model/ContributionAnalysisDefault.h>
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
   * <p>The configuration of a line chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LineChartConfiguration">AWS
   * API Reference</a></p>
   */
  class LineChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API LineChartConfiguration();
    AWS_QUICKSIGHT_API LineChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LineChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline const LineChartFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline void SetFieldWells(const LineChartFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline void SetFieldWells(LineChartFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithFieldWells(const LineChartFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithFieldWells(LineChartFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline const LineChartSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline void SetSortConfiguration(const LineChartSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline void SetSortConfiguration(LineChartSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithSortConfiguration(const LineChartSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithSortConfiguration(LineChartSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline const Aws::Vector<ForecastConfiguration>& GetForecastConfigurations() const{ return m_forecastConfigurations; }

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline bool ForecastConfigurationsHasBeenSet() const { return m_forecastConfigurationsHasBeenSet; }

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline void SetForecastConfigurations(const Aws::Vector<ForecastConfiguration>& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations = value; }

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline void SetForecastConfigurations(Aws::Vector<ForecastConfiguration>&& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations = std::move(value); }

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithForecastConfigurations(const Aws::Vector<ForecastConfiguration>& value) { SetForecastConfigurations(value); return *this;}

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithForecastConfigurations(Aws::Vector<ForecastConfiguration>&& value) { SetForecastConfigurations(std::move(value)); return *this;}

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline LineChartConfiguration& AddForecastConfigurations(const ForecastConfiguration& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations.push_back(value); return *this; }

    /**
     * <p>The forecast configuration of a line chart.</p>
     */
    inline LineChartConfiguration& AddForecastConfigurations(ForecastConfiguration&& value) { m_forecastConfigurationsHasBeenSet = true; m_forecastConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline const LineChartType& GetType() const{ return m_type; }

    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline void SetType(const LineChartType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline void SetType(LineChartType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline LineChartConfiguration& WithType(const LineChartType& value) { SetType(value); return *this;}

    /**
     * <p>Determines the type of the line chart.</p>
     */
    inline LineChartConfiguration& WithType(LineChartType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline const SmallMultiplesOptions& GetSmallMultiplesOptions() const{ return m_smallMultiplesOptions; }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline bool SmallMultiplesOptionsHasBeenSet() const { return m_smallMultiplesOptionsHasBeenSet; }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline void SetSmallMultiplesOptions(const SmallMultiplesOptions& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = value; }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline void SetSmallMultiplesOptions(SmallMultiplesOptions&& value) { m_smallMultiplesOptionsHasBeenSet = true; m_smallMultiplesOptions = std::move(value); }

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline LineChartConfiguration& WithSmallMultiplesOptions(const SmallMultiplesOptions& value) { SetSmallMultiplesOptions(value); return *this;}

    /**
     * <p>The small multiples setup for the visual.</p>
     */
    inline LineChartConfiguration& WithSmallMultiplesOptions(SmallMultiplesOptions&& value) { SetSmallMultiplesOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const{ return m_xAxisDisplayOptions; }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline void SetXAxisDisplayOptions(const AxisDisplayOptions& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = value; }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline void SetXAxisDisplayOptions(AxisDisplayOptions&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline LineChartConfiguration& WithXAxisDisplayOptions(const AxisDisplayOptions& value) { SetXAxisDisplayOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the x-axis.</p>
     */
    inline LineChartConfiguration& WithXAxisDisplayOptions(AxisDisplayOptions&& value) { SetXAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const{ return m_xAxisLabelOptions; }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline void SetXAxisLabelOptions(const ChartAxisLabelOptions& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline void SetXAxisLabelOptions(ChartAxisLabelOptions&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline LineChartConfiguration& WithXAxisLabelOptions(const ChartAxisLabelOptions& value) { SetXAxisLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the x-axis label.</p>
     */
    inline LineChartConfiguration& WithXAxisLabelOptions(ChartAxisLabelOptions&& value) { SetXAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline const LineSeriesAxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const{ return m_primaryYAxisDisplayOptions; }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = value; }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::move(value); }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithPrimaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { SetPrimaryYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithPrimaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { SetPrimaryYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const{ return m_primaryYAxisLabelOptions; }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline LineChartConfiguration& WithPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetPrimaryYAxisLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the y-axis label.</p>
     */
    inline LineChartConfiguration& WithPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetPrimaryYAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline const LineSeriesAxisDisplayOptions& GetSecondaryYAxisDisplayOptions() const{ return m_secondaryYAxisDisplayOptions; }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline bool SecondaryYAxisDisplayOptionsHasBeenSet() const { return m_secondaryYAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline void SetSecondaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = value; }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline void SetSecondaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { m_secondaryYAxisDisplayOptionsHasBeenSet = true; m_secondaryYAxisDisplayOptions = std::move(value); }

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithSecondaryYAxisDisplayOptions(const LineSeriesAxisDisplayOptions& value) { SetSecondaryYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The series axis configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithSecondaryYAxisDisplayOptions(LineSeriesAxisDisplayOptions&& value) { SetSecondaryYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline const ChartAxisLabelOptions& GetSecondaryYAxisLabelOptions() const{ return m_secondaryYAxisLabelOptions; }

    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline bool SecondaryYAxisLabelOptionsHasBeenSet() const { return m_secondaryYAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline void SetSecondaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = value; }

    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline void SetSecondaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_secondaryYAxisLabelOptionsHasBeenSet = true; m_secondaryYAxisLabelOptions = std::move(value); }

    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline LineChartConfiguration& WithSecondaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetSecondaryYAxisLabelOptions(value); return *this;}

    /**
     * <p>The options that determine the presentation of the secondary y-axis
     * label.</p>
     */
    inline LineChartConfiguration& WithSecondaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetSecondaryYAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline const LineChartDefaultSeriesSettings& GetDefaultSeriesSettings() const{ return m_defaultSeriesSettings; }

    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline bool DefaultSeriesSettingsHasBeenSet() const { return m_defaultSeriesSettingsHasBeenSet; }

    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline void SetDefaultSeriesSettings(const LineChartDefaultSeriesSettings& value) { m_defaultSeriesSettingsHasBeenSet = true; m_defaultSeriesSettings = value; }

    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline void SetDefaultSeriesSettings(LineChartDefaultSeriesSettings&& value) { m_defaultSeriesSettingsHasBeenSet = true; m_defaultSeriesSettings = std::move(value); }

    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline LineChartConfiguration& WithDefaultSeriesSettings(const LineChartDefaultSeriesSettings& value) { SetDefaultSeriesSettings(value); return *this;}

    /**
     * <p>The options that determine the default presentation of all line series in
     * <code>LineChartVisual</code>.</p>
     */
    inline LineChartConfiguration& WithDefaultSeriesSettings(LineChartDefaultSeriesSettings&& value) { SetDefaultSeriesSettings(std::move(value)); return *this;}


    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline const Aws::Vector<SeriesItem>& GetSeries() const{ return m_series; }

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline bool SeriesHasBeenSet() const { return m_seriesHasBeenSet; }

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline void SetSeries(const Aws::Vector<SeriesItem>& value) { m_seriesHasBeenSet = true; m_series = value; }

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline void SetSeries(Aws::Vector<SeriesItem>&& value) { m_seriesHasBeenSet = true; m_series = std::move(value); }

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithSeries(const Aws::Vector<SeriesItem>& value) { SetSeries(value); return *this;}

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithSeries(Aws::Vector<SeriesItem>&& value) { SetSeries(std::move(value)); return *this;}

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline LineChartConfiguration& AddSeries(const SeriesItem& value) { m_seriesHasBeenSet = true; m_series.push_back(value); return *this; }

    /**
     * <p>The series item configuration of a line chart.</p>
     */
    inline LineChartConfiguration& AddSeries(SeriesItem&& value) { m_seriesHasBeenSet = true; m_series.push_back(std::move(value)); return *this; }


    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }

    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }

    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }

    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }

    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The data label configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline const Aws::Vector<ReferenceLine>& GetReferenceLines() const{ return m_referenceLines; }

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline bool ReferenceLinesHasBeenSet() const { return m_referenceLinesHasBeenSet; }

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline void SetReferenceLines(const Aws::Vector<ReferenceLine>& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = value; }

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline void SetReferenceLines(Aws::Vector<ReferenceLine>&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = std::move(value); }

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithReferenceLines(const Aws::Vector<ReferenceLine>& value) { SetReferenceLines(value); return *this;}

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithReferenceLines(Aws::Vector<ReferenceLine>&& value) { SetReferenceLines(std::move(value)); return *this;}

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline LineChartConfiguration& AddReferenceLines(const ReferenceLine& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(value); return *this; }

    /**
     * <p>The reference lines configuration of a line chart.</p>
     */
    inline LineChartConfiguration& AddReferenceLines(ReferenceLine&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(std::move(value)); return *this; }


    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline const Aws::Vector<ContributionAnalysisDefault>& GetContributionAnalysisDefaults() const{ return m_contributionAnalysisDefaults; }

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline bool ContributionAnalysisDefaultsHasBeenSet() const { return m_contributionAnalysisDefaultsHasBeenSet; }

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline void SetContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = value; }

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline void SetContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults = std::move(value); }

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline LineChartConfiguration& WithContributionAnalysisDefaults(const Aws::Vector<ContributionAnalysisDefault>& value) { SetContributionAnalysisDefaults(value); return *this;}

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline LineChartConfiguration& WithContributionAnalysisDefaults(Aws::Vector<ContributionAnalysisDefault>&& value) { SetContributionAnalysisDefaults(std::move(value)); return *this;}

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline LineChartConfiguration& AddContributionAnalysisDefaults(const ContributionAnalysisDefault& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(value); return *this; }

    /**
     * <p>The default configuration of a line chart's contribution analysis.</p>
     */
    inline LineChartConfiguration& AddContributionAnalysisDefaults(ContributionAnalysisDefault&& value) { m_contributionAnalysisDefaultsHasBeenSet = true; m_contributionAnalysisDefaults.push_back(std::move(value)); return *this; }


    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The visual palette configuration of a line chart.</p>
     */
    inline LineChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

  private:

    LineChartFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    LineChartSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    Aws::Vector<ForecastConfiguration> m_forecastConfigurations;
    bool m_forecastConfigurationsHasBeenSet = false;

    LineChartType m_type;
    bool m_typeHasBeenSet = false;

    SmallMultiplesOptions m_smallMultiplesOptions;
    bool m_smallMultiplesOptionsHasBeenSet = false;

    AxisDisplayOptions m_xAxisDisplayOptions;
    bool m_xAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_xAxisLabelOptions;
    bool m_xAxisLabelOptionsHasBeenSet = false;

    LineSeriesAxisDisplayOptions m_primaryYAxisDisplayOptions;
    bool m_primaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_primaryYAxisLabelOptions;
    bool m_primaryYAxisLabelOptionsHasBeenSet = false;

    LineSeriesAxisDisplayOptions m_secondaryYAxisDisplayOptions;
    bool m_secondaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_secondaryYAxisLabelOptions;
    bool m_secondaryYAxisLabelOptionsHasBeenSet = false;

    LineChartDefaultSeriesSettings m_defaultSeriesSettings;
    bool m_defaultSeriesSettingsHasBeenSet = false;

    Aws::Vector<SeriesItem> m_series;
    bool m_seriesHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    Aws::Vector<ReferenceLine> m_referenceLines;
    bool m_referenceLinesHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::Vector<ContributionAnalysisDefault> m_contributionAnalysisDefaults;
    bool m_contributionAnalysisDefaultsHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
