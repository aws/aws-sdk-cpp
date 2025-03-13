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
    AWS_IOT_API AssetPropertyTimestamp() = default;
    AWS_IOT_API AssetPropertyTimestamp(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AssetPropertyTimestamp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that contains the time in seconds since epoch. Accepts substitution
     * templates.</p>
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
     * <p>Optional. A string that contains the nanosecond time offset. Accepts
     * substitution templates.</p>
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
} // namespace IoT
} // namespace Aws
