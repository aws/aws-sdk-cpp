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
#include <aws/lightsail/model/RelationalDatabaseMetricName.h>
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
  class AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataResult
  {
  public:
    GetRelationalDatabaseMetricDataResult();
    GetRelationalDatabaseMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRelationalDatabaseMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the metric.</p>
     */
    inline const RelationalDatabaseMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const RelationalDatabaseMetricName& value) { m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(RelationalDatabaseMetricName&& value) { m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline GetRelationalDatabaseMetricDataResult& WithMetricName(const RelationalDatabaseMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline GetRelationalDatabaseMetricDataResult& WithMetricName(RelationalDatabaseMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline const Aws::Vector<MetricDatapoint>& GetMetricData() const{ return m_metricData; }

    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline void SetMetricData(const Aws::Vector<MetricDatapoint>& value) { m_metricData = value; }

    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline void SetMetricData(Aws::Vector<MetricDatapoint>&& value) { m_metricData = std::move(value); }

    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline GetRelationalDatabaseMetricDataResult& WithMetricData(const Aws::Vector<MetricDatapoint>& value) { SetMetricData(value); return *this;}

    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline GetRelationalDatabaseMetricDataResult& WithMetricData(Aws::Vector<MetricDatapoint>&& value) { SetMetricData(std::move(value)); return *this;}

    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline GetRelationalDatabaseMetricDataResult& AddMetricData(const MetricDatapoint& value) { m_metricData.push_back(value); return *this; }

    /**
     * <p>An object describing the result of your get relational database metric data
     * request.</p>
     */
    inline GetRelationalDatabaseMetricDataResult& AddMetricData(MetricDatapoint&& value) { m_metricData.push_back(std::move(value)); return *this; }

  private:

    RelationalDatabaseMetricName m_metricName;

    Aws::Vector<MetricDatapoint> m_metricData;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
