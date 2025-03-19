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
    AWS_IOTWIRELESS_API CdmaObj() = default;
    AWS_IOTWIRELESS_API CdmaObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CdmaObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>CDMA system ID (SID).</p>
     */
    inline int GetSystemId() const { return m_systemId; }
    inline bool SystemIdHasBeenSet() const { return m_systemIdHasBeenSet; }
    inline void SetSystemId(int value) { m_systemIdHasBeenSet = true; m_systemId = value; }
    inline CdmaObj& WithSystemId(int value) { SetSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA network ID (NID).</p>
     */
    inline int GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(int value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline CdmaObj& WithNetworkId(int value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA base station ID (BSID).</p>
     */
    inline int GetBaseStationId() const { return m_baseStationId; }
    inline bool BaseStationIdHasBeenSet() const { return m_baseStationIdHasBeenSet; }
    inline void SetBaseStationId(int value) { m_baseStationIdHasBeenSet = true; m_baseStationId = value; }
    inline CdmaObj& WithBaseStationId(int value) { SetBaseStationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA registration zone (RZ).</p>
     */
    inline int GetRegistrationZone() const { return m_registrationZone; }
    inline bool RegistrationZoneHasBeenSet() const { return m_registrationZoneHasBeenSet; }
    inline void SetRegistrationZone(int value) { m_registrationZoneHasBeenSet = true; m_registrationZone = value; }
    inline CdmaObj& WithRegistrationZone(int value) { SetRegistrationZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA local identification (local ID) parameters.</p>
     */
    inline const CdmaLocalId& GetCdmaLocalId() const { return m_cdmaLocalId; }
    inline bool CdmaLocalIdHasBeenSet() const { return m_cdmaLocalIdHasBeenSet; }
    template<typename CdmaLocalIdT = CdmaLocalId>
    void SetCdmaLocalId(CdmaLocalIdT&& value) { m_cdmaLocalIdHasBeenSet = true; m_cdmaLocalId = std::forward<CdmaLocalIdT>(value); }
    template<typename CdmaLocalIdT = CdmaLocalId>
    CdmaObj& WithCdmaLocalId(CdmaLocalIdT&& value) { SetCdmaLocalId(std::forward<CdmaLocalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transmit power level of the pilot signal, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetPilotPower() const { return m_pilotPower; }
    inline bool PilotPowerHasBeenSet() const { return m_pilotPowerHasBeenSet; }
    inline void SetPilotPower(int value) { m_pilotPowerHasBeenSet = true; m_pilotPower = value; }
    inline CdmaObj& WithPilotPower(int value) { SetPilotPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA base station latitude in degrees.</p>
     */
    inline double GetBaseLat() const { return m_baseLat; }
    inline bool BaseLatHasBeenSet() const { return m_baseLatHasBeenSet; }
    inline void SetBaseLat(double value) { m_baseLatHasBeenSet = true; m_baseLat = value; }
    inline CdmaObj& WithBaseLat(double value) { SetBaseLat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA base station longitude in degrees.</p>
     */
    inline double GetBaseLng() const { return m_baseLng; }
    inline bool BaseLngHasBeenSet() const { return m_baseLngHasBeenSet; }
    inline void SetBaseLng(double value) { m_baseLngHasBeenSet = true; m_baseLng = value; }
    inline CdmaObj& WithBaseLng(double value) { SetBaseLng(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>CDMA network measurement reports.</p>
     */
    inline const Aws::Vector<CdmaNmrObj>& GetCdmaNmr() const { return m_cdmaNmr; }
    inline bool CdmaNmrHasBeenSet() const { return m_cdmaNmrHasBeenSet; }
    template<typename CdmaNmrT = Aws::Vector<CdmaNmrObj>>
    void SetCdmaNmr(CdmaNmrT&& value) { m_cdmaNmrHasBeenSet = true; m_cdmaNmr = std::forward<CdmaNmrT>(value); }
    template<typename CdmaNmrT = Aws::Vector<CdmaNmrObj>>
    CdmaObj& WithCdmaNmr(CdmaNmrT&& value) { SetCdmaNmr(std::forward<CdmaNmrT>(value)); return *this;}
    template<typename CdmaNmrT = CdmaNmrObj>
    CdmaObj& AddCdmaNmr(CdmaNmrT&& value) { m_cdmaNmrHasBeenSet = true; m_cdmaNmr.emplace_back(std::forward<CdmaNmrT>(value)); return *this; }
    ///@}
  private:

    int m_systemId{0};
    bool m_systemIdHasBeenSet = false;

    int m_networkId{0};
    bool m_networkIdHasBeenSet = false;

    int m_baseStationId{0};
    bool m_baseStationIdHasBeenSet = false;

    int m_registrationZone{0};
    bool m_registrationZoneHasBeenSet = false;

    CdmaLocalId m_cdmaLocalId;
    bool m_cdmaLocalIdHasBeenSet = false;

    int m_pilotPower{0};
    bool m_pilotPowerHasBeenSet = false;

    double m_baseLat{0.0};
    bool m_baseLatHasBeenSet = false;

    double m_baseLng{0.0};
    bool m_baseLngHasBeenSet = false;

    Aws::Vector<CdmaNmrObj> m_cdmaNmr;
    bool m_cdmaNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
