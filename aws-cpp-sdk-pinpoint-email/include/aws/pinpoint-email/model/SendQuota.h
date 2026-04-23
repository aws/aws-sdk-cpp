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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>

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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains information about the per-day and per-second sending
   * limits for your Amazon Pinpoint account in the current AWS Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendQuota">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API SendQuota
  {
  public:
    SendQuota();
    SendQuota(Aws::Utils::Json::JsonView jsonValue);
    SendQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of emails that you can send in the current AWS Region over
     * a 24-hour period. This value is also called your <i>sending quota</i>.</p>
     */
    inline double GetMax24HourSend() const{ return m_max24HourSend; }

    /**
     * <p>The maximum number of emails that you can send in the current AWS Region over
     * a 24-hour period. This value is also called your <i>sending quota</i>.</p>
     */
    inline bool Max24HourSendHasBeenSet() const { return m_max24HourSendHasBeenSet; }

    /**
     * <p>The maximum number of emails that you can send in the current AWS Region over
     * a 24-hour period. This value is also called your <i>sending quota</i>.</p>
     */
    inline void SetMax24HourSend(double value) { m_max24HourSendHasBeenSet = true; m_max24HourSend = value; }

    /**
     * <p>The maximum number of emails that you can send in the current AWS Region over
     * a 24-hour period. This value is also called your <i>sending quota</i>.</p>
     */
    inline SendQuota& WithMax24HourSend(double value) { SetMax24HourSend(value); return *this;}


    /**
     * <p>The maximum number of emails that you can send per second in the current AWS
     * Region. This value is also called your <i>maximum sending rate</i> or your
     * <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline double GetMaxSendRate() const{ return m_maxSendRate; }

    /**
     * <p>The maximum number of emails that you can send per second in the current AWS
     * Region. This value is also called your <i>maximum sending rate</i> or your
     * <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline bool MaxSendRateHasBeenSet() const { return m_maxSendRateHasBeenSet; }

    /**
     * <p>The maximum number of emails that you can send per second in the current AWS
     * Region. This value is also called your <i>maximum sending rate</i> or your
     * <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline void SetMaxSendRate(double value) { m_maxSendRateHasBeenSet = true; m_maxSendRate = value; }

    /**
     * <p>The maximum number of emails that you can send per second in the current AWS
     * Region. This value is also called your <i>maximum sending rate</i> or your
     * <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline SendQuota& WithMaxSendRate(double value) { SetMaxSendRate(value); return *this;}


    /**
     * <p>The number of emails sent from your Amazon Pinpoint account in the current
     * AWS Region over the past 24 hours.</p>
     */
    inline double GetSentLast24Hours() const{ return m_sentLast24Hours; }

    /**
     * <p>The number of emails sent from your Amazon Pinpoint account in the current
     * AWS Region over the past 24 hours.</p>
     */
    inline bool SentLast24HoursHasBeenSet() const { return m_sentLast24HoursHasBeenSet; }

    /**
     * <p>The number of emails sent from your Amazon Pinpoint account in the current
     * AWS Region over the past 24 hours.</p>
     */
    inline void SetSentLast24Hours(double value) { m_sentLast24HoursHasBeenSet = true; m_sentLast24Hours = value; }

    /**
     * <p>The number of emails sent from your Amazon Pinpoint account in the current
     * AWS Region over the past 24 hours.</p>
     */
    inline SendQuota& WithSentLast24Hours(double value) { SetSentLast24Hours(value); return *this;}

  private:

    double m_max24HourSend;
    bool m_max24HourSendHasBeenSet;

    double m_maxSendRate;
    bool m_maxSendRateHasBeenSet;

    double m_sentLast24Hours;
    bool m_sentLast24HoursHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
