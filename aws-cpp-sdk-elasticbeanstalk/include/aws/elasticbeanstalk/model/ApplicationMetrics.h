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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/StatusCodes.h>
#include <aws/elasticbeanstalk/model/Latency.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Represents the application metrics for a specified environment.</p>
   */
  class AWS_ELASTICBEANSTALK_API ApplicationMetrics
  {
  public:
    ApplicationMetrics();
    ApplicationMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The amount of time that the metrics cover (usually 10 seconds). For example,
     * you might have 5 requests (<code>request_count</code>) within the most recent
     * time slice of 10 seconds (<code>duration</code>).</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The amount of time that the metrics cover (usually 10 seconds). For example,
     * you might have 5 requests (<code>request_count</code>) within the most recent
     * time slice of 10 seconds (<code>duration</code>).</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The amount of time that the metrics cover (usually 10 seconds). For example,
     * you might have 5 requests (<code>request_count</code>) within the most recent
     * time slice of 10 seconds (<code>duration</code>).</p>
     */
    inline ApplicationMetrics& WithDuration(int value) { SetDuration(value); return *this;}

    /**
     * <p>Average number of requests handled by the web server per second over the last
     * 10 seconds.</p>
     */
    inline int GetRequestCount() const{ return m_requestCount; }

    /**
     * <p>Average number of requests handled by the web server per second over the last
     * 10 seconds.</p>
     */
    inline void SetRequestCount(int value) { m_requestCountHasBeenSet = true; m_requestCount = value; }

    /**
     * <p>Average number of requests handled by the web server per second over the last
     * 10 seconds.</p>
     */
    inline ApplicationMetrics& WithRequestCount(int value) { SetRequestCount(value); return *this;}

    /**
     * <p>Represents the percentage of requests over the last 10 seconds that resulted
     * in each type of status code response.</p>
     */
    inline const StatusCodes& GetStatusCodes() const{ return m_statusCodes; }

    /**
     * <p>Represents the percentage of requests over the last 10 seconds that resulted
     * in each type of status code response.</p>
     */
    inline void SetStatusCodes(const StatusCodes& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    /**
     * <p>Represents the percentage of requests over the last 10 seconds that resulted
     * in each type of status code response.</p>
     */
    inline void SetStatusCodes(StatusCodes&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    /**
     * <p>Represents the percentage of requests over the last 10 seconds that resulted
     * in each type of status code response.</p>
     */
    inline ApplicationMetrics& WithStatusCodes(const StatusCodes& value) { SetStatusCodes(value); return *this;}

    /**
     * <p>Represents the percentage of requests over the last 10 seconds that resulted
     * in each type of status code response.</p>
     */
    inline ApplicationMetrics& WithStatusCodes(StatusCodes&& value) { SetStatusCodes(value); return *this;}

    /**
     * <p>Represents the average latency for the slowest X percent of requests over the
     * last 10 seconds. Latencies are in seconds with one milisecond resolution.</p>
     */
    inline const Latency& GetLatency() const{ return m_latency; }

    /**
     * <p>Represents the average latency for the slowest X percent of requests over the
     * last 10 seconds. Latencies are in seconds with one milisecond resolution.</p>
     */
    inline void SetLatency(const Latency& value) { m_latencyHasBeenSet = true; m_latency = value; }

    /**
     * <p>Represents the average latency for the slowest X percent of requests over the
     * last 10 seconds. Latencies are in seconds with one milisecond resolution.</p>
     */
    inline void SetLatency(Latency&& value) { m_latencyHasBeenSet = true; m_latency = value; }

    /**
     * <p>Represents the average latency for the slowest X percent of requests over the
     * last 10 seconds. Latencies are in seconds with one milisecond resolution.</p>
     */
    inline ApplicationMetrics& WithLatency(const Latency& value) { SetLatency(value); return *this;}

    /**
     * <p>Represents the average latency for the slowest X percent of requests over the
     * last 10 seconds. Latencies are in seconds with one milisecond resolution.</p>
     */
    inline ApplicationMetrics& WithLatency(Latency&& value) { SetLatency(value); return *this;}

  private:
    int m_duration;
    bool m_durationHasBeenSet;
    int m_requestCount;
    bool m_requestCountHasBeenSet;
    StatusCodes m_statusCodes;
    bool m_statusCodesHasBeenSet;
    Latency m_latency;
    bool m_latencyHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
