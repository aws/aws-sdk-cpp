/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a timestamp with optional nanosecond granularity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TimeInNanos">AWS
   * API Reference</a></p>
   */
  class TimeInNanos
  {
  public:
    AWS_IOTSITEWISE_API TimeInNanos();
    AWS_IOTSITEWISE_API TimeInNanos(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API TimeInNanos& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp date, in seconds, in the Unix epoch format. Fractional
     * nanosecond data is provided by <code>offsetInNanos</code>.</p>
     */
    inline long long GetTimeInSeconds() const{ return m_timeInSeconds; }

    /**
     * <p>The timestamp date, in seconds, in the Unix epoch format. Fractional
     * nanosecond data is provided by <code>offsetInNanos</code>.</p>
     */
    inline bool TimeInSecondsHasBeenSet() const { return m_timeInSecondsHasBeenSet; }

    /**
     * <p>The timestamp date, in seconds, in the Unix epoch format. Fractional
     * nanosecond data is provided by <code>offsetInNanos</code>.</p>
     */
    inline void SetTimeInSeconds(long long value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds = value; }

    /**
     * <p>The timestamp date, in seconds, in the Unix epoch format. Fractional
     * nanosecond data is provided by <code>offsetInNanos</code>.</p>
     */
    inline TimeInNanos& WithTimeInSeconds(long long value) { SetTimeInSeconds(value); return *this;}


    /**
     * <p>The nanosecond offset from <code>timeInSeconds</code>.</p>
     */
    inline int GetOffsetInNanos() const{ return m_offsetInNanos; }

    /**
     * <p>The nanosecond offset from <code>timeInSeconds</code>.</p>
     */
    inline bool OffsetInNanosHasBeenSet() const { return m_offsetInNanosHasBeenSet; }

    /**
     * <p>The nanosecond offset from <code>timeInSeconds</code>.</p>
     */
    inline void SetOffsetInNanos(int value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos = value; }

    /**
     * <p>The nanosecond offset from <code>timeInSeconds</code>.</p>
     */
    inline TimeInNanos& WithOffsetInNanos(int value) { SetOffsetInNanos(value); return *this;}

  private:

    long long m_timeInSeconds;
    bool m_timeInSecondsHasBeenSet = false;

    int m_offsetInNanos;
    bool m_offsetInNanosHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
