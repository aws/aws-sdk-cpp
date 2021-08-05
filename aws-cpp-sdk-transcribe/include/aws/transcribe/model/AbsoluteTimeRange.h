/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>

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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>A time range, set in seconds, between two points in the call.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/AbsoluteTimeRange">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API AbsoluteTimeRange
  {
  public:
    AbsoluteTimeRange();
    AbsoluteTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AbsoluteTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates the beginning of the time range in seconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call.</p>
     */
    inline long long GetStartTime() const{ return m_startTime; }

    /**
     * <p>A value that indicates the beginning of the time range in seconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A value that indicates the beginning of the time range in seconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call.</p>
     */
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A value that indicates the beginning of the time range in seconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call.</p>
     */
    inline AbsoluteTimeRange& WithStartTime(long long value) { SetStartTime(value); return *this;}


    /**
     * <p>A value that indicates the end of the time range in milliseconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call. </p>
     */
    inline long long GetEndTime() const{ return m_endTime; }

    /**
     * <p>A value that indicates the end of the time range in milliseconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>A value that indicates the end of the time range in milliseconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call. </p>
     */
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>A value that indicates the end of the time range in milliseconds. To set
     * absolute time range, you must specify a start time and an end time. For example,
     * if you specify the following values:</p> <ul> <li> <p>StartTime - 10000</p>
     * </li> <li> <p>Endtime - 50000</p> </li> </ul> <p>The time range is set between
     * 10,000 milliseconds and 50,000 milliseconds into the call. </p>
     */
    inline AbsoluteTimeRange& WithEndTime(long long value) { SetEndTime(value); return *this;}


    /**
     * <p>A time range from the beginning of the call to the value that you've
     * specified. For example, if you specify 100000, the time range is set to the
     * first 100,000 milliseconds of the call.</p>
     */
    inline long long GetFirst() const{ return m_first; }

    /**
     * <p>A time range from the beginning of the call to the value that you've
     * specified. For example, if you specify 100000, the time range is set to the
     * first 100,000 milliseconds of the call.</p>
     */
    inline bool FirstHasBeenSet() const { return m_firstHasBeenSet; }

    /**
     * <p>A time range from the beginning of the call to the value that you've
     * specified. For example, if you specify 100000, the time range is set to the
     * first 100,000 milliseconds of the call.</p>
     */
    inline void SetFirst(long long value) { m_firstHasBeenSet = true; m_first = value; }

    /**
     * <p>A time range from the beginning of the call to the value that you've
     * specified. For example, if you specify 100000, the time range is set to the
     * first 100,000 milliseconds of the call.</p>
     */
    inline AbsoluteTimeRange& WithFirst(long long value) { SetFirst(value); return *this;}


    /**
     * <p>A time range from the value that you've specified to the end of the call. For
     * example, if you specify 100000, the time range is set to the last 100,000
     * milliseconds of the call.</p>
     */
    inline long long GetLast() const{ return m_last; }

    /**
     * <p>A time range from the value that you've specified to the end of the call. For
     * example, if you specify 100000, the time range is set to the last 100,000
     * milliseconds of the call.</p>
     */
    inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }

    /**
     * <p>A time range from the value that you've specified to the end of the call. For
     * example, if you specify 100000, the time range is set to the last 100,000
     * milliseconds of the call.</p>
     */
    inline void SetLast(long long value) { m_lastHasBeenSet = true; m_last = value; }

    /**
     * <p>A time range from the value that you've specified to the end of the call. For
     * example, if you specify 100000, the time range is set to the last 100,000
     * milliseconds of the call.</p>
     */
    inline AbsoluteTimeRange& WithLast(long long value) { SetLast(value); return *this;}

  private:

    long long m_startTime;
    bool m_startTimeHasBeenSet;

    long long m_endTime;
    bool m_endTimeHasBeenSet;

    long long m_first;
    bool m_firstHasBeenSet;

    long long m_last;
    bool m_lastHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
