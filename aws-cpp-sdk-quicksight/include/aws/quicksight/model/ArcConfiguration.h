/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ArcThicknessOptions.h>
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
   * <p>The arc configuration of a <code>GaugeChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ArcConfiguration">AWS
   * API Reference</a></p>
   */
  class ArcConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ArcConfiguration();
    AWS_QUICKSIGHT_API ArcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ArcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The option that determines the arc angle of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline double GetArcAngle() const{ return m_arcAngle; }

    /**
     * <p>The option that determines the arc angle of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline bool ArcAngleHasBeenSet() const { return m_arcAngleHasBeenSet; }

    /**
     * <p>The option that determines the arc angle of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcAngle(double value) { m_arcAngleHasBeenSet = true; m_arcAngle = value; }

    /**
     * <p>The option that determines the arc angle of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline ArcConfiguration& WithArcAngle(double value) { SetArcAngle(value); return *this;}


    /**
     * <p>The options that determine the arc thickness of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcThicknessOptions& GetArcThickness() const{ return m_arcThickness; }

    /**
     * <p>The options that determine the arc thickness of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline bool ArcThicknessHasBeenSet() const { return m_arcThicknessHasBeenSet; }

    /**
     * <p>The options that determine the arc thickness of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcThickness(const ArcThicknessOptions& value) { m_arcThicknessHasBeenSet = true; m_arcThickness = value; }

    /**
     * <p>The options that determine the arc thickness of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcThickness(ArcThicknessOptions&& value) { m_arcThicknessHasBeenSet = true; m_arcThickness = std::move(value); }

    /**
     * <p>The options that determine the arc thickness of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline ArcConfiguration& WithArcThickness(const ArcThicknessOptions& value) { SetArcThickness(value); return *this;}

    /**
     * <p>The options that determine the arc thickness of a
     * <code>GaugeChartVisual</code>.</p>
     */
    inline ArcConfiguration& WithArcThickness(ArcThicknessOptions&& value) { SetArcThickness(std::move(value)); return *this;}

  private:

    double m_arcAngle;
    bool m_arcAngleHasBeenSet = false;

    ArcThicknessOptions m_arcThickness;
    bool m_arcThicknessHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
