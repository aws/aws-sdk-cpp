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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/Range.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>The configuration specifies details about how the anomaly detection model is
   * to be trained, including time ranges to exclude from use for training the model
   * and the time zone to use for the metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AnomalyDetectorConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API AnomalyDetectorConfiguration
  {
  public:
    AnomalyDetectorConfiguration();
    AnomalyDetectorConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AnomalyDetectorConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline const Aws::Vector<Range>& GetExcludedTimeRanges() const{ return m_excludedTimeRanges; }

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline bool ExcludedTimeRangesHasBeenSet() const { return m_excludedTimeRangesHasBeenSet; }

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline void SetExcludedTimeRanges(const Aws::Vector<Range>& value) { m_excludedTimeRangesHasBeenSet = true; m_excludedTimeRanges = value; }

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline void SetExcludedTimeRanges(Aws::Vector<Range>&& value) { m_excludedTimeRangesHasBeenSet = true; m_excludedTimeRanges = std::move(value); }

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline AnomalyDetectorConfiguration& WithExcludedTimeRanges(const Aws::Vector<Range>& value) { SetExcludedTimeRanges(value); return *this;}

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline AnomalyDetectorConfiguration& WithExcludedTimeRanges(Aws::Vector<Range>&& value) { SetExcludedTimeRanges(std::move(value)); return *this;}

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline AnomalyDetectorConfiguration& AddExcludedTimeRanges(const Range& value) { m_excludedTimeRangesHasBeenSet = true; m_excludedTimeRanges.push_back(value); return *this; }

    /**
     * <p>An array of time ranges to exclude from use when the anomaly detection model
     * is trained. Use this to make sure that events that could cause unusual values
     * for the metric, such as deployments, aren't used when CloudWatch creates the
     * model.</p>
     */
    inline AnomalyDetectorConfiguration& AddExcludedTimeRanges(Range&& value) { m_excludedTimeRangesHasBeenSet = true; m_excludedTimeRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline const Aws::String& GetMetricTimezone() const{ return m_metricTimezone; }

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline bool MetricTimezoneHasBeenSet() const { return m_metricTimezoneHasBeenSet; }

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline void SetMetricTimezone(const Aws::String& value) { m_metricTimezoneHasBeenSet = true; m_metricTimezone = value; }

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline void SetMetricTimezone(Aws::String&& value) { m_metricTimezoneHasBeenSet = true; m_metricTimezone = std::move(value); }

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline void SetMetricTimezone(const char* value) { m_metricTimezoneHasBeenSet = true; m_metricTimezone.assign(value); }

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline AnomalyDetectorConfiguration& WithMetricTimezone(const Aws::String& value) { SetMetricTimezone(value); return *this;}

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline AnomalyDetectorConfiguration& WithMetricTimezone(Aws::String&& value) { SetMetricTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone to use for the metric. This is useful to enable the model to
     * automatically account for daylight savings time changes if the metric is
     * sensitive to such time changes.</p> <p>To specify a time zone, use the name of
     * the time zone as specified in the standard tz database. For more information,
     * see <a href="https://en.wikipedia.org/wiki/Tz_database">tz database</a>.</p>
     */
    inline AnomalyDetectorConfiguration& WithMetricTimezone(const char* value) { SetMetricTimezone(value); return *this;}

  private:

    Aws::Vector<Range> m_excludedTimeRanges;
    bool m_excludedTimeRangesHasBeenSet;

    Aws::String m_metricTimezone;
    bool m_metricTimezoneHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
