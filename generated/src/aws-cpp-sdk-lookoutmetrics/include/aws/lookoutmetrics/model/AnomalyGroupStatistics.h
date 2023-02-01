/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/ItemizedMetricStats.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Aggregated statistics for a group of anomalous metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyGroupStatistics">AWS
   * API Reference</a></p>
   */
  class AnomalyGroupStatistics
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyGroupStatistics();
    AWS_LOOKOUTMETRICS_API AnomalyGroupStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroupStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline const Aws::String& GetEvaluationStartDate() const{ return m_evaluationStartDate; }

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline bool EvaluationStartDateHasBeenSet() const { return m_evaluationStartDateHasBeenSet; }

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline void SetEvaluationStartDate(const Aws::String& value) { m_evaluationStartDateHasBeenSet = true; m_evaluationStartDate = value; }

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline void SetEvaluationStartDate(Aws::String&& value) { m_evaluationStartDateHasBeenSet = true; m_evaluationStartDate = std::move(value); }

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline void SetEvaluationStartDate(const char* value) { m_evaluationStartDateHasBeenSet = true; m_evaluationStartDate.assign(value); }

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline AnomalyGroupStatistics& WithEvaluationStartDate(const Aws::String& value) { SetEvaluationStartDate(value); return *this;}

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline AnomalyGroupStatistics& WithEvaluationStartDate(Aws::String&& value) { SetEvaluationStartDate(std::move(value)); return *this;}

    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline AnomalyGroupStatistics& WithEvaluationStartDate(const char* value) { SetEvaluationStartDate(value); return *this;}


    /**
     * <p>The number of groups found.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The number of groups found.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The number of groups found.</p>
     */
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The number of groups found.</p>
     */
    inline AnomalyGroupStatistics& WithTotalCount(int value) { SetTotalCount(value); return *this;}


    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline const Aws::Vector<ItemizedMetricStats>& GetItemizedMetricStatsList() const{ return m_itemizedMetricStatsList; }

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline bool ItemizedMetricStatsListHasBeenSet() const { return m_itemizedMetricStatsListHasBeenSet; }

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline void SetItemizedMetricStatsList(const Aws::Vector<ItemizedMetricStats>& value) { m_itemizedMetricStatsListHasBeenSet = true; m_itemizedMetricStatsList = value; }

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline void SetItemizedMetricStatsList(Aws::Vector<ItemizedMetricStats>&& value) { m_itemizedMetricStatsListHasBeenSet = true; m_itemizedMetricStatsList = std::move(value); }

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline AnomalyGroupStatistics& WithItemizedMetricStatsList(const Aws::Vector<ItemizedMetricStats>& value) { SetItemizedMetricStatsList(value); return *this;}

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline AnomalyGroupStatistics& WithItemizedMetricStatsList(Aws::Vector<ItemizedMetricStats>&& value) { SetItemizedMetricStatsList(std::move(value)); return *this;}

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline AnomalyGroupStatistics& AddItemizedMetricStatsList(const ItemizedMetricStats& value) { m_itemizedMetricStatsListHasBeenSet = true; m_itemizedMetricStatsList.push_back(value); return *this; }

    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline AnomalyGroupStatistics& AddItemizedMetricStatsList(ItemizedMetricStats&& value) { m_itemizedMetricStatsListHasBeenSet = true; m_itemizedMetricStatsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_evaluationStartDate;
    bool m_evaluationStartDateHasBeenSet = false;

    int m_totalCount;
    bool m_totalCountHasBeenSet = false;

    Aws::Vector<ItemizedMetricStats> m_itemizedMetricStatsList;
    bool m_itemizedMetricStatsListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
