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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TriggerEventType.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about notification triggers for the deployment
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TriggerConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API TriggerConfig
  {
  public:
    TriggerConfig();
    TriggerConfig(Aws::Utils::Json::JsonView jsonValue);
    TriggerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the notification trigger.</p>
     */
    inline const Aws::String& GetTriggerName() const{ return m_triggerName; }

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline bool TriggerNameHasBeenSet() const { return m_triggerNameHasBeenSet; }

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline void SetTriggerName(const Aws::String& value) { m_triggerNameHasBeenSet = true; m_triggerName = value; }

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline void SetTriggerName(Aws::String&& value) { m_triggerNameHasBeenSet = true; m_triggerName = std::move(value); }

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline void SetTriggerName(const char* value) { m_triggerNameHasBeenSet = true; m_triggerName.assign(value); }

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline TriggerConfig& WithTriggerName(const Aws::String& value) { SetTriggerName(value); return *this;}

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline TriggerConfig& WithTriggerName(Aws::String&& value) { SetTriggerName(std::move(value)); return *this;}

    /**
     * <p>The name of the notification trigger.</p>
     */
    inline TriggerConfig& WithTriggerName(const char* value) { SetTriggerName(value); return *this;}


    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline const Aws::String& GetTriggerTargetArn() const{ return m_triggerTargetArn; }

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline bool TriggerTargetArnHasBeenSet() const { return m_triggerTargetArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline void SetTriggerTargetArn(const Aws::String& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = value; }

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline void SetTriggerTargetArn(Aws::String&& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline void SetTriggerTargetArn(const char* value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline TriggerConfig& WithTriggerTargetArn(const Aws::String& value) { SetTriggerTargetArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline TriggerConfig& WithTriggerTargetArn(Aws::String&& value) { SetTriggerTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Simple Notification Service topic through which
     * notifications about deployment or instance events are sent.</p>
     */
    inline TriggerConfig& WithTriggerTargetArn(const char* value) { SetTriggerTargetArn(value); return *this;}


    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline const Aws::Vector<TriggerEventType>& GetTriggerEvents() const{ return m_triggerEvents; }

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline bool TriggerEventsHasBeenSet() const { return m_triggerEventsHasBeenSet; }

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline void SetTriggerEvents(const Aws::Vector<TriggerEventType>& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = value; }

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline void SetTriggerEvents(Aws::Vector<TriggerEventType>&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = std::move(value); }

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline TriggerConfig& WithTriggerEvents(const Aws::Vector<TriggerEventType>& value) { SetTriggerEvents(value); return *this;}

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline TriggerConfig& WithTriggerEvents(Aws::Vector<TriggerEventType>&& value) { SetTriggerEvents(std::move(value)); return *this;}

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline TriggerConfig& AddTriggerEvents(const TriggerEventType& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(value); return *this; }

    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline TriggerConfig& AddTriggerEvents(TriggerEventType&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_triggerName;
    bool m_triggerNameHasBeenSet;

    Aws::String m_triggerTargetArn;
    bool m_triggerTargetArnHasBeenSet;

    Aws::Vector<TriggerEventType> m_triggerEvents;
    bool m_triggerEventsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
