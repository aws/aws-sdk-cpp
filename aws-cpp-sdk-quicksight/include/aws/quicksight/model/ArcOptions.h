/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ArcThickness.h>
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
   * <p>The options that determine the arc thickness of a
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ArcOptions">AWS
   * API Reference</a></p>
   */
  class ArcOptions
  {
  public:
    AWS_QUICKSIGHT_API ArcOptions();
    AWS_QUICKSIGHT_API ArcOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ArcOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline const ArcThickness& GetArcThickness() const{ return m_arcThickness; }

    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ArcThicknessHasBeenSet() const { return m_arcThicknessHasBeenSet; }

    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcThickness(const ArcThickness& value) { m_arcThicknessHasBeenSet = true; m_arcThickness = value; }

    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetArcThickness(ArcThickness&& value) { m_arcThicknessHasBeenSet = true; m_arcThickness = std::move(value); }

    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline ArcOptions& WithArcThickness(const ArcThickness& value) { SetArcThickness(value); return *this;}

    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline ArcOptions& WithArcThickness(ArcThickness&& value) { SetArcThickness(std::move(value)); return *this;}

  private:

    ArcThickness m_arcThickness;
    bool m_arcThicknessHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
