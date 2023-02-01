/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WcdmaLocalId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WcdmaNmrObj.h>
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
   * <p>WCDMA.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WcdmaObj">AWS
   * API Reference</a></p>
   */
  class WcdmaObj
  {
  public:
    AWS_IOTWIRELESS_API WcdmaObj();
    AWS_IOTWIRELESS_API WcdmaObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WcdmaObj& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline WcdmaObj& WithMcc(int value) { SetMcc(value); return *this;}


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
    inline WcdmaObj& WithMnc(int value) { SetMnc(value); return *this;}


    /**
     * <p>Location Area Code.</p>
     */
    inline int GetLac() const{ return m_lac; }

    /**
     * <p>Location Area Code.</p>
     */
    inline bool LacHasBeenSet() const { return m_lacHasBeenSet; }

    /**
     * <p>Location Area Code.</p>
     */
    inline void SetLac(int value) { m_lacHasBeenSet = true; m_lac = value; }

    /**
     * <p>Location Area Code.</p>
     */
    inline WcdmaObj& WithLac(int value) { SetLac(value); return *this;}


    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) Cell Global Identifier.</p>
     */
    inline int GetUtranCid() const{ return m_utranCid; }

    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) Cell Global Identifier.</p>
     */
    inline bool UtranCidHasBeenSet() const { return m_utranCidHasBeenSet; }

    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) Cell Global Identifier.</p>
     */
    inline void SetUtranCid(int value) { m_utranCidHasBeenSet = true; m_utranCid = value; }

    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) Cell Global Identifier.</p>
     */
    inline WcdmaObj& WithUtranCid(int value) { SetUtranCid(value); return *this;}


    /**
     * <p>WCDMA local ID information.</p>
     */
    inline const WcdmaLocalId& GetWcdmaLocalId() const{ return m_wcdmaLocalId; }

    /**
     * <p>WCDMA local ID information.</p>
     */
    inline bool WcdmaLocalIdHasBeenSet() const { return m_wcdmaLocalIdHasBeenSet; }

    /**
     * <p>WCDMA local ID information.</p>
     */
    inline void SetWcdmaLocalId(const WcdmaLocalId& value) { m_wcdmaLocalIdHasBeenSet = true; m_wcdmaLocalId = value; }

    /**
     * <p>WCDMA local ID information.</p>
     */
    inline void SetWcdmaLocalId(WcdmaLocalId&& value) { m_wcdmaLocalIdHasBeenSet = true; m_wcdmaLocalId = std::move(value); }

    /**
     * <p>WCDMA local ID information.</p>
     */
    inline WcdmaObj& WithWcdmaLocalId(const WcdmaLocalId& value) { SetWcdmaLocalId(value); return *this;}

    /**
     * <p>WCDMA local ID information.</p>
     */
    inline WcdmaObj& WithWcdmaLocalId(WcdmaLocalId&& value) { SetWcdmaLocalId(std::move(value)); return *this;}


    /**
     * <p>Received Signal Code Power (signal power) (dBm).</p>
     */
    inline int GetRscp() const{ return m_rscp; }

    /**
     * <p>Received Signal Code Power (signal power) (dBm).</p>
     */
    inline bool RscpHasBeenSet() const { return m_rscpHasBeenSet; }

    /**
     * <p>Received Signal Code Power (signal power) (dBm).</p>
     */
    inline void SetRscp(int value) { m_rscpHasBeenSet = true; m_rscp = value; }

    /**
     * <p>Received Signal Code Power (signal power) (dBm).</p>
     */
    inline WcdmaObj& WithRscp(int value) { SetRscp(value); return *this;}


    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline int GetPathLoss() const{ return m_pathLoss; }

    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline bool PathLossHasBeenSet() const { return m_pathLossHasBeenSet; }

    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline void SetPathLoss(int value) { m_pathLossHasBeenSet = true; m_pathLoss = value; }

    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline WcdmaObj& WithPathLoss(int value) { SetPathLoss(value); return *this;}


    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline const Aws::Vector<WcdmaNmrObj>& GetWcdmaNmr() const{ return m_wcdmaNmr; }

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline bool WcdmaNmrHasBeenSet() const { return m_wcdmaNmrHasBeenSet; }

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline void SetWcdmaNmr(const Aws::Vector<WcdmaNmrObj>& value) { m_wcdmaNmrHasBeenSet = true; m_wcdmaNmr = value; }

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline void SetWcdmaNmr(Aws::Vector<WcdmaNmrObj>&& value) { m_wcdmaNmrHasBeenSet = true; m_wcdmaNmr = std::move(value); }

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline WcdmaObj& WithWcdmaNmr(const Aws::Vector<WcdmaNmrObj>& value) { SetWcdmaNmr(value); return *this;}

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline WcdmaObj& WithWcdmaNmr(Aws::Vector<WcdmaNmrObj>&& value) { SetWcdmaNmr(std::move(value)); return *this;}

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline WcdmaObj& AddWcdmaNmr(const WcdmaNmrObj& value) { m_wcdmaNmrHasBeenSet = true; m_wcdmaNmr.push_back(value); return *this; }

    /**
     * <p>WCDMA object for network measurement reports.</p>
     */
    inline WcdmaObj& AddWcdmaNmr(WcdmaNmrObj&& value) { m_wcdmaNmrHasBeenSet = true; m_wcdmaNmr.push_back(std::move(value)); return *this; }

  private:

    int m_mcc;
    bool m_mccHasBeenSet = false;

    int m_mnc;
    bool m_mncHasBeenSet = false;

    int m_lac;
    bool m_lacHasBeenSet = false;

    int m_utranCid;
    bool m_utranCidHasBeenSet = false;

    WcdmaLocalId m_wcdmaLocalId;
    bool m_wcdmaLocalIdHasBeenSet = false;

    int m_rscp;
    bool m_rscpHasBeenSet = false;

    int m_pathLoss;
    bool m_pathLossHasBeenSet = false;

    Aws::Vector<WcdmaNmrObj> m_wcdmaNmr;
    bool m_wcdmaNmrHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
