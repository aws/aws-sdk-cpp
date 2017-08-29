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
#include <aws/ec2/model/EventCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
     * <p>The event code.</p>
     */
    inline const EventCode& GetCode() const{ return m_code; }

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

  private:

    EventCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
