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
    AWS_CODEDEPLOY_API TriggerConfig() = default;
    AWS_CODEDEPLOY_API TriggerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TriggerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the notification trigger.</p>
     */
    inline const Aws::String& GetTriggerName() const { return m_triggerName; }
    inline bool TriggerNameHasBeenSet() const { return m_triggerNameHasBeenSet; }
    template<typename TriggerNameT = Aws::String>
    void SetTriggerName(TriggerNameT&& value) { m_triggerNameHasBeenSet = true; m_triggerName = std::forward<TriggerNameT>(value); }
    template<typename TriggerNameT = Aws::String>
    TriggerConfig& WithTriggerName(TriggerNameT&& value) { SetTriggerName(std::forward<TriggerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * topic through which notifications about deployment or instance events are
     * sent.</p>
     */
    inline const Aws::String& GetTriggerTargetArn() const { return m_triggerTargetArn; }
    inline bool TriggerTargetArnHasBeenSet() const { return m_triggerTargetArnHasBeenSet; }
    template<typename TriggerTargetArnT = Aws::String>
    void SetTriggerTargetArn(TriggerTargetArnT&& value) { m_triggerTargetArnHasBeenSet = true; m_triggerTargetArn = std::forward<TriggerTargetArnT>(value); }
    template<typename TriggerTargetArnT = Aws::String>
    TriggerConfig& WithTriggerTargetArn(TriggerTargetArnT&& value) { SetTriggerTargetArn(std::forward<TriggerTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type or types for which notifications are triggered.</p>
     */
    inline const Aws::Vector<TriggerEventType>& GetTriggerEvents() const { return m_triggerEvents; }
    inline bool TriggerEventsHasBeenSet() const { return m_triggerEventsHasBeenSet; }
    template<typename TriggerEventsT = Aws::Vector<TriggerEventType>>
    void SetTriggerEvents(TriggerEventsT&& value) { m_triggerEventsHasBeenSet = true; m_triggerEvents = std::forward<TriggerEventsT>(value); }
    template<typename TriggerEventsT = Aws::Vector<TriggerEventType>>
    TriggerConfig& WithTriggerEvents(TriggerEventsT&& value) { SetTriggerEvents(std::forward<TriggerEventsT>(value)); return *this;}
    inline TriggerConfig& AddTriggerEvents(TriggerEventType value) { m_triggerEventsHasBeenSet = true; m_triggerEvents.push_back(value); return *this; }
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
