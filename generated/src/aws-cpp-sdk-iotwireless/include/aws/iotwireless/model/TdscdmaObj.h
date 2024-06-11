/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/TdscdmaLocalId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/TdscdmaNmrObj.h>
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
   * <p>TD-SCDMA object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TdscdmaObj">AWS
   * API Reference</a></p>
   */
  class TdscdmaObj
  {
  public:
    AWS_IOTWIRELESS_API TdscdmaObj();
    AWS_IOTWIRELESS_API TdscdmaObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TdscdmaObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Mobile Country Code.</p>
     */
    inline int GetMcc() const{ return m_mcc; }
    inline bool MccHasBeenSet() const { return m_mccHasBeenSet; }
    inline void SetMcc(int value) { m_mccHasBeenSet = true; m_mcc = value; }
    inline TdscdmaObj& WithMcc(int value) { SetMcc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mobile Network Code.</p>
     */
    inline int GetMnc() const{ return m_mnc; }
    inline bool MncHasBeenSet() const { return m_mncHasBeenSet; }
    inline void SetMnc(int value) { m_mncHasBeenSet = true; m_mnc = value; }
    inline TdscdmaObj& WithMnc(int value) { SetMnc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location Area Code.</p>
     */
    inline int GetLac() const{ return m_lac; }
    inline bool LacHasBeenSet() const { return m_lacHasBeenSet; }
    inline void SetLac(int value) { m_lacHasBeenSet = true; m_lac = value; }
    inline TdscdmaObj& WithLac(int value) { SetLac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) Cell Global Identifier.</p>
     */
    inline int GetUtranCid() const{ return m_utranCid; }
    inline bool UtranCidHasBeenSet() const { return m_utranCidHasBeenSet; }
    inline void SetUtranCid(int value) { m_utranCidHasBeenSet = true; m_utranCid = value; }
    inline TdscdmaObj& WithUtranCid(int value) { SetUtranCid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>TD-SCDMA local identification (local ID) information.</p>
     */
    inline const TdscdmaLocalId& GetTdscdmaLocalId() const{ return m_tdscdmaLocalId; }
    inline bool TdscdmaLocalIdHasBeenSet() const { return m_tdscdmaLocalIdHasBeenSet; }
    inline void SetTdscdmaLocalId(const TdscdmaLocalId& value) { m_tdscdmaLocalIdHasBeenSet = true; m_tdscdmaLocalId = value; }
    inline void SetTdscdmaLocalId(TdscdmaLocalId&& value) { m_tdscdmaLocalIdHasBeenSet = true; m_tdscdmaLocalId = std::move(value); }
    inline TdscdmaObj& WithTdscdmaLocalId(const TdscdmaLocalId& value) { SetTdscdmaLocalId(value); return *this;}
    inline TdscdmaObj& WithTdscdmaLocalId(TdscdmaLocalId&& value) { SetTdscdmaLocalId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TD-SCDMA Timing advance.</p>
     */
    inline int GetTdscdmaTimingAdvance() const{ return m_tdscdmaTimingAdvance; }
    inline bool TdscdmaTimingAdvanceHasBeenSet() const { return m_tdscdmaTimingAdvanceHasBeenSet; }
    inline void SetTdscdmaTimingAdvance(int value) { m_tdscdmaTimingAdvanceHasBeenSet = true; m_tdscdmaTimingAdvance = value; }
    inline TdscdmaObj& WithTdscdmaTimingAdvance(int value) { SetTdscdmaTimingAdvance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal power of the received signal (Received Signal Code Power), measured in
     * decibel-milliwatts (dBm).</p>
     */
    inline int GetRscp() const{ return m_rscp; }
    inline bool RscpHasBeenSet() const { return m_rscpHasBeenSet; }
    inline void SetRscp(int value) { m_rscpHasBeenSet = true; m_rscp = value; }
    inline TdscdmaObj& WithRscp(int value) { SetRscp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline int GetPathLoss() const{ return m_pathLoss; }
    inline bool PathLossHasBeenSet() const { return m_pathLossHasBeenSet; }
    inline void SetPathLoss(int value) { m_pathLossHasBeenSet = true; m_pathLoss = value; }
    inline TdscdmaObj& WithPathLoss(int value) { SetPathLoss(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>TD-SCDMA object for network measurement reports.</p>
     */
    inline const Aws::Vector<TdscdmaNmrObj>& GetTdscdmaNmr() const{ return m_tdscdmaNmr; }
    inline bool TdscdmaNmrHasBeenSet() const { return m_tdscdmaNmrHasBeenSet; }
    inline void SetTdscdmaNmr(const Aws::Vector<TdscdmaNmrObj>& value) { m_tdscdmaNmrHasBeenSet = true; m_tdscdmaNmr = value; }
    inline void SetTdscdmaNmr(Aws::Vector<TdscdmaNmrObj>&& value) { m_tdscdmaNmrHasBeenSet = true; m_tdscdmaNmr = std::move(value); }
    inline TdscdmaObj& WithTdscdmaNmr(const Aws::Vector<TdscdmaNmrObj>& value) { SetTdscdmaNmr(value); return *this;}
    inline TdscdmaObj& WithTdscdmaNmr(Aws::Vector<TdscdmaNmrObj>&& value) { SetTdscdmaNmr(std::move(value)); return *this;}
    inline TdscdmaObj& AddTdscdmaNmr(const TdscdmaNmrObj& value) { m_tdscdmaNmrHasBeenSet = true; m_tdscdmaNmr.push_back(value); return *this; }
    inline TdscdmaObj& AddTdscdmaNmr(TdscdmaNmrObj&& value) { m_tdscdmaNmrHasBeenSet = true; m_tdscdmaNmr.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_mcc;
    bool m_mccHasBeenSet = false;

    int m_mnc;
    bool m_mncHasBeenSet = false;

    int m_lac;
    bool m_lacHasBeenSet = false;

    int m_utranCid;
    bool m_utranCidHasBeenSet = false;

    TdscdmaLocalId m_tdscdmaLocalId;
    bool m_tdscdmaLocalIdHasBeenSet = false;

    int m_tdscdmaTimingAdvance;
    bool m_tdscdmaTimingAdvanceHasBeenSet = false;

    int m_rscp;
    bool m_rscpHasBeenSet = false;

    int m_pathLoss;
    bool m_pathLossHasBeenSet = false;

    Aws::Vector<TdscdmaNmrObj> m_tdscdmaNmr;
    bool m_tdscdmaNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
