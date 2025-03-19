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
    AWS_EC2_API InstanceEventWindowTimeRangeRequest() = default;
    AWS_EC2_API InstanceEventWindowTimeRangeRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowTimeRangeRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The day on which the time range begins.</p>
     */
    inline WeekDay GetStartWeekDay() const { return m_startWeekDay; }
    inline bool StartWeekDayHasBeenSet() const { return m_startWeekDayHasBeenSet; }
    inline void SetStartWeekDay(WeekDay value) { m_startWeekDayHasBeenSet = true; m_startWeekDay = value; }
    inline InstanceEventWindowTimeRangeRequest& WithStartWeekDay(WeekDay value) { SetStartWeekDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour when the time range begins.</p>
     */
    inline int GetStartHour() const { return m_startHour; }
    inline bool StartHourHasBeenSet() const { return m_startHourHasBeenSet; }
    inline void SetStartHour(int value) { m_startHourHasBeenSet = true; m_startHour = value; }
    inline InstanceEventWindowTimeRangeRequest& WithStartHour(int value) { SetStartHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day on which the time range ends.</p>
     */
    inline WeekDay GetEndWeekDay() const { return m_endWeekDay; }
    inline bool EndWeekDayHasBeenSet() const { return m_endWeekDayHasBeenSet; }
    inline void SetEndWeekDay(WeekDay value) { m_endWeekDayHasBeenSet = true; m_endWeekDay = value; }
    inline InstanceEventWindowTimeRangeRequest& WithEndWeekDay(WeekDay value) { SetEndWeekDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour when the time range ends.</p>
     */
    inline int GetEndHour() const { return m_endHour; }
    inline bool EndHourHasBeenSet() const { return m_endHourHasBeenSet; }
    inline void SetEndHour(int value) { m_endHourHasBeenSet = true; m_endHour = value; }
    inline InstanceEventWindowTimeRangeRequest& WithEndHour(int value) { SetEndHour(value); return *this;}
    ///@}
  private:

    WeekDay m_startWeekDay{WeekDay::NOT_SET};
    bool m_startWeekDayHasBeenSet = false;

    int m_startHour{0};
    bool m_startHourHasBeenSet = false;

    WeekDay m_endWeekDay{WeekDay::NOT_SET};
    bool m_endWeekDayHasBeenSet = false;

    int m_endHour{0};
    bool m_endHourHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
