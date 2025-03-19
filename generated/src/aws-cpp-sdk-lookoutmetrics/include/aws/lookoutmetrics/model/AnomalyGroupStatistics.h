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
    AWS_LOOKOUTMETRICS_API AnomalyGroupStatistics() = default;
    AWS_LOOKOUTMETRICS_API AnomalyGroupStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyGroupStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start of the time range that was searched.</p>
     */
    inline const Aws::String& GetEvaluationStartDate() const { return m_evaluationStartDate; }
    inline bool EvaluationStartDateHasBeenSet() const { return m_evaluationStartDateHasBeenSet; }
    template<typename EvaluationStartDateT = Aws::String>
    void SetEvaluationStartDate(EvaluationStartDateT&& value) { m_evaluationStartDateHasBeenSet = true; m_evaluationStartDate = std::forward<EvaluationStartDateT>(value); }
    template<typename EvaluationStartDateT = Aws::String>
    AnomalyGroupStatistics& WithEvaluationStartDate(EvaluationStartDateT&& value) { SetEvaluationStartDate(std::forward<EvaluationStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of groups found.</p>
     */
    inline int GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline AnomalyGroupStatistics& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics for individual metrics within the group.</p>
     */
    inline const Aws::Vector<ItemizedMetricStats>& GetItemizedMetricStatsList() const { return m_itemizedMetricStatsList; }
    inline bool ItemizedMetricStatsListHasBeenSet() const { return m_itemizedMetricStatsListHasBeenSet; }
    template<typename ItemizedMetricStatsListT = Aws::Vector<ItemizedMetricStats>>
    void SetItemizedMetricStatsList(ItemizedMetricStatsListT&& value) { m_itemizedMetricStatsListHasBeenSet = true; m_itemizedMetricStatsList = std::forward<ItemizedMetricStatsListT>(value); }
    template<typename ItemizedMetricStatsListT = Aws::Vector<ItemizedMetricStats>>
    AnomalyGroupStatistics& WithItemizedMetricStatsList(ItemizedMetricStatsListT&& value) { SetItemizedMetricStatsList(std::forward<ItemizedMetricStatsListT>(value)); return *this;}
    template<typename ItemizedMetricStatsListT = ItemizedMetricStats>
    AnomalyGroupStatistics& AddItemizedMetricStatsList(ItemizedMetricStatsListT&& value) { m_itemizedMetricStatsListHasBeenSet = true; m_itemizedMetricStatsList.emplace_back(std::forward<ItemizedMetricStatsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_evaluationStartDate;
    bool m_evaluationStartDateHasBeenSet = false;

    int m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    Aws::Vector<ItemizedMetricStats> m_itemizedMetricStatsList;
    bool m_itemizedMetricStatsListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
