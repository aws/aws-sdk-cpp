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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceMetricName.h>
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
  class AWS_LIGHTSAIL_API GetInstanceMetricDataResult
  {
  public:
    GetInstanceMetricDataResult();
    GetInstanceMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metric name to return data for.</p>
     */
    inline const InstanceMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric name to return data for.</p>
     */
    inline void SetMetricName(const InstanceMetricName& value) { m_metricName = value; }

    /**
     * <p>The metric name to return data for.</p>
     */
    inline void SetMetricName(InstanceMetricName&& value) { m_metricName = std::move(value); }

    /**
     * <p>The metric name to return data for.</p>
     */
    inline GetInstanceMetricDataResult& WithMetricName(const InstanceMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric name to return data for.</p>
     */
    inline GetInstanceMetricDataResult& WithMetricName(InstanceMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline const Aws::Vector<MetricDatapoint>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatapoint>& value) { m_metricData = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatapoint>&& value) { m_metricData = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline GetInstanceMetricDataResult& WithMetricData(const Aws::Vector<MetricDatapoint>& value) { SetMetricData(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline GetInstanceMetricDataResult& WithMetricData(Aws::Vector<MetricDatapoint>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline GetInstanceMetricDataResult& AddMetricData(const MetricDatapoint& value) { m_metricData.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance metric data request.</p>
     */
    inline GetInstanceMetricDataResult& AddMetricData(MetricDatapoint&& value) { m_metricData.push_back(std::move(value)); return *this; }

  private:

    InstanceMetricName m_metricName;

    Aws::Vector<MetricDatapoint> m_metricData;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
