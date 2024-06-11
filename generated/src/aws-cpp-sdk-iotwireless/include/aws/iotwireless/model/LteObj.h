/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/LteLocalId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/LteNmrObj.h>
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
   * <p>LTE object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LteObj">AWS
   * API Reference</a></p>
   */
  class LteObj
  {
  public:
    AWS_IOTWIRELESS_API LteObj();
    AWS_IOTWIRELESS_API LteObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LteObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Mobile Country Code.</p>
     */
    inline int GetMcc() const{ return m_mcc; }
    inline bool MccHasBeenSet() const { return m_mccHasBeenSet; }
    inline void SetMcc(int value) { m_mccHasBeenSet = true; m_mcc = value; }
    inline LteObj& WithMcc(int value) { SetMcc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mobile Network Code.</p>
     */
    inline int GetMnc() const{ return m_mnc; }
    inline bool MncHasBeenSet() const { return m_mncHasBeenSet; }
    inline void SetMnc(int value) { m_mncHasBeenSet = true; m_mnc = value; }
    inline LteObj& WithMnc(int value) { SetMnc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>E-UTRAN (Evolved Universal Terrestrial Radio Access Network) Cell Global
     * Identifier.</p>
     */
    inline int GetEutranCid() const{ return m_eutranCid; }
    inline bool EutranCidHasBeenSet() const { return m_eutranCidHasBeenSet; }
    inline void SetEutranCid(int value) { m_eutranCidHasBeenSet = true; m_eutranCid = value; }
    inline LteObj& WithEutranCid(int value) { SetEutranCid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>LTE tracking area code.</p>
     */
    inline int GetTac() const{ return m_tac; }
    inline bool TacHasBeenSet() const { return m_tacHasBeenSet; }
    inline void SetTac(int value) { m_tacHasBeenSet = true; m_tac = value; }
    inline LteObj& WithTac(int value) { SetTac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>LTE local identification (local ID) information.</p>
     */
    inline const LteLocalId& GetLteLocalId() const{ return m_lteLocalId; }
    inline bool LteLocalIdHasBeenSet() const { return m_lteLocalIdHasBeenSet; }
    inline void SetLteLocalId(const LteLocalId& value) { m_lteLocalIdHasBeenSet = true; m_lteLocalId = value; }
    inline void SetLteLocalId(LteLocalId&& value) { m_lteLocalIdHasBeenSet = true; m_lteLocalId = std::move(value); }
    inline LteObj& WithLteLocalId(const LteLocalId& value) { SetLteLocalId(value); return *this;}
    inline LteObj& WithLteLocalId(LteLocalId&& value) { SetLteLocalId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>LTE timing advance.</p>
     */
    inline int GetLteTimingAdvance() const{ return m_lteTimingAdvance; }
    inline bool LteTimingAdvanceHasBeenSet() const { return m_lteTimingAdvanceHasBeenSet; }
    inline void SetLteTimingAdvance(int value) { m_lteTimingAdvanceHasBeenSet = true; m_lteTimingAdvance = value; }
    inline LteObj& WithLteTimingAdvance(int value) { SetLteTimingAdvance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRsrp() const{ return m_rsrp; }
    inline bool RsrpHasBeenSet() const { return m_rsrpHasBeenSet; }
    inline void SetRsrp(int value) { m_rsrpHasBeenSet = true; m_rsrp = value; }
    inline LteObj& WithRsrp(int value) { SetRsrp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline double GetRsrq() const{ return m_rsrq; }
    inline bool RsrqHasBeenSet() const { return m_rsrqHasBeenSet; }
    inline void SetRsrq(double value) { m_rsrqHasBeenSet = true; m_rsrq = value; }
    inline LteObj& WithRsrq(double value) { SetRsrq(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter that determines whether the LTE object is capable of supporting NR
     * (new radio).</p>
     */
    inline bool GetNrCapable() const{ return m_nrCapable; }
    inline bool NrCapableHasBeenSet() const { return m_nrCapableHasBeenSet; }
    inline void SetNrCapable(bool value) { m_nrCapableHasBeenSet = true; m_nrCapable = value; }
    inline LteObj& WithNrCapable(bool value) { SetNrCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>LTE object for network measurement reports.</p>
     */
    inline const Aws::Vector<LteNmrObj>& GetLteNmr() const{ return m_lteNmr; }
    inline bool LteNmrHasBeenSet() const { return m_lteNmrHasBeenSet; }
    inline void SetLteNmr(const Aws::Vector<LteNmrObj>& value) { m_lteNmrHasBeenSet = true; m_lteNmr = value; }
    inline void SetLteNmr(Aws::Vector<LteNmrObj>&& value) { m_lteNmrHasBeenSet = true; m_lteNmr = std::move(value); }
    inline LteObj& WithLteNmr(const Aws::Vector<LteNmrObj>& value) { SetLteNmr(value); return *this;}
    inline LteObj& WithLteNmr(Aws::Vector<LteNmrObj>&& value) { SetLteNmr(std::move(value)); return *this;}
    inline LteObj& AddLteNmr(const LteNmrObj& value) { m_lteNmrHasBeenSet = true; m_lteNmr.push_back(value); return *this; }
    inline LteObj& AddLteNmr(LteNmrObj&& value) { m_lteNmrHasBeenSet = true; m_lteNmr.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_mcc;
    bool m_mccHasBeenSet = false;

    int m_mnc;
    bool m_mncHasBeenSet = false;

    int m_eutranCid;
    bool m_eutranCidHasBeenSet = false;

    int m_tac;
    bool m_tacHasBeenSet = false;

    LteLocalId m_lteLocalId;
    bool m_lteLocalIdHasBeenSet = false;

    int m_lteTimingAdvance;
    bool m_lteTimingAdvanceHasBeenSet = false;

    int m_rsrp;
    bool m_rsrpHasBeenSet = false;

    double m_rsrq;
    bool m_rsrqHasBeenSet = false;

    bool m_nrCapable;
    bool m_nrCapableHasBeenSet = false;

    Aws::Vector<LteNmrObj> m_lteNmr;
    bool m_lteNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
