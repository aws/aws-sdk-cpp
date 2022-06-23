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
   * <p>An object that allows percentages to specify the proportion of the call where
   * you would like to apply a filter. For example, you can specify the first half of
   * the call. You can also specify the period of time between halfway through to
   * three-quarters of the way through the call. Because the length of conversation
   * can vary between calls, you can apply relative time ranges across all calls.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/RelativeTimeRange">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API RelativeTimeRange
  {
  public:
    RelativeTimeRange();
    RelativeTimeRange(Aws::Utils::Json::JsonView jsonValue);
    RelativeTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates the percentage of the beginning of the time range. To
     * set a relative time range, you must specify a start percentage and an end
     * percentage. For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline int GetStartPercentage() const{ return m_startPercentage; }

    /**
     * <p>A value that indicates the percentage of the beginning of the time range. To
     * set a relative time range, you must specify a start percentage and an end
     * percentage. For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline bool StartPercentageHasBeenSet() const { return m_startPercentageHasBeenSet; }

    /**
     * <p>A value that indicates the percentage of the beginning of the time range. To
     * set a relative time range, you must specify a start percentage and an end
     * percentage. For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline void SetStartPercentage(int value) { m_startPercentageHasBeenSet = true; m_startPercentage = value; }

    /**
     * <p>A value that indicates the percentage of the beginning of the time range. To
     * set a relative time range, you must specify a start percentage and an end
     * percentage. For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline RelativeTimeRange& WithStartPercentage(int value) { SetStartPercentage(value); return *this;}


    /**
     * <p>A value that indicates the percentage of the end of the time range. To set a
     * relative time range, you must specify a start percentage and an end percentage.
     * For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline int GetEndPercentage() const{ return m_endPercentage; }

    /**
     * <p>A value that indicates the percentage of the end of the time range. To set a
     * relative time range, you must specify a start percentage and an end percentage.
     * For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline bool EndPercentageHasBeenSet() const { return m_endPercentageHasBeenSet; }

    /**
     * <p>A value that indicates the percentage of the end of the time range. To set a
     * relative time range, you must specify a start percentage and an end percentage.
     * For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline void SetEndPercentage(int value) { m_endPercentageHasBeenSet = true; m_endPercentage = value; }

    /**
     * <p>A value that indicates the percentage of the end of the time range. To set a
     * relative time range, you must specify a start percentage and an end percentage.
     * For example, if you specify the following values:</p> <ul> <li>
     * <p>StartPercentage - 10</p> </li> <li> <p>EndPercentage - 50</p> </li> </ul>
     * <p>This looks at the time range starting from 10% of the way into the call to
     * 50% of the way through the call. For a call that lasts 100,000 milliseconds,
     * this example range would apply from the 10,000 millisecond mark to the 50,000
     * millisecond mark.</p>
     */
    inline RelativeTimeRange& WithEndPercentage(int value) { SetEndPercentage(value); return *this;}


    /**
     * <p>A range that takes the portion of the call up to the time in milliseconds set
     * by the value that you've specified. For example, if you specify
     * <code>120000</code>, the time range is set for the first 120,000 milliseconds of
     * the call.</p>
     */
    inline int GetFirst() const{ return m_first; }

    /**
     * <p>A range that takes the portion of the call up to the time in milliseconds set
     * by the value that you've specified. For example, if you specify
     * <code>120000</code>, the time range is set for the first 120,000 milliseconds of
     * the call.</p>
     */
    inline bool FirstHasBeenSet() const { return m_firstHasBeenSet; }

    /**
     * <p>A range that takes the portion of the call up to the time in milliseconds set
     * by the value that you've specified. For example, if you specify
     * <code>120000</code>, the time range is set for the first 120,000 milliseconds of
     * the call.</p>
     */
    inline void SetFirst(int value) { m_firstHasBeenSet = true; m_first = value; }

    /**
     * <p>A range that takes the portion of the call up to the time in milliseconds set
     * by the value that you've specified. For example, if you specify
     * <code>120000</code>, the time range is set for the first 120,000 milliseconds of
     * the call.</p>
     */
    inline RelativeTimeRange& WithFirst(int value) { SetFirst(value); return *this;}


    /**
     * <p>A range that takes the portion of the call from the time in milliseconds set
     * by the value that you've specified to the end of the call. For example, if you
     * specify <code>120000</code>, the time range is set for the last 120,000
     * milliseconds of the call.</p>
     */
    inline int GetLast() const{ return m_last; }

    /**
     * <p>A range that takes the portion of the call from the time in milliseconds set
     * by the value that you've specified to the end of the call. For example, if you
     * specify <code>120000</code>, the time range is set for the last 120,000
     * milliseconds of the call.</p>
     */
    inline bool LastHasBeenSet() const { return m_lastHasBeenSet; }

    /**
     * <p>A range that takes the portion of the call from the time in milliseconds set
     * by the value that you've specified to the end of the call. For example, if you
     * specify <code>120000</code>, the time range is set for the last 120,000
     * milliseconds of the call.</p>
     */
    inline void SetLast(int value) { m_lastHasBeenSet = true; m_last = value; }

    /**
     * <p>A range that takes the portion of the call from the time in milliseconds set
     * by the value that you've specified to the end of the call. For example, if you
     * specify <code>120000</code>, the time range is set for the last 120,000
     * milliseconds of the call.</p>
     */
    inline RelativeTimeRange& WithLast(int value) { SetLast(value); return *this;}

  private:

    int m_startPercentage;
    bool m_startPercentageHasBeenSet;

    int m_endPercentage;
    bool m_endPercentageHasBeenSet;

    int m_first;
    bool m_firstHasBeenSet;

    int m_last;
    bool m_lastHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
