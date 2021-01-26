/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>A structure that contains timestamp information. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_TimeInNanos.html">TimeInNanos</a>
   * in the <i>AWS IoT SiteWise API Reference</i>.</p> <p>For parameters that are
   * string data type, you can specify the following options:</p> <ul> <li> <p>Use a
   * string. For example, the <code>timeInSeconds</code> value can be
   * <code>'1586400675'</code>.</p> </li> <li> <p>Use an expression. For example, the
   * <code>timeInSeconds</code> value can be
   * <code>'${$input.TemperatureInput.sensorData.timestamp/1000}'</code>.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AssetPropertyTimestamp">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API AssetPropertyTimestamp
  {
  public:
    AssetPropertyTimestamp();
    AssetPropertyTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AssetPropertyTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline const Aws::String& GetTimeInSeconds() const{ return m_timeInSeconds; }

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline bool TimeInSecondsHasBeenSet() const { return m_timeInSecondsHasBeenSet; }

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline void SetTimeInSeconds(const Aws::String& value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds = value; }

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline void SetTimeInSeconds(Aws::String&& value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds = std::move(value); }

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline void SetTimeInSeconds(const char* value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds.assign(value); }

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline AssetPropertyTimestamp& WithTimeInSeconds(const Aws::String& value) { SetTimeInSeconds(value); return *this;}

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline AssetPropertyTimestamp& WithTimeInSeconds(Aws::String&& value) { SetTimeInSeconds(std::move(value)); return *this;}

    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199. You can also specify an expression.</p>
     */
    inline AssetPropertyTimestamp& WithTimeInSeconds(const char* value) { SetTimeInSeconds(value); return *this;}


    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline const Aws::String& GetOffsetInNanos() const{ return m_offsetInNanos; }

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline bool OffsetInNanosHasBeenSet() const { return m_offsetInNanosHasBeenSet; }

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline void SetOffsetInNanos(const Aws::String& value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos = value; }

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline void SetOffsetInNanos(Aws::String&& value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos = std::move(value); }

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline void SetOffsetInNanos(const char* value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos.assign(value); }

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline AssetPropertyTimestamp& WithOffsetInNanos(const Aws::String& value) { SetOffsetInNanos(value); return *this;}

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline AssetPropertyTimestamp& WithOffsetInNanos(Aws::String&& value) { SetOffsetInNanos(std::move(value)); return *this;}

    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999. You can also specify an expression.</p>
     */
    inline AssetPropertyTimestamp& WithOffsetInNanos(const char* value) { SetOffsetInNanos(value); return *this;}

  private:

    Aws::String m_timeInSeconds;
    bool m_timeInSecondsHasBeenSet;

    Aws::String m_offsetInNanos;
    bool m_offsetInNanosHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
