/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ScheduledInstanceRecurrence
  {
  public:
    AWS_EC2_API ScheduledInstanceRecurrence() = default;
    AWS_EC2_API ScheduledInstanceRecurrence(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ScheduledInstanceRecurrence& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or
     * <code>Monthly</code>).</p>
     */
    inline const Aws::String& GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    template<typename FrequencyT = Aws::String>
    void SetFrequency(FrequencyT&& value) { m_frequencyHasBeenSet = true; m_frequency = std::forward<FrequencyT>(value); }
    template<typename FrequencyT = Aws::String>
    ScheduledInstanceRecurrence& WithFrequency(FrequencyT&& value) { SetFrequency(std::forward<FrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval quantity. The interval unit depends on the value of
     * <code>frequency</code>. For example, every 2 weeks or every 2 months.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline ScheduledInstanceRecurrence& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The days. For a monthly schedule, this is one or more days of the month
     * (1-31). For a weekly schedule, this is one or more days of the week (1-7, where
     * 1 is Sunday).</p>
     */
    inline const Aws::Vector<int>& GetOccurrenceDaySet() const { return m_occurrenceDaySet; }
    inline bool OccurrenceDaySetHasBeenSet() const { return m_occurrenceDaySetHasBeenSet; }
    template<typename OccurrenceDaySetT = Aws::Vector<int>>
    void SetOccurrenceDaySet(OccurrenceDaySetT&& value) { m_occurrenceDaySetHasBeenSet = true; m_occurrenceDaySet = std::forward<OccurrenceDaySetT>(value); }
    template<typename OccurrenceDaySetT = Aws::Vector<int>>
    ScheduledInstanceRecurrence& WithOccurrenceDaySet(OccurrenceDaySetT&& value) { SetOccurrenceDaySet(std::forward<OccurrenceDaySetT>(value)); return *this;}
    inline ScheduledInstanceRecurrence& AddOccurrenceDaySet(int value) { m_occurrenceDaySetHasBeenSet = true; m_occurrenceDaySet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the occurrence is relative to the end of the specified week
     * or month.</p>
     */
    inline bool GetOccurrenceRelativeToEnd() const { return m_occurrenceRelativeToEnd; }
    inline bool OccurrenceRelativeToEndHasBeenSet() const { return m_occurrenceRelativeToEndHasBeenSet; }
    inline void SetOccurrenceRelativeToEnd(bool value) { m_occurrenceRelativeToEndHasBeenSet = true; m_occurrenceRelativeToEnd = value; }
    inline ScheduledInstanceRecurrence& WithOccurrenceRelativeToEnd(bool value) { SetOccurrenceRelativeToEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or
     * <code>DayOfMonth</code>).</p>
     */
    inline const Aws::String& GetOccurrenceUnit() const { return m_occurrenceUnit; }
    inline bool OccurrenceUnitHasBeenSet() const { return m_occurrenceUnitHasBeenSet; }
    template<typename OccurrenceUnitT = Aws::String>
    void SetOccurrenceUnit(OccurrenceUnitT&& value) { m_occurrenceUnitHasBeenSet = true; m_occurrenceUnit = std::forward<OccurrenceUnitT>(value); }
    template<typename OccurrenceUnitT = Aws::String>
    ScheduledInstanceRecurrence& WithOccurrenceUnit(OccurrenceUnitT&& value) { SetOccurrenceUnit(std::forward<OccurrenceUnitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_frequency;
    bool m_frequencyHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    Aws::Vector<int> m_occurrenceDaySet;
    bool m_occurrenceDaySetHasBeenSet = false;

    bool m_occurrenceRelativeToEnd{false};
    bool m_occurrenceRelativeToEndHasBeenSet = false;

    Aws::String m_occurrenceUnit;
    bool m_occurrenceUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
