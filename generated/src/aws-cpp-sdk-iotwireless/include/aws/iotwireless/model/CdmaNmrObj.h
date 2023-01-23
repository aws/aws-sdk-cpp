/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>CDMA object for network measurement reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CdmaNmrObj">AWS
   * API Reference</a></p>
   */
  class CdmaNmrObj
  {
  public:
    AWS_IOTWIRELESS_API CdmaNmrObj();
    AWS_IOTWIRELESS_API CdmaNmrObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CdmaNmrObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline int GetPnOffset() const{ return m_pnOffset; }

    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline bool PnOffsetHasBeenSet() const { return m_pnOffsetHasBeenSet; }

    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline void SetPnOffset(int value) { m_pnOffsetHasBeenSet = true; m_pnOffset = value; }

    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline CdmaNmrObj& WithPnOffset(int value) { SetPnOffset(value); return *this;}


    /**
     * <p>CDMA channel information.</p>
     */
    inline int GetCdmaChannel() const{ return m_cdmaChannel; }

    /**
     * <p>CDMA channel information.</p>
     */
    inline bool CdmaChannelHasBeenSet() const { return m_cdmaChannelHasBeenSet; }

    /**
     * <p>CDMA channel information.</p>
     */
    inline void SetCdmaChannel(int value) { m_cdmaChannelHasBeenSet = true; m_cdmaChannel = value; }

    /**
     * <p>CDMA channel information.</p>
     */
    inline CdmaNmrObj& WithCdmaChannel(int value) { SetCdmaChannel(value); return *this;}


    /**
     * <p>Transmit power level of the pilot signal, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetPilotPower() const{ return m_pilotPower; }

    /**
     * <p>Transmit power level of the pilot signal, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline bool PilotPowerHasBeenSet() const { return m_pilotPowerHasBeenSet; }

    /**
     * <p>Transmit power level of the pilot signal, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline void SetPilotPower(int value) { m_pilotPowerHasBeenSet = true; m_pilotPower = value; }

    /**
     * <p>Transmit power level of the pilot signal, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline CdmaNmrObj& WithPilotPower(int value) { SetPilotPower(value); return *this;}


    /**
     * <p>CDMA base station ID (BSID).</p>
     */
    inline int GetBaseStationId() const{ return m_baseStationId; }

    /**
     * <p>CDMA base station ID (BSID).</p>
     */
    inline bool BaseStationIdHasBeenSet() const { return m_baseStationIdHasBeenSet; }

    /**
     * <p>CDMA base station ID (BSID).</p>
     */
    inline void SetBaseStationId(int value) { m_baseStationIdHasBeenSet = true; m_baseStationId = value; }

    /**
     * <p>CDMA base station ID (BSID).</p>
     */
    inline CdmaNmrObj& WithBaseStationId(int value) { SetBaseStationId(value); return *this;}

  private:

    int m_pnOffset;
    bool m_pnOffsetHasBeenSet = false;

    int m_cdmaChannel;
    bool m_cdmaChannelHasBeenSet = false;

    int m_pilotPower;
    bool m_pilotPowerHasBeenSet = false;

    int m_baseStationId;
    bool m_baseStationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
