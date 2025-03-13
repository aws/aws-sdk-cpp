/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/MetricDataQuery.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>This structure defines the metric that is used as the "good request" or "bad
   * request" value for a request-based SLO. This value observed for the metric
   * defined in <code>TotalRequestCountMetric</code> is divided by the number found
   * for <code>MonitoredRequestCountMetric</code> to determine the percentage of
   * successful requests that this SLO tracks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/MonitoredRequestCountMetricDataQueries">AWS
   * API Reference</a></p>
   */
  class MonitoredRequestCountMetricDataQueries
  {
  public:
    AWS_APPLICATIONSIGNALS_API MonitoredRequestCountMetricDataQueries() = default;
    AWS_APPLICATIONSIGNALS_API MonitoredRequestCountMetricDataQueries(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API MonitoredRequestCountMetricDataQueries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If you want to count "good requests" to determine the percentage of
     * successful requests for this request-based SLO, specify the metric to use as
     * "good requests" in this structure.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetGoodCountMetric() const { return m_goodCountMetric; }
    inline bool GoodCountMetricHasBeenSet() const { return m_goodCountMetricHasBeenSet; }
    template<typename GoodCountMetricT = Aws::Vector<MetricDataQuery>>
    void SetGoodCountMetric(GoodCountMetricT&& value) { m_goodCountMetricHasBeenSet = true; m_goodCountMetric = std::forward<GoodCountMetricT>(value); }
    template<typename GoodCountMetricT = Aws::Vector<MetricDataQuery>>
    MonitoredRequestCountMetricDataQueries& WithGoodCountMetric(GoodCountMetricT&& value) { SetGoodCountMetric(std::forward<GoodCountMetricT>(value)); return *this;}
    template<typename GoodCountMetricT = MetricDataQuery>
    MonitoredRequestCountMetricDataQueries& AddGoodCountMetric(GoodCountMetricT&& value) { m_goodCountMetricHasBeenSet = true; m_goodCountMetric.emplace_back(std::forward<GoodCountMetricT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you want to count "bad requests" to determine the percentage of successful
     * requests for this request-based SLO, specify the metric to use as "bad requests"
     * in this structure.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetBadCountMetric() const { return m_badCountMetric; }
    inline bool BadCountMetricHasBeenSet() const { return m_badCountMetricHasBeenSet; }
    template<typename BadCountMetricT = Aws::Vector<MetricDataQuery>>
    void SetBadCountMetric(BadCountMetricT&& value) { m_badCountMetricHasBeenSet = true; m_badCountMetric = std::forward<BadCountMetricT>(value); }
    template<typename BadCountMetricT = Aws::Vector<MetricDataQuery>>
    MonitoredRequestCountMetricDataQueries& WithBadCountMetric(BadCountMetricT&& value) { SetBadCountMetric(std::forward<BadCountMetricT>(value)); return *this;}
    template<typename BadCountMetricT = MetricDataQuery>
    MonitoredRequestCountMetricDataQueries& AddBadCountMetric(BadCountMetricT&& value) { m_badCountMetricHasBeenSet = true; m_badCountMetric.emplace_back(std::forward<BadCountMetricT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MetricDataQuery> m_goodCountMetric;
    bool m_goodCountMetricHasBeenSet = false;

    Aws::Vector<MetricDataQuery> m_badCountMetric;
    bool m_badCountMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
