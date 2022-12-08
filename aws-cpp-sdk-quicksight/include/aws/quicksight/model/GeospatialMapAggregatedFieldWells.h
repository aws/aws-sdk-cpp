/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The aggregated field wells for a geospatial map.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialMapAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class GeospatialMapAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API GeospatialMapAggregatedFieldWells();
    AWS_QUICKSIGHT_API GeospatialMapAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialMapAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGeospatial() const{ return m_geospatial; }

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline bool GeospatialHasBeenSet() const { return m_geospatialHasBeenSet; }

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline void SetGeospatial(const Aws::Vector<DimensionField>& value) { m_geospatialHasBeenSet = true; m_geospatial = value; }

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline void SetGeospatial(Aws::Vector<DimensionField>&& value) { m_geospatialHasBeenSet = true; m_geospatial = std::move(value); }

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& WithGeospatial(const Aws::Vector<DimensionField>& value) { SetGeospatial(value); return *this;}

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& WithGeospatial(Aws::Vector<DimensionField>&& value) { SetGeospatial(std::move(value)); return *this;}

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& AddGeospatial(const DimensionField& value) { m_geospatialHasBeenSet = true; m_geospatial.push_back(value); return *this; }

    /**
     * <p>The geospatial field wells of a geospatial map. Values are grouped by
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& AddGeospatial(DimensionField&& value) { m_geospatialHasBeenSet = true; m_geospatial.push_back(std::move(value)); return *this; }


    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The size field wells of a geospatial map. Values are aggregated based on
     * geospatial fields.</p>
     */
    inline GeospatialMapAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColors() const{ return m_colors; }

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline void SetColors(const Aws::Vector<DimensionField>& value) { m_colorsHasBeenSet = true; m_colors = value; }

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline void SetColors(Aws::Vector<DimensionField>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline GeospatialMapAggregatedFieldWells& WithColors(const Aws::Vector<DimensionField>& value) { SetColors(value); return *this;}

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline GeospatialMapAggregatedFieldWells& WithColors(Aws::Vector<DimensionField>&& value) { SetColors(std::move(value)); return *this;}

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline GeospatialMapAggregatedFieldWells& AddColors(const DimensionField& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }

    /**
     * <p>The color field wells of a geospatial map.</p>
     */
    inline GeospatialMapAggregatedFieldWells& AddColors(DimensionField&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_geospatial;
    bool m_geospatialHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_colors;
    bool m_colorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
