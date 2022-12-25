/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p> Describes a bandwidth rate limit interval for a gateway. A bandwidth rate
   * limit schedule consists of one or more bandwidth rate limit intervals. A
   * bandwidth rate limit interval defines a period of time on one or more days of
   * the week, during which bandwidth rate limits are specified for uploading,
   * downloading, or both. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/BandwidthRateLimitInterval">AWS
   * API Reference</a></p>
   */
  class BandwidthRateLimitInterval
  {
  public:
    AWS_STORAGEGATEWAY_API BandwidthRateLimitInterval();
    AWS_STORAGEGATEWAY_API BandwidthRateLimitInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API BandwidthRateLimitInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The hour of the day to start the bandwidth rate limit interval. </p>
     */
    inline int GetStartHourOfDay() const{ return m_startHourOfDay; }

    /**
     * <p> The hour of the day to start the bandwidth rate limit interval. </p>
     */
    inline bool StartHourOfDayHasBeenSet() const { return m_startHourOfDayHasBeenSet; }

    /**
     * <p> The hour of the day to start the bandwidth rate limit interval. </p>
     */
    inline void SetStartHourOfDay(int value) { m_startHourOfDayHasBeenSet = true; m_startHourOfDay = value; }

    /**
     * <p> The hour of the day to start the bandwidth rate limit interval. </p>
     */
    inline BandwidthRateLimitInterval& WithStartHourOfDay(int value) { SetStartHourOfDay(value); return *this;}


    /**
     * <p> The minute of the hour to start the bandwidth rate limit interval. The
     * interval begins at the start of that minute. To begin an interval exactly at the
     * start of the hour, use the value <code>0</code>. </p>
     */
    inline int GetStartMinuteOfHour() const{ return m_startMinuteOfHour; }

    /**
     * <p> The minute of the hour to start the bandwidth rate limit interval. The
     * interval begins at the start of that minute. To begin an interval exactly at the
     * start of the hour, use the value <code>0</code>. </p>
     */
    inline bool StartMinuteOfHourHasBeenSet() const { return m_startMinuteOfHourHasBeenSet; }

    /**
     * <p> The minute of the hour to start the bandwidth rate limit interval. The
     * interval begins at the start of that minute. To begin an interval exactly at the
     * start of the hour, use the value <code>0</code>. </p>
     */
    inline void SetStartMinuteOfHour(int value) { m_startMinuteOfHourHasBeenSet = true; m_startMinuteOfHour = value; }

    /**
     * <p> The minute of the hour to start the bandwidth rate limit interval. The
     * interval begins at the start of that minute. To begin an interval exactly at the
     * start of the hour, use the value <code>0</code>. </p>
     */
    inline BandwidthRateLimitInterval& WithStartMinuteOfHour(int value) { SetStartMinuteOfHour(value); return *this;}


    /**
     * <p> The hour of the day to end the bandwidth rate limit interval. </p>
     */
    inline int GetEndHourOfDay() const{ return m_endHourOfDay; }

    /**
     * <p> The hour of the day to end the bandwidth rate limit interval. </p>
     */
    inline bool EndHourOfDayHasBeenSet() const { return m_endHourOfDayHasBeenSet; }

    /**
     * <p> The hour of the day to end the bandwidth rate limit interval. </p>
     */
    inline void SetEndHourOfDay(int value) { m_endHourOfDayHasBeenSet = true; m_endHourOfDay = value; }

    /**
     * <p> The hour of the day to end the bandwidth rate limit interval. </p>
     */
    inline BandwidthRateLimitInterval& WithEndHourOfDay(int value) { SetEndHourOfDay(value); return *this;}


    /**
     * <p> The minute of the hour to end the bandwidth rate limit interval. </p>
     *  <p> The bandwidth rate limit interval ends at the end of the minute.
     * To end an interval at the end of an hour, use the value <code>59</code>. </p>
     * 
     */
    inline int GetEndMinuteOfHour() const{ return m_endMinuteOfHour; }

    /**
     * <p> The minute of the hour to end the bandwidth rate limit interval. </p>
     *  <p> The bandwidth rate limit interval ends at the end of the minute.
     * To end an interval at the end of an hour, use the value <code>59</code>. </p>
     * 
     */
    inline bool EndMinuteOfHourHasBeenSet() const { return m_endMinuteOfHourHasBeenSet; }

    /**
     * <p> The minute of the hour to end the bandwidth rate limit interval. </p>
     *  <p> The bandwidth rate limit interval ends at the end of the minute.
     * To end an interval at the end of an hour, use the value <code>59</code>. </p>
     * 
     */
    inline void SetEndMinuteOfHour(int value) { m_endMinuteOfHourHasBeenSet = true; m_endMinuteOfHour = value; }

    /**
     * <p> The minute of the hour to end the bandwidth rate limit interval. </p>
     *  <p> The bandwidth rate limit interval ends at the end of the minute.
     * To end an interval at the end of an hour, use the value <code>59</code>. </p>
     * 
     */
    inline BandwidthRateLimitInterval& WithEndMinuteOfHour(int value) { SetEndMinuteOfHour(value); return *this;}


    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline const Aws::Vector<int>& GetDaysOfWeek() const{ return m_daysOfWeek; }

    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline bool DaysOfWeekHasBeenSet() const { return m_daysOfWeekHasBeenSet; }

    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline void SetDaysOfWeek(const Aws::Vector<int>& value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek = value; }

    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline void SetDaysOfWeek(Aws::Vector<int>&& value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek = std::move(value); }

    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline BandwidthRateLimitInterval& WithDaysOfWeek(const Aws::Vector<int>& value) { SetDaysOfWeek(value); return *this;}

    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline BandwidthRateLimitInterval& WithDaysOfWeek(Aws::Vector<int>&& value) { SetDaysOfWeek(std::move(value)); return *this;}

    /**
     * <p> The days of the week component of the bandwidth rate limit interval,
     * represented as ordinal numbers from 0 to 6, where 0 represents Sunday and 6
     * represents Saturday. </p>
     */
    inline BandwidthRateLimitInterval& AddDaysOfWeek(int value) { m_daysOfWeekHasBeenSet = true; m_daysOfWeek.push_back(value); return *this; }


    /**
     * <p> The average upload rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * upload rate limit is not set. </p>
     */
    inline long long GetAverageUploadRateLimitInBitsPerSec() const{ return m_averageUploadRateLimitInBitsPerSec; }

    /**
     * <p> The average upload rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * upload rate limit is not set. </p>
     */
    inline bool AverageUploadRateLimitInBitsPerSecHasBeenSet() const { return m_averageUploadRateLimitInBitsPerSecHasBeenSet; }

    /**
     * <p> The average upload rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * upload rate limit is not set. </p>
     */
    inline void SetAverageUploadRateLimitInBitsPerSec(long long value) { m_averageUploadRateLimitInBitsPerSecHasBeenSet = true; m_averageUploadRateLimitInBitsPerSec = value; }

    /**
     * <p> The average upload rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * upload rate limit is not set. </p>
     */
    inline BandwidthRateLimitInterval& WithAverageUploadRateLimitInBitsPerSec(long long value) { SetAverageUploadRateLimitInBitsPerSec(value); return *this;}


    /**
     * <p> The average download rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * download rate limit is not set. </p>
     */
    inline long long GetAverageDownloadRateLimitInBitsPerSec() const{ return m_averageDownloadRateLimitInBitsPerSec; }

    /**
     * <p> The average download rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * download rate limit is not set. </p>
     */
    inline bool AverageDownloadRateLimitInBitsPerSecHasBeenSet() const { return m_averageDownloadRateLimitInBitsPerSecHasBeenSet; }

    /**
     * <p> The average download rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * download rate limit is not set. </p>
     */
    inline void SetAverageDownloadRateLimitInBitsPerSec(long long value) { m_averageDownloadRateLimitInBitsPerSecHasBeenSet = true; m_averageDownloadRateLimitInBitsPerSec = value; }

    /**
     * <p> The average download rate limit component of the bandwidth rate limit
     * interval, in bits per second. This field does not appear in the response if the
     * download rate limit is not set. </p>
     */
    inline BandwidthRateLimitInterval& WithAverageDownloadRateLimitInBitsPerSec(long long value) { SetAverageDownloadRateLimitInBitsPerSec(value); return *this;}

  private:

    int m_startHourOfDay;
    bool m_startHourOfDayHasBeenSet = false;

    int m_startMinuteOfHour;
    bool m_startMinuteOfHourHasBeenSet = false;

    int m_endHourOfDay;
    bool m_endHourOfDayHasBeenSet = false;

    int m_endMinuteOfHour;
    bool m_endMinuteOfHourHasBeenSet = false;

    Aws::Vector<int> m_daysOfWeek;
    bool m_daysOfWeekHasBeenSet = false;

    long long m_averageUploadRateLimitInBitsPerSec;
    bool m_averageUploadRateLimitInBitsPerSecHasBeenSet = false;

    long long m_averageDownloadRateLimitInBitsPerSec;
    bool m_averageDownloadRateLimitInBitsPerSecHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
