/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TriggerConfig
  {
  public:
    AWS_CODEDEPLOY_API TriggerConfig();
    AWS_CODEDEPLOY_API TriggerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TriggerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the notification trigger.</p>
     */
    inline const Aws::String& GetTriggerName() const{ return m_triggerName; }
    inline bool TriggerNameHasBeenSet() const { return m_triggerNameHasBeenSet; }
    inline void SetTriggerName(const Aws::String& value) { m_triggerNameHasBeenSet = true; m_triggerName = value; }
    inline void SetTriggerName(Aws::String&& value) { m_triggerNameHasBeenSet = true; m_triggerName = std::move(value); }
    inline void SetTriggerName(const char* value) { m_triggerNameHasBeenSet = true; m_triggerName.assign(value); }
    inline TriggerConfig& WithTriggerName(const Aws::String& value) { SetTriggerName(value); return *this;}
    inline TriggerConfig& WithTriggerName(Aws::String&& value) { SetTriggerName(std::move(value)); return *this;}
    inline TriggerConfig& WithTriggerName(const char* value) { SetTriggerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * topic through which notifications about deployment or instance events are
     * sent.</p>
     */
    inline const Aws::String& GetTriggerTargetArn() const{ return m_triggerTargetArn; }
    inline bool TriggerTargetArnHasBeenSet() const { return m_triggerTargetArnHasBeenSet; }
    inline void SetTriggerTargetArn(const Aws::String& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = value; }
    inline void SetTriggerTargetArn(Aws::String&& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = std::move(value); }
    inline void SetTriggerTargetArn(const char* value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn.assign(value); }
    inline TriggerConfig& WithTriggerTargetArn(const Aws::String& value) { SetTriggerTargetArn(value); return *this;}
    inline TriggerConfig& WithTriggerTargetArn(Aws::String&& value) { SetTriggerTargetArn(std::move(value)); return *this;}
    inline TriggerConfig& WithTriggerTargetArn(const char* value) { SetTriggerTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline const Aws::Vector<TriggerEventType>& GetTriggerEvents() const{ return m_triggerEvents; }
    inline bool TriggerEventsHasBeenSet() const { return m_triggerEventsHasBeenSet; }
    inline void SetTriggerEvents(const Aws::Vector<TriggerEventType>& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = value; }
    inline void SetTriggerEvents(Aws::Vector<TriggerEventType>&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = std::move(value); }
    inline TriggerConfig& WithTriggerEvents(const Aws::Vector<TriggerEventType>& value) { SetTriggerEvents(value); return *this;}
    inline TriggerConfig& WithTriggerEvents(Aws::Vector<TriggerEventType>&& value) { SetTriggerEvents(std::move(value)); return *this;}
    inline TriggerConfig& AddTriggerEvents(const TriggerEventType& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(value); return *this; }
    inline TriggerConfig& AddTriggerEvents(TriggerEventType&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_triggerName;
    bool m_triggerNameHasBeenSet = false;

    Aws::String m_triggerTargetArn;
    bool m_triggerTargetArnHasBeenSet = false;

    Aws::Vector<TriggerEventType> m_triggerEvents;
    bool m_triggerEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
