/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/GsmLocalId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/GsmNmrObj.h>
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
   * <p>GSM object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GsmObj">AWS
   * API Reference</a></p>
   */
  class GsmObj
  {
  public:
    AWS_IOTWIRELESS_API GsmObj();
    AWS_IOTWIRELESS_API GsmObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GsmObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Mobile Country Code.</p>
     */
    inline int GetMcc() const{ return m_mcc; }

    /**
     * <p>Mobile Country Code.</p>
     */
    inline bool MccHasBeenSet() const { return m_mccHasBeenSet; }

    /**
     * <p>Mobile Country Code.</p>
     */
    inline void SetMcc(int value) { m_mccHasBeenSet = true; m_mcc = value; }

    /**
     * <p>Mobile Country Code.</p>
     */
    inline GsmObj& WithMcc(int value) { SetMcc(value); return *this;}


    /**
     * <p>Mobile Network Code.</p>
     */
    inline int GetMnc() const{ return m_mnc; }

    /**
     * <p>Mobile Network Code.</p>
     */
    inline bool MncHasBeenSet() const { return m_mncHasBeenSet; }

    /**
     * <p>Mobile Network Code.</p>
     */
    inline void SetMnc(int value) { m_mncHasBeenSet = true; m_mnc = value; }

    /**
     * <p>Mobile Network Code.</p>
     */
    inline GsmObj& WithMnc(int value) { SetMnc(value); return *this;}


    /**
     * <p>Location area code.</p>
     */
    inline int GetLac() const{ return m_lac; }

    /**
     * <p>Location area code.</p>
     */
    inline bool LacHasBeenSet() const { return m_lacHasBeenSet; }

    /**
     * <p>Location area code.</p>
     */
    inline void SetLac(int value) { m_lacHasBeenSet = true; m_lac = value; }

    /**
     * <p>Location area code.</p>
     */
    inline GsmObj& WithLac(int value) { SetLac(value); return *this;}


    /**
     * <p>GERAN (GSM EDGE Radio Access Network) Cell Global Identifier.</p>
     */
    inline int GetGeranCid() const{ return m_geranCid; }

    /**
     * <p>GERAN (GSM EDGE Radio Access Network) Cell Global Identifier.</p>
     */
    inline bool GeranCidHasBeenSet() const { return m_geranCidHasBeenSet; }

    /**
     * <p>GERAN (GSM EDGE Radio Access Network) Cell Global Identifier.</p>
     */
    inline void SetGeranCid(int value) { m_geranCidHasBeenSet = true; m_geranCid = value; }

    /**
     * <p>GERAN (GSM EDGE Radio Access Network) Cell Global Identifier.</p>
     */
    inline GsmObj& WithGeranCid(int value) { SetGeranCid(value); return *this;}


    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline const GsmLocalId& GetGsmLocalId() const{ return m_gsmLocalId; }

    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline bool GsmLocalIdHasBeenSet() const { return m_gsmLocalIdHasBeenSet; }

    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline void SetGsmLocalId(const GsmLocalId& value) { m_gsmLocalIdHasBeenSet = true; m_gsmLocalId = value; }

    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline void SetGsmLocalId(GsmLocalId&& value) { m_gsmLocalIdHasBeenSet = true; m_gsmLocalId = std::move(value); }

    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline GsmObj& WithGsmLocalId(const GsmLocalId& value) { SetGsmLocalId(value); return *this;}

    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline GsmObj& WithGsmLocalId(GsmLocalId&& value) { SetGsmLocalId(std::move(value)); return *this;}


    /**
     * <p>Timing advance value, which corresponds to the length of time a signal takes
     * to reach the base station from a mobile phone.</p>
     */
    inline int GetGsmTimingAdvance() const{ return m_gsmTimingAdvance; }

    /**
     * <p>Timing advance value, which corresponds to the length of time a signal takes
     * to reach the base station from a mobile phone.</p>
     */
    inline bool GsmTimingAdvanceHasBeenSet() const { return m_gsmTimingAdvanceHasBeenSet; }

    /**
     * <p>Timing advance value, which corresponds to the length of time a signal takes
     * to reach the base station from a mobile phone.</p>
     */
    inline void SetGsmTimingAdvance(int value) { m_gsmTimingAdvanceHasBeenSet = true; m_gsmTimingAdvance = value; }

    /**
     * <p>Timing advance value, which corresponds to the length of time a signal takes
     * to reach the base station from a mobile phone.</p>
     */
    inline GsmObj& WithGsmTimingAdvance(int value) { SetGsmTimingAdvance(value); return *this;}


    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRxLevel() const{ return m_rxLevel; }

    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline bool RxLevelHasBeenSet() const { return m_rxLevelHasBeenSet; }

    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline void SetRxLevel(int value) { m_rxLevelHasBeenSet = true; m_rxLevel = value; }

    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline GsmObj& WithRxLevel(int value) { SetRxLevel(value); return *this;}


    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline const Aws::Vector<GsmNmrObj>& GetGsmNmr() const{ return m_gsmNmr; }

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline bool GsmNmrHasBeenSet() const { return m_gsmNmrHasBeenSet; }

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline void SetGsmNmr(const Aws::Vector<GsmNmrObj>& value) { m_gsmNmrHasBeenSet = true; m_gsmNmr = value; }

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline void SetGsmNmr(Aws::Vector<GsmNmrObj>&& value) { m_gsmNmrHasBeenSet = true; m_gsmNmr = std::move(value); }

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline GsmObj& WithGsmNmr(const Aws::Vector<GsmNmrObj>& value) { SetGsmNmr(value); return *this;}

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline GsmObj& WithGsmNmr(Aws::Vector<GsmNmrObj>&& value) { SetGsmNmr(std::move(value)); return *this;}

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline GsmObj& AddGsmNmr(const GsmNmrObj& value) { m_gsmNmrHasBeenSet = true; m_gsmNmr.push_back(value); return *this; }

    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline GsmObj& AddGsmNmr(GsmNmrObj&& value) { m_gsmNmrHasBeenSet = true; m_gsmNmr.push_back(std::move(value)); return *this; }

  private:

    int m_mcc;
    bool m_mccHasBeenSet = false;

    int m_mnc;
    bool m_mncHasBeenSet = false;

    int m_lac;
    bool m_lacHasBeenSet = false;

    int m_geranCid;
    bool m_geranCidHasBeenSet = false;

    GsmLocalId m_gsmLocalId;
    bool m_gsmLocalIdHasBeenSet = false;

    int m_gsmTimingAdvance;
    bool m_gsmTimingAdvanceHasBeenSet = false;

    int m_rxLevel;
    bool m_rxLevelHasBeenSet = false;

    Aws::Vector<GsmNmrObj> m_gsmNmr;
    bool m_gsmNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
