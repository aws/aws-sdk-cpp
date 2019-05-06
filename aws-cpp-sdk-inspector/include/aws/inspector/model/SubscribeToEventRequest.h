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
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/InspectorEvent.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API SubscribeToEventRequest : public InspectorRequest
  {
  public:
    SubscribeToEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubscribeToEvent"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline SubscribeToEventRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline SubscribeToEventRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * you want to receive SNS notifications.</p>
     */
    inline SubscribeToEventRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The event for which you want to receive SNS notifications.</p>
     */
    inline const InspectorEvent& GetEvent() const{ return m_event; }

    /**
     * <p>The event for which you want to receive SNS notifications.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event for which you want to receive SNS notifications.</p>
     */
    inline void SetEvent(const InspectorEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event for which you want to receive SNS notifications.</p>
     */
    inline void SetEvent(InspectorEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event for which you want to receive SNS notifications.</p>
     */
    inline SubscribeToEventRequest& WithEvent(const InspectorEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>The event for which you want to receive SNS notifications.</p>
     */
    inline SubscribeToEventRequest& WithEvent(InspectorEvent&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline SubscribeToEventRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline SubscribeToEventRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic to which the SNS notifications are sent.</p>
     */
    inline SubscribeToEventRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    InspectorEvent m_event;
    bool m_eventHasBeenSet;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
