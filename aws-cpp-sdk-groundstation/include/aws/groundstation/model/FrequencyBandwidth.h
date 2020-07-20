/**
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
  class AWS_GROUNDSTATION_API FrequencyBandwidth
  {
  public:
    FrequencyBandwidth();
    FrequencyBandwidth(Aws::Utils::Json::JsonView jsonValue);
    FrequencyBandwidth& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline const BandwidthUnits& GetUnits() const{ return m_units; }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline void SetUnits(const BandwidthUnits& value) { m_unitsHasBeenSet = true; m_units = value; }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline void SetUnits(BandwidthUnits&& value) { m_unitsHasBeenSet = true; m_units = std::move(value); }

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline FrequencyBandwidth& WithUnits(const BandwidthUnits& value) { SetUnits(value); return *this;}

    /**
     * <p>Frequency bandwidth units.</p>
     */
    inline FrequencyBandwidth& WithUnits(BandwidthUnits&& value) { SetUnits(std::move(value)); return *this;}


    /**
     * <p>Frequency bandwidth value. AWS Ground Station currently has the following
     * bandwidth limitations:</p> <ul> <li> <p>For
     * <code>AntennaDownlinkDemodDecodeconfig</code>, valid values are between 125 kHz
     * to 650 MHz.</p> </li> <li> <p>For <code>AntennaDownlinkconfig</code>, valid
     * values are between 10 kHz to 54 MHz.</p> </li> <li> <p>For
     * <code>AntennaUplinkConfig</code>, valid values are between 10 kHz to 54 MHz.</p>
     * </li> </ul>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>Frequency bandwidth value. AWS Ground Station currently has the following
     * bandwidth limitations:</p> <ul> <li> <p>For
     * <code>AntennaDownlinkDemodDecodeconfig</code>, valid values are between 125 kHz
     * to 650 MHz.</p> </li> <li> <p>For <code>AntennaDownlinkconfig</code>, valid
     * values are between 10 kHz to 54 MHz.</p> </li> <li> <p>For
     * <code>AntennaUplinkConfig</code>, valid values are between 10 kHz to 54 MHz.</p>
     * </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Frequency bandwidth value. AWS Ground Station currently has the following
     * bandwidth limitations:</p> <ul> <li> <p>For
     * <code>AntennaDownlinkDemodDecodeconfig</code>, valid values are between 125 kHz
     * to 650 MHz.</p> </li> <li> <p>For <code>AntennaDownlinkconfig</code>, valid
     * values are between 10 kHz to 54 MHz.</p> </li> <li> <p>For
     * <code>AntennaUplinkConfig</code>, valid values are between 10 kHz to 54 MHz.</p>
     * </li> </ul>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Frequency bandwidth value. AWS Ground Station currently has the following
     * bandwidth limitations:</p> <ul> <li> <p>For
     * <code>AntennaDownlinkDemodDecodeconfig</code>, valid values are between 125 kHz
     * to 650 MHz.</p> </li> <li> <p>For <code>AntennaDownlinkconfig</code>, valid
     * values are between 10 kHz to 54 MHz.</p> </li> <li> <p>For
     * <code>AntennaUplinkConfig</code>, valid values are between 10 kHz to 54 MHz.</p>
     * </li> </ul>
     */
    inline FrequencyBandwidth& WithValue(double value) { SetValue(value); return *this;}

  private:

    BandwidthUnits m_units;
    bool m_unitsHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
