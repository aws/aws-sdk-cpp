/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsBinKey.h>
#include <aws/lexv2-models/model/AnalyticsIntentGroupByKey.h>
#include <aws/lexv2-models/model/AnalyticsIntentMetricResult.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>An object containing the results for the intent metrics you requested and the
   * bin and/or group(s) they refer to, if applicable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentResult
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentResult() = default;
    AWS_LEXMODELSV2_API AnalyticsIntentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline const Aws::Vector<AnalyticsBinKey>& GetBinKeys() const { return m_binKeys; }
    inline bool BinKeysHasBeenSet() const { return m_binKeysHasBeenSet; }
    template<typename BinKeysT = Aws::Vector<AnalyticsBinKey>>
    void SetBinKeys(BinKeysT&& value) { m_binKeysHasBeenSet = true; m_binKeys = std::forward<BinKeysT>(value); }
    template<typename BinKeysT = Aws::Vector<AnalyticsBinKey>>
    AnalyticsIntentResult& WithBinKeys(BinKeysT&& value) { SetBinKeys(std::forward<BinKeysT>(value)); return *this;}
    template<typename BinKeysT = AnalyticsBinKey>
    AnalyticsIntentResult& AddBinKeys(BinKeysT&& value) { m_binKeysHasBeenSet = true; m_binKeys.emplace_back(std::forward<BinKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline const Aws::Vector<AnalyticsIntentGroupByKey>& GetGroupByKeys() const { return m_groupByKeys; }
    inline bool GroupByKeysHasBeenSet() const { return m_groupByKeysHasBeenSet; }
    template<typename GroupByKeysT = Aws::Vector<AnalyticsIntentGroupByKey>>
    void SetGroupByKeys(GroupByKeysT&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = std::forward<GroupByKeysT>(value); }
    template<typename GroupByKeysT = Aws::Vector<AnalyticsIntentGroupByKey>>
    AnalyticsIntentResult& WithGroupByKeys(GroupByKeysT&& value) { SetGroupByKeys(std::forward<GroupByKeysT>(value)); return *this;}
    template<typename GroupByKeysT = AnalyticsIntentGroupByKey>
    AnalyticsIntentResult& AddGroupByKeys(GroupByKeysT&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.emplace_back(std::forward<GroupByKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsIntentMetricResult>& GetMetricsResults() const { return m_metricsResults; }
    inline bool MetricsResultsHasBeenSet() const { return m_metricsResultsHasBeenSet; }
    template<typename MetricsResultsT = Aws::Vector<AnalyticsIntentMetricResult>>
    void SetMetricsResults(MetricsResultsT&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = std::forward<MetricsResultsT>(value); }
    template<typename MetricsResultsT = Aws::Vector<AnalyticsIntentMetricResult>>
    AnalyticsIntentResult& WithMetricsResults(MetricsResultsT&& value) { SetMetricsResults(std::forward<MetricsResultsT>(value)); return *this;}
    template<typename MetricsResultsT = AnalyticsIntentMetricResult>
    AnalyticsIntentResult& AddMetricsResults(MetricsResultsT&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.emplace_back(std::forward<MetricsResultsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AnalyticsBinKey> m_binKeys;
    bool m_binKeysHasBeenSet = false;

    Aws::Vector<AnalyticsIntentGroupByKey> m_groupByKeys;
    bool m_groupByKeysHasBeenSet = false;

    Aws::Vector<AnalyticsIntentMetricResult> m_metricsResults;
    bool m_metricsResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
