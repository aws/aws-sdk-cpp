/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/EventInformation.h>
#include <aws/ec2/model/EventType.h>
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
   * <p>Describes an event in the history of the Spot Fleet request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HistoryRecord">AWS
   * API Reference</a></p>
   */
  class HistoryRecord
  {
  public:
    AWS_EC2_API HistoryRecord();
    AWS_EC2_API HistoryRecord(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HistoryRecord& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Information about the event.</p>
     */
    inline const EventInformation& GetEventInformation() const{ return m_eventInformation; }

    /**
     * <p>Information about the event.</p>
     */
    inline bool EventInformationHasBeenSet() const { return m_eventInformationHasBeenSet; }

    /**
     * <p>Information about the event.</p>
     */
    inline void SetEventInformation(const EventInformation& value) { m_eventInformationHasBeenSet = true; m_eventInformation = value; }

    /**
     * <p>Information about the event.</p>
     */
    inline void SetEventInformation(EventInformation&& value) { m_eventInformationHasBeenSet = true; m_eventInformation = std::move(value); }

    /**
     * <p>Information about the event.</p>
     */
    inline HistoryRecord& WithEventInformation(const EventInformation& value) { SetEventInformation(value); return *this;}

    /**
     * <p>Information about the event.</p>
     */
    inline HistoryRecord& WithEventInformation(EventInformation&& value) { SetEventInformation(std::move(value)); return *this;}


    /**
     * <p>The event type.</p> <ul> <li> <p> <code>error</code> - An error with the Spot
     * Fleet request.</p> </li> <li> <p> <code>fleetRequestChange</code> - A change in
     * the status or configuration of the Spot Fleet request.</p> </li> <li> <p>
     * <code>instanceChange</code> - An instance was launched or terminated.</p> </li>
     * <li> <p> <code>Information</code> - An informational event.</p> </li> </ul>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type.</p> <ul> <li> <p> <code>error</code> - An error with the Spot
     * Fleet request.</p> </li> <li> <p> <code>fleetRequestChange</code> - A change in
     * the status or configuration of the Spot Fleet request.</p> </li> <li> <p>
     * <code>instanceChange</code> - An instance was launched or terminated.</p> </li>
     * <li> <p> <code>Information</code> - An informational event.</p> </li> </ul>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The event type.</p> <ul> <li> <p> <code>error</code> - An error with the Spot
     * Fleet request.</p> </li> <li> <p> <code>fleetRequestChange</code> - A change in
     * the status or configuration of the Spot Fleet request.</p> </li> <li> <p>
     * <code>instanceChange</code> - An instance was launched or terminated.</p> </li>
     * <li> <p> <code>Information</code> - An informational event.</p> </li> </ul>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type.</p> <ul> <li> <p> <code>error</code> - An error with the Spot
     * Fleet request.</p> </li> <li> <p> <code>fleetRequestChange</code> - A change in
     * the status or configuration of the Spot Fleet request.</p> </li> <li> <p>
     * <code>instanceChange</code> - An instance was launched or terminated.</p> </li>
     * <li> <p> <code>Information</code> - An informational event.</p> </li> </ul>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type.</p> <ul> <li> <p> <code>error</code> - An error with the Spot
     * Fleet request.</p> </li> <li> <p> <code>fleetRequestChange</code> - A change in
     * the status or configuration of the Spot Fleet request.</p> </li> <li> <p>
     * <code>instanceChange</code> - An instance was launched or terminated.</p> </li>
     * <li> <p> <code>Information</code> - An informational event.</p> </li> </ul>
     */
    inline HistoryRecord& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type.</p> <ul> <li> <p> <code>error</code> - An error with the Spot
     * Fleet request.</p> </li> <li> <p> <code>fleetRequestChange</code> - A change in
     * the status or configuration of the Spot Fleet request.</p> </li> <li> <p>
     * <code>instanceChange</code> - An instance was launched or terminated.</p> </li>
     * <li> <p> <code>Information</code> - An informational event.</p> </li> </ul>
     */
    inline HistoryRecord& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline HistoryRecord& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline HistoryRecord& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    EventInformation m_eventInformation;
    bool m_eventInformationHasBeenSet = false;

    EventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
