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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EventSeverity.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes an event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EventDescription">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API EventDescription
  {
  public:
    EventDescription();
    EventDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    EventDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The date when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetEventDate() const{ return m_eventDate; }

    /**
     * <p>The date when the event occurred.</p>
     */
    inline bool EventDateHasBeenSet() const { return m_eventDateHasBeenSet; }

    /**
     * <p>The date when the event occurred.</p>
     */
    inline void SetEventDate(const Aws::Utils::DateTime& value) { m_eventDateHasBeenSet = true; m_eventDate = value; }

    /**
     * <p>The date when the event occurred.</p>
     */
    inline void SetEventDate(Aws::Utils::DateTime&& value) { m_eventDateHasBeenSet = true; m_eventDate = std::move(value); }

    /**
     * <p>The date when the event occurred.</p>
     */
    inline EventDescription& WithEventDate(const Aws::Utils::DateTime& value) { SetEventDate(value); return *this;}

    /**
     * <p>The date when the event occurred.</p>
     */
    inline EventDescription& WithEventDate(Aws::Utils::DateTime&& value) { SetEventDate(std::move(value)); return *this;}


    /**
     * <p>The event message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The event message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The event message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The event message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The event message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The event message.</p>
     */
    inline EventDescription& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The event message.</p>
     */
    inline EventDescription& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The event message.</p>
     */
    inline EventDescription& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The application associated with the event.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application associated with the event.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The application associated with the event.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application associated with the event.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The application associated with the event.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application associated with the event.</p>
     */
    inline EventDescription& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application associated with the event.</p>
     */
    inline EventDescription& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application associated with the event.</p>
     */
    inline EventDescription& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline EventDescription& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline EventDescription& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>The release label for the application version associated with this event.</p>
     */
    inline EventDescription& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline EventDescription& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline EventDescription& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration associated with this event.</p>
     */
    inline EventDescription& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline EventDescription& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline EventDescription& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment associated with this event.</p>
     */
    inline EventDescription& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The ARN of the platform.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the platform.</p>
     */
    inline EventDescription& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline EventDescription& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the platform.</p>
     */
    inline EventDescription& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline EventDescription& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline EventDescription& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The web service request ID for the activity of this event.</p>
     */
    inline EventDescription& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The severity level of this event.</p>
     */
    inline const EventSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity level of this event.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity level of this event.</p>
     */
    inline void SetSeverity(const EventSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity level of this event.</p>
     */
    inline void SetSeverity(EventSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity level of this event.</p>
     */
    inline EventDescription& WithSeverity(const EventSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity level of this event.</p>
     */
    inline EventDescription& WithSeverity(EventSeverity&& value) { SetSeverity(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_eventDate;
    bool m_eventDateHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    EventSeverity m_severity;
    bool m_severityHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
