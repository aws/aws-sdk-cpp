/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsBinKey.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageGroupByKey.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageMetricResult.h>
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
   * <p>An object containing the results for the intent stage metrics you requested
   * and the bin and/or group they refer to, if applicable.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentStageResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentStageResult
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentStageResult();
    AWS_LEXMODELSV2_API AnalyticsIntentStageResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentStageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline const Aws::Vector<AnalyticsBinKey>& GetBinKeys() const{ return m_binKeys; }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline bool BinKeysHasBeenSet() const { return m_binKeysHasBeenSet; }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline void SetBinKeys(const Aws::Vector<AnalyticsBinKey>& value) { m_binKeysHasBeenSet = true; m_binKeys = value; }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline void SetBinKeys(Aws::Vector<AnalyticsBinKey>&& value) { m_binKeysHasBeenSet = true; m_binKeys = std::move(value); }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& WithBinKeys(const Aws::Vector<AnalyticsBinKey>& value) { SetBinKeys(value); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& WithBinKeys(Aws::Vector<AnalyticsBinKey>&& value) { SetBinKeys(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& AddBinKeys(const AnalyticsBinKey& value) { m_binKeysHasBeenSet = true; m_binKeys.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& AddBinKeys(AnalyticsBinKey&& value) { m_binKeysHasBeenSet = true; m_binKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline const Aws::Vector<AnalyticsIntentStageGroupByKey>& GetGroupByKeys() const{ return m_groupByKeys; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline bool GroupByKeysHasBeenSet() const { return m_groupByKeysHasBeenSet; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline void SetGroupByKeys(const Aws::Vector<AnalyticsIntentStageGroupByKey>& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = value; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline void SetGroupByKeys(Aws::Vector<AnalyticsIntentStageGroupByKey>&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = std::move(value); }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& WithGroupByKeys(const Aws::Vector<AnalyticsIntentStageGroupByKey>& value) { SetGroupByKeys(value); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& WithGroupByKeys(Aws::Vector<AnalyticsIntentStageGroupByKey>&& value) { SetGroupByKeys(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& AddGroupByKeys(const AnalyticsIntentStageGroupByKey& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentStageResult& AddGroupByKeys(AnalyticsIntentStageGroupByKey&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsIntentStageMetricResult>& GetMetricsResults() const{ return m_metricsResults; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline bool MetricsResultsHasBeenSet() const { return m_metricsResultsHasBeenSet; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline void SetMetricsResults(const Aws::Vector<AnalyticsIntentStageMetricResult>& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = value; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline void SetMetricsResults(Aws::Vector<AnalyticsIntentStageMetricResult>&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = std::move(value); }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentStageResult& WithMetricsResults(const Aws::Vector<AnalyticsIntentStageMetricResult>& value) { SetMetricsResults(value); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentStageResult& WithMetricsResults(Aws::Vector<AnalyticsIntentStageMetricResult>&& value) { SetMetricsResults(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentStageResult& AddMetricsResults(const AnalyticsIntentStageMetricResult& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentStageResult& AddMetricsResults(AnalyticsIntentStageMetricResult&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AnalyticsBinKey> m_binKeys;
    bool m_binKeysHasBeenSet = false;

    Aws::Vector<AnalyticsIntentStageGroupByKey> m_groupByKeys;
    bool m_groupByKeysHasBeenSet = false;

    Aws::Vector<AnalyticsIntentStageMetricResult> m_metricsResults;
    bool m_metricsResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
