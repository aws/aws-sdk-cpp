/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>

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
namespace LocationService
{
namespace Model
{

  /**
   * <p>LTE network measurements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/LteNetworkMeasurements">AWS
   * API Reference</a></p>
   */
  class LteNetworkMeasurements
  {
  public:
    AWS_LOCATIONSERVICE_API LteNetworkMeasurements() = default;
    AWS_LOCATIONSERVICE_API LteNetworkMeasurements(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API LteNetworkMeasurements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>E-UTRA (Evolved Universal Terrestrial Radio Access) absolute radio frequency
     * channel number (EARFCN).</p>
     */
    inline int GetEarfcn() const { return m_earfcn; }
    inline bool EarfcnHasBeenSet() const { return m_earfcnHasBeenSet; }
    inline void SetEarfcn(int value) { m_earfcnHasBeenSet = true; m_earfcn = value; }
    inline LteNetworkMeasurements& WithEarfcn(int value) { SetEarfcn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>E-UTRAN Cell Identifier (ECI).</p>
     */
    inline int GetCellId() const { return m_cellId; }
    inline bool CellIdHasBeenSet() const { return m_cellIdHasBeenSet; }
    inline void SetCellId(int value) { m_cellIdHasBeenSet = true; m_cellId = value; }
    inline LteNetworkMeasurements& WithCellId(int value) { SetCellId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Physical Cell ID (PCI).</p>
     */
    inline int GetPci() const { return m_pci; }
    inline bool PciHasBeenSet() const { return m_pciHasBeenSet; }
    inline void SetPci(int value) { m_pciHasBeenSet = true; m_pci = value; }
    inline LteNetworkMeasurements& WithPci(int value) { SetPci(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRsrp() const { return m_rsrp; }
    inline bool RsrpHasBeenSet() const { return m_rsrpHasBeenSet; }
    inline void SetRsrp(int value) { m_rsrpHasBeenSet = true; m_rsrp = value; }
    inline LteNetworkMeasurements& WithRsrp(int value) { SetRsrp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline double GetRsrq() const { return m_rsrq; }
    inline bool RsrqHasBeenSet() const { return m_rsrqHasBeenSet; }
    inline void SetRsrq(double value) { m_rsrqHasBeenSet = true; m_rsrq = value; }
    inline LteNetworkMeasurements& WithRsrq(double value) { SetRsrq(value); return *this;}
    ///@}
  private:

    int m_earfcn{0};
    bool m_earfcnHasBeenSet = false;

    int m_cellId{0};
    bool m_cellIdHasBeenSet = false;

    int m_pci{0};
    bool m_pciHasBeenSet = false;

    int m_rsrp{0};
    bool m_rsrpHasBeenSet = false;

    double m_rsrq{0.0};
    bool m_rsrqHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
