/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantTimerAction.h>
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
   * <p>The value of the timer. Either the timer action (<code>Unset</code> to delete
   * the timer), or the duration of the timer in minutes. Only one value can be
   * set.</p> <p>For more information about how chat timeouts work, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-chat-timeouts.html">Set
   * up chat timeouts for human participants</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ParticipantTimerValue">AWS
   * API Reference</a></p>
   */
  class ParticipantTimerValue
  {
  public:
    AWS_CONNECT_API ParticipantTimerValue();
    AWS_CONNECT_API ParticipantTimerValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ParticipantTimerValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timer action. Currently only one value is allowed: <code>Unset</code>. It
     * deletes a timer.</p>
     */
    inline const ParticipantTimerAction& GetParticipantTimerAction() const{ return m_participantTimerAction; }

    /**
     * <p>The timer action. Currently only one value is allowed: <code>Unset</code>. It
     * deletes a timer.</p>
     */
    inline bool ParticipantTimerActionHasBeenSet() const { return m_participantTimerActionHasBeenSet; }

    /**
     * <p>The timer action. Currently only one value is allowed: <code>Unset</code>. It
     * deletes a timer.</p>
     */
    inline void SetParticipantTimerAction(const ParticipantTimerAction& value) { m_participantTimerActionHasBeenSet = true; m_participantTimerAction = value; }

    /**
     * <p>The timer action. Currently only one value is allowed: <code>Unset</code>. It
     * deletes a timer.</p>
     */
    inline void SetParticipantTimerAction(ParticipantTimerAction&& value) { m_participantTimerActionHasBeenSet = true; m_participantTimerAction = std::move(value); }

    /**
     * <p>The timer action. Currently only one value is allowed: <code>Unset</code>. It
     * deletes a timer.</p>
     */
    inline ParticipantTimerValue& WithParticipantTimerAction(const ParticipantTimerAction& value) { SetParticipantTimerAction(value); return *this;}

    /**
     * <p>The timer action. Currently only one value is allowed: <code>Unset</code>. It
     * deletes a timer.</p>
     */
    inline ParticipantTimerValue& WithParticipantTimerAction(ParticipantTimerAction&& value) { SetParticipantTimerAction(std::move(value)); return *this;}


    /**
     * <p>The duration of a timer, in minutes. </p>
     */
    inline int GetParticipantTimerDurationInMinutes() const{ return m_participantTimerDurationInMinutes; }

    /**
     * <p>The duration of a timer, in minutes. </p>
     */
    inline bool ParticipantTimerDurationInMinutesHasBeenSet() const { return m_participantTimerDurationInMinutesHasBeenSet; }

    /**
     * <p>The duration of a timer, in minutes. </p>
     */
    inline void SetParticipantTimerDurationInMinutes(int value) { m_participantTimerDurationInMinutesHasBeenSet = true; m_participantTimerDurationInMinutes = value; }

    /**
     * <p>The duration of a timer, in minutes. </p>
     */
    inline ParticipantTimerValue& WithParticipantTimerDurationInMinutes(int value) { SetParticipantTimerDurationInMinutes(value); return *this;}

  private:

    ParticipantTimerAction m_participantTimerAction;
    bool m_participantTimerActionHasBeenSet = false;

    int m_participantTimerDurationInMinutes;
    bool m_participantTimerDurationInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
