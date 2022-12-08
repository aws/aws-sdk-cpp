/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PrimaryValueDisplayType.h>
#include <aws/quicksight/model/ComparisonConfiguration.h>
#include <aws/quicksight/model/ArcAxisConfiguration.h>
#include <aws/quicksight/model/ArcConfiguration.h>
#include <aws/quicksight/model/FontConfiguration.h>
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
   * <p>The options that determine the presentation of the
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartOptions">AWS
   * API Reference</a></p>
   */
  class GaugeChartOptions
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartOptions();
    AWS_QUICKSIGHT_API GaugeChartOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline const PrimaryValueDisplayType& GetPrimaryValueDisplayType() const{ return m_primaryValueDisplayType; }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline bool PrimaryValueDisplayTypeHasBeenSet() const { return m_primaryValueDisplayTypeHasBeenSet; }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline void SetPrimaryValueDisplayType(const PrimaryValueDisplayType& value) { m_primaryValueDisplayTypeHasBeenSet = true; m_primaryValueDisplayType = value; }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline void SetPrimaryValueDisplayType(PrimaryValueDisplayType&& value) { m_primaryValueDisplayTypeHasBeenSet = true; m_primaryValueDisplayType = std::move(value); }

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline GaugeChartOptions& WithPrimaryValueDisplayType(const PrimaryValueDisplayType& value) { SetPrimaryValueDisplayType(value); return *this;}

    /**
     * <p>The options that determine the primary value display type.</p>
     */
    inline GaugeChartOptions& WithPrimaryValueDisplayType(PrimaryValueDisplayType&& value) { SetPrimaryValueDisplayType(std::move(value)); return *this;}


    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ComparisonConfiguration& GetComparison() const{ return m_comparison; }

    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetComparison(const ComparisonConfiguration& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetComparison(ComparisonConfiguration&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartOptions& WithComparison(const ComparisonConfiguration& value) { SetComparison(value); return *this;}

    /**
     * <p>The comparison configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartOptions& WithComparison(ComparisonConfiguration&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcAxisConfiguration& GetArcAxis() const{ return m_arcAxis; }

    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ArcAxisHasBeenSet() const { return m_arcAxisHasBeenSet; }

    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcAxis(const ArcAxisConfiguration& value) { m_arcAxisHasBeenSet = true; m_arcAxis = value; }

    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcAxis(ArcAxisConfiguration&& value) { m_arcAxisHasBeenSet = true; m_arcAxis = std::move(value); }

    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartOptions& WithArcAxis(const ArcAxisConfiguration& value) { SetArcAxis(value); return *this;}

    /**
     * <p>The arc axis configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartOptions& WithArcAxis(ArcAxisConfiguration&& value) { SetArcAxis(std::move(value)); return *this;}


    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcConfiguration& GetArc() const{ return m_arc; }

    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ArcHasBeenSet() const { return m_arcHasBeenSet; }

    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArc(const ArcConfiguration& value) { m_arcHasBeenSet = true; m_arc = value; }

    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArc(ArcConfiguration&& value) { m_arcHasBeenSet = true; m_arc = std::move(value); }

    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartOptions& WithArc(const ArcConfiguration& value) { SetArc(value); return *this;}

    /**
     * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartOptions& WithArc(ArcConfiguration&& value) { SetArc(std::move(value)); return *this;}


    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline const FontConfiguration& GetPrimaryValueFontConfiguration() const{ return m_primaryValueFontConfiguration; }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline bool PrimaryValueFontConfigurationHasBeenSet() const { return m_primaryValueFontConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline void SetPrimaryValueFontConfiguration(const FontConfiguration& value) { m_primaryValueFontConfigurationHasBeenSet = true; m_primaryValueFontConfiguration = value; }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline void SetPrimaryValueFontConfiguration(FontConfiguration&& value) { m_primaryValueFontConfigurationHasBeenSet = true; m_primaryValueFontConfiguration = std::move(value); }

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline GaugeChartOptions& WithPrimaryValueFontConfiguration(const FontConfiguration& value) { SetPrimaryValueFontConfiguration(value); return *this;}

    /**
     * <p>The options that determine the primary value font configuration.</p>
     */
    inline GaugeChartOptions& WithPrimaryValueFontConfiguration(FontConfiguration&& value) { SetPrimaryValueFontConfiguration(std::move(value)); return *this;}

  private:

    PrimaryValueDisplayType m_primaryValueDisplayType;
    bool m_primaryValueDisplayTypeHasBeenSet = false;

    ComparisonConfiguration m_comparison;
    bool m_comparisonHasBeenSet = false;

    ArcAxisConfiguration m_arcAxis;
    bool m_arcAxisHasBeenSet = false;

    ArcConfiguration m_arc;
    bool m_arcHasBeenSet = false;

    FontConfiguration m_primaryValueFontConfiguration;
    bool m_primaryValueFontConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
