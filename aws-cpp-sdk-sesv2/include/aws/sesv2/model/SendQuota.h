/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about the per-day and per-second sending
   * limits for your Amazon SES account in the current Amazon Web Services
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendQuota">AWS API
   * Reference</a></p>
   */
  class SendQuota
  {
  public:
    AWS_SESV2_API SendQuota();
    AWS_SESV2_API SendQuota(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SendQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of emails that you can send in the current Amazon Web
     * Services Region over a 24-hour period. A value of -1 signifies an unlimited
     * quota. (This value is also referred to as your <i>sending quota</i>.)</p>
     */
    inline double GetMax24HourSend() const{ return m_max24HourSend; }

    /**
     * <p>The maximum number of emails that you can send in the current Amazon Web
     * Services Region over a 24-hour period. A value of -1 signifies an unlimited
     * quota. (This value is also referred to as your <i>sending quota</i>.)</p>
     */
    inline bool Max24HourSendHasBeenSet() const { return m_max24HourSendHasBeenSet; }

    /**
     * <p>The maximum number of emails that you can send in the current Amazon Web
     * Services Region over a 24-hour period. A value of -1 signifies an unlimited
     * quota. (This value is also referred to as your <i>sending quota</i>.)</p>
     */
    inline void SetMax24HourSend(double value) { m_max24HourSendHasBeenSet = true; m_max24HourSend = value; }

    /**
     * <p>The maximum number of emails that you can send in the current Amazon Web
     * Services Region over a 24-hour period. A value of -1 signifies an unlimited
     * quota. (This value is also referred to as your <i>sending quota</i>.)</p>
     */
    inline SendQuota& WithMax24HourSend(double value) { SetMax24HourSend(value); return *this;}


    /**
     * <p>The maximum number of emails that you can send per second in the current
     * Amazon Web Services Region. This value is also called your <i>maximum sending
     * rate</i> or your <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline double GetMaxSendRate() const{ return m_maxSendRate; }

    /**
     * <p>The maximum number of emails that you can send per second in the current
     * Amazon Web Services Region. This value is also called your <i>maximum sending
     * rate</i> or your <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline bool MaxSendRateHasBeenSet() const { return m_maxSendRateHasBeenSet; }

    /**
     * <p>The maximum number of emails that you can send per second in the current
     * Amazon Web Services Region. This value is also called your <i>maximum sending
     * rate</i> or your <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline void SetMaxSendRate(double value) { m_maxSendRateHasBeenSet = true; m_maxSendRate = value; }

    /**
     * <p>The maximum number of emails that you can send per second in the current
     * Amazon Web Services Region. This value is also called your <i>maximum sending
     * rate</i> or your <i>maximum TPS (transactions per second) rate</i>.</p>
     */
    inline SendQuota& WithMaxSendRate(double value) { SetMaxSendRate(value); return *this;}


    /**
     * <p>The number of emails sent from your Amazon SES account in the current Amazon
     * Web Services Region over the past 24 hours.</p>
     */
    inline double GetSentLast24Hours() const{ return m_sentLast24Hours; }

    /**
     * <p>The number of emails sent from your Amazon SES account in the current Amazon
     * Web Services Region over the past 24 hours.</p>
     */
    inline bool SentLast24HoursHasBeenSet() const { return m_sentLast24HoursHasBeenSet; }

    /**
     * <p>The number of emails sent from your Amazon SES account in the current Amazon
     * Web Services Region over the past 24 hours.</p>
     */
    inline void SetSentLast24Hours(double value) { m_sentLast24HoursHasBeenSet = true; m_sentLast24Hours = value; }

    /**
     * <p>The number of emails sent from your Amazon SES account in the current Amazon
     * Web Services Region over the past 24 hours.</p>
     */
    inline SendQuota& WithSentLast24Hours(double value) { SetSentLast24Hours(value); return *this;}

  private:

    double m_max24HourSend;
    bool m_max24HourSendHasBeenSet = false;

    double m_maxSendRate;
    bool m_maxSendRateHasBeenSet = false;

    double m_sentLast24Hours;
    bool m_sentLast24HoursHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
