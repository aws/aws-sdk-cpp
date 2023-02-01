/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/EndOfMeetingReminderType.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Settings for the end of meeting reminder feature that are applied to a room
   * profile. The end of meeting reminder enables Alexa to remind users when a
   * meeting is ending. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateEndOfMeetingReminder">AWS
   * API Reference</a></p>
   */
  class UpdateEndOfMeetingReminder
  {
  public:
    AWS_ALEXAFORBUSINESS_API UpdateEndOfMeetingReminder();
    AWS_ALEXAFORBUSINESS_API UpdateEndOfMeetingReminder(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API UpdateEndOfMeetingReminder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline const Aws::Vector<int>& GetReminderAtMinutes() const{ return m_reminderAtMinutes; }

    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline bool ReminderAtMinutesHasBeenSet() const { return m_reminderAtMinutesHasBeenSet; }

    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline void SetReminderAtMinutes(const Aws::Vector<int>& value) { m_reminderAtMinutesHasBeenSet = true; m_reminderAtMinutes = value; }

    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline void SetReminderAtMinutes(Aws::Vector<int>&& value) { m_reminderAtMinutesHasBeenSet = true; m_reminderAtMinutes = std::move(value); }

    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline UpdateEndOfMeetingReminder& WithReminderAtMinutes(const Aws::Vector<int>& value) { SetReminderAtMinutes(value); return *this;}

    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline UpdateEndOfMeetingReminder& WithReminderAtMinutes(Aws::Vector<int>&& value) { SetReminderAtMinutes(std::move(value)); return *this;}

    /**
     * <p>Updates settings for the end of meeting reminder feature that are applied to
     * a room profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline UpdateEndOfMeetingReminder& AddReminderAtMinutes(int value) { m_reminderAtMinutesHasBeenSet = true; m_reminderAtMinutes.push_back(value); return *this; }


    /**
     * <p>The type of sound that users hear during the end of meeting reminder. </p>
     */
    inline const EndOfMeetingReminderType& GetReminderType() const{ return m_reminderType; }

    /**
     * <p>The type of sound that users hear during the end of meeting reminder. </p>
     */
    inline bool ReminderTypeHasBeenSet() const { return m_reminderTypeHasBeenSet; }

    /**
     * <p>The type of sound that users hear during the end of meeting reminder. </p>
     */
    inline void SetReminderType(const EndOfMeetingReminderType& value) { m_reminderTypeHasBeenSet = true; m_reminderType = value; }

    /**
     * <p>The type of sound that users hear during the end of meeting reminder. </p>
     */
    inline void SetReminderType(EndOfMeetingReminderType&& value) { m_reminderTypeHasBeenSet = true; m_reminderType = std::move(value); }

    /**
     * <p>The type of sound that users hear during the end of meeting reminder. </p>
     */
    inline UpdateEndOfMeetingReminder& WithReminderType(const EndOfMeetingReminderType& value) { SetReminderType(value); return *this;}

    /**
     * <p>The type of sound that users hear during the end of meeting reminder. </p>
     */
    inline UpdateEndOfMeetingReminder& WithReminderType(EndOfMeetingReminderType&& value) { SetReminderType(std::move(value)); return *this;}


    /**
     * <p>Whether an end of meeting reminder is enabled or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether an end of meeting reminder is enabled or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether an end of meeting reminder is enabled or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether an end of meeting reminder is enabled or not.</p>
     */
    inline UpdateEndOfMeetingReminder& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::Vector<int> m_reminderAtMinutes;
    bool m_reminderAtMinutesHasBeenSet = false;

    EndOfMeetingReminderType m_reminderType;
    bool m_reminderTypeHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
