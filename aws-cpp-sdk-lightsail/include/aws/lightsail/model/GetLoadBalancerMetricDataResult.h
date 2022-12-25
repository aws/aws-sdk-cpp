/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/LoadBalancerMetricName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/MetricDatapoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class GetLoadBalancerMetricDataResult
  {
  public:
    AWS_LIGHTSAIL_API GetLoadBalancerMetricDataResult();
    AWS_LIGHTSAIL_API GetLoadBalancerMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetLoadBalancerMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the metric returned.</p>
     */
    inline const LoadBalancerMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric returned.</p>
     */
    inline void SetMetricName(const LoadBalancerMetricName& value) { m_metricName = value; }

    /**
     * <p>The name of the metric returned.</p>
     */
    inline void SetMetricName(LoadBalancerMetricName&& value) { m_metricName = std::move(value); }

    /**
     * <p>The name of the metric returned.</p>
     */
    inline GetLoadBalancerMetricDataResult& WithMetricName(const LoadBalancerMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric returned.</p>
     */
    inline GetLoadBalancerMetricDataResult& WithMetricName(LoadBalancerMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline const Aws::Vector<MetricDatapoint>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatapoint>& value) { m_metricData = value; }

    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatapoint>&& value) { m_metricData = std::move(value); }

    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline GetLoadBalancerMetricDataResult& WithMetricData(const Aws::Vector<MetricDatapoint>& value) { SetMetricData(value); return *this;}

    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline GetLoadBalancerMetricDataResult& WithMetricData(Aws::Vector<MetricDatapoint>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline GetLoadBalancerMetricDataResult& AddMetricData(const MetricDatapoint& value) { m_metricData.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the metric data returned.</p>
     */
    inline GetLoadBalancerMetricDataResult& AddMetricData(MetricDatapoint&& value) { m_metricData.push_back(std::move(value)); return *this; }

  private:

    LoadBalancerMetricName m_metricName;

    Aws::Vector<MetricDatapoint> m_metricData;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
