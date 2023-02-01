/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/WeekDay.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The start day and time and the end day and time of the time range, in
   * UTC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceEventWindowTimeRangeRequest">AWS
   * API Reference</a></p>
   */
  class InstanceEventWindowTimeRangeRequest
  {
  public:
    AWS_EC2_API InstanceEventWindowTimeRangeRequest();
    AWS_EC2_API InstanceEventWindowTimeRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowTimeRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The day on which the time range begins.</p>
     */
    inline const WeekDay& GetStartWeekDay() const{ return m_startWeekDay; }

    /**
     * <p>The day on which the time range begins.</p>
     */
    inline bool StartWeekDayHasBeenSet() const { return m_startWeekDayHasBeenSet; }

    /**
     * <p>The day on which the time range begins.</p>
     */
    inline void SetStartWeekDay(const WeekDay& value) { m_startWeekDayHasBeenSet = true; m_startWeekDay = value; }

    /**
     * <p>The day on which the time range begins.</p>
     */
    inline void SetStartWeekDay(WeekDay&& value) { m_startWeekDayHasBeenSet = true; m_startWeekDay = std::move(value); }

    /**
     * <p>The day on which the time range begins.</p>
     */
    inline InstanceEventWindowTimeRangeRequest& WithStartWeekDay(const WeekDay& value) { SetStartWeekDay(value); return *this;}

    /**
     * <p>The day on which the time range begins.</p>
     */
    inline InstanceEventWindowTimeRangeRequest& WithStartWeekDay(WeekDay&& value) { SetStartWeekDay(std::move(value)); return *this;}


    /**
     * <p>The hour when the time range begins.</p>
     */
    inline int GetStartHour() const{ return m_startHour; }

    /**
     * <p>The hour when the time range begins.</p>
     */
    inline bool StartHourHasBeenSet() const { return m_startHourHasBeenSet; }

    /**
     * <p>The hour when the time range begins.</p>
     */
    inline void SetStartHour(int value) { m_startHourHasBeenSet = true; m_startHour = value; }

    /**
     * <p>The hour when the time range begins.</p>
     */
    inline InstanceEventWindowTimeRangeRequest& WithStartHour(int value) { SetStartHour(value); return *this;}


    /**
     * <p>The day on which the time range ends.</p>
     */
    inline const WeekDay& GetEndWeekDay() const{ return m_endWeekDay; }

    /**
     * <p>The day on which the time range ends.</p>
     */
    inline bool EndWeekDayHasBeenSet() const { return m_endWeekDayHasBeenSet; }

    /**
     * <p>The day on which the time range ends.</p>
     */
    inline void SetEndWeekDay(const WeekDay& value) { m_endWeekDayHasBeenSet = true; m_endWeekDay = value; }

    /**
     * <p>The day on which the time range ends.</p>
     */
    inline void SetEndWeekDay(WeekDay&& value) { m_endWeekDayHasBeenSet = true; m_endWeekDay = std::move(value); }

    /**
     * <p>The day on which the time range ends.</p>
     */
    inline InstanceEventWindowTimeRangeRequest& WithEndWeekDay(const WeekDay& value) { SetEndWeekDay(value); return *this;}

    /**
     * <p>The day on which the time range ends.</p>
     */
    inline InstanceEventWindowTimeRangeRequest& WithEndWeekDay(WeekDay&& value) { SetEndWeekDay(std::move(value)); return *this;}


    /**
     * <p>The hour when the time range ends.</p>
     */
    inline int GetEndHour() const{ return m_endHour; }

    /**
     * <p>The hour when the time range ends.</p>
     */
    inline bool EndHourHasBeenSet() const { return m_endHourHasBeenSet; }

    /**
     * <p>The hour when the time range ends.</p>
     */
    inline void SetEndHour(int value) { m_endHourHasBeenSet = true; m_endHour = value; }

    /**
     * <p>The hour when the time range ends.</p>
     */
    inline InstanceEventWindowTimeRangeRequest& WithEndHour(int value) { SetEndHour(value); return *this;}

  private:

    WeekDay m_startWeekDay;
    bool m_startWeekDayHasBeenSet = false;

    int m_startHour;
    bool m_startHourHasBeenSet = false;

    WeekDay m_endWeekDay;
    bool m_endWeekDayHasBeenSet = false;

    int m_endHour;
    bool m_endHourHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
