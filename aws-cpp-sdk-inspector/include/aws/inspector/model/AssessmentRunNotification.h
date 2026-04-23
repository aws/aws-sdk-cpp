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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector/model/InspectorEvent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentRunNotificationSnsStatusCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Used as one of the elements of the <a>AssessmentRun</a> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentRunNotification">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentRunNotification
  {
  public:
    AssessmentRunNotification();
    AssessmentRunNotification(Aws::Utils::Json::JsonView jsonValue);
    AssessmentRunNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date of the notification.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date of the notification.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date of the notification.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date of the notification.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date of the notification.</p>
     */
    inline AssessmentRunNotification& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date of the notification.</p>
     */
    inline AssessmentRunNotification& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline const InspectorEvent& GetEvent() const{ return m_event; }

    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline void SetEvent(const InspectorEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline void SetEvent(InspectorEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline AssessmentRunNotification& WithEvent(const InspectorEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline AssessmentRunNotification& WithEvent(InspectorEvent&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The message included in the notification.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message included in the notification.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message included in the notification.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message included in the notification.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message included in the notification.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message included in the notification.</p>
     */
    inline AssessmentRunNotification& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message included in the notification.</p>
     */
    inline AssessmentRunNotification& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message included in the notification.</p>
     */
    inline AssessmentRunNotification& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The Boolean value that specifies whether the notification represents an
     * error.</p>
     */
    inline bool GetError() const{ return m_error; }

    /**
     * <p>The Boolean value that specifies whether the notification represents an
     * error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The Boolean value that specifies whether the notification represents an
     * error.</p>
     */
    inline void SetError(bool value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The Boolean value that specifies whether the notification represents an
     * error.</p>
     */
    inline AssessmentRunNotification& WithError(bool value) { SetError(value); return *this;}


    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline AssessmentRunNotification& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline AssessmentRunNotification& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline AssessmentRunNotification& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline const AssessmentRunNotificationSnsStatusCode& GetSnsPublishStatusCode() const{ return m_snsPublishStatusCode; }

    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline bool SnsPublishStatusCodeHasBeenSet() const { return m_snsPublishStatusCodeHasBeenSet; }

    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline void SetSnsPublishStatusCode(const AssessmentRunNotificationSnsStatusCode& value) { m_snsPublishStatusCodeHasBeenSet = true; m_snsPublishStatusCode = value; }

    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline void SetSnsPublishStatusCode(AssessmentRunNotificationSnsStatusCode&& value) { m_snsPublishStatusCodeHasBeenSet = true; m_snsPublishStatusCode = std::move(value); }

    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline AssessmentRunNotification& WithSnsPublishStatusCode(const AssessmentRunNotificationSnsStatusCode& value) { SetSnsPublishStatusCode(value); return *this;}

    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline AssessmentRunNotification& WithSnsPublishStatusCode(AssessmentRunNotificationSnsStatusCode&& value) { SetSnsPublishStatusCode(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet;

    InspectorEvent m_event;
    bool m_eventHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    bool m_error;
    bool m_errorHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    AssessmentRunNotificationSnsStatusCode m_snsPublishStatusCode;
    bool m_snsPublishStatusCodeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
