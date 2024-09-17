/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssessmentRunNotification
  {
  public:
    AWS_INSPECTOR_API AssessmentRunNotification();
    AWS_INSPECTOR_API AssessmentRunNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date of the notification.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline AssessmentRunNotification& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline AssessmentRunNotification& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline const InspectorEvent& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const InspectorEvent& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(InspectorEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline AssessmentRunNotification& WithEvent(const InspectorEvent& value) { SetEvent(value); return *this;}
    inline AssessmentRunNotification& WithEvent(InspectorEvent&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message included in the notification.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AssessmentRunNotification& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AssessmentRunNotification& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AssessmentRunNotification& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Boolean value that specifies whether the notification represents an
     * error.</p>
     */
    inline bool GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(bool value) { m_errorHasBeenSet = true; m_error = value; }
    inline AssessmentRunNotification& WithError(bool value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }
    inline AssessmentRunNotification& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline AssessmentRunNotification& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline AssessmentRunNotification& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline const AssessmentRunNotificationSnsStatusCode& GetSnsPublishStatusCode() const{ return m_snsPublishStatusCode; }
    inline bool SnsPublishStatusCodeHasBeenSet() const { return m_snsPublishStatusCodeHasBeenSet; }
    inline void SetSnsPublishStatusCode(const AssessmentRunNotificationSnsStatusCode& value) { m_snsPublishStatusCodeHasBeenSet = true; m_snsPublishStatusCode = value; }
    inline void SetSnsPublishStatusCode(AssessmentRunNotificationSnsStatusCode&& value) { m_snsPublishStatusCodeHasBeenSet = true; m_snsPublishStatusCode = std::move(value); }
    inline AssessmentRunNotification& WithSnsPublishStatusCode(const AssessmentRunNotificationSnsStatusCode& value) { SetSnsPublishStatusCode(value); return *this;}
    inline AssessmentRunNotification& WithSnsPublishStatusCode(AssessmentRunNotificationSnsStatusCode&& value) { SetSnsPublishStatusCode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    InspectorEvent m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    AssessmentRunNotificationSnsStatusCode m_snsPublishStatusCode;
    bool m_snsPublishStatusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
