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
   * in the <i>AWS IoT SiteWise API Reference</i>.</p> <p>You must use expressions
   * for all parameters in <code>AssetPropertyTimestamp</code>. The expressions
   * accept literals, operators, functions, references, and substitution
   * templates.</p> <p class="title"> <b>Examples</b> </p> <ul> <li> <p>For literal
   * values, the expressions must contain single quotes. For example, the value for
   * the <code>timeInSeconds</code> parameter can be <code>'1586400675'</code>.</p>
   * </li> <li> <p>For references, you must specify either variables or input values.
   * For example, the value for the <code>offsetInNanos</code> parameter can be
   * <code>$variable.time</code>.</p> </li> <li> <p>For a substitution template, you
   * must use <code>${}</code>, and the template must be in single quotes. A
   * substitution template can also contain a combination of literals, operators,
   * functions, references, and substitution templates.</p> <p>In the following
   * example, the value for the <code>timeInSeconds</code> parameter uses a
   * substitution template.</p> <p>
   * <code>'${$input.TemperatureInput.sensorData.timestamp / 1000}'</code> </p> </li>
   * </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AssetPropertyTimestamp">AWS
   * API Reference</a></p>
   */
  class AssetPropertyTimestamp
  {
  public:
    AWS_IOTEVENTS_API AssetPropertyTimestamp() = default;
    AWS_IOTEVENTS_API AssetPropertyTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AssetPropertyTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp, in seconds, in the Unix epoch format. The valid range is
     * between 1-31556889864403199.</p>
     */
    inline const Aws::String& GetTimeInSeconds() const { return m_timeInSeconds; }
    inline bool TimeInSecondsHasBeenSet() const { return m_timeInSecondsHasBeenSet; }
    template<typename TimeInSecondsT = Aws::String>
    void SetTimeInSeconds(TimeInSecondsT&& value) { m_timeInSecondsHasBeenSet = true; m_timeInSeconds = std::forward<TimeInSecondsT>(value); }
    template<typename TimeInSecondsT = Aws::String>
    AssetPropertyTimestamp& WithTimeInSeconds(TimeInSecondsT&& value) { SetTimeInSeconds(std::forward<TimeInSecondsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nanosecond offset converted from <code>timeInSeconds</code>. The valid
     * range is between 0-999999999.</p>
     */
    inline const Aws::String& GetOffsetInNanos() const { return m_offsetInNanos; }
    inline bool OffsetInNanosHasBeenSet() const { return m_offsetInNanosHasBeenSet; }
    template<typename OffsetInNanosT = Aws::String>
    void SetOffsetInNanos(OffsetInNanosT&& value) { m_offsetInNanosHasBeenSet = true; m_offsetInNanos = std::forward<OffsetInNanosT>(value); }
    template<typename OffsetInNanosT = Aws::String>
    AssetPropertyTimestamp& WithOffsetInNanos(OffsetInNanosT&& value) { SetOffsetInNanos(std::forward<OffsetInNanosT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timeInSeconds;
    bool m_timeInSecondsHasBeenSet = false;

    Aws::String m_offsetInNanos;
    bool m_offsetInNanosHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
