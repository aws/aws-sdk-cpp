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
   * <p>Aggregated field wells of a tree map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TreeMapAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class TreeMapAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API TreeMapAggregatedFieldWells();
    AWS_QUICKSIGHT_API TreeMapAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGroups() const{ return m_groups; }

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline void SetGroups(const Aws::Vector<DimensionField>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline void SetGroups(Aws::Vector<DimensionField>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& WithGroups(const Aws::Vector<DimensionField>& value) { SetGroups(value); return *this;}

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& WithGroups(Aws::Vector<DimensionField>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& AddGroups(const DimensionField& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& AddGroups(DimensionField&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSizes() const{ return m_sizes; }

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline bool SizesHasBeenSet() const { return m_sizesHasBeenSet; }

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline void SetSizes(const Aws::Vector<MeasureField>& value) { m_sizesHasBeenSet = true; m_sizes = value; }

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline void SetSizes(Aws::Vector<MeasureField>&& value) { m_sizesHasBeenSet = true; m_sizes = std::move(value); }

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& WithSizes(const Aws::Vector<MeasureField>& value) { SetSizes(value); return *this;}

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& WithSizes(Aws::Vector<MeasureField>&& value) { SetSizes(std::move(value)); return *this;}

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& AddSizes(const MeasureField& value) { m_sizesHasBeenSet = true; m_sizes.push_back(value); return *this; }

    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline TreeMapAggregatedFieldWells& AddSizes(MeasureField&& value) { m_sizesHasBeenSet = true; m_sizes.push_back(std::move(value)); return *this; }


    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetColors() const{ return m_colors; }

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline void SetColors(const Aws::Vector<MeasureField>& value) { m_colorsHasBeenSet = true; m_colors = value; }

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline void SetColors(Aws::Vector<MeasureField>&& value) { m_colorsHasBeenSet = true; m_colors = std::move(value); }

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline TreeMapAggregatedFieldWells& WithColors(const Aws::Vector<MeasureField>& value) { SetColors(value); return *this;}

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline TreeMapAggregatedFieldWells& WithColors(Aws::Vector<MeasureField>&& value) { SetColors(std::move(value)); return *this;}

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline TreeMapAggregatedFieldWells& AddColors(const MeasureField& value) { m_colorsHasBeenSet = true; m_colors.push_back(value); return *this; }

    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline TreeMapAggregatedFieldWells& AddColors(MeasureField&& value) { m_colorsHasBeenSet = true; m_colors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<MeasureField> m_sizes;
    bool m_sizesHasBeenSet = false;

    Aws::Vector<MeasureField> m_colors;
    bool m_colorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
