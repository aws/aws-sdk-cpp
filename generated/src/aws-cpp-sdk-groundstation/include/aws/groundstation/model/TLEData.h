/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/TimeRange.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Two-line element set (TLE) data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TLEData">AWS
   * API Reference</a></p>
   */
  class TLEData
  {
  public:
    AWS_GROUNDSTATION_API TLEData() = default;
    AWS_GROUNDSTATION_API TLEData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API TLEData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>First line of two-line element set (TLE) data.</p>
     */
    inline const Aws::String& GetTleLine1() const { return m_tleLine1; }
    inline bool TleLine1HasBeenSet() const { return m_tleLine1HasBeenSet; }
    template<typename TleLine1T = Aws::String>
    void SetTleLine1(TleLine1T&& value) { m_tleLine1HasBeenSet = true; m_tleLine1 = std::forward<TleLine1T>(value); }
    template<typename TleLine1T = Aws::String>
    TLEData& WithTleLine1(TleLine1T&& value) { SetTleLine1(std::forward<TleLine1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Second line of two-line element set (TLE) data.</p>
     */
    inline const Aws::String& GetTleLine2() const { return m_tleLine2; }
    inline bool TleLine2HasBeenSet() const { return m_tleLine2HasBeenSet; }
    template<typename TleLine2T = Aws::String>
    void SetTleLine2(TleLine2T&& value) { m_tleLine2HasBeenSet = true; m_tleLine2 = std::forward<TleLine2T>(value); }
    template<typename TleLine2T = Aws::String>
    TLEData& WithTleLine2(TleLine2T&& value) { SetTleLine2(std::forward<TleLine2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid time range for the TLE. Gaps or overlap are not permitted.</p>
     */
    inline const TimeRange& GetValidTimeRange() const { return m_validTimeRange; }
    inline bool ValidTimeRangeHasBeenSet() const { return m_validTimeRangeHasBeenSet; }
    template<typename ValidTimeRangeT = TimeRange>
    void SetValidTimeRange(ValidTimeRangeT&& value) { m_validTimeRangeHasBeenSet = true; m_validTimeRange = std::forward<ValidTimeRangeT>(value); }
    template<typename ValidTimeRangeT = TimeRange>
    TLEData& WithValidTimeRange(ValidTimeRangeT&& value) { SetValidTimeRange(std::forward<ValidTimeRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tleLine1;
    bool m_tleLine1HasBeenSet = false;

    Aws::String m_tleLine2;
    bool m_tleLine2HasBeenSet = false;

    TimeRange m_validTimeRange;
    bool m_validTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
