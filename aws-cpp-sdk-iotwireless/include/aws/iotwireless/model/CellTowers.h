/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/GsmObj.h>
#include <aws/iotwireless/model/WcdmaObj.h>
#include <aws/iotwireless/model/TdscdmaObj.h>
#include <aws/iotwireless/model/LteObj.h>
#include <aws/iotwireless/model/CdmaObj.h>
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
   * <p>The cell towers that were used to perform the measurements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CellTowers">AWS
   * API Reference</a></p>
   */
  class CellTowers
  {
  public:
    AWS_IOTWIRELESS_API CellTowers();
    AWS_IOTWIRELESS_API CellTowers(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CellTowers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>GSM object information.</p>
     */
    inline const Aws::Vector<GsmObj>& GetGsm() const{ return m_gsm; }

    /**
     * <p>GSM object information.</p>
     */
    inline bool GsmHasBeenSet() const { return m_gsmHasBeenSet; }

    /**
     * <p>GSM object information.</p>
     */
    inline void SetGsm(const Aws::Vector<GsmObj>& value) { m_gsmHasBeenSet = true; m_gsm = value; }

    /**
     * <p>GSM object information.</p>
     */
    inline void SetGsm(Aws::Vector<GsmObj>&& value) { m_gsmHasBeenSet = true; m_gsm = std::move(value); }

    /**
     * <p>GSM object information.</p>
     */
    inline CellTowers& WithGsm(const Aws::Vector<GsmObj>& value) { SetGsm(value); return *this;}

    /**
     * <p>GSM object information.</p>
     */
    inline CellTowers& WithGsm(Aws::Vector<GsmObj>&& value) { SetGsm(std::move(value)); return *this;}

    /**
     * <p>GSM object information.</p>
     */
    inline CellTowers& AddGsm(const GsmObj& value) { m_gsmHasBeenSet = true; m_gsm.push_back(value); return *this; }

    /**
     * <p>GSM object information.</p>
     */
    inline CellTowers& AddGsm(GsmObj&& value) { m_gsmHasBeenSet = true; m_gsm.push_back(std::move(value)); return *this; }


    /**
     * <p>WCDMA object information.</p>
     */
    inline const Aws::Vector<WcdmaObj>& GetWcdma() const{ return m_wcdma; }

    /**
     * <p>WCDMA object information.</p>
     */
    inline bool WcdmaHasBeenSet() const { return m_wcdmaHasBeenSet; }

    /**
     * <p>WCDMA object information.</p>
     */
    inline void SetWcdma(const Aws::Vector<WcdmaObj>& value) { m_wcdmaHasBeenSet = true; m_wcdma = value; }

    /**
     * <p>WCDMA object information.</p>
     */
    inline void SetWcdma(Aws::Vector<WcdmaObj>&& value) { m_wcdmaHasBeenSet = true; m_wcdma = std::move(value); }

    /**
     * <p>WCDMA object information.</p>
     */
    inline CellTowers& WithWcdma(const Aws::Vector<WcdmaObj>& value) { SetWcdma(value); return *this;}

    /**
     * <p>WCDMA object information.</p>
     */
    inline CellTowers& WithWcdma(Aws::Vector<WcdmaObj>&& value) { SetWcdma(std::move(value)); return *this;}

    /**
     * <p>WCDMA object information.</p>
     */
    inline CellTowers& AddWcdma(const WcdmaObj& value) { m_wcdmaHasBeenSet = true; m_wcdma.push_back(value); return *this; }

    /**
     * <p>WCDMA object information.</p>
     */
    inline CellTowers& AddWcdma(WcdmaObj&& value) { m_wcdmaHasBeenSet = true; m_wcdma.push_back(std::move(value)); return *this; }


    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline const Aws::Vector<TdscdmaObj>& GetTdscdma() const{ return m_tdscdma; }

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline bool TdscdmaHasBeenSet() const { return m_tdscdmaHasBeenSet; }

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline void SetTdscdma(const Aws::Vector<TdscdmaObj>& value) { m_tdscdmaHasBeenSet = true; m_tdscdma = value; }

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline void SetTdscdma(Aws::Vector<TdscdmaObj>&& value) { m_tdscdmaHasBeenSet = true; m_tdscdma = std::move(value); }

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline CellTowers& WithTdscdma(const Aws::Vector<TdscdmaObj>& value) { SetTdscdma(value); return *this;}

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline CellTowers& WithTdscdma(Aws::Vector<TdscdmaObj>&& value) { SetTdscdma(std::move(value)); return *this;}

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline CellTowers& AddTdscdma(const TdscdmaObj& value) { m_tdscdmaHasBeenSet = true; m_tdscdma.push_back(value); return *this; }

    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline CellTowers& AddTdscdma(TdscdmaObj&& value) { m_tdscdmaHasBeenSet = true; m_tdscdma.push_back(std::move(value)); return *this; }


    /**
     * <p>LTE object information.</p>
     */
    inline const Aws::Vector<LteObj>& GetLte() const{ return m_lte; }

    /**
     * <p>LTE object information.</p>
     */
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }

    /**
     * <p>LTE object information.</p>
     */
    inline void SetLte(const Aws::Vector<LteObj>& value) { m_lteHasBeenSet = true; m_lte = value; }

    /**
     * <p>LTE object information.</p>
     */
    inline void SetLte(Aws::Vector<LteObj>&& value) { m_lteHasBeenSet = true; m_lte = std::move(value); }

    /**
     * <p>LTE object information.</p>
     */
    inline CellTowers& WithLte(const Aws::Vector<LteObj>& value) { SetLte(value); return *this;}

    /**
     * <p>LTE object information.</p>
     */
    inline CellTowers& WithLte(Aws::Vector<LteObj>&& value) { SetLte(std::move(value)); return *this;}

    /**
     * <p>LTE object information.</p>
     */
    inline CellTowers& AddLte(const LteObj& value) { m_lteHasBeenSet = true; m_lte.push_back(value); return *this; }

    /**
     * <p>LTE object information.</p>
     */
    inline CellTowers& AddLte(LteObj&& value) { m_lteHasBeenSet = true; m_lte.push_back(std::move(value)); return *this; }


    /**
     * <p>CDMA object information.</p>
     */
    inline const Aws::Vector<CdmaObj>& GetCdma() const{ return m_cdma; }

    /**
     * <p>CDMA object information.</p>
     */
    inline bool CdmaHasBeenSet() const { return m_cdmaHasBeenSet; }

    /**
     * <p>CDMA object information.</p>
     */
    inline void SetCdma(const Aws::Vector<CdmaObj>& value) { m_cdmaHasBeenSet = true; m_cdma = value; }

    /**
     * <p>CDMA object information.</p>
     */
    inline void SetCdma(Aws::Vector<CdmaObj>&& value) { m_cdmaHasBeenSet = true; m_cdma = std::move(value); }

    /**
     * <p>CDMA object information.</p>
     */
    inline CellTowers& WithCdma(const Aws::Vector<CdmaObj>& value) { SetCdma(value); return *this;}

    /**
     * <p>CDMA object information.</p>
     */
    inline CellTowers& WithCdma(Aws::Vector<CdmaObj>&& value) { SetCdma(std::move(value)); return *this;}

    /**
     * <p>CDMA object information.</p>
     */
    inline CellTowers& AddCdma(const CdmaObj& value) { m_cdmaHasBeenSet = true; m_cdma.push_back(value); return *this; }

    /**
     * <p>CDMA object information.</p>
     */
    inline CellTowers& AddCdma(CdmaObj&& value) { m_cdmaHasBeenSet = true; m_cdma.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GsmObj> m_gsm;
    bool m_gsmHasBeenSet = false;

    Aws::Vector<WcdmaObj> m_wcdma;
    bool m_wcdmaHasBeenSet = false;

    Aws::Vector<TdscdmaObj> m_tdscdma;
    bool m_tdscdmaHasBeenSet = false;

    Aws::Vector<LteObj> m_lte;
    bool m_lteHasBeenSet = false;

    Aws::Vector<CdmaObj> m_cdma;
    bool m_cdmaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
