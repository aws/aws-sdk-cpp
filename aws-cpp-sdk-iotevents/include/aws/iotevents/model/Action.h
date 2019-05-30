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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/SetVariableAction.h>
#include <aws/iotevents/model/SNSTopicPublishAction.h>
#include <aws/iotevents/model/IotTopicPublishAction.h>
#include <aws/iotevents/model/SetTimerAction.h>
#include <aws/iotevents/model/ClearTimerAction.h>
#include <aws/iotevents/model/ResetTimerAction.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>An action to be performed when the <code>condition</code> is
   * TRUE.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/Action">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API Action
  {
  public:
    Action();
    Action(Aws::Utils::Json::JsonView jsonValue);
    Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline const SetVariableAction& GetSetVariable() const{ return m_setVariable; }

    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline bool SetVariableHasBeenSet() const { return m_setVariableHasBeenSet; }

    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline void SetSetVariable(const SetVariableAction& value) { m_setVariableHasBeenSet = true; m_setVariable = value; }

    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline void SetSetVariable(SetVariableAction&& value) { m_setVariableHasBeenSet = true; m_setVariable = std::move(value); }

    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline Action& WithSetVariable(const SetVariableAction& value) { SetSetVariable(value); return *this;}

    /**
     * <p>Sets a variable to a specified value.</p>
     */
    inline Action& WithSetVariable(SetVariableAction&& value) { SetSetVariable(std::move(value)); return *this;}


    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline const SNSTopicPublishAction& GetSns() const{ return m_sns; }

    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }

    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline void SetSns(const SNSTopicPublishAction& value) { m_snsHasBeenSet = true; m_sns = value; }

    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline void SetSns(SNSTopicPublishAction&& value) { m_snsHasBeenSet = true; m_sns = std::move(value); }

    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline Action& WithSns(const SNSTopicPublishAction& value) { SetSns(value); return *this;}

    /**
     * <p>Sends an Amazon SNS message.</p>
     */
    inline Action& WithSns(SNSTopicPublishAction&& value) { SetSns(std::move(value)); return *this;}


    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT Message
     * Broker.</p>
     */
    inline const IotTopicPublishAction& GetIotTopicPublish() const{ return m_iotTopicPublish; }

    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT Message
     * Broker.</p>
     */
    inline bool IotTopicPublishHasBeenSet() const { return m_iotTopicPublishHasBeenSet; }

    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT Message
     * Broker.</p>
     */
    inline void SetIotTopicPublish(const IotTopicPublishAction& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = value; }

    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT Message
     * Broker.</p>
     */
    inline void SetIotTopicPublish(IotTopicPublishAction&& value) { m_iotTopicPublishHasBeenSet = true; m_iotTopicPublish = std::move(value); }

    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT Message
     * Broker.</p>
     */
    inline Action& WithIotTopicPublish(const IotTopicPublishAction& value) { SetIotTopicPublish(value); return *this;}

    /**
     * <p>Publishes an MQTT message with the given topic to the AWS IoT Message
     * Broker.</p>
     */
    inline Action& WithIotTopicPublish(IotTopicPublishAction&& value) { SetIotTopicPublish(std::move(value)); return *this;}


    /**
     * <p>Information needed to set the timer.</p>
     */
    inline const SetTimerAction& GetSetTimer() const{ return m_setTimer; }

    /**
     * <p>Information needed to set the timer.</p>
     */
    inline bool SetTimerHasBeenSet() const { return m_setTimerHasBeenSet; }

    /**
     * <p>Information needed to set the timer.</p>
     */
    inline void SetSetTimer(const SetTimerAction& value) { m_setTimerHasBeenSet = true; m_setTimer = value; }

    /**
     * <p>Information needed to set the timer.</p>
     */
    inline void SetSetTimer(SetTimerAction&& value) { m_setTimerHasBeenSet = true; m_setTimer = std::move(value); }

    /**
     * <p>Information needed to set the timer.</p>
     */
    inline Action& WithSetTimer(const SetTimerAction& value) { SetSetTimer(value); return *this;}

    /**
     * <p>Information needed to set the timer.</p>
     */
    inline Action& WithSetTimer(SetTimerAction&& value) { SetSetTimer(std::move(value)); return *this;}


    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline const ClearTimerAction& GetClearTimer() const{ return m_clearTimer; }

    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline bool ClearTimerHasBeenSet() const { return m_clearTimerHasBeenSet; }

    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline void SetClearTimer(const ClearTimerAction& value) { m_clearTimerHasBeenSet = true; m_clearTimer = value; }

    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline void SetClearTimer(ClearTimerAction&& value) { m_clearTimerHasBeenSet = true; m_clearTimer = std::move(value); }

    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline Action& WithClearTimer(const ClearTimerAction& value) { SetClearTimer(value); return *this;}

    /**
     * <p>Information needed to clear the timer.</p>
     */
    inline Action& WithClearTimer(ClearTimerAction&& value) { SetClearTimer(std::move(value)); return *this;}


    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline const ResetTimerAction& GetResetTimer() const{ return m_resetTimer; }

    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline bool ResetTimerHasBeenSet() const { return m_resetTimerHasBeenSet; }

    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline void SetResetTimer(const ResetTimerAction& value) { m_resetTimerHasBeenSet = true; m_resetTimer = value; }

    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline void SetResetTimer(ResetTimerAction&& value) { m_resetTimerHasBeenSet = true; m_resetTimer = std::move(value); }

    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline Action& WithResetTimer(const ResetTimerAction& value) { SetResetTimer(value); return *this;}

    /**
     * <p>Information needed to reset the timer.</p>
     */
    inline Action& WithResetTimer(ResetTimerAction&& value) { SetResetTimer(std::move(value)); return *this;}

  private:

    SetVariableAction m_setVariable;
    bool m_setVariableHasBeenSet;

    SNSTopicPublishAction m_sns;
    bool m_snsHasBeenSet;

    IotTopicPublishAction m_iotTopicPublish;
    bool m_iotTopicPublishHasBeenSet;

    SetTimerAction m_setTimer;
    bool m_setTimerHasBeenSet;

    ClearTimerAction m_clearTimer;
    bool m_clearTimerHasBeenSet;

    ResetTimerAction m_resetTimer;
    bool m_resetTimerHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
