/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/LteLocalId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/LteNetworkMeasurements.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Details about the Long-Term Evolution (LTE) network.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/LteCellDetails">AWS
   * API Reference</a></p>
   */
  class LteCellDetails
  {
  public:
    AWS_LOCATIONSERVICE_API LteCellDetails();
    AWS_LOCATIONSERVICE_API LteCellDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API LteCellDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The E-UTRAN Cell Identifier (ECI).</p>
     */
    inline int GetCellId() const{ return m_cellId; }

    /**
     * <p>The E-UTRAN Cell Identifier (ECI).</p>
     */
    inline bool CellIdHasBeenSet() const { return m_cellIdHasBeenSet; }

    /**
     * <p>The E-UTRAN Cell Identifier (ECI).</p>
     */
    inline void SetCellId(int value) { m_cellIdHasBeenSet = true; m_cellId = value; }

    /**
     * <p>The E-UTRAN Cell Identifier (ECI).</p>
     */
    inline LteCellDetails& WithCellId(int value) { SetCellId(value); return *this;}


    /**
     * <p>The Mobile Country Code (MCC).</p>
     */
    inline int GetMcc() const{ return m_mcc; }

    /**
     * <p>The Mobile Country Code (MCC).</p>
     */
    inline bool MccHasBeenSet() const { return m_mccHasBeenSet; }

    /**
     * <p>The Mobile Country Code (MCC).</p>
     */
    inline void SetMcc(int value) { m_mccHasBeenSet = true; m_mcc = value; }

    /**
     * <p>The Mobile Country Code (MCC).</p>
     */
    inline LteCellDetails& WithMcc(int value) { SetMcc(value); return *this;}


    /**
     * <p>The Mobile Network Code (MNC)</p>
     */
    inline int GetMnc() const{ return m_mnc; }

    /**
     * <p>The Mobile Network Code (MNC)</p>
     */
    inline bool MncHasBeenSet() const { return m_mncHasBeenSet; }

    /**
     * <p>The Mobile Network Code (MNC)</p>
     */
    inline void SetMnc(int value) { m_mncHasBeenSet = true; m_mnc = value; }

    /**
     * <p>The Mobile Network Code (MNC)</p>
     */
    inline LteCellDetails& WithMnc(int value) { SetMnc(value); return *this;}


    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline const LteLocalId& GetLocalId() const{ return m_localId; }

    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline bool LocalIdHasBeenSet() const { return m_localIdHasBeenSet; }

    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline void SetLocalId(const LteLocalId& value) { m_localIdHasBeenSet = true; m_localId = value; }

    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline void SetLocalId(LteLocalId&& value) { m_localIdHasBeenSet = true; m_localId = std::move(value); }

    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline LteCellDetails& WithLocalId(const LteLocalId& value) { SetLocalId(value); return *this;}

    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline LteCellDetails& WithLocalId(LteLocalId&& value) { SetLocalId(std::move(value)); return *this;}


    /**
     * <p>The network measurements.</p>
     */
    inline const Aws::Vector<LteNetworkMeasurements>& GetNetworkMeasurements() const{ return m_networkMeasurements; }

    /**
     * <p>The network measurements.</p>
     */
    inline bool NetworkMeasurementsHasBeenSet() const { return m_networkMeasurementsHasBeenSet; }

    /**
     * <p>The network measurements.</p>
     */
    inline void SetNetworkMeasurements(const Aws::Vector<LteNetworkMeasurements>& value) { m_networkMeasurementsHasBeenSet = true; m_networkMeasurements = value; }

    /**
     * <p>The network measurements.</p>
     */
    inline void SetNetworkMeasurements(Aws::Vector<LteNetworkMeasurements>&& value) { m_networkMeasurementsHasBeenSet = true; m_networkMeasurements = std::move(value); }

    /**
     * <p>The network measurements.</p>
     */
    inline LteCellDetails& WithNetworkMeasurements(const Aws::Vector<LteNetworkMeasurements>& value) { SetNetworkMeasurements(value); return *this;}

    /**
     * <p>The network measurements.</p>
     */
    inline LteCellDetails& WithNetworkMeasurements(Aws::Vector<LteNetworkMeasurements>&& value) { SetNetworkMeasurements(std::move(value)); return *this;}

    /**
     * <p>The network measurements.</p>
     */
    inline LteCellDetails& AddNetworkMeasurements(const LteNetworkMeasurements& value) { m_networkMeasurementsHasBeenSet = true; m_networkMeasurements.push_back(value); return *this; }

    /**
     * <p>The network measurements.</p>
     */
    inline LteCellDetails& AddNetworkMeasurements(LteNetworkMeasurements&& value) { m_networkMeasurementsHasBeenSet = true; m_networkMeasurements.push_back(std::move(value)); return *this; }


    /**
     * <p>Timing Advance (TA).</p>
     */
    inline int GetTimingAdvance() const{ return m_timingAdvance; }

    /**
     * <p>Timing Advance (TA).</p>
     */
    inline bool TimingAdvanceHasBeenSet() const { return m_timingAdvanceHasBeenSet; }

    /**
     * <p>Timing Advance (TA).</p>
     */
    inline void SetTimingAdvance(int value) { m_timingAdvanceHasBeenSet = true; m_timingAdvance = value; }

    /**
     * <p>Timing Advance (TA).</p>
     */
    inline LteCellDetails& WithTimingAdvance(int value) { SetTimingAdvance(value); return *this;}


    /**
     * <p>Indicates whether the LTE object is capable of supporting NR (new radio).</p>
     */
    inline bool GetNrCapable() const{ return m_nrCapable; }

    /**
     * <p>Indicates whether the LTE object is capable of supporting NR (new radio).</p>
     */
    inline bool NrCapableHasBeenSet() const { return m_nrCapableHasBeenSet; }

    /**
     * <p>Indicates whether the LTE object is capable of supporting NR (new radio).</p>
     */
    inline void SetNrCapable(bool value) { m_nrCapableHasBeenSet = true; m_nrCapable = value; }

    /**
     * <p>Indicates whether the LTE object is capable of supporting NR (new radio).</p>
     */
    inline LteCellDetails& WithNrCapable(bool value) { SetNrCapable(value); return *this;}


    /**
     * <p>Signal power of the reference signal received, measured in decibel-milliwatts
     * (dBm).</p>
     */
    inline int GetRsrp() const{ return m_rsrp; }

    /**
     * <p>Signal power of the reference signal received, measured in decibel-milliwatts
     * (dBm).</p>
     */
    inline bool RsrpHasBeenSet() const { return m_rsrpHasBeenSet; }

    /**
     * <p>Signal power of the reference signal received, measured in decibel-milliwatts
     * (dBm).</p>
     */
    inline void SetRsrp(int value) { m_rsrpHasBeenSet = true; m_rsrp = value; }

    /**
     * <p>Signal power of the reference signal received, measured in decibel-milliwatts
     * (dBm).</p>
     */
    inline LteCellDetails& WithRsrp(int value) { SetRsrp(value); return *this;}


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
    inline LteCellDetails& WithRsrq(double value) { SetRsrq(value); return *this;}


    /**
     * <p>LTE Tracking Area Code (TAC).</p>
     */
    inline int GetTac() const{ return m_tac; }

    /**
     * <p>LTE Tracking Area Code (TAC).</p>
     */
    inline bool TacHasBeenSet() const { return m_tacHasBeenSet; }

    /**
     * <p>LTE Tracking Area Code (TAC).</p>
     */
    inline void SetTac(int value) { m_tacHasBeenSet = true; m_tac = value; }

    /**
     * <p>LTE Tracking Area Code (TAC).</p>
     */
    inline LteCellDetails& WithTac(int value) { SetTac(value); return *this;}

  private:

    int m_cellId;
    bool m_cellIdHasBeenSet = false;

    int m_mcc;
    bool m_mccHasBeenSet = false;

    int m_mnc;
    bool m_mncHasBeenSet = false;

    LteLocalId m_localId;
    bool m_localIdHasBeenSet = false;

    Aws::Vector<LteNetworkMeasurements> m_networkMeasurements;
    bool m_networkMeasurementsHasBeenSet = false;

    int m_timingAdvance;
    bool m_timingAdvanceHasBeenSet = false;

    bool m_nrCapable;
    bool m_nrCapableHasBeenSet = false;

    int m_rsrp;
    bool m_rsrpHasBeenSet = false;

    double m_rsrq;
    bool m_rsrqHasBeenSet = false;

    int m_tac;
    bool m_tacHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
