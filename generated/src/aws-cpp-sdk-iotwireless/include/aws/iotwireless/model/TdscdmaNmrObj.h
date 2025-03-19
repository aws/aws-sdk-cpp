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
   * <p>TD-SCDMA object for network measurement reports.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TdscdmaNmrObj">AWS
   * API Reference</a></p>
   */
  class TdscdmaNmrObj
  {
  public:
    AWS_IOTWIRELESS_API TdscdmaNmrObj() = default;
    AWS_IOTWIRELESS_API TdscdmaNmrObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TdscdmaNmrObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number.</p>
     */
    inline int GetUarfcn() const { return m_uarfcn; }
    inline bool UarfcnHasBeenSet() const { return m_uarfcnHasBeenSet; }
    inline void SetUarfcn(int value) { m_uarfcnHasBeenSet = true; m_uarfcn = value; }
    inline TdscdmaNmrObj& WithUarfcn(int value) { SetUarfcn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cell parameters for TD-SCDMA network measurement reports object.</p>
     */
    inline int GetCellParams() const { return m_cellParams; }
    inline bool CellParamsHasBeenSet() const { return m_cellParamsHasBeenSet; }
    inline void SetCellParams(int value) { m_cellParamsHasBeenSet = true; m_cellParams = value; }
    inline TdscdmaNmrObj& WithCellParams(int value) { SetCellParams(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) cell global identifier.</p>
     */
    inline int GetUtranCid() const { return m_utranCid; }
    inline bool UtranCidHasBeenSet() const { return m_utranCidHasBeenSet; }
    inline void SetUtranCid(int value) { m_utranCidHasBeenSet = true; m_utranCid = value; }
    inline TdscdmaNmrObj& WithUtranCid(int value) { SetUtranCid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code power of the received signal, measured in decibel-milliwatts (dBm).</p>
     */
    inline int GetRscp() const { return m_rscp; }
    inline bool RscpHasBeenSet() const { return m_rscpHasBeenSet; }
    inline void SetRscp(int value) { m_rscpHasBeenSet = true; m_rscp = value; }
    inline TdscdmaNmrObj& WithRscp(int value) { SetRscp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline int GetPathLoss() const { return m_pathLoss; }
    inline bool PathLossHasBeenSet() const { return m_pathLossHasBeenSet; }
    inline void SetPathLoss(int value) { m_pathLossHasBeenSet = true; m_pathLoss = value; }
    inline TdscdmaNmrObj& WithPathLoss(int value) { SetPathLoss(value); return *this;}
    ///@}
  private:

    int m_uarfcn{0};
    bool m_uarfcnHasBeenSet = false;

    int m_cellParams{0};
    bool m_cellParamsHasBeenSet = false;

    int m_utranCid{0};
    bool m_utranCidHasBeenSet = false;

    int m_rscp{0};
    bool m_rscpHasBeenSet = false;

    int m_pathLoss{0};
    bool m_pathLossHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
