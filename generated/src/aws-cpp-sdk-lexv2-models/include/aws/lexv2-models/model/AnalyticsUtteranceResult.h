/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsBinKey.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceGroupByKey.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceMetricResult.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceAttributeResult.h>
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
   * <p>An object containing the results for the utterance metrics you requested and
   * the bin and/or group(s) they refer to, if applicable.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsUtteranceResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsUtteranceResult
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsUtteranceResult();
    AWS_LEXMODELSV2_API AnalyticsUtteranceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AnalyticsUtteranceResult& WithBinKeys(const Aws::Vector<AnalyticsBinKey>& value) { SetBinKeys(value); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& WithBinKeys(Aws::Vector<AnalyticsBinKey>&& value) { SetBinKeys(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& AddBinKeys(const AnalyticsBinKey& value) { m_binKeysHasBeenSet = true; m_binKeys.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the criteria you requested for binning results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& AddBinKeys(AnalyticsBinKey&& value) { m_binKeysHasBeenSet = true; m_binKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceGroupByKey>& GetGroupByKeys() const{ return m_groupByKeys; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline bool GroupByKeysHasBeenSet() const { return m_groupByKeysHasBeenSet; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline void SetGroupByKeys(const Aws::Vector<AnalyticsUtteranceGroupByKey>& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = value; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline void SetGroupByKeys(Aws::Vector<AnalyticsUtteranceGroupByKey>&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = std::move(value); }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& WithGroupByKeys(const Aws::Vector<AnalyticsUtteranceGroupByKey>& value) { SetGroupByKeys(value); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& WithGroupByKeys(Aws::Vector<AnalyticsUtteranceGroupByKey>&& value) { SetGroupByKeys(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& AddGroupByKeys(const AnalyticsUtteranceGroupByKey& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.push_back(value); return *this; }

    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline AnalyticsUtteranceResult& AddGroupByKeys(AnalyticsUtteranceGroupByKey&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceMetricResult>& GetMetricsResults() const{ return m_metricsResults; }

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
    inline void SetMetricsResults(const Aws::Vector<AnalyticsUtteranceMetricResult>& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = value; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline void SetMetricsResults(Aws::Vector<AnalyticsUtteranceMetricResult>&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = std::move(value); }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsUtteranceResult& WithMetricsResults(const Aws::Vector<AnalyticsUtteranceMetricResult>& value) { SetMetricsResults(value); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsUtteranceResult& WithMetricsResults(Aws::Vector<AnalyticsUtteranceMetricResult>&& value) { SetMetricsResults(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsUtteranceResult& AddMetricsResults(const AnalyticsUtteranceMetricResult& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline AnalyticsUtteranceResult& AddMetricsResults(AnalyticsUtteranceMetricResult&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceAttributeResult>& GetAttributeResults() const{ return m_attributeResults; }

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline bool AttributeResultsHasBeenSet() const { return m_attributeResultsHasBeenSet; }

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline void SetAttributeResults(const Aws::Vector<AnalyticsUtteranceAttributeResult>& value) { m_attributeResultsHasBeenSet = true; m_attributeResults = value; }

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline void SetAttributeResults(Aws::Vector<AnalyticsUtteranceAttributeResult>&& value) { m_attributeResultsHasBeenSet = true; m_attributeResults = std::move(value); }

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline AnalyticsUtteranceResult& WithAttributeResults(const Aws::Vector<AnalyticsUtteranceAttributeResult>& value) { SetAttributeResults(value); return *this;}

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline AnalyticsUtteranceResult& WithAttributeResults(Aws::Vector<AnalyticsUtteranceAttributeResult>&& value) { SetAttributeResults(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline AnalyticsUtteranceResult& AddAttributeResults(const AnalyticsUtteranceAttributeResult& value) { m_attributeResultsHasBeenSet = true; m_attributeResults.push_back(value); return *this; }

    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline AnalyticsUtteranceResult& AddAttributeResults(AnalyticsUtteranceAttributeResult&& value) { m_attributeResultsHasBeenSet = true; m_attributeResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AnalyticsBinKey> m_binKeys;
    bool m_binKeysHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceGroupByKey> m_groupByKeys;
    bool m_groupByKeysHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceMetricResult> m_metricsResults;
    bool m_metricsResultsHasBeenSet = false;

    Aws::Vector<AnalyticsUtteranceAttributeResult> m_attributeResults;
    bool m_attributeResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
