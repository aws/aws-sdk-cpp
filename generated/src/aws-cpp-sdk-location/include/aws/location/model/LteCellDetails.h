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
    AWS_LOCATIONSERVICE_API LteCellDetails() = default;
    AWS_LOCATIONSERVICE_API LteCellDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API LteCellDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The E-UTRAN Cell Identifier (ECI).</p>
     */
    inline int GetCellId() const { return m_cellId; }
    inline bool CellIdHasBeenSet() const { return m_cellIdHasBeenSet; }
    inline void SetCellId(int value) { m_cellIdHasBeenSet = true; m_cellId = value; }
    inline LteCellDetails& WithCellId(int value) { SetCellId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Mobile Country Code (MCC).</p>
     */
    inline int GetMcc() const { return m_mcc; }
    inline bool MccHasBeenSet() const { return m_mccHasBeenSet; }
    inline void SetMcc(int value) { m_mccHasBeenSet = true; m_mcc = value; }
    inline LteCellDetails& WithMcc(int value) { SetMcc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Mobile Network Code (MNC)</p>
     */
    inline int GetMnc() const { return m_mnc; }
    inline bool MncHasBeenSet() const { return m_mncHasBeenSet; }
    inline void SetMnc(int value) { m_mncHasBeenSet = true; m_mnc = value; }
    inline LteCellDetails& WithMnc(int value) { SetMnc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LTE local identification information (local ID).</p>
     */
    inline const LteLocalId& GetLocalId() const { return m_localId; }
    inline bool LocalIdHasBeenSet() const { return m_localIdHasBeenSet; }
    template<typename LocalIdT = LteLocalId>
    void SetLocalId(LocalIdT&& value) { m_localIdHasBeenSet = true; m_localId = std::forward<LocalIdT>(value); }
    template<typename LocalIdT = LteLocalId>
    LteCellDetails& WithLocalId(LocalIdT&& value) { SetLocalId(std::forward<LocalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network measurements.</p>
     */
    inline const Aws::Vector<LteNetworkMeasurements>& GetNetworkMeasurements() const { return m_networkMeasurements; }
    inline bool NetworkMeasurementsHasBeenSet() const { return m_networkMeasurementsHasBeenSet; }
    template<typename NetworkMeasurementsT = Aws::Vector<LteNetworkMeasurements>>
    void SetNetworkMeasurements(NetworkMeasurementsT&& value) { m_networkMeasurementsHasBeenSet = true; m_networkMeasurements = std::forward<NetworkMeasurementsT>(value); }
    template<typename NetworkMeasurementsT = Aws::Vector<LteNetworkMeasurements>>
    LteCellDetails& WithNetworkMeasurements(NetworkMeasurementsT&& value) { SetNetworkMeasurements(std::forward<NetworkMeasurementsT>(value)); return *this;}
    template<typename NetworkMeasurementsT = LteNetworkMeasurements>
    LteCellDetails& AddNetworkMeasurements(NetworkMeasurementsT&& value) { m_networkMeasurementsHasBeenSet = true; m_networkMeasurements.emplace_back(std::forward<NetworkMeasurementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timing Advance (TA).</p>
     */
    inline int GetTimingAdvance() const { return m_timingAdvance; }
    inline bool TimingAdvanceHasBeenSet() const { return m_timingAdvanceHasBeenSet; }
    inline void SetTimingAdvance(int value) { m_timingAdvanceHasBeenSet = true; m_timingAdvance = value; }
    inline LteCellDetails& WithTimingAdvance(int value) { SetTimingAdvance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the LTE object is capable of supporting NR (new radio).</p>
     */
    inline bool GetNrCapable() const { return m_nrCapable; }
    inline bool NrCapableHasBeenSet() const { return m_nrCapableHasBeenSet; }
    inline void SetNrCapable(bool value) { m_nrCapableHasBeenSet = true; m_nrCapable = value; }
    inline LteCellDetails& WithNrCapable(bool value) { SetNrCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal power of the reference signal received, measured in decibel-milliwatts
     * (dBm).</p>
     */
    inline int GetRsrp() const { return m_rsrp; }
    inline bool RsrpHasBeenSet() const { return m_rsrpHasBeenSet; }
    inline void SetRsrp(int value) { m_rsrpHasBeenSet = true; m_rsrp = value; }
    inline LteCellDetails& WithRsrp(int value) { SetRsrp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signal quality of the reference Signal received, measured in decibels
     * (dB).</p>
     */
    inline double GetRsrq() const { return m_rsrq; }
    inline bool RsrqHasBeenSet() const { return m_rsrqHasBeenSet; }
    inline void SetRsrq(double value) { m_rsrqHasBeenSet = true; m_rsrq = value; }
    inline LteCellDetails& WithRsrq(double value) { SetRsrq(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>LTE Tracking Area Code (TAC).</p>
     */
    inline int GetTac() const { return m_tac; }
    inline bool TacHasBeenSet() const { return m_tacHasBeenSet; }
    inline void SetTac(int value) { m_tacHasBeenSet = true; m_tac = value; }
    inline LteCellDetails& WithTac(int value) { SetTac(value); return *this;}
    ///@}
  private:

    int m_cellId{0};
    bool m_cellIdHasBeenSet = false;

    int m_mcc{0};
    bool m_mccHasBeenSet = false;

    int m_mnc{0};
    bool m_mncHasBeenSet = false;

    LteLocalId m_localId;
    bool m_localIdHasBeenSet = false;

    Aws::Vector<LteNetworkMeasurements> m_networkMeasurements;
    bool m_networkMeasurementsHasBeenSet = false;

    int m_timingAdvance{0};
    bool m_timingAdvanceHasBeenSet = false;

    bool m_nrCapable{false};
    bool m_nrCapableHasBeenSet = false;

    int m_rsrp{0};
    bool m_rsrpHasBeenSet = false;

    double m_rsrq{0.0};
    bool m_rsrqHasBeenSet = false;

    int m_tac{0};
    bool m_tacHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
