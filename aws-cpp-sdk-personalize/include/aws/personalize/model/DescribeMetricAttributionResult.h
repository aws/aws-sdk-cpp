/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/MetricAttribution.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeMetricAttributionResult
  {
  public:
    AWS_PERSONALIZE_API DescribeMetricAttributionResult();
    AWS_PERSONALIZE_API DescribeMetricAttributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeMetricAttributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the metric attribution.</p>
     */
    inline const MetricAttribution& GetMetricAttribution() const{ return m_metricAttribution; }

    /**
     * <p>The details of the metric attribution.</p>
     */
    inline void SetMetricAttribution(const MetricAttribution& value) { m_metricAttribution = value; }

    /**
     * <p>The details of the metric attribution.</p>
     */
    inline void SetMetricAttribution(MetricAttribution&& value) { m_metricAttribution = std::move(value); }

    /**
     * <p>The details of the metric attribution.</p>
     */
    inline DescribeMetricAttributionResult& WithMetricAttribution(const MetricAttribution& value) { SetMetricAttribution(value); return *this;}

    /**
     * <p>The details of the metric attribution.</p>
     */
    inline DescribeMetricAttributionResult& WithMetricAttribution(MetricAttribution&& value) { SetMetricAttribution(std::move(value)); return *this;}

  private:

    MetricAttribution m_metricAttribution;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
