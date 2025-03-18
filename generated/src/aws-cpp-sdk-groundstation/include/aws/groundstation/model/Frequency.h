/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/FrequencyUnits.h>
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
   * <p>Object that describes the frequency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/Frequency">AWS
   * API Reference</a></p>
   */
  class Frequency
  {
  public:
    AWS_GROUNDSTATION_API Frequency() = default;
    AWS_GROUNDSTATION_API Frequency(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Frequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Frequency units.</p>
     */
    inline FrequencyUnits GetUnits() const { return m_units; }
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }
    inline void SetUnits(FrequencyUnits value) { m_unitsHasBeenSet = true; m_units = value; }
    inline Frequency& WithUnits(FrequencyUnits value) { SetUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Frequency value. Valid values are between 2200 to 2300 MHz and 7750 to 8400
     * MHz for downlink and 2025 to 2120 MHz for uplink.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Frequency& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    FrequencyUnits m_units{FrequencyUnits::NOT_SET};
    bool m_unitsHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
