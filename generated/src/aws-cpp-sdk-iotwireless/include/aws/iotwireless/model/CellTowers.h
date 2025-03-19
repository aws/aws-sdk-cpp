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
    AWS_IOTWIRELESS_API CellTowers() = default;
    AWS_IOTWIRELESS_API CellTowers(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CellTowers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>GSM object information.</p>
     */
    inline const Aws::Vector<GsmObj>& GetGsm() const { return m_gsm; }
    inline bool GsmHasBeenSet() const { return m_gsmHasBeenSet; }
    template<typename GsmT = Aws::Vector<GsmObj>>
    void SetGsm(GsmT&& value) { m_gsmHasBeenSet = true; m_gsm = std::forward<GsmT>(value); }
    template<typename GsmT = Aws::Vector<GsmObj>>
    CellTowers& WithGsm(GsmT&& value) { SetGsm(std::forward<GsmT>(value)); return *this;}
    template<typename GsmT = GsmObj>
    CellTowers& AddGsm(GsmT&& value) { m_gsmHasBeenSet = true; m_gsm.emplace_back(std::forward<GsmT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>WCDMA object information.</p>
     */
    inline const Aws::Vector<WcdmaObj>& GetWcdma() const { return m_wcdma; }
    inline bool WcdmaHasBeenSet() const { return m_wcdmaHasBeenSet; }
    template<typename WcdmaT = Aws::Vector<WcdmaObj>>
    void SetWcdma(WcdmaT&& value) { m_wcdmaHasBeenSet = true; m_wcdma = std::forward<WcdmaT>(value); }
    template<typename WcdmaT = Aws::Vector<WcdmaObj>>
    CellTowers& WithWcdma(WcdmaT&& value) { SetWcdma(std::forward<WcdmaT>(value)); return *this;}
    template<typename WcdmaT = WcdmaObj>
    CellTowers& AddWcdma(WcdmaT&& value) { m_wcdmaHasBeenSet = true; m_wcdma.emplace_back(std::forward<WcdmaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>TD-SCDMA object information.</p>
     */
    inline const Aws::Vector<TdscdmaObj>& GetTdscdma() const { return m_tdscdma; }
    inline bool TdscdmaHasBeenSet() const { return m_tdscdmaHasBeenSet; }
    template<typename TdscdmaT = Aws::Vector<TdscdmaObj>>
    void SetTdscdma(TdscdmaT&& value) { m_tdscdmaHasBeenSet = true; m_tdscdma = std::forward<TdscdmaT>(value); }
    template<typename TdscdmaT = Aws::Vector<TdscdmaObj>>
    CellTowers& WithTdscdma(TdscdmaT&& value) { SetTdscdma(std::forward<TdscdmaT>(value)); return *this;}
    template<typename TdscdmaT = TdscdmaObj>
    CellTowers& AddTdscdma(TdscdmaT&& value) { m_tdscdmaHasBeenSet = true; m_tdscdma.emplace_back(std::forward<TdscdmaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>LTE object information.</p>
     */
    inline const Aws::Vector<LteObj>& GetLte() const { return m_lte; }
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }
    template<typename LteT = Aws::Vector<LteObj>>
    void SetLte(LteT&& value) { m_lteHasBeenSet = true; m_lte = std::forward<LteT>(value); }
    template<typename LteT = Aws::Vector<LteObj>>
    CellTowers& WithLte(LteT&& value) { SetLte(std::forward<LteT>(value)); return *this;}
    template<typename LteT = LteObj>
    CellTowers& AddLte(LteT&& value) { m_lteHasBeenSet = true; m_lte.emplace_back(std::forward<LteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>CDMA object information.</p>
     */
    inline const Aws::Vector<CdmaObj>& GetCdma() const { return m_cdma; }
    inline bool CdmaHasBeenSet() const { return m_cdmaHasBeenSet; }
    template<typename CdmaT = Aws::Vector<CdmaObj>>
    void SetCdma(CdmaT&& value) { m_cdmaHasBeenSet = true; m_cdma = std::forward<CdmaT>(value); }
    template<typename CdmaT = Aws::Vector<CdmaObj>>
    CellTowers& WithCdma(CdmaT&& value) { SetCdma(std::forward<CdmaT>(value)); return *this;}
    template<typename CdmaT = CdmaObj>
    CellTowers& AddCdma(CdmaT&& value) { m_cdmaHasBeenSet = true; m_cdma.emplace_back(std::forward<CdmaT>(value)); return *this; }
    ///@}
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
