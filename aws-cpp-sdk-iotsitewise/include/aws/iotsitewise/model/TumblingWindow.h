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
   * non-overlapping, and contiguous time interval. This window is used in metric and
   * aggregation computations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TumblingWindow">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API TumblingWindow
  {
  public:
    TumblingWindow();
    TumblingWindow(Aws::Utils::Json::JsonView jsonValue);
    TumblingWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline const Aws::String& GetInterval() const{ return m_interval; }

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline void SetInterval(const Aws::String& value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline void SetInterval(Aws::String&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline void SetInterval(const char* value) { m_intervalHasBeenSet = true; m_interval.assign(value); }

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline TumblingWindow& WithInterval(const Aws::String& value) { SetInterval(value); return *this;}

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline TumblingWindow& WithInterval(Aws::String&& value) { SetInterval(std::move(value)); return *this;}

    /**
     * <p>The time interval for the tumbling window. Note that <code>w</code>
     * represents weeks, <code>d</code> represents days, <code>h</code> represents
     * hours, and <code>m</code> represents minutes. AWS IoT SiteWise computes the
     * <code>1w</code> interval the end of Sunday at midnight each week (UTC), the
     * <code>1d</code> interval at the end of each day at midnight (UTC), the
     * <code>1h</code> interval at the end of each hour, and so on. </p> <p>When AWS
     * IoT SiteWise aggregates data points for metric computations, the start of each
     * interval is exclusive and the end of each interval is inclusive. AWS IoT
     * SiteWise places the computed data point at the end of the interval.</p>
     */
    inline TumblingWindow& WithInterval(const char* value) { SetInterval(value); return *this;}

  private:

    Aws::String m_interval;
    bool m_intervalHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
