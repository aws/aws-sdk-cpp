/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/MetricCollectionType.h>
#include <aws/autoscaling/model/MetricGranularityType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class DescribeMetricCollectionTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeMetricCollectionTypesResult() = default;
    AWS_AUTOSCALING_API DescribeMetricCollectionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeMetricCollectionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The metrics.</p>
     */
    inline const Aws::Vector<MetricCollectionType>& GetMetrics() const { return m_metrics; }
    template<typename MetricsT = Aws::Vector<MetricCollectionType>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<MetricCollectionType>>
    DescribeMetricCollectionTypesResult& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = MetricCollectionType>
    DescribeMetricCollectionTypesResult& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The granularities for the metrics.</p>
     */
    inline const Aws::Vector<MetricGranularityType>& GetGranularities() const { return m_granularities; }
    template<typename GranularitiesT = Aws::Vector<MetricGranularityType>>
    void SetGranularities(GranularitiesT&& value) { m_granularitiesHasBeenSet = true; m_granularities = std::forward<GranularitiesT>(value); }
    template<typename GranularitiesT = Aws::Vector<MetricGranularityType>>
    DescribeMetricCollectionTypesResult& WithGranularities(GranularitiesT&& value) { SetGranularities(std::forward<GranularitiesT>(value)); return *this;}
    template<typename GranularitiesT = MetricGranularityType>
    DescribeMetricCollectionTypesResult& AddGranularities(GranularitiesT&& value) { m_granularitiesHasBeenSet = true; m_granularities.emplace_back(std::forward<GranularitiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeMetricCollectionTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricCollectionType> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<MetricGranularityType> m_granularities;
    bool m_granularitiesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
