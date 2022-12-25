/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>

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
   * <p>Settings for the instant booking feature that are applied to a room profile.
   * When users start their meeting with Alexa, Alexa automatically books the room
   * for the configured duration if the room is available.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/InstantBooking">AWS
   * API Reference</a></p>
   */
  class InstantBooking
  {
  public:
    AWS_ALEXAFORBUSINESS_API InstantBooking();
    AWS_ALEXAFORBUSINESS_API InstantBooking(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API InstantBooking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Duration between 15 and 240 minutes at increments of 15 that determines how
     * long to book an available room when a meeting is started with Alexa. </p>
     */
    inline int GetDurationInMinutes() const{ return m_durationInMinutes; }

    /**
     * <p>Duration between 15 and 240 minutes at increments of 15 that determines how
     * long to book an available room when a meeting is started with Alexa. </p>
     */
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }

    /**
     * <p>Duration between 15 and 240 minutes at increments of 15 that determines how
     * long to book an available room when a meeting is started with Alexa. </p>
     */
    inline void SetDurationInMinutes(int value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }

    /**
     * <p>Duration between 15 and 240 minutes at increments of 15 that determines how
     * long to book an available room when a meeting is started with Alexa. </p>
     */
    inline InstantBooking& WithDurationInMinutes(int value) { SetDurationInMinutes(value); return *this;}


    /**
     * <p>Whether instant booking is enabled or not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether instant booking is enabled or not.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether instant booking is enabled or not.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether instant booking is enabled or not.</p>
     */
    inline InstantBooking& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    int m_durationInMinutes;
    bool m_durationInMinutesHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
