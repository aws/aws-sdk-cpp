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
    AWS_GROUNDSTATION_API TLEData();
    AWS_GROUNDSTATION_API TLEData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API TLEData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>First line of two-line element set (TLE) data.</p>
     */
    inline const Aws::String& GetTleLine1() const{ return m_tleLine1; }
    inline bool TleLine1HasBeenSet() const { return m_tleLine1HasBeenSet; }
    inline void SetTleLine1(const Aws::String& value) { m_tleLine1HasBeenSet = true; m_tleLine1 = value; }
    inline void SetTleLine1(Aws::String&& value) { m_tleLine1HasBeenSet = true; m_tleLine1 = std::move(value); }
    inline void SetTleLine1(const char* value) { m_tleLine1HasBeenSet = true; m_tleLine1.assign(value); }
    inline TLEData& WithTleLine1(const Aws::String& value) { SetTleLine1(value); return *this;}
    inline TLEData& WithTleLine1(Aws::String&& value) { SetTleLine1(std::move(value)); return *this;}
    inline TLEData& WithTleLine1(const char* value) { SetTleLine1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Second line of two-line element set (TLE) data.</p>
     */
    inline const Aws::String& GetTleLine2() const{ return m_tleLine2; }
    inline bool TleLine2HasBeenSet() const { return m_tleLine2HasBeenSet; }
    inline void SetTleLine2(const Aws::String& value) { m_tleLine2HasBeenSet = true; m_tleLine2 = value; }
    inline void SetTleLine2(Aws::String&& value) { m_tleLine2HasBeenSet = true; m_tleLine2 = std::move(value); }
    inline void SetTleLine2(const char* value) { m_tleLine2HasBeenSet = true; m_tleLine2.assign(value); }
    inline TLEData& WithTleLine2(const Aws::String& value) { SetTleLine2(value); return *this;}
    inline TLEData& WithTleLine2(Aws::String&& value) { SetTleLine2(std::move(value)); return *this;}
    inline TLEData& WithTleLine2(const char* value) { SetTleLine2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid time range for the TLE. Gaps or overlap are not permitted.</p>
     */
    inline const TimeRange& GetValidTimeRange() const{ return m_validTimeRange; }
    inline bool ValidTimeRangeHasBeenSet() const { return m_validTimeRangeHasBeenSet; }
    inline void SetValidTimeRange(const TimeRange& value) { m_validTimeRangeHasBeenSet = true; m_validTimeRange = value; }
    inline void SetValidTimeRange(TimeRange&& value) { m_validTimeRangeHasBeenSet = true; m_validTimeRange = std::move(value); }
    inline TLEData& WithValidTimeRange(const TimeRange& value) { SetValidTimeRange(value); return *this;}
    inline TLEData& WithValidTimeRange(TimeRange&& value) { SetValidTimeRange(std::move(value)); return *this;}
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
