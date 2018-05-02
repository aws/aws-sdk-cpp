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
   * <p>Describes an event in the history of the EC2 Fleet.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HistoryRecordEntry">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API HistoryRecordEntry
  {
  public:
    HistoryRecordEntry();
    HistoryRecordEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    HistoryRecordEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Information about the event.</p>
     */
    inline const EventInformation& GetEventInformation() const{ return m_eventInformation; }

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
    inline HistoryRecordEntry& WithEventInformation(const EventInformation& value) { SetEventInformation(value); return *this;}

    /**
     * <p>Information about the event.</p>
     */
    inline HistoryRecordEntry& WithEventInformation(EventInformation&& value) { SetEventInformation(std::move(value)); return *this;}


    /**
     * <p>The event type.</p>
     */
    inline const FleetEventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type.</p>
     */
    inline void SetEventType(const FleetEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type.</p>
     */
    inline void SetEventType(FleetEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type.</p>
     */
    inline HistoryRecordEntry& WithEventType(const FleetEventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type.</p>
     */
    inline HistoryRecordEntry& WithEventType(FleetEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

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
    inline HistoryRecordEntry& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The date and time of the event, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline HistoryRecordEntry& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    EventInformation m_eventInformation;
    bool m_eventInformationHasBeenSet;

    FleetEventType m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
