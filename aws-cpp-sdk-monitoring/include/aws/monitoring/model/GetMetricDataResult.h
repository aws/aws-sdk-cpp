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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricDataResult.h>
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
namespace CloudWatch
{
namespace Model
{
  class AWS_CLOUDWATCH_API GetMetricDataResult
  {
  public:
    GetMetricDataResult();
    GetMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline const Aws::Vector<MetricDataResult>& GetMetricDataResults() const{ return m_metricDataResults; }

    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline void SetMetricDataResults(const Aws::Vector<MetricDataResult>& value) { m_metricDataResults = value; }

    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline void SetMetricDataResults(Aws::Vector<MetricDataResult>&& value) { m_metricDataResults = std::move(value); }

    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline GetMetricDataResult& WithMetricDataResults(const Aws::Vector<MetricDataResult>& value) { SetMetricDataResults(value); return *this;}

    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline GetMetricDataResult& WithMetricDataResults(Aws::Vector<MetricDataResult>&& value) { SetMetricDataResults(std::move(value)); return *this;}

    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline GetMetricDataResult& AddMetricDataResults(const MetricDataResult& value) { m_metricDataResults.push_back(value); return *this; }

    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline GetMetricDataResult& AddMetricDataResults(MetricDataResult&& value) { m_metricDataResults.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline GetMetricDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline GetMetricDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline GetMetricDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetMetricDataResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetMetricDataResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<MetricDataResult> m_metricDataResults;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
