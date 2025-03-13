/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/EventInformation.h>
#include <aws/ec2/model/FleetEventType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes an event in the history of an EC2 Fleet.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HistoryRecordEntry">AWS
   * API Reference</a></p>
   */
  class HistoryRecordEntry
  {
  public:
    AWS_EC2_API HistoryRecordEntry() = default;
    AWS_EC2_API HistoryRecordEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HistoryRecordEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Information about the event.</p>
     */
    inline const EventInformation& GetEventInformation() const { return m_eventInformation; }
    inline bool EventInformationHasBeenSet() const { return m_eventInformationHasBeenSet; }
    template<typename EventInformationT = EventInformation>
    void SetEventInformation(EventInformationT&& value) { m_eventInformationHasBeenSet = true; m_eventInformation = std::forward<EventInformationT>(value); }
    template<typename EventInformationT = EventInformation>
    HistoryRecordEntry& WithEventInformation(EventInformationT&& value) { SetEventInformation(std::forward<EventInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type.</p>
     */
    inline FleetEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(FleetEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline HistoryRecordEntry& WithEventType(FleetEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    HistoryRecordEntry& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    EventInformation m_eventInformation;
    bool m_eventInformationHasBeenSet = false;

    FleetEventType m_eventType{FleetEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
