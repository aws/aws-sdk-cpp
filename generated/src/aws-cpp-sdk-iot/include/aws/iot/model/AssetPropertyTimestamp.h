/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An asset property timestamp entry containing the following
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssetPropertyTimestamp">AWS
   * API Reference</a></p>
   */
  class AssetPropertyTimestamp
  {
  public:
    AWS_IOT_API AssetPropertyTimestamp();
    AWS_IOT_API AssetPropertyTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AssetPropertyTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline const Aws::String& GetTimeInSeconds() const{ return m_timeInSeconds; }

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline bool TimeInSecondsHasBeenSet() const { return m_timeInSecondsHasBeenSet; }

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline void SetTimeInSeconds(const Aws::String& value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds = value; }

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline void SetTimeInSeconds(Aws::String&& value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds = std::move(value); }

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline void SetTimeInSeconds(const char* value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds.assign(value); }

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline AssetPropertyTimestamp& WithTimeInSeconds(const Aws::String& value) { SetTimeInSeconds(value); return *this;}

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline AssetPropertyTimestamp& WithTimeInSeconds(Aws::String&& value) { SetTimeInSeconds(std::move(value)); return *this;}

    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
     */
    inline AssetPropertyTimestamp& WithTimeInSeconds(const char* value) { SetTimeInSeconds(value); return *this;}


    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline const Aws::String& GetOffsetInNanos() const{ return m_offsetInNanos; }

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline bool OffsetInNanosHasBeenSet() const { return m_offsetInNanosHasBeenSet; }

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline void SetOffsetInNanos(const Aws::String& value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos = value; }

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline void SetOffsetInNanos(Aws::String&& value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos = std::move(value); }

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline void SetOffsetInNanos(const char* value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos.assign(value); }

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline AssetPropertyTimestamp& WithOffsetInNanos(const Aws::String& value) { SetOffsetInNanos(value); return *this;}

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline AssetPropertyTimestamp& WithOffsetInNanos(Aws::String&& value) { SetOffsetInNanos(std::move(value)); return *this;}

    /**
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
     */
    inline AssetPropertyTimestamp& WithOffsetInNanos(const char* value) { SetOffsetInNanos(value); return *this;}

  private:

    Aws::String m_timeInSeconds;
    bool m_timeInSecondsHasBeenSet = false;

    Aws::String m_offsetInNanos;
    bool m_offsetInNanosHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
