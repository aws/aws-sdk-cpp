/**
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
    AWS_EC2_API InstanceStatusEvent() = default;
    AWS_EC2_API InstanceStatusEvent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStatusEvent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the event.</p>
     */
    inline const Aws::String& GetInstanceEventId() const { return m_instanceEventId; }
    inline bool InstanceEventIdHasBeenSet() const { return m_instanceEventIdHasBeenSet; }
    template<typename InstanceEventIdT = Aws::String>
    void SetInstanceEventId(InstanceEventIdT&& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = std::forward<InstanceEventIdT>(value); }
    template<typename InstanceEventIdT = Aws::String>
    InstanceStatusEvent& WithInstanceEventId(InstanceEventIdT&& value) { SetInstanceEventId(std::forward<InstanceEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event code.</p>
     */
    inline EventCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(EventCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline InstanceStatusEvent& WithCode(EventCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the event.</p> <p>After a scheduled event is completed, it
     * can still be described for up to a week. If the event has been completed, this
     * description starts with the following text: [Completed].</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InstanceStatusEvent& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest scheduled end time for the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    InstanceStatusEvent& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest scheduled start time for the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    InstanceStatusEvent& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deadline for starting the event.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBeforeDeadline() const { return m_notBeforeDeadline; }
    inline bool NotBeforeDeadlineHasBeenSet() const { return m_notBeforeDeadlineHasBeenSet; }
    template<typename NotBeforeDeadlineT = Aws::Utils::DateTime>
    void SetNotBeforeDeadline(NotBeforeDeadlineT&& value) { m_notBeforeDeadlineHasBeenSet = true; m_notBeforeDeadline = std::forward<NotBeforeDeadlineT>(value); }
    template<typename NotBeforeDeadlineT = Aws::Utils::DateTime>
    InstanceStatusEvent& WithNotBeforeDeadline(NotBeforeDeadlineT&& value) { SetNotBeforeDeadline(std::forward<NotBeforeDeadlineT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceEventId;
    bool m_instanceEventIdHasBeenSet = false;

    EventCode m_code{EventCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notBeforeDeadline{};
    bool m_notBeforeDeadlineHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
