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
    AWS_LEXMODELSV2_API AnalyticsUtteranceResult() = default;
    AWS_LEXMODELSV2_API AnalyticsUtteranceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AnalyticsUtteranceResult& WithBinKeys(BinKeysT&& value) { SetBinKeys(std::forward<BinKeysT>(value)); return *this;}
    template<typename BinKeysT = AnalyticsBinKey>
    AnalyticsUtteranceResult& AddBinKeys(BinKeysT&& value) { m_binKeysHasBeenSet = true; m_binKeys.emplace_back(std::forward<BinKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects containing the criteria you requested for grouping results
     * and the values of the bins.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceGroupByKey>& GetGroupByKeys() const { return m_groupByKeys; }
    inline bool GroupByKeysHasBeenSet() const { return m_groupByKeysHasBeenSet; }
    template<typename GroupByKeysT = Aws::Vector<AnalyticsUtteranceGroupByKey>>
    void SetGroupByKeys(GroupByKeysT&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys = std::forward<GroupByKeysT>(value); }
    template<typename GroupByKeysT = Aws::Vector<AnalyticsUtteranceGroupByKey>>
    AnalyticsUtteranceResult& WithGroupByKeys(GroupByKeysT&& value) { SetGroupByKeys(std::forward<GroupByKeysT>(value)); return *this;}
    template<typename GroupByKeysT = AnalyticsUtteranceGroupByKey>
    AnalyticsUtteranceResult& AddGroupByKeys(GroupByKeysT&& value) { m_groupByKeysHasBeenSet = true; m_groupByKeys.emplace_back(std::forward<GroupByKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains a metric you want to list, the
     * statistic for the metric you want to return, and the method by which to organize
     * the results.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceMetricResult>& GetMetricsResults() const { return m_metricsResults; }
    inline bool MetricsResultsHasBeenSet() const { return m_metricsResultsHasBeenSet; }
    template<typename MetricsResultsT = Aws::Vector<AnalyticsUtteranceMetricResult>>
    void SetMetricsResults(MetricsResultsT&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults = std::forward<MetricsResultsT>(value); }
    template<typename MetricsResultsT = Aws::Vector<AnalyticsUtteranceMetricResult>>
    AnalyticsUtteranceResult& WithMetricsResults(MetricsResultsT&& value) { SetMetricsResults(std::forward<MetricsResultsT>(value)); return *this;}
    template<typename MetricsResultsT = AnalyticsUtteranceMetricResult>
    AnalyticsUtteranceResult& AddMetricsResults(MetricsResultsT&& value) { m_metricsResultsHasBeenSet = true; m_metricsResults.emplace_back(std::forward<MetricsResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects containing information about the last used intent at the
     * time of an utterance.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceAttributeResult>& GetAttributeResults() const { return m_attributeResults; }
    inline bool AttributeResultsHasBeenSet() const { return m_attributeResultsHasBeenSet; }
    template<typename AttributeResultsT = Aws::Vector<AnalyticsUtteranceAttributeResult>>
    void SetAttributeResults(AttributeResultsT&& value) { m_attributeResultsHasBeenSet = true; m_attributeResults = std::forward<AttributeResultsT>(value); }
    template<typename AttributeResultsT = Aws::Vector<AnalyticsUtteranceAttributeResult>>
    AnalyticsUtteranceResult& WithAttributeResults(AttributeResultsT&& value) { SetAttributeResults(std::forward<AttributeResultsT>(value)); return *this;}
    template<typename AttributeResultsT = AnalyticsUtteranceAttributeResult>
    AnalyticsUtteranceResult& AddAttributeResults(AttributeResultsT&& value) { m_attributeResultsHasBeenSet = true; m_attributeResults.emplace_back(std::forward<AttributeResultsT>(value)); return *this; }
    ///@}
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
