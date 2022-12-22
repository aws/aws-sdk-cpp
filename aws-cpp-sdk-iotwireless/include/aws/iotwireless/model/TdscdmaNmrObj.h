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
    AWS_IOTWIRELESS_API TdscdmaNmrObj();
    AWS_IOTWIRELESS_API TdscdmaNmrObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TdscdmaNmrObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number.</p>
     */
    inline int GetUarfcn() const{ return m_uarfcn; }

    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number.</p>
     */
    inline bool UarfcnHasBeenSet() const { return m_uarfcnHasBeenSet; }

    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number.</p>
     */
    inline void SetUarfcn(int value) { m_uarfcnHasBeenSet = true; m_uarfcn = value; }

    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number.</p>
     */
    inline TdscdmaNmrObj& WithUarfcn(int value) { SetUarfcn(value); return *this;}


    /**
     * <p>Cell parameters for TD-SCDMA network measurement reports object.</p>
     */
    inline int GetCellParams() const{ return m_cellParams; }

    /**
     * <p>Cell parameters for TD-SCDMA network measurement reports object.</p>
     */
    inline bool CellParamsHasBeenSet() const { return m_cellParamsHasBeenSet; }

    /**
     * <p>Cell parameters for TD-SCDMA network measurement reports object.</p>
     */
    inline void SetCellParams(int value) { m_cellParamsHasBeenSet = true; m_cellParams = value; }

    /**
     * <p>Cell parameters for TD-SCDMA network measurement reports object.</p>
     */
    inline TdscdmaNmrObj& WithCellParams(int value) { SetCellParams(value); return *this;}


    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) cell global identifier.</p>
     */
    inline int GetUtranCid() const{ return m_utranCid; }

    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) cell global identifier.</p>
     */
    inline bool UtranCidHasBeenSet() const { return m_utranCidHasBeenSet; }

    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) cell global identifier.</p>
     */
    inline void SetUtranCid(int value) { m_utranCidHasBeenSet = true; m_utranCid = value; }

    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) cell global identifier.</p>
     */
    inline TdscdmaNmrObj& WithUtranCid(int value) { SetUtranCid(value); return *this;}


    /**
     * <p>Code power of the received signal, measured in decibel-milliwatts (dBm).</p>
     */
    inline int GetRscp() const{ return m_rscp; }

    /**
     * <p>Code power of the received signal, measured in decibel-milliwatts (dBm).</p>
     */
    inline bool RscpHasBeenSet() const { return m_rscpHasBeenSet; }

    /**
     * <p>Code power of the received signal, measured in decibel-milliwatts (dBm).</p>
     */
    inline void SetRscp(int value) { m_rscpHasBeenSet = true; m_rscp = value; }

    /**
     * <p>Code power of the received signal, measured in decibel-milliwatts (dBm).</p>
     */
    inline TdscdmaNmrObj& WithRscp(int value) { SetRscp(value); return *this;}


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
    inline TdscdmaNmrObj& WithPathLoss(int value) { SetPathLoss(value); return *this;}

  private:

    int m_uarfcn;
    bool m_uarfcnHasBeenSet = false;

    int m_cellParams;
    bool m_cellParamsHasBeenSet = false;

    int m_utranCid;
    bool m_utranCidHasBeenSet = false;

    int m_rscp;
    bool m_rscpHasBeenSet = false;

    int m_pathLoss;
    bool m_pathLossHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
