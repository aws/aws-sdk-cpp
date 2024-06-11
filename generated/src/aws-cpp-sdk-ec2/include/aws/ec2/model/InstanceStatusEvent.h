﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceStatusEvent
  {
  public:
    AWS_EC2_API InstanceStatusEvent();
    AWS_EC2_API InstanceStatusEvent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStatusEvent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetInstanceEventId() const{ return m_instanceEventId; }
    inline bool InstanceEventIdHasBeenSet() const { return m_instanceEventIdHasBeenSet; }
    inline void SetInstanceEventId(const Aws::String& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = value; }
    inline void SetInstanceEventId(Aws::String&& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = std::move(value); }
    inline void SetInstanceEventId(const char* value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId.assign(value); }
    inline InstanceStatusEvent& WithInstanceEventId(const Aws::String& value) { SetInstanceEventId(value); return *this;}
    inline InstanceStatusEvent& WithInstanceEventId(Aws::String&& value) { SetInstanceEventId(std::move(value)); return *this;}
    inline InstanceStatusEvent& WithInstanceEventId(const char* value) { SetInstanceEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event code.</p>
     */
    inline const EventCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const EventCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(EventCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline InstanceStatusEvent& WithCode(const EventCode& value) { SetCode(value); return *this;}
    inline InstanceStatusEvent& WithCode(EventCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline InstanceStatusEvent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InstanceStatusEvent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InstanceStatusEvent& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }
    inline InstanceStatusEvent& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}
    inline InstanceStatusEvent& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }
    inline InstanceStatusEvent& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}
    inline InstanceStatusEvent& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deadline for starting the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBeforeDeadline() const{ return m_notBeforeDeadline; }
    inline bool NotBeforeDeadlineHasBeenSet() const { return m_notBeforeDeadlineHasBeenSet; }
    inline void SetNotBeforeDeadline(const Aws::Utils::DateTime& value) { m_notBeforeDeadlineHasBeenSet = true; m_notBeforeDeadline = value; }
    inline void SetNotBeforeDeadline(Aws::Utils::DateTime&& value) { m_notBeforeDeadlineHasBeenSet = true; m_notBeforeDeadline = std::move(value); }
    inline InstanceStatusEvent& WithNotBeforeDeadline(const Aws::Utils::DateTime& value) { SetNotBeforeDeadline(value); return *this;}
    inline InstanceStatusEvent& WithNotBeforeDeadline(Aws::Utils::DateTime&& value) { SetNotBeforeDeadline(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceEventId;
    bool m_instanceEventIdHasBeenSet = false;

    EventCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notBeforeDeadline;
    bool m_notBeforeDeadlineHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
