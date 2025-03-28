﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/BandwidthUnits.h>
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
   * <p>Object that describes the frequency bandwidth. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/FrequencyBandwidth">AWS
   * API Reference</a></p>
   */
  class FrequencyBandwidth
  {
  public:
    AWS_GROUNDSTATION_API FrequencyBandwidth() = default;
    AWS_GROUNDSTATION_API FrequencyBandwidth(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API FrequencyBandwidth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline BandwidthUnits GetUnits() const { return m_units; }
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }
    inline void SetUnits(BandwidthUnits value) { m_unitsHasBeenSet = true; m_units = value; }
    inline FrequencyBandwidth& WithUnits(BandwidthUnits value) { SetUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Frequency bandwidth value. AWS Ground Station currently has the following
     * bandwidth limitations:</p> <ul> <li> <p>For
     * <code>AntennaDownlinkDemodDecodeconfig</code>, valid values are between 125 kHz
     * to 650 MHz.</p> </li> <li> <p>For <code>AntennaDownlinkconfig</code>, valid
     * values are between 10 kHz to 54 MHz.</p> </li> <li> <p>For
     * <code>AntennaUplinkConfig</code>, valid values are between 10 kHz to 54 MHz.</p>
     * </li> </ul>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline FrequencyBandwidth& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    BandwidthUnits m_units{BandwidthUnits::NOT_SET};
    bool m_unitsHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
