/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a tumbling window, which is a repeating fixed-sized,
   * non-overlapping, and contiguous time window. You can use this window in metrics
   * to aggregate data from properties and other assets.</p> <p>You can use
   * <code>m</code>, <code>h</code>, <code>d</code>, and <code>w</code> when you
   * specify an interval or offset. Note that <code>m</code> represents minutes,
   * <code>h</code> represents hours, <code>d</code> represents days, and
   * <code>w</code> represents weeks. You can also use <code>s</code> to represent
   * seconds in <code>offset</code>.</p> <p>The <code>interval</code> and
   * <code>offset</code> parameters support the <a
   * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a>. For example,
   * <code>PT5S</code> represents 5 seconds, <code>PT5M</code> represents 5 minutes,
   * and <code>PT5H</code> represents 5 hours.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TumblingWindow">AWS
   * API Reference</a></p>
   */
  class TumblingWindow
  {
  public:
    AWS_IOTSITEWISE_API TumblingWindow();
    AWS_IOTSITEWISE_API TumblingWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API TumblingWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline const Aws::String& GetInterval() const{ return m_interval; }

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline void SetInterval(const Aws::String& value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline void SetInterval(Aws::String&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline void SetInterval(const char* value) { m_intervalHasBeenSet = true; m_interval.assign(value); }

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline TumblingWindow& WithInterval(const Aws::String& value) { SetInterval(value); return *this;}

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline TumblingWindow& WithInterval(Aws::String&& value) { SetInterval(std::move(value)); return *this;}

    /**
     * <p>The time interval for the tumbling window. The interval time must be between
     * 1 minute and 1 week.</p> <p>IoT SiteWise computes the <code>1w</code> interval
     * the end of Sunday at midnight each week (UTC), the <code>1d</code> interval at
     * the end of each day at midnight (UTC), the <code>1h</code> interval at the end
     * of each hour, and so on. </p> <p>When IoT SiteWise aggregates data points for
     * metric computations, the start of each interval is exclusive and the end of each
     * interval is inclusive. IoT SiteWise places the computed data point at the end of
     * the interval.</p>
     */
    inline TumblingWindow& WithInterval(const char* value) { SetInterval(value); return *this;}


    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetOffset() const{ return m_offset; }

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline void SetOffset(const Aws::String& value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline void SetOffset(Aws::String&& value) { m_offsetHasBeenSet = true; m_offset = std::move(value); }

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline void SetOffset(const char* value) { m_offsetHasBeenSet = true; m_offset.assign(value); }

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline TumblingWindow& WithOffset(const Aws::String& value) { SetOffset(value); return *this;}

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline TumblingWindow& WithOffset(Aws::String&& value) { SetOffset(std::move(value)); return *this;}

    /**
     * <p>The offset for the tumbling window. The <code>offset</code> parameter accepts
     * the following:</p> <ul> <li> <p>The offset time.</p> <p>For example, if you
     * specify <code>18h</code> for <code>offset</code> and <code>1d</code> for
     * <code>interval</code>, IoT SiteWise aggregates data in one of the following
     * ways:</p> <ul> <li> <p>If you create the metric before or at 6 PM (UTC), you get
     * the first aggregation result at 6 PM (UTC) on the day when you create the
     * metric.</p> </li> <li> <p>If you create the metric after 6 PM (UTC), you get the
     * first aggregation result at 6 PM (UTC) the next day.</p> </li> </ul> </li> <li>
     * <p>The ISO 8601 format.</p> <p>For example, if you specify <code>PT18H</code>
     * for <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT
     * SiteWise aggregates data in one of the following ways:</p> <ul> <li> <p>If you
     * create the metric before or at 6 PM (UTC), you get the first aggregation result
     * at 6 PM (UTC) on the day when you create the metric.</p> </li> <li> <p>If you
     * create the metric after 6 PM (UTC), you get the first aggregation result at 6 PM
     * (UTC) the next day.</p> </li> </ul> </li> <li> <p>The 24-hour clock.</p> <p>For
     * example, if you specify <code>00:03:00</code> for <code>offset</code>,
     * <code>5m</code> for <code>interval</code>, and you create the metric at 2 PM
     * (UTC), you get the first aggregation result at 2:03 PM (UTC). You get the second
     * aggregation result at 2:08 PM (UTC). </p> </li> <li> <p>The offset time
     * zone.</p> <p>For example, if you specify <code>2021-07-23T18:00-08</code> for
     * <code>offset</code> and <code>1d</code> for <code>interval</code>, IoT SiteWise
     * aggregates data in one of the following ways:</p> <ul> <li> <p>If you create the
     * metric before or at 6 PM (PST), you get the first aggregation result at 6 PM
     * (PST) on the day when you create the metric.</p> </li> <li> <p>If you create the
     * metric after 6 PM (PST), you get the first aggregation result at 6 PM (PST) the
     * next day.</p> </li> </ul> </li> </ul>
     */
    inline TumblingWindow& WithOffset(const char* value) { SetOffset(value); return *this;}

  private:

    Aws::String m_interval;
    bool m_intervalHasBeenSet = false;

    Aws::String m_offset;
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
