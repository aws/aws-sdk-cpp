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
   * <p>Network Measurement Reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WcdmaNmrObj">AWS
   * API Reference</a></p>
   */
  class WcdmaNmrObj
  {
  public:
    AWS_IOTWIRELESS_API WcdmaNmrObj() = default;
    AWS_IOTWIRELESS_API WcdmaNmrObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WcdmaNmrObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>WCDMA UTRA Absolute RF Channel Number downlink.</p>
     */
    inline int GetUarfcndl() const { return m_uarfcndl; }
    inline bool UarfcndlHasBeenSet() const { return m_uarfcndlHasBeenSet; }
    inline void SetUarfcndl(int value) { m_uarfcndlHasBeenSet = true; m_uarfcndl = value; }
    inline WcdmaNmrObj& WithUarfcndl(int value) { SetUarfcndl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Primary Scrambling Code.</p>
     */
    inline int GetPsc() const { return m_psc; }
    inline bool PscHasBeenSet() const { return m_pscHasBeenSet; }
    inline void SetPsc(int value) { m_pscHasBeenSet = true; m_psc = value; }
    inline WcdmaNmrObj& WithPsc(int value) { SetPsc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTRAN (UMTS Terrestrial Radio Access Network) Cell Global Identifier.</p>
     */
    inline int GetUtranCid() const { return m_utranCid; }
    inline bool UtranCidHasBeenSet() const { return m_utranCidHasBeenSet; }
    inline void SetUtranCid(int value) { m_utranCidHasBeenSet = true; m_utranCid = value; }
    inline WcdmaNmrObj& WithUtranCid(int value) { SetUtranCid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Received Signal Code Power (signal power) (dBm)</p>
     */
    inline int GetRscp() const { return m_rscp; }
    inline bool RscpHasBeenSet() const { return m_rscpHasBeenSet; }
    inline void SetRscp(int value) { m_rscpHasBeenSet = true; m_rscp = value; }
    inline WcdmaNmrObj& WithRscp(int value) { SetRscp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path loss, or path attenuation, is the reduction in power density of an
     * electromagnetic wave as it propagates through space.</p>
     */
    inline int GetPathLoss() const { return m_pathLoss; }
    inline bool PathLossHasBeenSet() const { return m_pathLossHasBeenSet; }
    inline void SetPathLoss(int value) { m_pathLossHasBeenSet = true; m_pathLoss = value; }
    inline WcdmaNmrObj& WithPathLoss(int value) { SetPathLoss(value); return *this;}
    ///@}
  private:

    int m_uarfcndl{0};
    bool m_uarfcndlHasBeenSet = false;

    int m_psc{0};
    bool m_pscHasBeenSet = false;

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
