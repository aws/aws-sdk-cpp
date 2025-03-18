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
    AWS_INSPECTOR_API AssessmentRunNotification() = default;
    AWS_INSPECTOR_API AssessmentRunNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date of the notification.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    AssessmentRunNotification& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event for which a notification is sent.</p>
     */
    inline InspectorEvent GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(InspectorEvent value) { m_eventHasBeenSet = true; m_event = value; }
    inline AssessmentRunNotification& WithEvent(InspectorEvent value) { SetEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message included in the notification.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AssessmentRunNotification& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Boolean value that specifies whether the notification represents an
     * error.</p>
     */
    inline bool GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(bool value) { m_errorHasBeenSet = true; m_error = value; }
    inline AssessmentRunNotification& WithError(bool value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SNS topic to which the SNS notification is sent.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    AssessmentRunNotification& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code of the SNS notification.</p>
     */
    inline AssessmentRunNotificationSnsStatusCode GetSnsPublishStatusCode() const { return m_snsPublishStatusCode; }
    inline bool SnsPublishStatusCodeHasBeenSet() const { return m_snsPublishStatusCodeHasBeenSet; }
    inline void SetSnsPublishStatusCode(AssessmentRunNotificationSnsStatusCode value) { m_snsPublishStatusCodeHasBeenSet = true; m_snsPublishStatusCode = value; }
    inline AssessmentRunNotification& WithSnsPublishStatusCode(AssessmentRunNotificationSnsStatusCode value) { SetSnsPublishStatusCode(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    InspectorEvent m_event{InspectorEvent::NOT_SET};
    bool m_eventHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_error{false};
    bool m_errorHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    AssessmentRunNotificationSnsStatusCode m_snsPublishStatusCode{AssessmentRunNotificationSnsStatusCode::NOT_SET};
    bool m_snsPublishStatusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
