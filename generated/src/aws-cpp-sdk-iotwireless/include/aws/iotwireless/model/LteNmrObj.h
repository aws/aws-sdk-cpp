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
   * <p>LTE object for network measurement reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LteNmrObj">AWS
   * API Reference</a></p>
   */
  class LteNmrObj
  {
  public:
    AWS_IOTWIRELESS_API LteNmrObj() = default;
    AWS_IOTWIRELESS_API LteNmrObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LteNmrObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Physical cell ID.</p>
     */
    inline int GetPci() const { return m_pci; }
    inline bool PciHasBeenSet() const { return m_pciHasBeenSet; }
    inline void SetPci(int value) { m_pciHasBeenSet = true; m_pci = value; }
    inline LteNmrObj& WithPci(int value) { SetPci(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>E-UTRA (Evolved universal terrestrial Radio Access) absolute radio frequency
     * channel Number (EARFCN).</p>
     */
    inline int GetEarfcn() const { return m_earfcn; }
    inline bool EarfcnHasBeenSet() const { return m_earfcnHasBeenSet; }
    inline void SetEarfcn(int value) { m_earfcnHasBeenSet = true; m_earfcn = value; }
    inline LteNmrObj& WithEarfcn(int value) { SetEarfcn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>E-UTRAN (Evolved Universal Terrestrial Radio Access Network) cell global
     * identifier (EUTRANCID).</p>
     */
    inline int GetEutranCid() const { return m_eutranCid; }
    inline bool EutranCidHasBeenSet() const { return m_eutranCidHasBeenSet; }
    inline void SetEutranCid(int value) { m_eutranCidHasBeenSet = true; m_eutranCid = value; }
    inline LteNmrObj& WithEutranCid(int value) { SetEutranCid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRsrp() const { return m_rsrp; }
    inline bool RsrpHasBeenSet() const { return m_rsrpHasBeenSet; }
    inline void SetRsrp(int value) { m_rsrpHasBeenSet = true; m_rsrp = value; }
    inline LteNmrObj& WithRsrp(int value) { SetRsrp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline double GetRsrq() const { return m_rsrq; }
    inline bool RsrqHasBeenSet() const { return m_rsrqHasBeenSet; }
    inline void SetRsrq(double value) { m_rsrqHasBeenSet = true; m_rsrq = value; }
    inline LteNmrObj& WithRsrq(double value) { SetRsrq(value); return *this;}
    ///@}
  private:

    int m_pci{0};
    bool m_pciHasBeenSet = false;

    int m_earfcn{0};
    bool m_earfcnHasBeenSet = false;

    int m_eutranCid{0};
    bool m_eutranCidHasBeenSet = false;

    int m_rsrp{0};
    bool m_rsrpHasBeenSet = false;

    double m_rsrq{0.0};
    bool m_rsrqHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
