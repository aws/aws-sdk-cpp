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
#include <aws/ec2/model/EventCode.h>
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
   * <p>Describes a scheduled event for an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStatusEvent">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceStatusEvent
  {
  public:
    InstanceStatusEvent();
    InstanceStatusEvent(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceStatusEvent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetInstanceEventId() const{ return m_instanceEventId; }

    /**
     * <p>The ID of the event.</p>
     */
    inline bool InstanceEventIdHasBeenSet() const { return m_instanceEventIdHasBeenSet; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetInstanceEventId(const Aws::String& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = value; }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetInstanceEventId(Aws::String&& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = std::move(value); }

    /**
     * <p>The ID of the event.</p>
     */
    inline void SetInstanceEventId(const char* value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId.assign(value); }

    /**
     * <p>The ID of the event.</p>
     */
    inline InstanceStatusEvent& WithInstanceEventId(const Aws::String& value) { SetInstanceEventId(value); return *this;}

    /**
     * <p>The ID of the event.</p>
     */
    inline InstanceStatusEvent& WithInstanceEventId(Aws::String&& value) { SetInstanceEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event.</p>
     */
    inline InstanceStatusEvent& WithInstanceEventId(const char* value) { SetInstanceEventId(value); return *this;}


    /**
     * <p>The event code.</p>
     */
    inline const EventCode& GetCode() const{ return m_code; }

    /**
     * <p>The event code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The event code.</p>
     */
    inline void SetCode(const EventCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The event code.</p>
     */
    inline void SetCode(EventCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The event code.</p>
     */
    inline InstanceStatusEvent& WithCode(const EventCode& value) { SetCode(value); return *this;}

    /**
     * <p>The event code.</p>
     */
    inline InstanceStatusEvent& WithCode(EventCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline InstanceStatusEvent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline InstanceStatusEvent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline InstanceStatusEvent& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }

    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }

    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline InstanceStatusEvent& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}

    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline InstanceStatusEvent& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}


    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline InstanceStatusEvent& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline InstanceStatusEvent& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}


    /**
     * <p>The deadline for starting the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBeforeDeadline() const{ return m_notBeforeDeadline; }

    /**
     * <p>The deadline for starting the event.</p>
     */
    inline bool NotBeforeDeadlineHasBeenSet() const { return m_notBeforeDeadlineHasBeenSet; }

    /**
     * <p>The deadline for starting the event.</p>
     */
    inline void SetNotBeforeDeadline(const Aws::Utils::DateTime& value) { m_notBeforeDeadlineHasBeenSet = true; m_notBeforeDeadline = value; }

    /**
     * <p>The deadline for starting the event.</p>
     */
    inline void SetNotBeforeDeadline(Aws::Utils::DateTime&& value) { m_notBeforeDeadlineHasBeenSet = true; m_notBeforeDeadline = std::move(value); }

    /**
     * <p>The deadline for starting the event.</p>
     */
    inline InstanceStatusEvent& WithNotBeforeDeadline(const Aws::Utils::DateTime& value) { SetNotBeforeDeadline(value); return *this;}

    /**
     * <p>The deadline for starting the event.</p>
     */
    inline InstanceStatusEvent& WithNotBeforeDeadline(Aws::Utils::DateTime&& value) { SetNotBeforeDeadline(std::move(value)); return *this;}

  private:

    Aws::String m_instanceEventId;
    bool m_instanceEventIdHasBeenSet;

    EventCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet;

    Aws::Utils::DateTime m_notBeforeDeadline;
    bool m_notBeforeDeadlineHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
