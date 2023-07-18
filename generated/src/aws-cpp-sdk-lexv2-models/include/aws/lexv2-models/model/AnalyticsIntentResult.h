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
    AWS_LEXMODELSV2_API AnalyticsIntentResult();
    AWS_LEXMODELSV2_API AnalyticsIntentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AnalyticsIntentResult& WithBinKeys(const Aws::Vector<AnalyticsBinKey>& value) { SetBinKeys(value); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentResult& WithBinKeys(Aws::Vector<AnalyticsBinKey>&& value) { SetBinKeys(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentResult& AddBinKeys(const AnalyticsBinKey& value) { m_binKeysHasBeenSet = true; m_binKeys.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsIntentResult& AddBinKeys(AnalyticsBinKey&& value) { m_binKeysHasBeenSet = true; m_binKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline const Aws::Vector<AnalyticsIntentGroupByKey>& GetGroupByKeys() const{ return m_groupByKeys; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline bool GroupByKeysHasBeenSet() const { return m_groupByKeysHasBeenSet; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline void SetGroupByKeys(const Aws::Vector<AnalyticsIntentGroupByKey>& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = value; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline void SetGroupByKeys(Aws::Vector<AnalyticsIntentGroupByKey>&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = std::move(value); }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline AnalyticsIntentResult& WithGroupByKeys(const Aws::Vector<AnalyticsIntentGroupByKey>& value) { SetGroupByKeys(value); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline AnalyticsIntentResult& WithGroupByKeys(Aws::Vector<AnalyticsIntentGroupByKey>&& value) { SetGroupByKeys(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline AnalyticsIntentResult& AddGroupByKeys(const AnalyticsIntentGroupByKey& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the groups.</p>
     */
    inline AnalyticsIntentResult& AddGroupByKeys(AnalyticsIntentGroupByKey&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsIntentMetricResult>& GetMetricsResults() const{ return m_metricsResults; }

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
    inline void SetMetricsResults(const Aws::Vector<AnalyticsIntentMetricResult>& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = value; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline void SetMetricsResults(Aws::Vector<AnalyticsIntentMetricResult>&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = std::move(value); }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentResult& WithMetricsResults(const Aws::Vector<AnalyticsIntentMetricResult>& value) { SetMetricsResults(value); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentResult& WithMetricsResults(Aws::Vector<AnalyticsIntentMetricResult>&& value) { SetMetricsResults(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentResult& AddMetricsResults(const AnalyticsIntentMetricResult& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsIntentResult& AddMetricsResults(AnalyticsIntentMetricResult&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.push_back(std::move(value)); return *this; }

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
