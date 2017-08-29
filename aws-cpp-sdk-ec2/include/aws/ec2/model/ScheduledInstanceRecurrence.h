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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the recurring schedule for a Scheduled Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstanceRecurrence">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstanceRecurrence
  {
  public:
    ScheduledInstanceRecurrence();
    ScheduledInstanceRecurrence(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstanceRecurrence& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline const Aws::String& GetFrequency() const{ return m_frequency; }

    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline void SetFrequency(const Aws::String& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline void SetFrequency(Aws::String&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline void SetFrequency(const char* value) { m_frequencyHasBeenSet = true; m_frequency.assign(value); }

    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline ScheduledInstanceRecurrence& WithFrequency(const Aws::String& value) { SetFrequency(value); return *this;}

    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline ScheduledInstanceRecurrence& WithFrequency(Aws::String&& value) { SetFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline ScheduledInstanceRecurrence& WithFrequency(const char* value) { SetFrequency(value); return *this;}


    /**
     * <p>The interval quantity. The interval unit depends on the value of
     * <code>frequency</code>. For example, every 2 weeks or every 2 months.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The interval quantity. The interval unit depends on the value of
     * <code>frequency</code>. For example, every 2 weeks or every 2 months.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The interval quantity. The interval unit depends on the value of
     * <code>frequency</code>. For example, every 2 weeks or every 2 months.</p>
     */
    inline ScheduledInstanceRecurrence& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline const Aws::Vector<int>& GetOccurrenceDaySet() const{ return m_occurrenceDaySet; }

    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline void SetOccurrenceDaySet(const Aws::Vector<int>& value) { m_occurrenceDaySetHasBeenSet = true; m_occurrenceDaySet = value; }

    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline void SetOccurrenceDaySet(Aws::Vector<int>&& value) { m_occurrenceDaySetHasBeenSet = true; m_occurrenceDaySet = std::move(value); }

    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline ScheduledInstanceRecurrence& WithOccurrenceDaySet(const Aws::Vector<int>& value) { SetOccurrenceDaySet(value); return *this;}

    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline ScheduledInstanceRecurrence& WithOccurrenceDaySet(Aws::Vector<int>&& value) { SetOccurrenceDaySet(std::move(value)); return *this;}

    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline ScheduledInstanceRecurrence& AddOccurrenceDaySet(int value) { m_occurrenceDaySetHasBeenSet = true; m_occurrenceDaySet.push_back(value); return *this; }


    /**
     * <p>Indicates whether the occurrence is relative to the end of the specified week
     * or month.</p>
     */
    inline bool GetOccurrenceRelativeToEnd() const{ return m_occurrenceRelativeToEnd; }

    /**
     * <p>Indicates whether the occurrence is relative to the end of the specified week
     * or month.</p>
     */
    inline void SetOccurrenceRelativeToEnd(bool value) { m_occurrenceRelativeToEndHasBeenSet = true; m_occurrenceRelativeToEnd = value; }

    /**
     * <p>Indicates whether the occurrence is relative to the end of the specified week
     * or month.</p>
     */
    inline ScheduledInstanceRecurrence& WithOccurrenceRelativeToEnd(bool value) { SetOccurrenceRelativeToEnd(value); return *this;}


    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline const Aws::String& GetOccurrenceUnit() const{ return m_occurrenceUnit; }

    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline void SetOccurrenceUnit(const Aws::String& value) { m_occurrenceUnitHasBeenSet = true; m_occurrenceUnit = value; }

    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline void SetOccurrenceUnit(Aws::String&& value) { m_occurrenceUnitHasBeenSet = true; m_occurrenceUnit = std::move(value); }

    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline void SetOccurrenceUnit(const char* value) { m_occurrenceUnitHasBeenSet = true; m_occurrenceUnit.assign(value); }

    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline ScheduledInstanceRecurrence& WithOccurrenceUnit(const Aws::String& value) { SetOccurrenceUnit(value); return *this;}

    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline ScheduledInstanceRecurrence& WithOccurrenceUnit(Aws::String&& value) { SetOccurrenceUnit(std::move(value)); return *this;}

    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline ScheduledInstanceRecurrence& WithOccurrenceUnit(const char* value) { SetOccurrenceUnit(value); return *this;}

  private:

    Aws::String m_frequency;
    bool m_frequencyHasBeenSet;

    int m_interval;
    bool m_intervalHasBeenSet;

    Aws::Vector<int> m_occurrenceDaySet;
    bool m_occurrenceDaySetHasBeenSet;

    bool m_occurrenceRelativeToEnd;
    bool m_occurrenceRelativeToEndHasBeenSet;

    Aws::String m_occurrenceUnit;
    bool m_occurrenceUnitHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
