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
    AWS_APPLICATIONSIGNALS_API MonitoredRequestCountMetricDataQueries();
    AWS_APPLICATIONSIGNALS_API MonitoredRequestCountMetricDataQueries(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API MonitoredRequestCountMetricDataQueries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If you want to count "good requests" to determine the percentage of
     * successful requests for this request-based SLO, specify the metric to use as
     * "good requests" in this structure.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetGoodCountMetric() const{ return m_goodCountMetric; }
    inline bool GoodCountMetricHasBeenSet() const { return m_goodCountMetricHasBeenSet; }
    inline void SetGoodCountMetric(const Aws::Vector<MetricDataQuery>& value) { m_goodCountMetricHasBeenSet = true; m_goodCountMetric = value; }
    inline void SetGoodCountMetric(Aws::Vector<MetricDataQuery>&& value) { m_goodCountMetricHasBeenSet = true; m_goodCountMetric = std::move(value); }
    inline MonitoredRequestCountMetricDataQueries& WithGoodCountMetric(const Aws::Vector<MetricDataQuery>& value) { SetGoodCountMetric(value); return *this;}
    inline MonitoredRequestCountMetricDataQueries& WithGoodCountMetric(Aws::Vector<MetricDataQuery>&& value) { SetGoodCountMetric(std::move(value)); return *this;}
    inline MonitoredRequestCountMetricDataQueries& AddGoodCountMetric(const MetricDataQuery& value) { m_goodCountMetricHasBeenSet = true; m_goodCountMetric.push_back(value); return *this; }
    inline MonitoredRequestCountMetricDataQueries& AddGoodCountMetric(MetricDataQuery&& value) { m_goodCountMetricHasBeenSet = true; m_goodCountMetric.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you want to count "bad requests" to determine the percentage of successful
     * requests for this request-based SLO, specify the metric to use as "bad requests"
     * in this structure.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetBadCountMetric() const{ return m_badCountMetric; }
    inline bool BadCountMetricHasBeenSet() const { return m_badCountMetricHasBeenSet; }
    inline void SetBadCountMetric(const Aws::Vector<MetricDataQuery>& value) { m_badCountMetricHasBeenSet = true; m_badCountMetric = value; }
    inline void SetBadCountMetric(Aws::Vector<MetricDataQuery>&& value) { m_badCountMetricHasBeenSet = true; m_badCountMetric = std::move(value); }
    inline MonitoredRequestCountMetricDataQueries& WithBadCountMetric(const Aws::Vector<MetricDataQuery>& value) { SetBadCountMetric(value); return *this;}
    inline MonitoredRequestCountMetricDataQueries& WithBadCountMetric(Aws::Vector<MetricDataQuery>&& value) { SetBadCountMetric(std::move(value)); return *this;}
    inline MonitoredRequestCountMetricDataQueries& AddBadCountMetric(const MetricDataQuery& value) { m_badCountMetricHasBeenSet = true; m_badCountMetric.push_back(value); return *this; }
    inline MonitoredRequestCountMetricDataQueries& AddBadCountMetric(MetricDataQuery&& value) { m_badCountMetricHasBeenSet = true; m_badCountMetric.push_back(std::move(value)); return *this; }
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
