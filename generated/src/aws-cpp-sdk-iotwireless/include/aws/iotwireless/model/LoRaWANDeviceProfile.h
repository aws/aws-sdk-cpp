/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>LoRaWANDeviceProfile object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANDeviceProfile">AWS
   * API Reference</a></p>
   */
  class LoRaWANDeviceProfile
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANDeviceProfile() = default;
    AWS_IOTWIRELESS_API LoRaWANDeviceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANDeviceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SupportsClassB value.</p>
     */
    inline bool GetSupportsClassB() const { return m_supportsClassB; }
    inline bool SupportsClassBHasBeenSet() const { return m_supportsClassBHasBeenSet; }
    inline void SetSupportsClassB(bool value) { m_supportsClassBHasBeenSet = true; m_supportsClassB = value; }
    inline LoRaWANDeviceProfile& WithSupportsClassB(bool value) { SetSupportsClassB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ClassBTimeout value.</p>
     */
    inline int GetClassBTimeout() const { return m_classBTimeout; }
    inline bool ClassBTimeoutHasBeenSet() const { return m_classBTimeoutHasBeenSet; }
    inline void SetClassBTimeout(int value) { m_classBTimeoutHasBeenSet = true; m_classBTimeout = value; }
    inline LoRaWANDeviceProfile& WithClassBTimeout(int value) { SetClassBTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PingSlotPeriod value.</p>
     */
    inline int GetPingSlotPeriod() const { return m_pingSlotPeriod; }
    inline bool PingSlotPeriodHasBeenSet() const { return m_pingSlotPeriodHasBeenSet; }
    inline void SetPingSlotPeriod(int value) { m_pingSlotPeriodHasBeenSet = true; m_pingSlotPeriod = value; }
    inline LoRaWANDeviceProfile& WithPingSlotPeriod(int value) { SetPingSlotPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PingSlotDR value.</p>
     */
    inline int GetPingSlotDr() const { return m_pingSlotDr; }
    inline bool PingSlotDrHasBeenSet() const { return m_pingSlotDrHasBeenSet; }
    inline void SetPingSlotDr(int value) { m_pingSlotDrHasBeenSet = true; m_pingSlotDr = value; }
    inline LoRaWANDeviceProfile& WithPingSlotDr(int value) { SetPingSlotDr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PingSlotFreq value.</p>
     */
    inline int GetPingSlotFreq() const { return m_pingSlotFreq; }
    inline bool PingSlotFreqHasBeenSet() const { return m_pingSlotFreqHasBeenSet; }
    inline void SetPingSlotFreq(int value) { m_pingSlotFreqHasBeenSet = true; m_pingSlotFreq = value; }
    inline LoRaWANDeviceProfile& WithPingSlotFreq(int value) { SetPingSlotFreq(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SupportsClassC value.</p>
     */
    inline bool GetSupportsClassC() const { return m_supportsClassC; }
    inline bool SupportsClassCHasBeenSet() const { return m_supportsClassCHasBeenSet; }
    inline void SetSupportsClassC(bool value) { m_supportsClassCHasBeenSet = true; m_supportsClassC = value; }
    inline LoRaWANDeviceProfile& WithSupportsClassC(bool value) { SetSupportsClassC(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ClassCTimeout value.</p>
     */
    inline int GetClassCTimeout() const { return m_classCTimeout; }
    inline bool ClassCTimeoutHasBeenSet() const { return m_classCTimeoutHasBeenSet; }
    inline void SetClassCTimeout(int value) { m_classCTimeoutHasBeenSet = true; m_classCTimeout = value; }
    inline LoRaWANDeviceProfile& WithClassCTimeout(int value) { SetClassCTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC version (such as OTAA 1.1 or OTAA 1.0.3) to use with this device
     * profile.</p>
     */
    inline const Aws::String& GetMacVersion() const { return m_macVersion; }
    inline bool MacVersionHasBeenSet() const { return m_macVersionHasBeenSet; }
    template<typename MacVersionT = Aws::String>
    void SetMacVersion(MacVersionT&& value) { m_macVersionHasBeenSet = true; m_macVersion = std::forward<MacVersionT>(value); }
    template<typename MacVersionT = Aws::String>
    LoRaWANDeviceProfile& WithMacVersion(MacVersionT&& value) { SetMacVersion(std::forward<MacVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of regional parameters.</p>
     */
    inline const Aws::String& GetRegParamsRevision() const { return m_regParamsRevision; }
    inline bool RegParamsRevisionHasBeenSet() const { return m_regParamsRevisionHasBeenSet; }
    template<typename RegParamsRevisionT = Aws::String>
    void SetRegParamsRevision(RegParamsRevisionT&& value) { m_regParamsRevisionHasBeenSet = true; m_regParamsRevision = std::forward<RegParamsRevisionT>(value); }
    template<typename RegParamsRevisionT = Aws::String>
    LoRaWANDeviceProfile& WithRegParamsRevision(RegParamsRevisionT&& value) { SetRegParamsRevision(std::forward<RegParamsRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RXDelay1 value.</p>
     */
    inline int GetRxDelay1() const { return m_rxDelay1; }
    inline bool RxDelay1HasBeenSet() const { return m_rxDelay1HasBeenSet; }
    inline void SetRxDelay1(int value) { m_rxDelay1HasBeenSet = true; m_rxDelay1 = value; }
    inline LoRaWANDeviceProfile& WithRxDelay1(int value) { SetRxDelay1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RXDROffset1 value.</p>
     */
    inline int GetRxDrOffset1() const { return m_rxDrOffset1; }
    inline bool RxDrOffset1HasBeenSet() const { return m_rxDrOffset1HasBeenSet; }
    inline void SetRxDrOffset1(int value) { m_rxDrOffset1HasBeenSet = true; m_rxDrOffset1 = value; }
    inline LoRaWANDeviceProfile& WithRxDrOffset1(int value) { SetRxDrOffset1(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RXDataRate2 value.</p>
     */
    inline int GetRxDataRate2() const { return m_rxDataRate2; }
    inline bool RxDataRate2HasBeenSet() const { return m_rxDataRate2HasBeenSet; }
    inline void SetRxDataRate2(int value) { m_rxDataRate2HasBeenSet = true; m_rxDataRate2 = value; }
    inline LoRaWANDeviceProfile& WithRxDataRate2(int value) { SetRxDataRate2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RXFreq2 value.</p>
     */
    inline int GetRxFreq2() const { return m_rxFreq2; }
    inline bool RxFreq2HasBeenSet() const { return m_rxFreq2HasBeenSet; }
    inline void SetRxFreq2(int value) { m_rxFreq2HasBeenSet = true; m_rxFreq2 = value; }
    inline LoRaWANDeviceProfile& WithRxFreq2(int value) { SetRxFreq2(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of values that make up the FactoryPresetFreqs value.</p>
     */
    inline const Aws::Vector<int>& GetFactoryPresetFreqsList() const { return m_factoryPresetFreqsList; }
    inline bool FactoryPresetFreqsListHasBeenSet() const { return m_factoryPresetFreqsListHasBeenSet; }
    template<typename FactoryPresetFreqsListT = Aws::Vector<int>>
    void SetFactoryPresetFreqsList(FactoryPresetFreqsListT&& value) { m_factoryPresetFreqsListHasBeenSet = true; m_factoryPresetFreqsList = std::forward<FactoryPresetFreqsListT>(value); }
    template<typename FactoryPresetFreqsListT = Aws::Vector<int>>
    LoRaWANDeviceProfile& WithFactoryPresetFreqsList(FactoryPresetFreqsListT&& value) { SetFactoryPresetFreqsList(std::forward<FactoryPresetFreqsListT>(value)); return *this;}
    inline LoRaWANDeviceProfile& AddFactoryPresetFreqsList(int value) { m_factoryPresetFreqsListHasBeenSet = true; m_factoryPresetFreqsList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MaxEIRP value.</p>
     */
    inline int GetMaxEirp() const { return m_maxEirp; }
    inline bool MaxEirpHasBeenSet() const { return m_maxEirpHasBeenSet; }
    inline void SetMaxEirp(int value) { m_maxEirpHasBeenSet = true; m_maxEirp = value; }
    inline LoRaWANDeviceProfile& WithMaxEirp(int value) { SetMaxEirp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MaxDutyCycle value. It ranges from 0 to 15.</p>
     */
    inline int GetMaxDutyCycle() const { return m_maxDutyCycle; }
    inline bool MaxDutyCycleHasBeenSet() const { return m_maxDutyCycleHasBeenSet; }
    inline void SetMaxDutyCycle(int value) { m_maxDutyCycleHasBeenSet = true; m_maxDutyCycle = value; }
    inline LoRaWANDeviceProfile& WithMaxDutyCycle(int value) { SetMaxDutyCycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline const Aws::String& GetRfRegion() const { return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    template<typename RfRegionT = Aws::String>
    void SetRfRegion(RfRegionT&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::forward<RfRegionT>(value); }
    template<typename RfRegionT = Aws::String>
    LoRaWANDeviceProfile& WithRfRegion(RfRegionT&& value) { SetRfRegion(std::forward<RfRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SupportsJoin value.</p>
     */
    inline bool GetSupportsJoin() const { return m_supportsJoin; }
    inline bool SupportsJoinHasBeenSet() const { return m_supportsJoinHasBeenSet; }
    inline void SetSupportsJoin(bool value) { m_supportsJoinHasBeenSet = true; m_supportsJoin = value; }
    inline LoRaWANDeviceProfile& WithSupportsJoin(bool value) { SetSupportsJoin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Supports32BitFCnt value.</p>
     */
    inline bool GetSupports32BitFCnt() const { return m_supports32BitFCnt; }
    inline bool Supports32BitFCntHasBeenSet() const { return m_supports32BitFCntHasBeenSet; }
    inline void SetSupports32BitFCnt(bool value) { m_supports32BitFCntHasBeenSet = true; m_supports32BitFCnt = value; }
    inline LoRaWANDeviceProfile& WithSupports32BitFCnt(bool value) { SetSupports32BitFCnt(value); return *this;}
    ///@}
  private:

    bool m_supportsClassB{false};
    bool m_supportsClassBHasBeenSet = false;

    int m_classBTimeout{0};
    bool m_classBTimeoutHasBeenSet = false;

    int m_pingSlotPeriod{0};
    bool m_pingSlotPeriodHasBeenSet = false;

    int m_pingSlotDr{0};
    bool m_pingSlotDrHasBeenSet = false;

    int m_pingSlotFreq{0};
    bool m_pingSlotFreqHasBeenSet = false;

    bool m_supportsClassC{false};
    bool m_supportsClassCHasBeenSet = false;

    int m_classCTimeout{0};
    bool m_classCTimeoutHasBeenSet = false;

    Aws::String m_macVersion;
    bool m_macVersionHasBeenSet = false;

    Aws::String m_regParamsRevision;
    bool m_regParamsRevisionHasBeenSet = false;

    int m_rxDelay1{0};
    bool m_rxDelay1HasBeenSet = false;

    int m_rxDrOffset1{0};
    bool m_rxDrOffset1HasBeenSet = false;

    int m_rxDataRate2{0};
    bool m_rxDataRate2HasBeenSet = false;

    int m_rxFreq2{0};
    bool m_rxFreq2HasBeenSet = false;

    Aws::Vector<int> m_factoryPresetFreqsList;
    bool m_factoryPresetFreqsListHasBeenSet = false;

    int m_maxEirp{0};
    bool m_maxEirpHasBeenSet = false;

    int m_maxDutyCycle{0};
    bool m_maxDutyCycleHasBeenSet = false;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    bool m_supportsJoin{false};
    bool m_supportsJoinHasBeenSet = false;

    bool m_supports32BitFCnt{false};
    bool m_supports32BitFCntHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
