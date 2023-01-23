/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/CdmaLocalId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/CdmaNmrObj.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>CDMA (Code-division multiple access) object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CdmaObj">AWS
   * API Reference</a></p>
   */
  class CdmaObj
  {
  public:
    AWS_IOTWIRELESS_API CdmaObj();
    AWS_IOTWIRELESS_API CdmaObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CdmaObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>CDMA system ID (SID).</p>
     */
    inline int GetSystemId() const{ return m_systemId; }

    /**
     * <p>CDMA system ID (SID).</p>
     */
    inline bool SystemIdHasBeenSet() const { return m_systemIdHasBeenSet; }

    /**
     * <p>CDMA system ID (SID).</p>
     */
    inline void SetSystemId(int value) { m_systemIdHasBeenSet = true; m_systemId = value; }

    /**
     * <p>CDMA system ID (SID).</p>
     */
    inline CdmaObj& WithSystemId(int value) { SetSystemId(value); return *this;}


    /**
     * <p>CDMA network ID (NID).</p>
     */
    inline int GetNetworkId() const{ return m_networkId; }

    /**
     * <p>CDMA network ID (NID).</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>CDMA network ID (NID).</p>
     */
    inline void SetNetworkId(int value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>CDMA network ID (NID).</p>
     */
    inline CdmaObj& WithNetworkId(int value) { SetNetworkId(value); return *this;}


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
    inline CdmaObj& WithBaseStationId(int value) { SetBaseStationId(value); return *this;}


    /**
     * <p>CDMA registration zone (RZ).</p>
     */
    inline int GetRegistrationZone() const{ return m_registrationZone; }

    /**
     * <p>CDMA registration zone (RZ).</p>
     */
    inline bool RegistrationZoneHasBeenSet() const { return m_registrationZoneHasBeenSet; }

    /**
     * <p>CDMA registration zone (RZ).</p>
     */
    inline void SetRegistrationZone(int value) { m_registrationZoneHasBeenSet = true; m_registrationZone = value; }

    /**
     * <p>CDMA registration zone (RZ).</p>
     */
    inline CdmaObj& WithRegistrationZone(int value) { SetRegistrationZone(value); return *this;}


    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline const CdmaLocalId& GetCdmaLocalId() const{ return m_cdmaLocalId; }

    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline bool CdmaLocalIdHasBeenSet() const { return m_cdmaLocalIdHasBeenSet; }

    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline void SetCdmaLocalId(const CdmaLocalId& value) { m_cdmaLocalIdHasBeenSet = true; m_cdmaLocalId = value; }

    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline void SetCdmaLocalId(CdmaLocalId&& value) { m_cdmaLocalIdHasBeenSet = true; m_cdmaLocalId = std::move(value); }

    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline CdmaObj& WithCdmaLocalId(const CdmaLocalId& value) { SetCdmaLocalId(value); return *this;}

    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline CdmaObj& WithCdmaLocalId(CdmaLocalId&& value) { SetCdmaLocalId(std::move(value)); return *this;}


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
    inline CdmaObj& WithPilotPower(int value) { SetPilotPower(value); return *this;}


    /**
     * <p>CDMA base station latitude in degrees.</p>
     */
    inline double GetBaseLat() const{ return m_baseLat; }

    /**
     * <p>CDMA base station latitude in degrees.</p>
     */
    inline bool BaseLatHasBeenSet() const { return m_baseLatHasBeenSet; }

    /**
     * <p>CDMA base station latitude in degrees.</p>
     */
    inline void SetBaseLat(double value) { m_baseLatHasBeenSet = true; m_baseLat = value; }

    /**
     * <p>CDMA base station latitude in degrees.</p>
     */
    inline CdmaObj& WithBaseLat(double value) { SetBaseLat(value); return *this;}


    /**
     * <p>CDMA base station longtitude in degrees.</p>
     */
    inline double GetBaseLng() const{ return m_baseLng; }

    /**
     * <p>CDMA base station longtitude in degrees.</p>
     */
    inline bool BaseLngHasBeenSet() const { return m_baseLngHasBeenSet; }

    /**
     * <p>CDMA base station longtitude in degrees.</p>
     */
    inline void SetBaseLng(double value) { m_baseLngHasBeenSet = true; m_baseLng = value; }

    /**
     * <p>CDMA base station longtitude in degrees.</p>
     */
    inline CdmaObj& WithBaseLng(double value) { SetBaseLng(value); return *this;}


    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline const Aws::Vector<CdmaNmrObj>& GetCdmaNmr() const{ return m_cdmaNmr; }

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline bool CdmaNmrHasBeenSet() const { return m_cdmaNmrHasBeenSet; }

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline void SetCdmaNmr(const Aws::Vector<CdmaNmrObj>& value) { m_cdmaNmrHasBeenSet = true; m_cdmaNmr = value; }

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline void SetCdmaNmr(Aws::Vector<CdmaNmrObj>&& value) { m_cdmaNmrHasBeenSet = true; m_cdmaNmr = std::move(value); }

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline CdmaObj& WithCdmaNmr(const Aws::Vector<CdmaNmrObj>& value) { SetCdmaNmr(value); return *this;}

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline CdmaObj& WithCdmaNmr(Aws::Vector<CdmaNmrObj>&& value) { SetCdmaNmr(std::move(value)); return *this;}

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline CdmaObj& AddCdmaNmr(const CdmaNmrObj& value) { m_cdmaNmrHasBeenSet = true; m_cdmaNmr.push_back(value); return *this; }

    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline CdmaObj& AddCdmaNmr(CdmaNmrObj&& value) { m_cdmaNmrHasBeenSet = true; m_cdmaNmr.push_back(std::move(value)); return *this; }

  private:

    int m_systemId;
    bool m_systemIdHasBeenSet = false;

    int m_networkId;
    bool m_networkIdHasBeenSet = false;

    int m_baseStationId;
    bool m_baseStationIdHasBeenSet = false;

    int m_registrationZone;
    bool m_registrationZoneHasBeenSet = false;

    CdmaLocalId m_cdmaLocalId;
    bool m_cdmaLocalIdHasBeenSet = false;

    int m_pilotPower;
    bool m_pilotPowerHasBeenSet = false;

    double m_baseLat;
    bool m_baseLatHasBeenSet = false;

    double m_baseLng;
    bool m_baseLngHasBeenSet = false;

    Aws::Vector<CdmaNmrObj> m_cdmaNmr;
    bool m_cdmaNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
