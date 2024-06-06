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
    AWS_LOCATIONSERVICE_API LteNetworkMeasurements();
    AWS_LOCATIONSERVICE_API LteNetworkMeasurements(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API LteNetworkMeasurements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>E-UTRA (Evolved Universal Terrestrial Radio Access) absolute radio frequency
     * channel number (EARFCN).</p>
     */
    inline int GetEarfcn() const{ return m_earfcn; }

    /**
     * <p>E-UTRA (Evolved Universal Terrestrial Radio Access) absolute radio frequency
     * channel number (EARFCN).</p>
     */
    inline bool EarfcnHasBeenSet() const { return m_earfcnHasBeenSet; }

    /**
     * <p>E-UTRA (Evolved Universal Terrestrial Radio Access) absolute radio frequency
     * channel number (EARFCN).</p>
     */
    inline void SetEarfcn(int value) { m_earfcnHasBeenSet = true; m_earfcn = value; }

    /**
     * <p>E-UTRA (Evolved Universal Terrestrial Radio Access) absolute radio frequency
     * channel number (EARFCN).</p>
     */
    inline LteNetworkMeasurements& WithEarfcn(int value) { SetEarfcn(value); return *this;}


    /**
     * <p>E-UTRAN Cell Identifier (ECI).</p>
     */
    inline int GetCellId() const{ return m_cellId; }

    /**
     * <p>E-UTRAN Cell Identifier (ECI).</p>
     */
    inline bool CellIdHasBeenSet() const { return m_cellIdHasBeenSet; }

    /**
     * <p>E-UTRAN Cell Identifier (ECI).</p>
     */
    inline void SetCellId(int value) { m_cellIdHasBeenSet = true; m_cellId = value; }

    /**
     * <p>E-UTRAN Cell Identifier (ECI).</p>
     */
    inline LteNetworkMeasurements& WithCellId(int value) { SetCellId(value); return *this;}


    /**
     * <p>Physical Cell ID (PCI).</p>
     */
    inline int GetPci() const{ return m_pci; }

    /**
     * <p>Physical Cell ID (PCI).</p>
     */
    inline bool PciHasBeenSet() const { return m_pciHasBeenSet; }

    /**
     * <p>Physical Cell ID (PCI).</p>
     */
    inline void SetPci(int value) { m_pciHasBeenSet = true; m_pci = value; }

    /**
     * <p>Physical Cell ID (PCI).</p>
     */
    inline LteNetworkMeasurements& WithPci(int value) { SetPci(value); return *this;}


    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline int GetRsrp() const{ return m_rsrp; }

    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline bool RsrpHasBeenSet() const { return m_rsrpHasBeenSet; }

    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline void SetRsrp(int value) { m_rsrpHasBeenSet = true; m_rsrp = value; }

    /**
     * <p>Signal power of the reference signal received, measured in dBm
     * (decibel-milliwatts).</p>
     */
    inline LteNetworkMeasurements& WithRsrp(int value) { SetRsrp(value); return *this;}


    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline double GetRsrq() const{ return m_rsrq; }

    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline bool RsrqHasBeenSet() const { return m_rsrqHasBeenSet; }

    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline void SetRsrq(double value) { m_rsrqHasBeenSet = true; m_rsrq = value; }

    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline LteNetworkMeasurements& WithRsrq(double value) { SetRsrq(value); return *this;}

  private:

    int m_earfcn;
    bool m_earfcnHasBeenSet = false;

    int m_cellId;
    bool m_cellIdHasBeenSet = false;

    int m_pci;
    bool m_pciHasBeenSet = false;

    int m_rsrp;
    bool m_rsrpHasBeenSet = false;

    double m_rsrq;
    bool m_rsrqHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
