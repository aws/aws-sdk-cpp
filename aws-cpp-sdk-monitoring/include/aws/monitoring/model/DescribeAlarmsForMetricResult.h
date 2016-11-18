/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricAlarm.h>

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
  /**
   * <p> The output for <a>DescribeAlarmsForMetric</a>. </p>
   */
  class AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult
  {
  public:
    DescribeAlarmsForMetricResult();
    DescribeAlarmsForMetricResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAlarmsForMetricResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline const Aws::Vector<MetricAlarm>& GetMetricAlarms() const{ return m_metricAlarms; }

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline void SetMetricAlarms(const Aws::Vector<MetricAlarm>& value) { m_metricAlarms = value; }

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline void SetMetricAlarms(Aws::Vector<MetricAlarm>&& value) { m_metricAlarms = value; }

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& WithMetricAlarms(const Aws::Vector<MetricAlarm>& value) { SetMetricAlarms(value); return *this;}

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& WithMetricAlarms(Aws::Vector<MetricAlarm>&& value) { SetMetricAlarms(value); return *this;}

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& AddMetricAlarms(const MetricAlarm& value) { m_metricAlarms.push_back(value); return *this; }

    /**
     * <p>A list of information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& AddMetricAlarms(MetricAlarm&& value) { m_metricAlarms.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeAlarmsForMetricResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAlarmsForMetricResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<MetricAlarm> m_metricAlarms;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws