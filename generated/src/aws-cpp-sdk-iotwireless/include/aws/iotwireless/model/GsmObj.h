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
    AWS_IOTWIRELESS_API GsmObj() = default;
    AWS_IOTWIRELESS_API GsmObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API GsmObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Mobile Country Code.</p>
     */
    inline int GetMcc() const { return m_mcc; }
    inline bool MccHasBeenSet() const { return m_mccHasBeenSet; }
    inline void SetMcc(int value) { m_mccHasBeenSet = true; m_mcc = value; }
    inline GsmObj& WithMcc(int value) { SetMcc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mobile Network Code.</p>
     */
    inline int GetMnc() const { return m_mnc; }
    inline bool MncHasBeenSet() const { return m_mncHasBeenSet; }
    inline void SetMnc(int value) { m_mncHasBeenSet = true; m_mnc = value; }
    inline GsmObj& WithMnc(int value) { SetMnc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location area code.</p>
     */
    inline int GetLac() const { return m_lac; }
    inline bool LacHasBeenSet() const { return m_lacHasBeenSet; }
    inline void SetLac(int value) { m_lacHasBeenSet = true; m_lac = value; }
    inline GsmObj& WithLac(int value) { SetLac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>GERAN (GSM EDGE Radio Access Network) Cell Global Identifier.</p>
     */
    inline int GetGeranCid() const { return m_geranCid; }
    inline bool GeranCidHasBeenSet() const { return m_geranCidHasBeenSet; }
    inline void SetGeranCid(int value) { m_geranCidHasBeenSet = true; m_geranCid = value; }
    inline GsmObj& WithGeranCid(int value) { SetGeranCid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>GSM local identification (local ID) information.</p>
     */
    inline const GsmLocalId& GetGsmLocalId() const { return m_gsmLocalId; }
    inline bool GsmLocalIdHasBeenSet() const { return m_gsmLocalIdHasBeenSet; }
    template<typename GsmLocalIdT = GsmLocalId>
    void SetGsmLocalId(GsmLocalIdT&& value) { m_gsmLocalIdHasBeenSet = true; m_gsmLocalId = std::forward<GsmLocalIdT>(value); }
    template<typename GsmLocalIdT = GsmLocalId>
    GsmObj& WithGsmLocalId(GsmLocalIdT&& value) { SetGsmLocalId(std::forward<GsmLocalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timing advance value, which corresponds to the length of time a signal takes
     * to reach the base station from a mobile phone.</p>
     */
    inline int GetGsmTimingAdvance() const { return m_gsmTimingAdvance; }
    inline bool GsmTimingAdvanceHasBeenSet() const { return m_gsmTimingAdvanceHasBeenSet; }
    inline void SetGsmTimingAdvance(int value) { m_gsmTimingAdvanceHasBeenSet = true; m_gsmTimingAdvance = value; }
    inline GsmObj& WithGsmTimingAdvance(int value) { SetGsmTimingAdvance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rx level, which is the received signal power, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRxLevel() const { return m_rxLevel; }
    inline bool RxLevelHasBeenSet() const { return m_rxLevelHasBeenSet; }
    inline void SetRxLevel(int value) { m_rxLevelHasBeenSet = true; m_rxLevel = value; }
    inline GsmObj& WithRxLevel(int value) { SetRxLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>GSM object for network measurement reports.</p>
     */
    inline const Aws::Vector<GsmNmrObj>& GetGsmNmr() const { return m_gsmNmr; }
    inline bool GsmNmrHasBeenSet() const { return m_gsmNmrHasBeenSet; }
    template<typename GsmNmrT = Aws::Vector<GsmNmrObj>>
    void SetGsmNmr(GsmNmrT&& value) { m_gsmNmrHasBeenSet = true; m_gsmNmr = std::forward<GsmNmrT>(value); }
    template<typename GsmNmrT = Aws::Vector<GsmNmrObj>>
    GsmObj& WithGsmNmr(GsmNmrT&& value) { SetGsmNmr(std::forward<GsmNmrT>(value)); return *this;}
    template<typename GsmNmrT = GsmNmrObj>
    GsmObj& AddGsmNmr(GsmNmrT&& value) { m_gsmNmrHasBeenSet = true; m_gsmNmr.emplace_back(std::forward<GsmNmrT>(value)); return *this; }
    ///@}
  private:

    int m_mcc{0};
    bool m_mccHasBeenSet = false;

    int m_mnc{0};
    bool m_mncHasBeenSet = false;

    int m_lac{0};
    bool m_lacHasBeenSet = false;

    int m_geranCid{0};
    bool m_geranCidHasBeenSet = false;

    GsmLocalId m_gsmLocalId;
    bool m_gsmLocalIdHasBeenSet = false;

    int m_gsmTimingAdvance{0};
    bool m_gsmTimingAdvanceHasBeenSet = false;

    int m_rxLevel{0};
    bool m_rxLevelHasBeenSet = false;

    Aws::Vector<GsmNmrObj> m_gsmNmr;
    bool m_gsmNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
