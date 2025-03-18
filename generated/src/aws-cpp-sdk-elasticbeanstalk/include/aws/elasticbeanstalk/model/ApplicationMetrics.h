/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/StatusCodes.h>
#include <aws/elasticbeanstalk/model/Latency.h>
#include <utility>

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
   * <p>Application request metrics for an AWS Elastic Beanstalk
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationMetrics">AWS
   * API Reference</a></p>
   */
  class ApplicationMetrics
  {
  public:
    AWS_ELASTICBEANSTALK_API ApplicationMetrics() = default;
    AWS_ELASTICBEANSTALK_API ApplicationMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ApplicationMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The amount of time that the metrics cover (usually 10 seconds). For example,
     * you might have 5 requests (<code>request_count</code>) within the most recent
     * time slice of 10 seconds (<code>duration</code>).</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ApplicationMetrics& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Average number of requests handled by the web server per second over the last
     * 10 seconds.</p>
     */
    inline int GetRequestCount() const { return m_requestCount; }
    inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
    inline void SetRequestCount(int value) { m_requestCountHasBeenSet = true; m_requestCount = value; }
    inline ApplicationMetrics& WithRequestCount(int value) { SetRequestCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the percentage of requests over the last 10 seconds that resulted
     * in each type of status code response.</p>
     */
    inline const StatusCodes& GetStatusCodes() const { return m_statusCodes; }
    inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }
    template<typename StatusCodesT = StatusCodes>
    void SetStatusCodes(StatusCodesT&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = std::forward<StatusCodesT>(value); }
    template<typename StatusCodesT = StatusCodes>
    ApplicationMetrics& WithStatusCodes(StatusCodesT&& value) { SetStatusCodes(std::forward<StatusCodesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the average latency for the slowest X percent of requests over the
     * last 10 seconds. Latencies are in seconds with one millisecond resolution.</p>
     */
    inline const Latency& GetLatency() const { return m_latency; }
    inline bool LatencyHasBeenSet() const { return m_latencyHasBeenSet; }
    template<typename LatencyT = Latency>
    void SetLatency(LatencyT&& value) { m_latencyHasBeenSet = true; m_latency = std::forward<LatencyT>(value); }
    template<typename LatencyT = Latency>
    ApplicationMetrics& WithLatency(LatencyT&& value) { SetLatency(std::forward<LatencyT>(value)); return *this;}
    ///@}
  private:

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    int m_requestCount{0};
    bool m_requestCountHasBeenSet = false;

    StatusCodes m_statusCodes;
    bool m_statusCodesHasBeenSet = false;

    Latency m_latency;
    bool m_latencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
