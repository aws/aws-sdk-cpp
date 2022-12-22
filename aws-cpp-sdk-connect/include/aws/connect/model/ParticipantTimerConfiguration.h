/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TimerEligibleParticipantRoles.h>
#include <aws/connect/model/ParticipantTimerType.h>
#include <aws/connect/model/ParticipantTimerValue.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information for the timer. After the timer configuration is
   * set, it persists for the duration of the chat. It persists across new contacts
   * in the chain, for example, transfer contacts.</p> <p>For more information about
   * how chat timeouts work, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-chat-timeouts.html">Set
   * up chat timeouts for human participants</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantTimerConfiguration">AWS
   * API Reference</a></p>
   */
  class ParticipantTimerConfiguration
  {
  public:
    AWS_CONNECT_API ParticipantTimerConfiguration();
    AWS_CONNECT_API ParticipantTimerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantTimerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The role of the participant in the chat conversation.</p>
     */
    inline const TimerEligibleParticipantRoles& GetParticipantRole() const{ return m_participantRole; }

    /**
     * <p>The role of the participant in the chat conversation.</p>
     */
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }

    /**
     * <p>The role of the participant in the chat conversation.</p>
     */
    inline void SetParticipantRole(const TimerEligibleParticipantRoles& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }

    /**
     * <p>The role of the participant in the chat conversation.</p>
     */
    inline void SetParticipantRole(TimerEligibleParticipantRoles&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }

    /**
     * <p>The role of the participant in the chat conversation.</p>
     */
    inline ParticipantTimerConfiguration& WithParticipantRole(const TimerEligibleParticipantRoles& value) { SetParticipantRole(value); return *this;}

    /**
     * <p>The role of the participant in the chat conversation.</p>
     */
    inline ParticipantTimerConfiguration& WithParticipantRole(TimerEligibleParticipantRoles&& value) { SetParticipantRole(std::move(value)); return *this;}


    /**
     * <p>The type of timer. <code>IDLE</code> indicates the timer applies for
     * considering a human chat participant as idle.
     * <code>DISCONNECT_NONCUSTOMER</code> indicates the timer applies to automatically
     * disconnecting a chat participant due to idleness.</p>
     */
    inline const ParticipantTimerType& GetTimerType() const{ return m_timerType; }

    /**
     * <p>The type of timer. <code>IDLE</code> indicates the timer applies for
     * considering a human chat participant as idle.
     * <code>DISCONNECT_NONCUSTOMER</code> indicates the timer applies to automatically
     * disconnecting a chat participant due to idleness.</p>
     */
    inline bool TimerTypeHasBeenSet() const { return m_timerTypeHasBeenSet; }

    /**
     * <p>The type of timer. <code>IDLE</code> indicates the timer applies for
     * considering a human chat participant as idle.
     * <code>DISCONNECT_NONCUSTOMER</code> indicates the timer applies to automatically
     * disconnecting a chat participant due to idleness.</p>
     */
    inline void SetTimerType(const ParticipantTimerType& value) { m_timerTypeHasBeenSet = true; m_timerType = value; }

    /**
     * <p>The type of timer. <code>IDLE</code> indicates the timer applies for
     * considering a human chat participant as idle.
     * <code>DISCONNECT_NONCUSTOMER</code> indicates the timer applies to automatically
     * disconnecting a chat participant due to idleness.</p>
     */
    inline void SetTimerType(ParticipantTimerType&& value) { m_timerTypeHasBeenSet = true; m_timerType = std::move(value); }

    /**
     * <p>The type of timer. <code>IDLE</code> indicates the timer applies for
     * considering a human chat participant as idle.
     * <code>DISCONNECT_NONCUSTOMER</code> indicates the timer applies to automatically
     * disconnecting a chat participant due to idleness.</p>
     */
    inline ParticipantTimerConfiguration& WithTimerType(const ParticipantTimerType& value) { SetTimerType(value); return *this;}

    /**
     * <p>The type of timer. <code>IDLE</code> indicates the timer applies for
     * considering a human chat participant as idle.
     * <code>DISCONNECT_NONCUSTOMER</code> indicates the timer applies to automatically
     * disconnecting a chat participant due to idleness.</p>
     */
    inline ParticipantTimerConfiguration& WithTimerType(ParticipantTimerType&& value) { SetTimerType(std::move(value)); return *this;}


    /**
     * <p>The value of the timer. Either the timer action (Unset to delete the timer),
     * or the duration of the timer in minutes. Only one value can be set.</p>
     */
    inline const ParticipantTimerValue& GetTimerValue() const{ return m_timerValue; }

    /**
     * <p>The value of the timer. Either the timer action (Unset to delete the timer),
     * or the duration of the timer in minutes. Only one value can be set.</p>
     */
    inline bool TimerValueHasBeenSet() const { return m_timerValueHasBeenSet; }

    /**
     * <p>The value of the timer. Either the timer action (Unset to delete the timer),
     * or the duration of the timer in minutes. Only one value can be set.</p>
     */
    inline void SetTimerValue(const ParticipantTimerValue& value) { m_timerValueHasBeenSet = true; m_timerValue = value; }

    /**
     * <p>The value of the timer. Either the timer action (Unset to delete the timer),
     * or the duration of the timer in minutes. Only one value can be set.</p>
     */
    inline void SetTimerValue(ParticipantTimerValue&& value) { m_timerValueHasBeenSet = true; m_timerValue = std::move(value); }

    /**
     * <p>The value of the timer. Either the timer action (Unset to delete the timer),
     * or the duration of the timer in minutes. Only one value can be set.</p>
     */
    inline ParticipantTimerConfiguration& WithTimerValue(const ParticipantTimerValue& value) { SetTimerValue(value); return *this;}

    /**
     * <p>The value of the timer. Either the timer action (Unset to delete the timer),
     * or the duration of the timer in minutes. Only one value can be set.</p>
     */
    inline ParticipantTimerConfiguration& WithTimerValue(ParticipantTimerValue&& value) { SetTimerValue(std::move(value)); return *this;}

  private:

    TimerEligibleParticipantRoles m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    ParticipantTimerType m_timerType;
    bool m_timerTypeHasBeenSet = false;

    ParticipantTimerValue m_timerValue;
    bool m_timerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
