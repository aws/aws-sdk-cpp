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
   * <p>The aggregated field wells of a word cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WordCloudAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class WordCloudAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API WordCloudAggregatedFieldWells();
    AWS_QUICKSIGHT_API WordCloudAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline void SetGroupBy(const Aws::Vector<DimensionField>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline void SetGroupBy(Aws::Vector<DimensionField>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& WithGroupBy(const Aws::Vector<DimensionField>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& WithGroupBy(Aws::Vector<DimensionField>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& AddGroupBy(const DimensionField& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& AddGroupBy(DimensionField&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSize() const{ return m_size; }

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline void SetSize(const Aws::Vector<MeasureField>& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline void SetSize(Aws::Vector<MeasureField>&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& WithSize(const Aws::Vector<MeasureField>& value) { SetSize(value); return *this;}

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& WithSize(Aws::Vector<MeasureField>&& value) { SetSize(std::move(value)); return *this;}

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& AddSize(const MeasureField& value) { m_sizeHasBeenSet = true; m_size.push_back(value); return *this; }

    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline WordCloudAggregatedFieldWells& AddSize(MeasureField&& value) { m_sizeHasBeenSet = true; m_size.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<MeasureField> m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
