/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALING_API DescribeMetricCollectionTypesResult
  {
  public:
    DescribeMetricCollectionTypesResult();
    DescribeMetricCollectionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeMetricCollectionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>One or more metrics.</p>
     */
    inline const Aws::Vector<MetricCollectionType>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>One or more metrics.</p>
     */
    inline void SetMetrics(const Aws::Vector<MetricCollectionType>& value) { m_metrics = value; }

    /**
     * <p>One or more metrics.</p>
     */
    inline void SetMetrics(Aws::Vector<MetricCollectionType>&& value) { m_metrics = std::move(value); }

    /**
     * <p>One or more metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& WithMetrics(const Aws::Vector<MetricCollectionType>& value) { SetMetrics(value); return *this;}

    /**
     * <p>One or more metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& WithMetrics(Aws::Vector<MetricCollectionType>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>One or more metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& AddMetrics(const MetricCollectionType& value) { m_metrics.push_back(value); return *this; }

    /**
     * <p>One or more metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& AddMetrics(MetricCollectionType&& value) { m_metrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The granularities for the metrics.</p>
     */
    inline const Aws::Vector<MetricGranularityType>& GetGranularities() const{ return m_granularities; }

    /**
     * <p>The granularities for the metrics.</p>
     */
    inline void SetGranularities(const Aws::Vector<MetricGranularityType>& value) { m_granularities = value; }

    /**
     * <p>The granularities for the metrics.</p>
     */
    inline void SetGranularities(Aws::Vector<MetricGranularityType>&& value) { m_granularities = std::move(value); }

    /**
     * <p>The granularities for the metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& WithGranularities(const Aws::Vector<MetricGranularityType>& value) { SetGranularities(value); return *this;}

    /**
     * <p>The granularities for the metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& WithGranularities(Aws::Vector<MetricGranularityType>&& value) { SetGranularities(std::move(value)); return *this;}

    /**
     * <p>The granularities for the metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& AddGranularities(const MetricGranularityType& value) { m_granularities.push_back(value); return *this; }

    /**
     * <p>The granularities for the metrics.</p>
     */
    inline DescribeMetricCollectionTypesResult& AddGranularities(MetricGranularityType&& value) { m_granularities.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeMetricCollectionTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeMetricCollectionTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<MetricCollectionType> m_metrics;

    Aws::Vector<MetricGranularityType> m_granularities;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
