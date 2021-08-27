/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies limits on the messages that a journey can send and the number of
   * times participants can enter a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyLimits">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API JourneyLimits
  {
  public:
    JourneyLimits();
    JourneyLimits(Aws::Utils::Json::JsonView jsonValue);
    JourneyLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline int GetDailyCap() const{ return m_dailyCap; }

    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline bool DailyCapHasBeenSet() const { return m_dailyCapHasBeenSet; }

    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline void SetDailyCap(int value) { m_dailyCapHasBeenSet = true; m_dailyCap = value; }

    /**
     * <p>The maximum number of messages that the journey can send to a single
     * participant during a 24-hour period. The maximum value is 100.</p>
     */
    inline JourneyLimits& WithDailyCap(int value) { SetDailyCap(value); return *this;}


    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline int GetEndpointReentryCap() const{ return m_endpointReentryCap; }

    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline bool EndpointReentryCapHasBeenSet() const { return m_endpointReentryCapHasBeenSet; }

    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline void SetEndpointReentryCap(int value) { m_endpointReentryCapHasBeenSet = true; m_endpointReentryCap = value; }

    /**
     * <p>The maximum number of times that a participant can enter the journey. The
     * maximum value is 100. To allow participants to enter the journey an unlimited
     * number of times, set this value to 0.</p>
     */
    inline JourneyLimits& WithEndpointReentryCap(int value) { SetEndpointReentryCap(value); return *this;}


    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }

    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }

    /**
     * <p>The maximum number of messages that the journey can send each second.</p>
     */
    inline JourneyLimits& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}

  private:

    int m_dailyCap;
    bool m_dailyCapHasBeenSet;

    int m_endpointReentryCap;
    bool m_endpointReentryCapHasBeenSet;

    int m_messagesPerSecond;
    bool m_messagesPerSecondHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
